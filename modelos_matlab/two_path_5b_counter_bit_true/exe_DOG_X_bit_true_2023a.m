clear all;
ft = 5e3; 
lsim = 2^13;
fs = 3.072e6;
Ts = 1/fs;
tsim=Ts*lsim;
BW = 20e3;
fbin = fs/lsim;
bint = floor(lsim*ft/fs)+1;
ft = (bint-1)*fbin;
binbw = BW/fbin;
OSR = fs/(2*BW);
Nbvco=5 % Number of bits VCO counter
Nvco=2^Nbvco;
NP=16;  % Number of phases
Nbg1=2  %Number of bits of gain adjustment
Ng1=2^Nbg1; 
g1_ideal=Ng1;
f2=fs*8 % Calculated by iteration to meet Nbvco_minimum with a feasible value
f0=f2*2^Nbvco/8+fs/2  % 4 gives feasible VCO and sufficient SQNR
DR_total_dB=108;
Nbvco_mnimum=ceil((DR_total_dB-30*log10(f2/BW/2)+5.15-3-1.76)/6)
Nbsd_minimum=ceil((DR_total_dB-50*log10(fs/BW/2)+12.7-1.76)/6)
Nbsv1=Nbvco+4  % Calculated by simulation to avoid saturation of 2nd order NS
Nbext=ceil(log10((f2/fs)/log10(2)))+0 % Number of bits of DCO ALU
Nbsv2=Nbsv1+Nbext
Nsv2=2^Nbsv2;
Nbout=Nbsv1;
if (14-Nbsv1)>0, fti=zeros(1,14-Nbsv1); else fti=[]; end;
fvco=f0/NP
Kvco=f0;
fslow=fs/2;
Tslow=1/fslow;
Nbslow=Nbsv1;
Nslow=2^Nbslow;
alpha_threshold_hi=19;  % sets HSNR -> HDR threshold to -35dBfs
alpha_threshold_lo=15;
Trelax=0.5e-3; % Time to set back alpha from HDR to HSNR
Nrelax=floor(Trelax/Tslow)
set_alpha=1; %possible values 0=HSNR, 1=HDR, 2=algorithm chooses
T2=1/f2;
Vfs=1;
Vdc=Vfs;
g1=g1_ideal*1;
Input_signal_dB=-18
;   % Input signal
lvl = Vfs*10^(Input_signal_dB/20);
pnoi=10^(-(60)/10)*(Vfs^2/2);

[fa fb]=butter(4,2*pi*40000,'s');
%%
sim('dog_x_bit_true_2023a.slx');
%
y=y(lsim/2+2:max(length(y)));
f=(1/Ts)*(1:length(y)/2)/length(y);
alpha=alpha(lsim/2+2:max(length(y)));
y1=y1(lsim/2+2:max(length(y1)));
ey=esph(y); 
ey1=esph(y1);


figure(1)
clf
semilogx(f,20*log10(abs(ey)));
hold
semilogx(f,20*log10(abs(ey1)),'g');
%semilogx(f,20*log10(abs(ey2)),'r');
grid

sig=ey(bint-1:bint+1);
ey(bint-1:bint+1)=[0 0 0];
noi=ey(3:binbw);
sndr_ey=10*log10((sig'*sig)/(noi'*noi))

sig=ey1(bint-1:bint+1);
ey1(bint-1:bint+1)=[0 0 0];
noi=ey1(3:binbw);
sndr_ey1=10*log10((sig'*sig)/(noi'*noi))

figure(2)
clf
plot(y);
grid
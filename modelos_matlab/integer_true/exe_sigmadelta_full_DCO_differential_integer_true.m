clear all;

%%
%
% Define constants such as simulation time, input tone freq,
% Input tone amplitude, BW of interest for the fourier transform etc
%
%%

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
Input_signal_dB=-12.1;
Input_signal = 10^(Input_signal_dB/20);

%%
% Define bit size of everything of the low dynamic range way.
% I guess we dont need more for the other way as they will have the same
% circuit after the multiplexer
%%

Nbvco=4 % Number of bits VCO counter
Nvco=2^Nbvco;
NP=Nvco;
Nbext=6; %Number of bits of extra counter
NbC1=Nbvco+Nbext % Number of bits of first counter C1
NC1=2^NbC1;
NbDiff1 = NbC1; %number of bits of differential canceling diff output
NbDiff2 = NbC1; %number of bits of feedback loop difference

Nbsd=Nbvco+Nbext % Number of bits of SD quantizer
Nsd=2^Nbsd;
Nbdcoext=3; % Number of bits of DCO ALU
Nbdco=Nbsd+Nbdcoext % Number of bits DCO counter
Ndco=2^Nbdco;

n_shift = Nbdcoext; % eliminate extra bits
nbfirstdiff = NbC1; %number of bits of first difference output

%% Extra parameters

f0=fs*NC1/32
fvco=f0/NP
Kvco=f0*1

f02 = f0
fvco2 = fvco
Kvco2 = Kvco/4


f2=fs*2^(Nbdcoext)
T2=1/f2;

%% Simulate the system

sim('sigmadelta_full_DCO_Sampled_differential_integer_true.slx');

%%

%% Display fft of the results and compute SNR

u0=double(u0(1:lsim));
f=(1/Ts)*(1:length(u0)/2)/length(u0);
eu0=esph(u0-mean(u0));

u1=double(u1(1:lsim));
eu1=esph(u1-mean(u1));

figure(1)
clf
semilogx(f,20*log10(abs(eu0)),'r');
hold on;
semilogx(f,20*log10(abs(eu1)),'b');
grid

sig=eu0(bint-1:bint+1);
eu0(bint-1:bint+1)=[0 0 0];
noi=eu0(3:binbw);
sndr_eu0=10*log10((sig'*sig)/(noi'*noi))

sig1=eu1(bint-1:bint+1);
eu1(bint-1:bint+1)=[0 0 0];
noi1=eu1(3:binbw);
sndr_eu1=10*log10((sig1'*sig1)/(noi1'*noi1))


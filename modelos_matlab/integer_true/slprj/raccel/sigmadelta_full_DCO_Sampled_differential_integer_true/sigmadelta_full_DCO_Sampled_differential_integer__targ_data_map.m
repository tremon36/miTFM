    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 147;
            section.data(147)  = dumData; %prealloc

                    ;% rtP.Input_signal
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Kvco
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.f0
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.f02
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ft
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.TmpLatchAtSampleandHoldInport1_InitialCondition
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Integrator_IC
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Integrator_UpperSat
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Integrator_LowerSat
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Relay_OnVal
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Relay_OffVal
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.Relay_YOn
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.Relay_YOff
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.Gain2_Gain
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.Relay_OnVal_ol55c5brbv
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.Relay_OffVal_ftfm5ezvr4
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Relay_YOn_pnewmcn0hv
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Relay_YOff_g0zkkowcb2
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Integrator_IC_eniw2bszpi
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Integrator_UpperSat_lncwbrrk4q
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Integrator_LowerSat_pniuvpe0xc
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Relay_OnVal_nte1ombnoa
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Relay_OffVal_bxv3ndvn3n
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Relay_YOn_aydwhahfkz
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Relay_YOff_opbykzzggq
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Gain2_Gain_nzobe5hggj
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.Relay_OnVal_lcdbtjujpq
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.Relay_OffVal_iuo5h2oaoh
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.Relay_YOn_jauj4ocrsp
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.Relay_YOff_ddodkq4t55
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.u_Bias
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.u_Phase
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.Gain1_Gain
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.Integrator_IC_bspyxfravm
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.Integrator_UpperSat_obehvxea0x
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.Integrator_LowerSat_hrrlfsxyh1
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.Relay_OnVal_echuyyywen
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.Relay_OffVal_gfiee0muju
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.Relay_YOn_nfg3bxhtxu
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.Relay_YOff_av4xtkhozb
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.Gain3_Gain
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.Integrator_IC_hsjhrinlvg
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.Integrator_UpperSat_hnpjk31aqn
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.Integrator_LowerSat_p5sqmpsfkb
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.Relay_OnVal_brwixqgp2p
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.Relay_OffVal_lzmtedixmm
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.Relay_YOn_lsb53mcfzj
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.Relay_YOff_jrvptib512
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.Gain4_Gain
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.Gain1_Gain_pfmsb2tnwt
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.Integrator_IC_pda235dj3o
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.Integrator_UpperSat_onycsesq00
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.Integrator_LowerSat_lt0o50nwow
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.Relay_OnVal_grhow3snpm
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.Relay_OffVal_in3mllvr4x
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP.Relay_YOn_g5oxmo5vtx
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.Relay_YOff_n2ya32gh1l
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.Gain3_Gain_orrkrx44hb
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.Integrator_IC_gc1nxps5tg
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.Integrator_UpperSat_jxdbo0dk32
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.Integrator_LowerSat_bx3cuhup2x
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.Relay_OnVal_lb5krscakn
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.Relay_OffVal_gk3kuiyqyk
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP.Relay_YOn_bhfsrh1cck
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.Relay_YOff_apk0hrwvzz
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.Gain4_Gain_f5rnnj140f
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.Memory_InitialCondition
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.Memory_InitialCondition_avz31d4xse
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg4
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtP.Integrator_IC_etcp0a3ra3
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtP.Integrator_UpperSat_gl2ovnasb3
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtP.Integrator_LowerSat_pe23vcqzjt
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtP.Relay_OnVal_esem52uuki
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtP.Relay_OffVal_ohgverckfm
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtP.Relay_YOn_nymhqtqnhc
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtP.Relay_YOff_eihi5124wd
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtP.Gain2_Gain_ppymcmeggh
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtP.Relay_OnVal_mmmoteegjq
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtP.Relay_OffVal_af0ailhjv4
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtP.Relay_YOn_dx350cfzhz
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtP.Relay_YOff_klaoj23stk
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtP.TmpLatchAtSampleandHoldInport1_InitialCondition_jxkxj0lwzg4l
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtP.Integrator_IC_lr20tuv0eg
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

                    ;% rtP.Integrator_UpperSat_fqtyz21jgz
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 84;

                    ;% rtP.Integrator_LowerSat_jssfn1hxzj
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 85;

                    ;% rtP.Relay_OnVal_cbjqjxb4tm
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 86;

                    ;% rtP.Relay_OffVal_am0oqh4ks4
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 87;

                    ;% rtP.Relay_YOn_bc42rfdajg
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 88;

                    ;% rtP.Relay_YOff_kj0k21tk4c
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 89;

                    ;% rtP.Gain2_Gain_mxhrsicqv0
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 90;

                    ;% rtP.Relay_OnVal_azgq1fxwjz
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 91;

                    ;% rtP.Relay_OffVal_m3wov13fvy
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 92;

                    ;% rtP.Relay_YOn_myrz2fo54j
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 93;

                    ;% rtP.Relay_YOff_m2vdsz2cep
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 94;

                    ;% rtP.u_Bias_fcp1lx20vd
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 95;

                    ;% rtP.u_Phase_aalontdtu0
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 96;

                    ;% rtP.Saturation_LowerSat
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 97;

                    ;% rtP.Saturation1_LowerSat
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 98;

                    ;% rtP.Gain1_Gain_ei4ctr1ce4
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 99;

                    ;% rtP.Integrator_IC_nnkei5byn3
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 100;

                    ;% rtP.Integrator_UpperSat_nikd5nq4qi
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 101;

                    ;% rtP.Integrator_LowerSat_ml0gsyvrs4
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 102;

                    ;% rtP.Relay_OnVal_npnpiqpph3
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 103;

                    ;% rtP.Relay_OffVal_esykk2txpm
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 104;

                    ;% rtP.Relay_YOn_ifa2pl2lcg
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 105;

                    ;% rtP.Relay_YOff_fpmi0fcndp
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 106;

                    ;% rtP.Gain3_Gain_erykj2ffdi
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 107;

                    ;% rtP.Integrator_IC_i2uai10hwr
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 108;

                    ;% rtP.Integrator_UpperSat_dh0t25pzh2
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 109;

                    ;% rtP.Integrator_LowerSat_neq0i10rth
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 110;

                    ;% rtP.Relay_OnVal_h1i2o5kwfg
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 111;

                    ;% rtP.Relay_OffVal_ps0rhgpgvd
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 112;

                    ;% rtP.Relay_YOn_kfriyo5rl4
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 113;

                    ;% rtP.Relay_YOff_f2g3xhsgrz
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 114;

                    ;% rtP.Gain4_Gain_m5dpyjac2r
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 115;

                    ;% rtP.Gain1_Gain_jbm5vg2jfe
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 116;

                    ;% rtP.Integrator_IC_hz0cltzclb
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 117;

                    ;% rtP.Integrator_UpperSat_gcvzmvowsi
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 118;

                    ;% rtP.Integrator_LowerSat_o2mm033ot2
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 119;

                    ;% rtP.Relay_OnVal_pqgvke2nha
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 120;

                    ;% rtP.Relay_OffVal_k1c5j1def3
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 121;

                    ;% rtP.Relay_YOn_psdpbhlnbk
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 122;

                    ;% rtP.Relay_YOff_j3yuyzhlz1
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 123;

                    ;% rtP.Gain3_Gain_c2aoyjuxem
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 124;

                    ;% rtP.Integrator_IC_g2lwwx2esc
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 125;

                    ;% rtP.Integrator_UpperSat_ipwxjx3zwz
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 126;

                    ;% rtP.Integrator_LowerSat_isd3y4kico
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 127;

                    ;% rtP.Relay_OnVal_fb2ckrosa1
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 128;

                    ;% rtP.Relay_OffVal_mdcttm5av2
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 129;

                    ;% rtP.Relay_YOn_pqm5zswnez
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 130;

                    ;% rtP.Relay_YOff_gmithmyikx
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 131;

                    ;% rtP.Gain4_Gain_fte5si5w01
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 132;

                    ;% rtP.Memory_InitialCondition_lisisb1puv
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 133;

                    ;% rtP.Memory_InitialCondition_eopbug5u3g
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 134;

                    ;% rtP.Constant1_Value
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 135;

                    ;% rtP.Constant2_Value
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 136;

                    ;% rtP.Constant1_Value_k4ze1eyqfh
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 137;

                    ;% rtP.Constant3_Value
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 138;

                    ;% rtP.Constant1_Value_ccfqh3zjfw
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 139;

                    ;% rtP.Constant3_Value_kteichhl4y
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 140;

                    ;% rtP.Constant13_Value
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 141;

                    ;% rtP.Constant14_Value
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 142;

                    ;% rtP.Constant1_Value_p4onze5frx
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 143;

                    ;% rtP.Constant3_Value_cc01naktl1
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 144;

                    ;% rtP.Constant1_Value_kim44fji3q
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 145;

                    ;% rtP.Constant3_Value_fkqot0dgjq
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 146;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtP.Delay2_InitialCondition
                    section.data(1).logicalSrcIdx = 147;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Delay2_InitialCondition_lauqgan35g
                    section.data(2).logicalSrcIdx = 148;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Gain3_Gain_hzvizfc2ch
                    section.data(3).logicalSrcIdx = 149;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Gain9_Gain
                    section.data(4).logicalSrcIdx = 150;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Delay1_InitialCondition
                    section.data(5).logicalSrcIdx = 151;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Delay2_InitialCondition_mopckj2nxe
                    section.data(6).logicalSrcIdx = 152;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Delay4_InitialCondition
                    section.data(7).logicalSrcIdx = 153;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Delay7_InitialCondition
                    section.data(8).logicalSrcIdx = 154;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Gain_Gain
                    section.data(9).logicalSrcIdx = 155;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.kbpnhsyifh._Y0
                    section.data(1).logicalSrcIdx = 156;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.i0ed20d54s._Y0
                    section.data(1).logicalSrcIdx = 157;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.golzcmoqxl._Y0
                    section.data(1).logicalSrcIdx = 158;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.kidn0dkyh4l._Y0
                    section.data(1).logicalSrcIdx = 159;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 60;
            section.data(60)  = dumData; %prealloc

                    ;% rtB.pkmkh1hvh4
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.jqsqycuvjp
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.pgju2goynn
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.exjizz2jo2
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.eozfah35pa
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.kb0z4ghrx3
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.mhhu2tnpxn
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.nfp4y3c4oe
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.ngnestrbjy
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.iet33u53t4
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.a5n5apq2jk
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.bqejnevaiw
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.ovqw01sam1
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.h5zx0u2j5z
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.dkzpuru5r2
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.nrcbeojypl
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.hqjmlihzlz
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.a5cffbgb5o
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.gjvk1j10xe
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.i4on5qbs3p
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.lt1weizey2
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.ptpa5d2e1n
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtB.g3gmay1qvg
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtB.c5mwrco5fr
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtB.kaat2vxihs
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtB.am0zkkx2be
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtB.edubwe2l1d
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtB.gjlh0fklml
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtB.of53ol5y2e
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtB.ncwojfl1ho
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtB.kgie0svi5e
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtB.l5d5sv15ob
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtB.ezrijysvzd
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtB.edbyb0d21l
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtB.i5qnwd1xft
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtB.b30hfpmu5e
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtB.kgrmgzgmqx
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtB.oomwbzmknh
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtB.fiq2ipptdn
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtB.n4mnwvotbr
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtB.b52ifyiclb
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtB.j2nbmk1xp1
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtB.my1dkjenar
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtB.htd4lm0qfa
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtB.g2w43x1rgu
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtB.ajmmmek3y4
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtB.eojdcf25ok
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtB.dthtcjo5c4
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtB.jqyfeja5w1
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtB.dvfodclg5x
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtB.c4u12eyofp
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtB.ndvzivqyue
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtB.lipuj3gabm
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtB.oiqotbk4tx
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtB.gsehs3hnnb
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtB.ktbanqbefe
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtB.ciqxajlela
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtB.pktrsmb4dq
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtB.gup24my2t1
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtB.c3khxutonh
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% rtB.cr5ifxx30x
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.dsapdbxvv5
                    section.data(2).logicalSrcIdx = 61;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.byz4wcpb1i
                    section.data(3).logicalSrcIdx = 62;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.bpvvilv5x0
                    section.data(4).logicalSrcIdx = 63;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.ixxqou0jmh
                    section.data(5).logicalSrcIdx = 64;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.prhktwurxy
                    section.data(6).logicalSrcIdx = 65;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.jfyxg2pora
                    section.data(7).logicalSrcIdx = 66;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.mtymqxdskr
                    section.data(8).logicalSrcIdx = 67;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.jaww0rmrgo
                    section.data(9).logicalSrcIdx = 68;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.a20x4aezvv
                    section.data(10).logicalSrcIdx = 69;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.jalqvrah1a
                    section.data(11).logicalSrcIdx = 70;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.dnrmm412kx
                    section.data(12).logicalSrcIdx = 71;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.bq3qtxogui
                    section.data(13).logicalSrcIdx = 72;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.ik5lz4vfeb
                    section.data(14).logicalSrcIdx = 73;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.agg0qa1equ
                    section.data(15).logicalSrcIdx = 74;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.frq15es1fg
                    section.data(16).logicalSrcIdx = 75;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.blyxrzh5wh
                    section.data(17).logicalSrcIdx = 76;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.ndpim4uvxw
                    section.data(18).logicalSrcIdx = 77;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.j3tzm341lz
                    section.data(19).logicalSrcIdx = 78;
                    section.data(19).dtTransOffset = 18;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.gxiqhdac4z
                    section.data(1).logicalSrcIdx = 79;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.l0hrwifmyk
                    section.data(2).logicalSrcIdx = 80;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.kbpnhsyifh.bhcircixxg
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.i0ed20d54s.bhcircixxg
                    section.data(1).logicalSrcIdx = 82;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.golzcmoqxl.bhcircixxg
                    section.data(1).logicalSrcIdx = 83;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.kidn0dkyh4l.bhcircixxg
                    section.data(1).logicalSrcIdx = 84;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 9;
        sectIdxOffset = 7;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.orglme5at4
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.orglme5at4a
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.lin3vz4uln
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.eey4qgobmt
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.orglme5at4a5
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.orglme5at4a50
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.f1bjvxwccz
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.kq2ezp4qmo
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtDW.pnvalib2sw.LoggedData
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kdozo3dhso.LoggedData
                    section.data(2).logicalSrcIdx = 9;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.norkashkku.LoggedData
                    section.data(3).logicalSrcIdx = 10;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.lucirm1vvf.LoggedData
                    section.data(4).logicalSrcIdx = 11;
                    section.data(4).dtTransOffset = 5;

                    ;% rtDW.fycjnke3eg.AQHandles
                    section.data(5).logicalSrcIdx = 12;
                    section.data(5).dtTransOffset = 8;

                    ;% rtDW.cpflfsupmr.AQHandles
                    section.data(6).logicalSrcIdx = 13;
                    section.data(6).dtTransOffset = 9;

                    ;% rtDW.phdb1i05o2.LoggedData
                    section.data(7).logicalSrcIdx = 14;
                    section.data(7).dtTransOffset = 10;

                    ;% rtDW.at1ovhvgyg.LoggedData
                    section.data(8).logicalSrcIdx = 15;
                    section.data(8).dtTransOffset = 12;

                    ;% rtDW.lyv2enlshq.LoggedData
                    section.data(9).logicalSrcIdx = 16;
                    section.data(9).dtTransOffset = 14;

                    ;% rtDW.khbmu2dhvf.LoggedData
                    section.data(10).logicalSrcIdx = 17;
                    section.data(10).dtTransOffset = 15;

                    ;% rtDW.lk4frp5ghi.LoggedData
                    section.data(11).logicalSrcIdx = 18;
                    section.data(11).dtTransOffset = 19;

                    ;% rtDW.j1xg5jnqc1.AQHandles
                    section.data(12).logicalSrcIdx = 19;
                    section.data(12).dtTransOffset = 21;

                    ;% rtDW.j4sex4zqd0.AQHandles
                    section.data(13).logicalSrcIdx = 20;
                    section.data(13).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtDW.b1gi51bpxi
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lr0q20caf3
                    section.data(2).logicalSrcIdx = 22;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ek4idbgwye
                    section.data(3).logicalSrcIdx = 23;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.izbyxg2fjr
                    section.data(4).logicalSrcIdx = 24;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jkev2514j4
                    section.data(5).logicalSrcIdx = 25;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.hoalihqmja
                    section.data(6).logicalSrcIdx = 26;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.lmslnypsi2
                    section.data(7).logicalSrcIdx = 27;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.j4r1opdjxl
                    section.data(8).logicalSrcIdx = 28;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.bby3eiosum
                    section.data(9).logicalSrcIdx = 29;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.lt0fuutcxz
                    section.data(10).logicalSrcIdx = 30;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.lwk2b2noep
                    section.data(11).logicalSrcIdx = 31;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.jbfslnilmq
                    section.data(12).logicalSrcIdx = 32;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.ncgd1bpb1a
                    section.data(13).logicalSrcIdx = 33;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.pojepyzp5u
                    section.data(14).logicalSrcIdx = 34;
                    section.data(14).dtTransOffset = 13;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.fh20zoj1sh
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.davvnzy1kr
                    section.data(2).logicalSrcIdx = 36;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.g4cefol0br
                    section.data(3).logicalSrcIdx = 37;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.beitdmk3fp
                    section.data(4).logicalSrcIdx = 38;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.kdkihaa34w
                    section.data(5).logicalSrcIdx = 39;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mmsvkaoufm
                    section.data(6).logicalSrcIdx = 40;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtDW.ao3iawiulm
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cu3anggihn
                    section.data(2).logicalSrcIdx = 42;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.n5hvozry30
                    section.data(3).logicalSrcIdx = 43;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.f2nlzigvwd
                    section.data(4).logicalSrcIdx = 44;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ivngkrqgqj
                    section.data(5).logicalSrcIdx = 45;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.l54o4kd4xu
                    section.data(6).logicalSrcIdx = 46;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dninqzohu0
                    section.data(7).logicalSrcIdx = 47;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.dz2cewt0jx
                    section.data(8).logicalSrcIdx = 48;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.bfawx2cz2m
                    section.data(9).logicalSrcIdx = 49;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.cfuzk4cfkk
                    section.data(10).logicalSrcIdx = 50;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.oodfsknmtu
                    section.data(11).logicalSrcIdx = 51;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.erhbudu55l
                    section.data(12).logicalSrcIdx = 52;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.po5qjpsnms
                    section.data(13).logicalSrcIdx = 53;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.pdpodlo3p2
                    section.data(14).logicalSrcIdx = 54;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.pqnt2h0ig5
                    section.data(15).logicalSrcIdx = 55;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.oh1w0ntj3m
                    section.data(16).logicalSrcIdx = 56;
                    section.data(16).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.kbpnhsyifh.n2c5rrqay1
                    section.data(1).logicalSrcIdx = 57;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.i0ed20d54s.n2c5rrqay1
                    section.data(1).logicalSrcIdx = 58;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.golzcmoqxl.n2c5rrqay1
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.kidn0dkyh4l.n2c5rrqay1
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1075026732;
    targMap.checksum1 = 936178630;
    targMap.checksum2 = 4199121753;
    targMap.checksum3 = 597266722;


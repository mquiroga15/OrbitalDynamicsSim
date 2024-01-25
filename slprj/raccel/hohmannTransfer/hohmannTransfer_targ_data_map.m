    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 13;
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
            section.nData     = 124;
            section.data(124)  = dumData; %prealloc

                    ;% rtP.burnDuration1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.burnDuration2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.deltav1Direction
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.deltav2Direction
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 5;

                    ;% rtP.mDot
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% rtP.t1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

                    ;% rtP.t2
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% rtP.CompareToConstant_const
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% rtP.CompareToConstant_const_jr0taz5ops
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 12;

                    ;% rtP.AttitudeProfile_primaryAlignment
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% rtP.AttitudeProfile_secondaryAlignment
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 16;

                    ;% rtP.AttitudeProfile_secondaryConstraint
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 19;

                    ;% rtP.Gain2_Gain
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 22;

                    ;% rtP.Gain_Gain
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 23;

                    ;% rtP.Gain1_Gain
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 24;

                    ;% rtP.Gain_Gain_eejksydamw
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 25;

                    ;% rtP.Gain2_Gain_adqwyb1fpl
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 26;

                    ;% rtP.Gain1_Gain_cpmrppil5o
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 27;

                    ;% rtP.Gain_Gain_epxgvv3uaq
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 28;

                    ;% rtP.Gain1_Gain_np3xblzbry
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 29;

                    ;% rtP.Gain2_Gain_aoe1z0xtjy
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 30;

                    ;% rtP.Bias_Bias
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 31;

                    ;% rtP.Bias1_Bias
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 32;

                    ;% rtP.Gain2_Gain_ppedexqizl
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 33;

                    ;% rtP.Gain_Gain_lncck3b1ht
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 34;

                    ;% rtP.Gain1_Gain_fnkgiav0mq
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 35;

                    ;% rtP.Gain_Gain_o5kojjvc1w
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 36;

                    ;% rtP.Gain2_Gain_n3y32qpatl
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 37;

                    ;% rtP.Gain1_Gain_mr00sswlmu
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 38;

                    ;% rtP.Gain_Gain_on1psqnxfu
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 39;

                    ;% rtP.Gain1_Gain_lessdreht2
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 40;

                    ;% rtP.Gain2_Gain_nwpd5c3tm4
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 41;

                    ;% rtP.Bias_Bias_jsr34fusav
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 42;

                    ;% rtP.Bias1_Bias_lnezxfgswe
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 43;

                    ;% rtP.Gain2_Gain_iunbs3mto0
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 44;

                    ;% rtP.Gain_Gain_cxjdjqmywq
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 45;

                    ;% rtP.Gain1_Gain_kgcnisrm24
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 46;

                    ;% rtP.Gain_Gain_hrj3uk023h
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 47;

                    ;% rtP.Gain2_Gain_atw2ondk21
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 48;

                    ;% rtP.Gain1_Gain_ne3jwokduq
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 49;

                    ;% rtP.Gain_Gain_ja3rm2ptei
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 50;

                    ;% rtP.Gain1_Gain_af1zmxkcba
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 51;

                    ;% rtP.Gain2_Gain_j3vsc1nqxy
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 52;

                    ;% rtP.Bias_Bias_hhpw4p034x
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 53;

                    ;% rtP.Bias1_Bias_fa10flfbfk
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 54;

                    ;% rtP.Gain_Gain_aaczryqecx
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 55;

                    ;% rtP.Innerloopcontroller_Gain
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 56;

                    ;% rtP.Constant_Value
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 57;

                    ;% rtP.Constant_Value_cjycj0fc0i
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 58;

                    ;% rtP.Constant_Value_librqjr13m
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 59;

                    ;% rtP.Bias_Bias_icxn3xlw3j
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 60;

                    ;% rtP.Bias1_Bias_l44fxvj4xh
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 61;

                    ;% rtP.Constant_Value_j41k2nqkzj
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 62;

                    ;% rtP.Constant_Value_kydselcoow
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 63;

                    ;% rtP.Constant_Value_gu4cnegeyw
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 64;

                    ;% rtP.Constant_Value_bmyicrezz3
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 65;

                    ;% rtP.Constant_Value_blehlmxsbk
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 66;

                    ;% rtP.Gain_Gain_kownsvaqu5
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 67;

                    ;% rtP.Constant_Value_ixf35js4xe
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 68;

                    ;% rtP.Constant1_Value
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 69;

                    ;% rtP.Gain2_Gain_ehq1npccz3
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 70;

                    ;% rtP.Gain_Gain_byt1irk5mi
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 71;

                    ;% rtP.Constant_Value_iujxws1jti
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 72;

                    ;% rtP.Constant1_Value_j3skpjyilw
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 73;

                    ;% rtP.Gain2_Gain_oxh0cjyqdd
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 74;

                    ;% rtP.Constant_Value_jbtr4ekwkp
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 75;

                    ;% rtP.Constant_Value_npk3m1qn01
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 76;

                    ;% rtP.Constant_Value_hqi1uun2ik
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 77;

                    ;% rtP.Constant3_Value
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 78;

                    ;% rtP.SpacecraftDynamics_startDate
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 79;

                    ;% rtP.SpacecraftDynamics_mass
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 80;

                    ;% rtP.SpacecraftDynamics_emptyMass
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 81;

                    ;% rtP.SpacecraftDynamics_fullMass
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 82;

                    ;% rtP.SpacecraftDynamics_inertia
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 83;

                    ;% rtP.SpacecraftDynamics_emptyInertia
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 92;

                    ;% rtP.SpacecraftDynamics_fullInertia
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 101;

                    ;% rtP.SpacecraftDynamics_semiMajorAxis
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 110;

                    ;% rtP.SpacecraftDynamics_eccentricity
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 111;

                    ;% rtP.SpacecraftDynamics_inclination
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 112;

                    ;% rtP.SpacecraftDynamics_raan
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 113;

                    ;% rtP.SpacecraftDynamics_argPeriapsis
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 114;

                    ;% rtP.SpacecraftDynamics_trueAnomaly
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 115;

                    ;% rtP.SpacecraftDynamics_trueLon
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 116;

                    ;% rtP.SpacecraftDynamics_argLat
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 117;

                    ;% rtP.SpacecraftDynamics_lonPeriapsis
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 118;

                    ;% rtP.SpacecraftDynamics_inertialPosition
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 119;

                    ;% rtP.SpacecraftDynamics_inertialVelocity
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 122;

                    ;% rtP.SpacecraftDynamics_fixedPosition
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 125;

                    ;% rtP.SpacecraftDynamics_fixedVelocity
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 128;

                    ;% rtP.SpacecraftDynamics_attitude
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 131;

                    ;% rtP.SpacecraftDynamics_attitudeRate
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 135;

                    ;% rtP.SpacecraftDynamics_customR
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 138;

                    ;% rtP.SpacecraftDynamics_customF
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 139;

                    ;% rtP.SpacecraftDynamics_customMu
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 140;

                    ;% rtP.SpacecraftDynamics_customJ2
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 141;

                    ;% rtP.SpacecraftDynamics_customOmega
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 142;

                    ;% rtP.SpacecraftDynamics_cbRA
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 143;

                    ;% rtP.SpacecraftDynamics_cbRARate
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 144;

                    ;% rtP.SpacecraftDynamics_cbDec
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 145;

                    ;% rtP.SpacecraftDynamics_cbDecRate
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 146;

                    ;% rtP.SpacecraftDynamics_cbRotAngle
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 147;

                    ;% rtP.SpacecraftDynamics_cbRotRate
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 148;

                    ;% rtP.SpacecraftDynamics_F107ExtrapValue
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 149;

                    ;% rtP.SpacecraftDynamics_MagneticIndexExtrapValue
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 150;

                    ;% rtP.SpacecraftDynamics_fluxFlags
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 151;

                    ;% rtP.SpacecraftDynamics_dragCoeff
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 174;

                    ;% rtP.SpacecraftDynamics_dragArea
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 175;

                    ;% rtP.SpacecraftDynamics_customThirdBodyMu
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 176;

                    ;% rtP.SpacecraftDynamics_reflectivityCoeff
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 177;

                    ;% rtP.SpacecraftDynamics_srpArea
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 178;

                    ;% rtP.SpacecraftDynamics_fluxPressure
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 179;

                    ;% rtP.Pointingcommand_Y0
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 180;

                    ;% rtP.Pointingcommand_YFinal
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 181;

                    ;% rtP.Pointingcommand_Y0_lnsmjwn4r0
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 182;

                    ;% rtP.Pointingcommand_YFinal_j0uizzisgh
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 183;

                    ;% rtP.Offtime_Y0
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 184;

                    ;% rtP.Offtime_YFinal
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 185;

                    ;% rtP.Ontime_Y0
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 186;

                    ;% rtP.Ontime_YFinal
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 187;

                    ;% rtP.Ontime_Y0_of0gxorjhk
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 188;

                    ;% rtP.Ontime_YFinal_aqks3lcw4k
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 189;

                    ;% rtP.Offtime_Y0_a00myhhy4g
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 190;

                    ;% rtP.Offtime_YFinal_phvdvlycqf
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 191;

                    ;% rtP.Exhaustdirection_Value
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 192;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ffvtff1vg1.Constant_Value
                    section.data(1).logicalSrcIdx = 124;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ahwcaguhri.Constant_Value
                    section.data(1).logicalSrcIdx = 125;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.dgo50cfy4t.Constant_Value
                    section.data(1).logicalSrcIdx = 126;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.bsvvloijiw.Constant_Value
                    section.data(1).logicalSrcIdx = 127;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.lmmxizmujp.Constant_Value
                    section.data(1).logicalSrcIdx = 128;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ohrauwpzja.Constant_Value
                    section.data(1).logicalSrcIdx = 129;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.hwyzimvcur.Constant_Value
                    section.data(1).logicalSrcIdx = 130;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ahruhtq5f1.Constant_Value
                    section.data(1).logicalSrcIdx = 131;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.bz3ncnuprc.Constant_Value
                    section.data(1).logicalSrcIdx = 132;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.dhhhtxmmu2.Constant_Value
                    section.data(1).logicalSrcIdx = 133;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.dyyezhnzbv.Constant_Value
                    section.data(1).logicalSrcIdx = 134;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.g4qhfioifem.Constant_Value
                    section.data(1).logicalSrcIdx = 135;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(13) = section;
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
        nTotSects     = 1;
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
            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% rtB.nzurnwciyf
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.p3vyjcdubp
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.m0ioxdh3or
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 7;

                    ;% rtB.dakutnsmfw
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtB.c1fk35dky4
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 13;

                    ;% rtB.at5sbzwrhg
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtB.o3m5ydpoky
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 17;

                    ;% rtB.edbbi1bfho
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtB.b0dtdlqq2o
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 19;

                    ;% rtB.fgdrtjrvrb
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

                    ;% rtB.m4a2cinl4g
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 21;

                    ;% rtB.js4yiqrdiq
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 24;

                    ;% rtB.hewskagvmt
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 27;

                    ;% rtB.k2a22kk5dj
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 28;

                    ;% rtB.b2vfeufs1i
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 29;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
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
        nTotSects     = 17;
        sectIdxOffset = 1;

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
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.hd4234m0gw
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.onc542rist
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.jsu32xmjyl.AQHandles
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.b3gciis4ho.AQHandles
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.owdomrfbzv.AQHandles
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.kcjmwir3mt
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kynjefawrl
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.iiycts3fjl
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dl5mmzqld5
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.hkfawwla0v
                    section.data(5).logicalSrcIdx = 9;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.bbxgelugbh
                    section.data(6).logicalSrcIdx = 10;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtDW.ld3yg5jcxp
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hjghnpuor3
                    section.data(2).logicalSrcIdx = 12;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kwunuqciq1
                    section.data(3).logicalSrcIdx = 13;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cw3hlepmld
                    section.data(4).logicalSrcIdx = 14;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.hoalbnfsar
                    section.data(5).logicalSrcIdx = 15;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.glabhvsl3y
                    section.data(6).logicalSrcIdx = 16;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.b0fmwhbbrk
                    section.data(7).logicalSrcIdx = 17;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.bsuceiev0a
                    section.data(8).logicalSrcIdx = 18;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.mmwkq4lupp
                    section.data(9).logicalSrcIdx = 19;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.jlhd4xqlsh
                    section.data(10).logicalSrcIdx = 20;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.mwdke3sfpt
                    section.data(11).logicalSrcIdx = 21;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.bkz3eaxsch
                    section.data(12).logicalSrcIdx = 22;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.hj11go0d1m
                    section.data(13).logicalSrcIdx = 23;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.fjn2bnhyci
                    section.data(14).logicalSrcIdx = 24;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.li5j0khjhl
                    section.data(15).logicalSrcIdx = 25;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.n1xhajawvv
                    section.data(16).logicalSrcIdx = 26;
                    section.data(16).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jm1ravnfof
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ffvtff1vg1.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ahwcaguhri.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dgo50cfy4t.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.bsvvloijiw.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.lmmxizmujp.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ohrauwpzja.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hwyzimvcur.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ahruhtq5f1.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.bz3ncnuprc.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dhhhtxmmu2.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dyyezhnzbv.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.g4qhfioifem.oyspsrk4g1
                    section.data(1).logicalSrcIdx = 39;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
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


    targMap.checksum0 = 1925305032;
    targMap.checksum1 = 1243318243;
    targMap.checksum2 = 4267994078;
    targMap.checksum3 = 515748055;


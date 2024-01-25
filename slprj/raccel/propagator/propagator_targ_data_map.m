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
            section.nData     = 113;
            section.data(113)  = dumData; %prealloc

                    ;% rtP.thrust
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.thrustingThreshold
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.CompareToConstant_const
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.CompareToConstant_const_ofxbpdrlsc
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.NormalizeVector_maxzero
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.NormalizeVector_maxzero_gwprhsa2wo
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.NormalizeVector_maxzero_cctrbp3zbr
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.AttitudeProfileCustomTracking_primaryAlignment
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.AttitudeProfileCustomTracking_secondaryAlignment
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 10;

                    ;% rtP.AttitudeProfileCustomTracking_secondaryConstraint
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% rtP.Constant_Value
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 16;

                    ;% rtP.Constant_Value_b03wzngqsc
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 17;

                    ;% rtP.SpacecraftDynamics_startDate
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 18;

                    ;% rtP.SpacecraftDynamics_mass
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 19;

                    ;% rtP.SpacecraftDynamics_emptyMass
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 20;

                    ;% rtP.SpacecraftDynamics_fullMass
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 21;

                    ;% rtP.SpacecraftDynamics_inertia
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 22;

                    ;% rtP.SpacecraftDynamics_emptyInertia
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 31;

                    ;% rtP.SpacecraftDynamics_fullInertia
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 40;

                    ;% rtP.SpacecraftDynamics_semiMajorAxis
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 49;

                    ;% rtP.SpacecraftDynamics_eccentricity
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 50;

                    ;% rtP.SpacecraftDynamics_inclination
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 51;

                    ;% rtP.SpacecraftDynamics_raan
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 52;

                    ;% rtP.SpacecraftDynamics_argPeriapsis
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 53;

                    ;% rtP.SpacecraftDynamics_trueAnomaly
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 54;

                    ;% rtP.SpacecraftDynamics_trueLon
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 55;

                    ;% rtP.SpacecraftDynamics_argLat
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 56;

                    ;% rtP.SpacecraftDynamics_lonPeriapsis
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 57;

                    ;% rtP.SpacecraftDynamics_inertialPosition
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 58;

                    ;% rtP.SpacecraftDynamics_inertialVelocity
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 61;

                    ;% rtP.SpacecraftDynamics_fixedPosition
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 64;

                    ;% rtP.SpacecraftDynamics_fixedVelocity
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 67;

                    ;% rtP.SpacecraftDynamics_attitude
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 70;

                    ;% rtP.SpacecraftDynamics_attitudeRate
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 74;

                    ;% rtP.SpacecraftDynamics_customR
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 77;

                    ;% rtP.SpacecraftDynamics_customF
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 78;

                    ;% rtP.SpacecraftDynamics_customMu
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 79;

                    ;% rtP.SpacecraftDynamics_customJ2
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 80;

                    ;% rtP.SpacecraftDynamics_customOmega
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 81;

                    ;% rtP.SpacecraftDynamics_cbRA
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 82;

                    ;% rtP.SpacecraftDynamics_cbRARate
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 83;

                    ;% rtP.SpacecraftDynamics_cbDec
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 84;

                    ;% rtP.SpacecraftDynamics_cbDecRate
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 85;

                    ;% rtP.SpacecraftDynamics_cbRotAngle
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 86;

                    ;% rtP.SpacecraftDynamics_cbRotRate
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 87;

                    ;% rtP.SpacecraftDynamics_F107ExtrapValue
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 88;

                    ;% rtP.SpacecraftDynamics_MagneticIndexExtrapValue
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 89;

                    ;% rtP.SpacecraftDynamics_fluxFlags
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 90;

                    ;% rtP.SpacecraftDynamics_dragCoeff
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 113;

                    ;% rtP.SpacecraftDynamics_dragArea
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 114;

                    ;% rtP.SpacecraftDynamics_customThirdBodyMu
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 115;

                    ;% rtP.SpacecraftDynamics_reflectivityCoeff
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 116;

                    ;% rtP.SpacecraftDynamics_srpArea
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 117;

                    ;% rtP.SpacecraftDynamics_fluxPressure
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 118;

                    ;% rtP.Gain2_Gain
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 119;

                    ;% rtP.Gain_Gain
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 120;

                    ;% rtP.Gain1_Gain
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 121;

                    ;% rtP.Gain_Gain_kk5emnlceo
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 122;

                    ;% rtP.Gain2_Gain_k5gz3unjku
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 123;

                    ;% rtP.Gain1_Gain_n2k12gydmq
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 124;

                    ;% rtP.Gain_Gain_lbxzbv5il0
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 125;

                    ;% rtP.Gain1_Gain_cee4wpktnf
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 126;

                    ;% rtP.Gain2_Gain_gjtdi0t0m2
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 127;

                    ;% rtP.Bias_Bias
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 128;

                    ;% rtP.Bias1_Bias
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 129;

                    ;% rtP.Gain2_Gain_km53dmybtt
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 130;

                    ;% rtP.Gain_Gain_a1vp4nbb4i
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 131;

                    ;% rtP.Gain1_Gain_b2rn0jf110
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 132;

                    ;% rtP.Gain_Gain_l0ltiwj3qi
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 133;

                    ;% rtP.Gain2_Gain_azh5n0op2m
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 134;

                    ;% rtP.Gain1_Gain_kdcd1diblx
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 135;

                    ;% rtP.Gain_Gain_hpwfinpjfy
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 136;

                    ;% rtP.Gain1_Gain_jwifomnqko
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 137;

                    ;% rtP.Gain2_Gain_o2zg3ufaqd
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 138;

                    ;% rtP.Bias_Bias_cgigyouppa
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 139;

                    ;% rtP.Bias1_Bias_fv1d5l524l
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 140;

                    ;% rtP.Gain2_Gain_jn5n2dhxal
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 141;

                    ;% rtP.Gain_Gain_p1bkb0yypm
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 142;

                    ;% rtP.Gain1_Gain_mb5fijwxns
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 143;

                    ;% rtP.Gain_Gain_nu2zko0vyc
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 144;

                    ;% rtP.Gain2_Gain_knjw2krbz3
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 145;

                    ;% rtP.Gain1_Gain_crilbizplu
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 146;

                    ;% rtP.Gain_Gain_pbatg3voqv
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 147;

                    ;% rtP.Gain1_Gain_hc32uvnbm3
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 148;

                    ;% rtP.Gain2_Gain_of5bdnev5d
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 149;

                    ;% rtP.Bias_Bias_krj4bpg32q
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 150;

                    ;% rtP.Bias1_Bias_cjetlm1a0j
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 151;

                    ;% rtP.Gain_Gain_a1wggbqhys
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 152;

                    ;% rtP.intertia_Gain
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 153;

                    ;% rtP.Constant_Value_ald5ltqbaj
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 154;

                    ;% rtP.Constant_Value_lnhw1m3oj3
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 155;

                    ;% rtP.Constant_Value_jnwortb2ne
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 156;

                    ;% rtP.burndirectionb_Value
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 157;

                    ;% rtP.Constant_Value_kredm1stre
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 160;

                    ;% rtP.Constant_Value_ot3w3tohe1
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 161;

                    ;% rtP.Constant_Value_gxjiuddkly
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 162;

                    ;% rtP.Bias_Bias_jyt0xfb15f
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 163;

                    ;% rtP.Bias1_Bias_gwta2lnnkg
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 164;

                    ;% rtP.Constant_Value_chw2nw4nzm
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 165;

                    ;% rtP.Constant_Value_agzbluonup
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 166;

                    ;% rtP.Constant_Value_grzuu3xaow
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 167;

                    ;% rtP.Gain_Gain_jlqyqg5r1f
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 168;

                    ;% rtP.Constant_Value_hbwgtqn4rs
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 169;

                    ;% rtP.Constant1_Value
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 170;

                    ;% rtP.Gain2_Gain_i3obaqt5n2
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 171;

                    ;% rtP.Gain_Gain_ngjiudsjxj
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 172;

                    ;% rtP.Constant_Value_ci2gownbf5
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 173;

                    ;% rtP.Constant1_Value_nyng0gouim
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 174;

                    ;% rtP.Gain2_Gain_ivtf4mjc5h
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 175;

                    ;% rtP.Constant_Value_kmsn52x30e
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 176;

                    ;% rtP.Constant_Value_kr3d0vrbhe
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 177;

                    ;% rtP.Constant_Value_dtzh1c5sju
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 178;

                    ;% rtP.Constant3_Value
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 179;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.n5noj4hp0p.Constant_Value
                    section.data(1).logicalSrcIdx = 113;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.btrmn3zm0r.Constant_Value
                    section.data(1).logicalSrcIdx = 114;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.g35lilzjbm.Constant_Value
                    section.data(1).logicalSrcIdx = 115;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.g5ve1v23po.Constant_Value
                    section.data(1).logicalSrcIdx = 116;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.gsv54faewy.Constant_Value
                    section.data(1).logicalSrcIdx = 117;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.avc3ckvlc2.Constant_Value
                    section.data(1).logicalSrcIdx = 118;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.dufiuetx43.Constant_Value
                    section.data(1).logicalSrcIdx = 119;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.dxrmmapawx.Constant_Value
                    section.data(1).logicalSrcIdx = 120;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ndeg5uxc4fv.Constant_Value
                    section.data(1).logicalSrcIdx = 121;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.oeqg1ih2ox.Constant_Value
                    section.data(1).logicalSrcIdx = 122;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.dm5sdsidlf.Constant_Value
                    section.data(1).logicalSrcIdx = 123;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.g1wscpgucy2.Constant_Value
                    section.data(1).logicalSrcIdx = 124;
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
        nTotSects     = 2;
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
            section.nData     = 298;
            section.data(298)  = dumData; %prealloc

                    ;% rtB.iwpc3uqyn0
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hjia2bsg3b
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.epzak51t3d
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.ao0v42ly1v
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtB.jwkakphqwb
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 13;

                    ;% rtB.o0gh2zo4kc
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtB.peppqzqpkm
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 17;

                    ;% rtB.p5z3a5154s
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 20;

                    ;% rtB.g5tzrflnfu
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 21;

                    ;% rtB.ahuuqt1d0n
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

                    ;% rtB.i11cgsq4w5
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 23;

                    ;% rtB.bfcmi54vw3
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 24;

                    ;% rtB.kggncznpui
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 28;

                    ;% rtB.gqbm3rwegd
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 31;

                    ;% rtB.lbab3av5zk
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 32;

                    ;% rtB.o3o3rbkx4k
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 35;

                    ;% rtB.a5c1dovsit
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 36;

                    ;% rtB.jo14mcnknu
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 37;

                    ;% rtB.kkytydcbz4
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 38;

                    ;% rtB.jd3xtqhk4f
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 39;

                    ;% rtB.ccsetfod50
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 40;

                    ;% rtB.lgvhkx3bdw
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 41;

                    ;% rtB.okfwxewtb3
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 42;

                    ;% rtB.nbkishyt4e
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 43;

                    ;% rtB.akbdqgu25i
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 44;

                    ;% rtB.cdhitfgsbj
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 45;

                    ;% rtB.prrlnytvmi
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 46;

                    ;% rtB.jyki240jyc
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 47;

                    ;% rtB.beh1j2gh2f
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 48;

                    ;% rtB.i3c14fdrua
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 49;

                    ;% rtB.inaoc2xerg
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 50;

                    ;% rtB.jqfmjmc45t
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 51;

                    ;% rtB.djdcpvtzao
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 52;

                    ;% rtB.n301ly5dwz
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 53;

                    ;% rtB.g0qpe5txf0
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 54;

                    ;% rtB.kkz03dd1px
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 55;

                    ;% rtB.okocscvb4s
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 56;

                    ;% rtB.mcrjj25erm
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 57;

                    ;% rtB.ekf30mawji
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 58;

                    ;% rtB.bsthbobl1j
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 59;

                    ;% rtB.bzaiz40jle
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 60;

                    ;% rtB.gjiznw31uq
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 61;

                    ;% rtB.lwf5ib5ucd
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 62;

                    ;% rtB.ec51zeoq2r
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 63;

                    ;% rtB.e2p5tdbdvj
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 64;

                    ;% rtB.play0ik4za
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 65;

                    ;% rtB.cfqzfvlggq
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 66;

                    ;% rtB.el2salzuid
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 67;

                    ;% rtB.mqoflqyp2n
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 68;

                    ;% rtB.cdjafi5pxq
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 69;

                    ;% rtB.e2vww44ess
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 70;

                    ;% rtB.duuv1hhabg
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 71;

                    ;% rtB.ibqgzv3vv1
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 72;

                    ;% rtB.hm3n3iawtx
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 73;

                    ;% rtB.b4kecemf31
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 74;

                    ;% rtB.jbxny3loxr
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 75;

                    ;% rtB.dsbrz4jvtl
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 76;

                    ;% rtB.fwmywangrk
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 77;

                    ;% rtB.p0udbnohia
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 78;

                    ;% rtB.lxdmgzbfpw
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 79;

                    ;% rtB.bxzim2lzyq
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 80;

                    ;% rtB.dlyiidahgc
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 81;

                    ;% rtB.hp4oakafc3
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 82;

                    ;% rtB.dbgdgudkoq
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 83;

                    ;% rtB.pmuqrnz2xk
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 84;

                    ;% rtB.orif3zdn3b
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 85;

                    ;% rtB.nf2iruncwf
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 86;

                    ;% rtB.brr0y4qzkl
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 87;

                    ;% rtB.jhlmt1tq4b
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 88;

                    ;% rtB.juk0crd5c3
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 89;

                    ;% rtB.nictrou4qf
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 90;

                    ;% rtB.eztnlcuzax
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 91;

                    ;% rtB.hftwdjn1g0
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 92;

                    ;% rtB.jeaywfv1ac
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 93;

                    ;% rtB.dzxsurh3g1
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 94;

                    ;% rtB.hau2fho0aa
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 95;

                    ;% rtB.bxwkw4ky1z
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 96;

                    ;% rtB.fhqz1az5kr
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 97;

                    ;% rtB.lunan2p3nc
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 98;

                    ;% rtB.ogxdji4kue
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 99;

                    ;% rtB.fd2bqanlcc
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 100;

                    ;% rtB.hfrovp2ze5
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 101;

                    ;% rtB.ldzvobrfmv
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 102;

                    ;% rtB.b3fqguhuub
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 103;

                    ;% rtB.dkztucilt3
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 104;

                    ;% rtB.etfxahe1zk
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 105;

                    ;% rtB.jpnfdsiamz
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 106;

                    ;% rtB.g3jvhh4hav
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 107;

                    ;% rtB.ewrhh12ndt
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 108;

                    ;% rtB.i0vt325y4c
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 109;

                    ;% rtB.a1bumuod0o
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 110;

                    ;% rtB.iazanmkuzn
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 113;

                    ;% rtB.ctolcrefpd
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 114;

                    ;% rtB.lbzbc34ql3
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 115;

                    ;% rtB.cgo5cxdgn3
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 116;

                    ;% rtB.a0m12nsxvx
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 119;

                    ;% rtB.m2jg4t41fl
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 120;

                    ;% rtB.cq0rvjyxa1
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 121;

                    ;% rtB.ijibii3sox
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 122;

                    ;% rtB.nv52jhn4ce
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 123;

                    ;% rtB.aazirs2m22
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 124;

                    ;% rtB.ioajmttt5z
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 125;

                    ;% rtB.g1bth0twee
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 126;

                    ;% rtB.l4xxom2huh
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 127;

                    ;% rtB.pf1hq0hnah
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 128;

                    ;% rtB.atctczg3nb
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 129;

                    ;% rtB.dnvcnxosu5
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 130;

                    ;% rtB.cb05c13aht
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 131;

                    ;% rtB.g2o0vbut2d
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 132;

                    ;% rtB.am0geshi12
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 133;

                    ;% rtB.oqqgq0slrk
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 134;

                    ;% rtB.dmzbje4rgv
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 135;

                    ;% rtB.ajq0kdyy5x
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 136;

                    ;% rtB.i5qdsfyc5s
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 137;

                    ;% rtB.bbue1bng3x
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 138;

                    ;% rtB.j54mdey2bz
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 139;

                    ;% rtB.bdrl4roerl
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 140;

                    ;% rtB.gr3quax1i2
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 141;

                    ;% rtB.negg4jievw
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 142;

                    ;% rtB.apckcxm53o
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 143;

                    ;% rtB.gkee4xwotb
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 144;

                    ;% rtB.gnzedmhea4
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 145;

                    ;% rtB.gzxg0prvcv
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 146;

                    ;% rtB.jaipb35fas
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 147;

                    ;% rtB.fyvruv40ea
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 148;

                    ;% rtB.jng4y2afji
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 149;

                    ;% rtB.hnyv2qhx4k
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 150;

                    ;% rtB.if1tzffzza
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 151;

                    ;% rtB.jdh1qq5h5b
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 152;

                    ;% rtB.jxxkpo4mbk
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 153;

                    ;% rtB.nmwgcd5mf3
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 154;

                    ;% rtB.arqkoves50
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 155;

                    ;% rtB.gdehcgnctj
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 156;

                    ;% rtB.cmufj5dgtg
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 157;

                    ;% rtB.nseodi0thm
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 158;

                    ;% rtB.jok2yvqmcl
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 159;

                    ;% rtB.mvhciow3a3
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 160;

                    ;% rtB.nk2mrciwrl
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 161;

                    ;% rtB.f1lalcv3v1
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 162;

                    ;% rtB.mudm3d5kna
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 163;

                    ;% rtB.ipsiqdtx2y
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 164;

                    ;% rtB.gf5d0hy1rt
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 165;

                    ;% rtB.k5x4ozqjgd
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 166;

                    ;% rtB.aibmcxnmfz
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 167;

                    ;% rtB.jkkk4w1eup
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 168;

                    ;% rtB.lt0cnafmeb
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 169;

                    ;% rtB.ayzaokp5gy
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 170;

                    ;% rtB.i0ogrorvul
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 171;

                    ;% rtB.g3dfxa20a5
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 172;

                    ;% rtB.lwbc41xvmv
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 173;

                    ;% rtB.dyjj5gzmrh
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 174;

                    ;% rtB.d0mrovptzx
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 175;

                    ;% rtB.pzla3hbosm
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 176;

                    ;% rtB.ouzipvhg02
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 177;

                    ;% rtB.nu5egl3jpr
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 178;

                    ;% rtB.dibqv2ltpx
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 179;

                    ;% rtB.j3fks20oqe
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 180;

                    ;% rtB.duc5lxno2z
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 181;

                    ;% rtB.ifbvopiko5
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 182;

                    ;% rtB.dxn1c5f430
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 183;

                    ;% rtB.emshuqba4b
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 184;

                    ;% rtB.jla5taicox
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 185;

                    ;% rtB.eadkyzb5gk
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 186;

                    ;% rtB.emkig5izkj
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 187;

                    ;% rtB.iama2kmvpi
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 188;

                    ;% rtB.jkhakmgwkg
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 189;

                    ;% rtB.g2t1lpvxxu
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 190;

                    ;% rtB.in10r1k0id
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 193;

                    ;% rtB.ejahzmn3ac
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 194;

                    ;% rtB.kklagd15pq
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 195;

                    ;% rtB.jpaxve5vi5
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 196;

                    ;% rtB.m1hoiwiezv
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 197;

                    ;% rtB.gmlne4nmch
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 198;

                    ;% rtB.kedogj1ilh
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 199;

                    ;% rtB.lfbwrgjnsz
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 202;

                    ;% rtB.jjo5i5iadu
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 203;

                    ;% rtB.gh4qsvdi5t
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 204;

                    ;% rtB.gp4z5522c1
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 205;

                    ;% rtB.cn5tuvkjyi
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 206;

                    ;% rtB.gbdgmymvm3
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 207;

                    ;% rtB.ghva0cs5pv
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 208;

                    ;% rtB.k122ls5ddc
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 209;

                    ;% rtB.cfrkayrgcb
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 210;

                    ;% rtB.neiibevgpq
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 211;

                    ;% rtB.li1xzbkq2o
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 212;

                    ;% rtB.nfpa2stdtq
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 213;

                    ;% rtB.cp2lg0a2j0
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 214;

                    ;% rtB.emzex420qv
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 215;

                    ;% rtB.nvkdbiidel
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 216;

                    ;% rtB.jiqipy0art
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 217;

                    ;% rtB.mqj0qgcyek
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 218;

                    ;% rtB.ibm0ltg4u5
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 219;

                    ;% rtB.hgbe0klwj5
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 220;

                    ;% rtB.md3bqyquec
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 221;

                    ;% rtB.pdy43kvudr
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 222;

                    ;% rtB.fpam5yitdk
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 223;

                    ;% rtB.h31nqrlldb
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 224;

                    ;% rtB.i5c4uod1ru
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 225;

                    ;% rtB.pxkrit3cpe
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 226;

                    ;% rtB.bf5eeumnha
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 227;

                    ;% rtB.nzfdxiefml
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 228;

                    ;% rtB.g0ss0qvqh4
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 229;

                    ;% rtB.kqba3x01mi
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 230;

                    ;% rtB.papx1e0ibu
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 231;

                    ;% rtB.fjdjjqgoqm
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 232;

                    ;% rtB.g0sgz4y4n0
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 233;

                    ;% rtB.mxj2tyfgtv
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 234;

                    ;% rtB.pzwtmvcp4m
                    section.data(208).logicalSrcIdx = 207;
                    section.data(208).dtTransOffset = 235;

                    ;% rtB.ehguvaafyf
                    section.data(209).logicalSrcIdx = 208;
                    section.data(209).dtTransOffset = 236;

                    ;% rtB.bbmnhwq0rr
                    section.data(210).logicalSrcIdx = 209;
                    section.data(210).dtTransOffset = 237;

                    ;% rtB.lx2krvsypk
                    section.data(211).logicalSrcIdx = 210;
                    section.data(211).dtTransOffset = 238;

                    ;% rtB.pi0zloz3av
                    section.data(212).logicalSrcIdx = 211;
                    section.data(212).dtTransOffset = 239;

                    ;% rtB.mrvxhq5jel
                    section.data(213).logicalSrcIdx = 212;
                    section.data(213).dtTransOffset = 240;

                    ;% rtB.b32ff13ato
                    section.data(214).logicalSrcIdx = 213;
                    section.data(214).dtTransOffset = 241;

                    ;% rtB.lzyot4xhsg
                    section.data(215).logicalSrcIdx = 214;
                    section.data(215).dtTransOffset = 242;

                    ;% rtB.fgfpsle4vd
                    section.data(216).logicalSrcIdx = 215;
                    section.data(216).dtTransOffset = 243;

                    ;% rtB.f10xwh2dw1
                    section.data(217).logicalSrcIdx = 216;
                    section.data(217).dtTransOffset = 244;

                    ;% rtB.ks1zi3ssmr
                    section.data(218).logicalSrcIdx = 217;
                    section.data(218).dtTransOffset = 245;

                    ;% rtB.g44grslwz0
                    section.data(219).logicalSrcIdx = 218;
                    section.data(219).dtTransOffset = 246;

                    ;% rtB.hc0urkev2t
                    section.data(220).logicalSrcIdx = 219;
                    section.data(220).dtTransOffset = 247;

                    ;% rtB.e0du5fe5ij
                    section.data(221).logicalSrcIdx = 220;
                    section.data(221).dtTransOffset = 248;

                    ;% rtB.hofgma4ypd
                    section.data(222).logicalSrcIdx = 221;
                    section.data(222).dtTransOffset = 249;

                    ;% rtB.eru0kcrai5
                    section.data(223).logicalSrcIdx = 222;
                    section.data(223).dtTransOffset = 250;

                    ;% rtB.o1h5jbax0k
                    section.data(224).logicalSrcIdx = 223;
                    section.data(224).dtTransOffset = 251;

                    ;% rtB.jmmhtinm1t
                    section.data(225).logicalSrcIdx = 224;
                    section.data(225).dtTransOffset = 252;

                    ;% rtB.jcivfd5sc1
                    section.data(226).logicalSrcIdx = 225;
                    section.data(226).dtTransOffset = 253;

                    ;% rtB.ak4ldfxg1f
                    section.data(227).logicalSrcIdx = 226;
                    section.data(227).dtTransOffset = 254;

                    ;% rtB.axs2frbyrx
                    section.data(228).logicalSrcIdx = 227;
                    section.data(228).dtTransOffset = 255;

                    ;% rtB.mmq4jif3xa
                    section.data(229).logicalSrcIdx = 228;
                    section.data(229).dtTransOffset = 256;

                    ;% rtB.d1uxjqm2m5
                    section.data(230).logicalSrcIdx = 229;
                    section.data(230).dtTransOffset = 257;

                    ;% rtB.ghgwxfzqrs
                    section.data(231).logicalSrcIdx = 230;
                    section.data(231).dtTransOffset = 258;

                    ;% rtB.mqztit2ec1
                    section.data(232).logicalSrcIdx = 231;
                    section.data(232).dtTransOffset = 259;

                    ;% rtB.m5p4cfawuz
                    section.data(233).logicalSrcIdx = 232;
                    section.data(233).dtTransOffset = 262;

                    ;% rtB.f55lzt1pjb
                    section.data(234).logicalSrcIdx = 233;
                    section.data(234).dtTransOffset = 266;

                    ;% rtB.d4gx0maojq
                    section.data(235).logicalSrcIdx = 234;
                    section.data(235).dtTransOffset = 267;

                    ;% rtB.ek14j05v4w
                    section.data(236).logicalSrcIdx = 235;
                    section.data(236).dtTransOffset = 268;

                    ;% rtB.i3ooy2gh3c
                    section.data(237).logicalSrcIdx = 236;
                    section.data(237).dtTransOffset = 269;

                    ;% rtB.mmbhoqkjlg
                    section.data(238).logicalSrcIdx = 237;
                    section.data(238).dtTransOffset = 272;

                    ;% rtB.l3lwrt4nfh
                    section.data(239).logicalSrcIdx = 238;
                    section.data(239).dtTransOffset = 275;

                    ;% rtB.kvyvqxju03
                    section.data(240).logicalSrcIdx = 239;
                    section.data(240).dtTransOffset = 278;

                    ;% rtB.mvri3ojh13
                    section.data(241).logicalSrcIdx = 240;
                    section.data(241).dtTransOffset = 281;

                    ;% rtB.iobpi1ia3b
                    section.data(242).logicalSrcIdx = 241;
                    section.data(242).dtTransOffset = 282;

                    ;% rtB.bawrujksd0
                    section.data(243).logicalSrcIdx = 242;
                    section.data(243).dtTransOffset = 283;

                    ;% rtB.ayyiqsze1q
                    section.data(244).logicalSrcIdx = 243;
                    section.data(244).dtTransOffset = 284;

                    ;% rtB.jmgm3qhu4c
                    section.data(245).logicalSrcIdx = 244;
                    section.data(245).dtTransOffset = 285;

                    ;% rtB.p3pj1jootc
                    section.data(246).logicalSrcIdx = 245;
                    section.data(246).dtTransOffset = 288;

                    ;% rtB.ml3uqjcwxo
                    section.data(247).logicalSrcIdx = 246;
                    section.data(247).dtTransOffset = 291;

                    ;% rtB.ififqtzmpg
                    section.data(248).logicalSrcIdx = 247;
                    section.data(248).dtTransOffset = 292;

                    ;% rtB.gxudyvttp4
                    section.data(249).logicalSrcIdx = 248;
                    section.data(249).dtTransOffset = 293;

                    ;% rtB.o2so0mimz4
                    section.data(250).logicalSrcIdx = 249;
                    section.data(250).dtTransOffset = 296;

                    ;% rtB.hsw2izzn2y
                    section.data(251).logicalSrcIdx = 250;
                    section.data(251).dtTransOffset = 299;

                    ;% rtB.ovyo2ojdiq
                    section.data(252).logicalSrcIdx = 251;
                    section.data(252).dtTransOffset = 300;

                    ;% rtB.lezubqe10f
                    section.data(253).logicalSrcIdx = 252;
                    section.data(253).dtTransOffset = 301;

                    ;% rtB.pmyy215m2l
                    section.data(254).logicalSrcIdx = 253;
                    section.data(254).dtTransOffset = 302;

                    ;% rtB.bko1nisczd
                    section.data(255).logicalSrcIdx = 254;
                    section.data(255).dtTransOffset = 303;

                    ;% rtB.e1dhyxfarm
                    section.data(256).logicalSrcIdx = 255;
                    section.data(256).dtTransOffset = 304;

                    ;% rtB.psrsnnlnwz
                    section.data(257).logicalSrcIdx = 256;
                    section.data(257).dtTransOffset = 305;

                    ;% rtB.ftdxqcyuhu
                    section.data(258).logicalSrcIdx = 257;
                    section.data(258).dtTransOffset = 306;

                    ;% rtB.ksurxyu1ew
                    section.data(259).logicalSrcIdx = 258;
                    section.data(259).dtTransOffset = 307;

                    ;% rtB.clei5lhcim
                    section.data(260).logicalSrcIdx = 259;
                    section.data(260).dtTransOffset = 308;

                    ;% rtB.n12qizw2pk
                    section.data(261).logicalSrcIdx = 260;
                    section.data(261).dtTransOffset = 309;

                    ;% rtB.jla1lojsky
                    section.data(262).logicalSrcIdx = 261;
                    section.data(262).dtTransOffset = 310;

                    ;% rtB.dyrgneij04
                    section.data(263).logicalSrcIdx = 262;
                    section.data(263).dtTransOffset = 311;

                    ;% rtB.earmzkxhyo
                    section.data(264).logicalSrcIdx = 263;
                    section.data(264).dtTransOffset = 312;

                    ;% rtB.mrnktj4pzl
                    section.data(265).logicalSrcIdx = 264;
                    section.data(265).dtTransOffset = 313;

                    ;% rtB.bxncybtpmq
                    section.data(266).logicalSrcIdx = 265;
                    section.data(266).dtTransOffset = 314;

                    ;% rtB.lmgyw4yww0
                    section.data(267).logicalSrcIdx = 266;
                    section.data(267).dtTransOffset = 315;

                    ;% rtB.ec0g313zxm
                    section.data(268).logicalSrcIdx = 267;
                    section.data(268).dtTransOffset = 316;

                    ;% rtB.oetfuctzdx
                    section.data(269).logicalSrcIdx = 268;
                    section.data(269).dtTransOffset = 317;

                    ;% rtB.ouiv3ojpif
                    section.data(270).logicalSrcIdx = 269;
                    section.data(270).dtTransOffset = 318;

                    ;% rtB.ig2ui1j1d2
                    section.data(271).logicalSrcIdx = 270;
                    section.data(271).dtTransOffset = 319;

                    ;% rtB.lwunfrcbtr
                    section.data(272).logicalSrcIdx = 271;
                    section.data(272).dtTransOffset = 320;

                    ;% rtB.gcw1odthbz
                    section.data(273).logicalSrcIdx = 272;
                    section.data(273).dtTransOffset = 321;

                    ;% rtB.mry2mf34rf
                    section.data(274).logicalSrcIdx = 273;
                    section.data(274).dtTransOffset = 322;

                    ;% rtB.k4jmvnhocb
                    section.data(275).logicalSrcIdx = 274;
                    section.data(275).dtTransOffset = 323;

                    ;% rtB.pxc34pzb0n
                    section.data(276).logicalSrcIdx = 275;
                    section.data(276).dtTransOffset = 324;

                    ;% rtB.le4iejgi3f
                    section.data(277).logicalSrcIdx = 276;
                    section.data(277).dtTransOffset = 325;

                    ;% rtB.n5xzeyokha
                    section.data(278).logicalSrcIdx = 277;
                    section.data(278).dtTransOffset = 326;

                    ;% rtB.iuqibmwza1
                    section.data(279).logicalSrcIdx = 278;
                    section.data(279).dtTransOffset = 327;

                    ;% rtB.izcekc2rmb
                    section.data(280).logicalSrcIdx = 279;
                    section.data(280).dtTransOffset = 328;

                    ;% rtB.avh0p45csx
                    section.data(281).logicalSrcIdx = 280;
                    section.data(281).dtTransOffset = 329;

                    ;% rtB.acapcxyypu
                    section.data(282).logicalSrcIdx = 281;
                    section.data(282).dtTransOffset = 330;

                    ;% rtB.d3kvy3fm2i
                    section.data(283).logicalSrcIdx = 282;
                    section.data(283).dtTransOffset = 331;

                    ;% rtB.kgzkpxarae
                    section.data(284).logicalSrcIdx = 283;
                    section.data(284).dtTransOffset = 332;

                    ;% rtB.gqodljqjue
                    section.data(285).logicalSrcIdx = 284;
                    section.data(285).dtTransOffset = 333;

                    ;% rtB.lzaaahrvev
                    section.data(286).logicalSrcIdx = 285;
                    section.data(286).dtTransOffset = 334;

                    ;% rtB.m4hsdttpfk
                    section.data(287).logicalSrcIdx = 286;
                    section.data(287).dtTransOffset = 335;

                    ;% rtB.jascdf2bov
                    section.data(288).logicalSrcIdx = 287;
                    section.data(288).dtTransOffset = 336;

                    ;% rtB.pd5yjynpan
                    section.data(289).logicalSrcIdx = 288;
                    section.data(289).dtTransOffset = 339;

                    ;% rtB.e3qqi3mf1s
                    section.data(290).logicalSrcIdx = 289;
                    section.data(290).dtTransOffset = 340;

                    ;% rtB.mlvev5zvuo
                    section.data(291).logicalSrcIdx = 290;
                    section.data(291).dtTransOffset = 341;

                    ;% rtB.cmhorwyh4g
                    section.data(292).logicalSrcIdx = 291;
                    section.data(292).dtTransOffset = 342;

                    ;% rtB.anabyo4mrf
                    section.data(293).logicalSrcIdx = 292;
                    section.data(293).dtTransOffset = 343;

                    ;% rtB.hnezzzmczj
                    section.data(294).logicalSrcIdx = 293;
                    section.data(294).dtTransOffset = 344;

                    ;% rtB.b2znn3iy5f
                    section.data(295).logicalSrcIdx = 294;
                    section.data(295).dtTransOffset = 345;

                    ;% rtB.fzicnidzc0
                    section.data(296).logicalSrcIdx = 295;
                    section.data(296).dtTransOffset = 348;

                    ;% rtB.occpomfuif
                    section.data(297).logicalSrcIdx = 296;
                    section.data(297).dtTransOffset = 351;

                    ;% rtB.hdgnuross1
                    section.data(298).logicalSrcIdx = 297;
                    section.data(298).dtTransOffset = 354;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.ibghka43t4
                    section.data(1).logicalSrcIdx = 298;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gufuqm2w4q
                    section.data(2).logicalSrcIdx = 299;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.odiyexmy3u
                    section.data(3).logicalSrcIdx = 300;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
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
        sectIdxOffset = 2;

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

                    ;% rtDW.myihs1k5ak
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.c0nha4iyqk
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.hglv0y3zar.AQHandles
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jxf2kjh03q.AQHandles
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.na5522svo2.AQHandles
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cpgeeauk1h.AQHandles
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ev4kpp3iq0.AQHandles
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.gugpqqxhvg.AQHandles
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nvlm5fi02x
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% rtDW.ggwlmwhzn2
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nzu1koxl4c
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kqbnmg3me2
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gtqimvyuw3
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.h1cy53fwgj
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.fqf02tbomi
                    section.data(6).logicalSrcIdx = 14;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.htfaejw1qt
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.dxttgiuwsl
                    section.data(8).logicalSrcIdx = 16;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.o2lk1nx3bc
                    section.data(9).logicalSrcIdx = 17;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.bvrzes2rmf
                    section.data(10).logicalSrcIdx = 18;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ddcho2k1ly
                    section.data(11).logicalSrcIdx = 19;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ebyh4xzt5h
                    section.data(12).logicalSrcIdx = 20;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.asakcyvhdn
                    section.data(13).logicalSrcIdx = 21;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.icql5zbuzt
                    section.data(14).logicalSrcIdx = 22;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.hs2ude1ege
                    section.data(15).logicalSrcIdx = 23;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.kfr1e2dcuk
                    section.data(16).logicalSrcIdx = 24;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.dq3mep3v0o
                    section.data(17).logicalSrcIdx = 25;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.a40xwy5obk
                    section.data(18).logicalSrcIdx = 26;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.d51rvhcxpr
                    section.data(19).logicalSrcIdx = 27;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.ki5pr0cdgk
                    section.data(20).logicalSrcIdx = 28;
                    section.data(20).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.omiseg2km5
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.powahcykzj
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.n5pq1y5uvx
                    section.data(3).logicalSrcIdx = 31;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.kx2j2pdpyi
                    section.data(4).logicalSrcIdx = 32;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.misjbbclml
                    section.data(5).logicalSrcIdx = 33;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.n5noj4hp0p.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.btrmn3zm0r.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.g35lilzjbm.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.g5ve1v23po.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gsv54faewy.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.avc3ckvlc2.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 39;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dufiuetx43.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dxrmmapawx.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ndeg5uxc4fv.n5wfkrmirk
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.oeqg1ih2ox.o524g4iyl1
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.dm5sdsidlf.o524g4iyl1
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.g1wscpgucy2.o524g4iyl1
                    section.data(1).logicalSrcIdx = 45;
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


    targMap.checksum0 = 1695573840;
    targMap.checksum1 = 4034585232;
    targMap.checksum2 = 3375549286;
    targMap.checksum3 = 2129333743;


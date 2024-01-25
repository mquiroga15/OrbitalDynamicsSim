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

                    ;% rtP.lf2tg5j2nw.Constant_Value
                    section.data(1).logicalSrcIdx = 113;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.gnme1gu3zy.Constant_Value
                    section.data(1).logicalSrcIdx = 114;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.kpu1x5dwrk.Constant_Value
                    section.data(1).logicalSrcIdx = 115;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.jxiate0wnc.Constant_Value
                    section.data(1).logicalSrcIdx = 116;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.lramtmlkmq.Constant_Value
                    section.data(1).logicalSrcIdx = 117;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.pofcv4yf1q.Constant_Value
                    section.data(1).logicalSrcIdx = 118;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.mjycmbyayp.Constant_Value
                    section.data(1).logicalSrcIdx = 119;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.hjybai3dqf.Constant_Value
                    section.data(1).logicalSrcIdx = 120;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.flcsttob5qv.Constant_Value
                    section.data(1).logicalSrcIdx = 121;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ikzxkzczgl.Constant_Value
                    section.data(1).logicalSrcIdx = 122;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ki5dfllwmd.Constant_Value
                    section.data(1).logicalSrcIdx = 123;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.kn1zy4gjusi.Constant_Value
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

                    ;% rtB.arwfsx1c32
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.hlmjufbfzm
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.nt5sg2upub
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.kzhucwwulf
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtB.k2zs0lhjgw
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 13;

                    ;% rtB.bx3cvl5uiz
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtB.bgbtt23c0k
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 17;

                    ;% rtB.izx5zcfvng
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 20;

                    ;% rtB.ddfwx2qqfx
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 21;

                    ;% rtB.k2avwoc5wb
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

                    ;% rtB.k5tn3yiqj3
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 23;

                    ;% rtB.ofpmzqumwk
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 24;

                    ;% rtB.d0ib2dx4fe
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 28;

                    ;% rtB.ae3swytvn2
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 31;

                    ;% rtB.audwxioxgw
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 32;

                    ;% rtB.h3lvgmqzml
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 35;

                    ;% rtB.hmb3awxckt
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 36;

                    ;% rtB.jdqzqfspf2
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 37;

                    ;% rtB.ngn3moazdi
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 38;

                    ;% rtB.jvuc0le4q3
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 39;

                    ;% rtB.doai2pg1cl
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 40;

                    ;% rtB.ltf3fgreck
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 41;

                    ;% rtB.erva203ps4
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 42;

                    ;% rtB.fpbnczepo1
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 43;

                    ;% rtB.k3s03wnqyx
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 44;

                    ;% rtB.ok3kiaidlm
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 45;

                    ;% rtB.h4mfwwgnvq
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 46;

                    ;% rtB.bdqojbbgd5
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 47;

                    ;% rtB.anwtn11pnf
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 48;

                    ;% rtB.i4u5fx5szz
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 49;

                    ;% rtB.eb2e1mdic4
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 50;

                    ;% rtB.k1bjosm2vf
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 51;

                    ;% rtB.euwo1qdqmo
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 52;

                    ;% rtB.dcaagf4d5p
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 53;

                    ;% rtB.j4awxs2u4k
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 54;

                    ;% rtB.e2gtkbsz4u
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 55;

                    ;% rtB.ag2kakw2ry
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 56;

                    ;% rtB.eoa0k1dz04
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 57;

                    ;% rtB.bu03rsjny0
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 58;

                    ;% rtB.j51hkj22hh
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 59;

                    ;% rtB.lzvpeuheiw
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 60;

                    ;% rtB.fnchlgrhy1
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 61;

                    ;% rtB.hqx3a1htma
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 62;

                    ;% rtB.ffgcxxhqpv
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 63;

                    ;% rtB.iv1zebcrw0
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 64;

                    ;% rtB.bvdtunmm2l
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 65;

                    ;% rtB.p1b4ouryys
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 66;

                    ;% rtB.kys5r5rnhm
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 67;

                    ;% rtB.hijd3slb5g
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 68;

                    ;% rtB.izutnvqezp
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 69;

                    ;% rtB.nrgobxxknb
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 70;

                    ;% rtB.ffany32ds0
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 71;

                    ;% rtB.cpugdcfsva
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 72;

                    ;% rtB.ibzftcigfp
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 73;

                    ;% rtB.lmhsnxyy4q
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 74;

                    ;% rtB.nsbbt0ui4m
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 75;

                    ;% rtB.nvfug0zbsd
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 76;

                    ;% rtB.bbmvbfy3xw
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 77;

                    ;% rtB.blbi1d4frb
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 78;

                    ;% rtB.hxgi0xdlub
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 79;

                    ;% rtB.kag1u0rpls
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 80;

                    ;% rtB.bub3yuwkxt
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 81;

                    ;% rtB.p2yp23ndmz
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 82;

                    ;% rtB.b5a1ov1jzy
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 83;

                    ;% rtB.ovvxwk1jiq
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 84;

                    ;% rtB.g0rq0ffe0b
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 85;

                    ;% rtB.p5l2rwol21
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 86;

                    ;% rtB.h4rmfdgf0s
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 87;

                    ;% rtB.bhbqr2nhuh
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 88;

                    ;% rtB.hjrd3gzp4f
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 89;

                    ;% rtB.h41evd2kyt
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 90;

                    ;% rtB.f3mrc3vc3b
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 91;

                    ;% rtB.gp240aqkxe
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 92;

                    ;% rtB.bro0vmqilm
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 93;

                    ;% rtB.b2hp5ba3p2
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 94;

                    ;% rtB.bfwlh2c3lp
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 95;

                    ;% rtB.mnsykknszb
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 96;

                    ;% rtB.fxaaaizfeq
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 97;

                    ;% rtB.j54fki4555
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 98;

                    ;% rtB.ibk1aebidb
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 99;

                    ;% rtB.e5yqtsqdlf
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 100;

                    ;% rtB.omx2xnlsa1
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 101;

                    ;% rtB.i3eaqfvfes
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 102;

                    ;% rtB.izcjgemuly
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 103;

                    ;% rtB.cong315ffk
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 104;

                    ;% rtB.ltxwu1wbdg
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 105;

                    ;% rtB.agup1a4qnr
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 106;

                    ;% rtB.duapfbhlag
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 107;

                    ;% rtB.i1dhvddm4u
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 108;

                    ;% rtB.ise3xsizba
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 109;

                    ;% rtB.e3lbf34l1y
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 110;

                    ;% rtB.prp1ucytv2
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 113;

                    ;% rtB.c1zrhc0om4
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 114;

                    ;% rtB.mdyfrrogj0
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 115;

                    ;% rtB.gq4fcmaya1
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 116;

                    ;% rtB.mjaw2a3ohe
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 119;

                    ;% rtB.lik24trukk
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 120;

                    ;% rtB.ifebfwzvxn
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 121;

                    ;% rtB.g2k5b3dnmw
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 122;

                    ;% rtB.abxvqxzhfn
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 123;

                    ;% rtB.ddfgltz1rj
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 124;

                    ;% rtB.ksubd4yx0s
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 125;

                    ;% rtB.i0zpzjz1tn
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 126;

                    ;% rtB.pvqqvby1ba
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 127;

                    ;% rtB.dszvcwvdxm
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 128;

                    ;% rtB.piejtcrnzv
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 129;

                    ;% rtB.oijvyuq1by
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 130;

                    ;% rtB.bf1yimqzt3
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 131;

                    ;% rtB.mrh3hgkyix
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 132;

                    ;% rtB.ogn4x3aekj
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 133;

                    ;% rtB.mmtnicim0g
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 134;

                    ;% rtB.lvr0odfzan
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 135;

                    ;% rtB.gzomq0mpad
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 136;

                    ;% rtB.lzf3tsjegz
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 137;

                    ;% rtB.cld1gnmiha
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 138;

                    ;% rtB.gf14qi0ft4
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 139;

                    ;% rtB.lmaab1wk0y
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 140;

                    ;% rtB.e2hmr0pg2j
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 141;

                    ;% rtB.ndq1n2kfaz
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 142;

                    ;% rtB.dyopyqfiiz
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 143;

                    ;% rtB.ewjyyaemel
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 144;

                    ;% rtB.b3w4mxih4m
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 145;

                    ;% rtB.pguabx1cto
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 146;

                    ;% rtB.fnirgo0g2g
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 147;

                    ;% rtB.fwc4xsxw0y
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 148;

                    ;% rtB.fnotdny0aw
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 149;

                    ;% rtB.mdq0frigxm
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 150;

                    ;% rtB.nerb5vqqa1
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 151;

                    ;% rtB.htnnm4f3rh
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 152;

                    ;% rtB.fvq5v0wagk
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 153;

                    ;% rtB.c2ijsxda10
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 154;

                    ;% rtB.krro3sx5eh
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 155;

                    ;% rtB.auarppakcs
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 156;

                    ;% rtB.pxykpx3utl
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 157;

                    ;% rtB.eovkmmninw
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 158;

                    ;% rtB.evytg2f1rb
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 159;

                    ;% rtB.lxx4v22huu
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 160;

                    ;% rtB.e11xhbvgcn
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 161;

                    ;% rtB.k4awz1ldew
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 162;

                    ;% rtB.cjld52211r
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 163;

                    ;% rtB.mwj3z5max0
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 164;

                    ;% rtB.j4ac0y4t4l
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 165;

                    ;% rtB.glrz0fqwdf
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 166;

                    ;% rtB.a1s4at4lm4
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 167;

                    ;% rtB.pexcqd2hxn
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 168;

                    ;% rtB.lrvcier1zo
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 169;

                    ;% rtB.ljzogtduwf
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 170;

                    ;% rtB.agqcqrtnf5
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 171;

                    ;% rtB.nwlgc3xdop
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 172;

                    ;% rtB.nbjuy34gmx
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 173;

                    ;% rtB.n3u455z5vd
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 174;

                    ;% rtB.b4estcjfih
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 175;

                    ;% rtB.cuuj3fvjnn
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 176;

                    ;% rtB.hrb3hht5h5
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 177;

                    ;% rtB.f45rm2aeyq
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 178;

                    ;% rtB.ihjztibink
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 179;

                    ;% rtB.kgd04xzdcr
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 180;

                    ;% rtB.eh0zzd3ivm
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 181;

                    ;% rtB.cpwidezqla
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 182;

                    ;% rtB.mc4f0d3lut
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 183;

                    ;% rtB.edjdhkdp1x
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 184;

                    ;% rtB.iakvbkhnvj
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 185;

                    ;% rtB.ntssr1yofu
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 186;

                    ;% rtB.l4o1umfkt1
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 187;

                    ;% rtB.bmlivgiev2
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 188;

                    ;% rtB.dqpet4lo3w
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 189;

                    ;% rtB.mrqou5vw32
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 190;

                    ;% rtB.cbocl1hpbq
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 193;

                    ;% rtB.olf5prulwz
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 194;

                    ;% rtB.hr4m43b2n4
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 195;

                    ;% rtB.mpoydqprac
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 196;

                    ;% rtB.oxzxh3v5fy
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 197;

                    ;% rtB.e4g1z1dwbh
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 198;

                    ;% rtB.dlsbihrftu
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 199;

                    ;% rtB.de0udbsnbd
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 202;

                    ;% rtB.ifdfwkuzvv
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 203;

                    ;% rtB.hzt4twlnb2
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 204;

                    ;% rtB.i4xi3ehe1s
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 205;

                    ;% rtB.ndv5zqmwap
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 206;

                    ;% rtB.lvxpzjcgrg
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 207;

                    ;% rtB.n5clxvomtk
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 208;

                    ;% rtB.esuxzqzc3e
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 209;

                    ;% rtB.cmh3zwuall
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 210;

                    ;% rtB.lbpc2rtdzm
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 211;

                    ;% rtB.odsldvzxxp
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 212;

                    ;% rtB.lhz1tawstz
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 213;

                    ;% rtB.i1s3nz0b2c
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 214;

                    ;% rtB.lcxoofz3se
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 215;

                    ;% rtB.b4ce03c3q3
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 216;

                    ;% rtB.ifprj4pxcq
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 217;

                    ;% rtB.cllshkgqxc
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 218;

                    ;% rtB.potvsxkx01
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 219;

                    ;% rtB.bvo45ceokr
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 220;

                    ;% rtB.ovz0nwm1on
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 221;

                    ;% rtB.eytlynbjva
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 222;

                    ;% rtB.bgxtukegxj
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 223;

                    ;% rtB.gf3ts2bej4
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 224;

                    ;% rtB.pb1v3invgy
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 225;

                    ;% rtB.jchb5pmsuf
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 226;

                    ;% rtB.omgykybnkk
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 227;

                    ;% rtB.fmiaebyuq2
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 228;

                    ;% rtB.ayuxs0ixd0
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 229;

                    ;% rtB.ewy3jij3q3
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 230;

                    ;% rtB.pfsgvsrsph
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 231;

                    ;% rtB.cdaty0q5m2
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 232;

                    ;% rtB.njld3k1qrm
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 233;

                    ;% rtB.ik4sy1j3h3
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 234;

                    ;% rtB.crqbet2uyu
                    section.data(208).logicalSrcIdx = 207;
                    section.data(208).dtTransOffset = 235;

                    ;% rtB.fsshl4j1bv
                    section.data(209).logicalSrcIdx = 208;
                    section.data(209).dtTransOffset = 236;

                    ;% rtB.cpzrof34di
                    section.data(210).logicalSrcIdx = 209;
                    section.data(210).dtTransOffset = 237;

                    ;% rtB.khmphxxnqx
                    section.data(211).logicalSrcIdx = 210;
                    section.data(211).dtTransOffset = 238;

                    ;% rtB.bxpyh5b5sb
                    section.data(212).logicalSrcIdx = 211;
                    section.data(212).dtTransOffset = 239;

                    ;% rtB.p1b1vua5ww
                    section.data(213).logicalSrcIdx = 212;
                    section.data(213).dtTransOffset = 240;

                    ;% rtB.jlfd2y5x1w
                    section.data(214).logicalSrcIdx = 213;
                    section.data(214).dtTransOffset = 241;

                    ;% rtB.ds4c2tg21v
                    section.data(215).logicalSrcIdx = 214;
                    section.data(215).dtTransOffset = 242;

                    ;% rtB.dmb351qbiu
                    section.data(216).logicalSrcIdx = 215;
                    section.data(216).dtTransOffset = 243;

                    ;% rtB.kik3dr2bde
                    section.data(217).logicalSrcIdx = 216;
                    section.data(217).dtTransOffset = 244;

                    ;% rtB.fav00lw5cz
                    section.data(218).logicalSrcIdx = 217;
                    section.data(218).dtTransOffset = 245;

                    ;% rtB.gr3vzqq0k2
                    section.data(219).logicalSrcIdx = 218;
                    section.data(219).dtTransOffset = 246;

                    ;% rtB.odfficsjsx
                    section.data(220).logicalSrcIdx = 219;
                    section.data(220).dtTransOffset = 247;

                    ;% rtB.jsjiibmmb5
                    section.data(221).logicalSrcIdx = 220;
                    section.data(221).dtTransOffset = 248;

                    ;% rtB.fgb5bbkkin
                    section.data(222).logicalSrcIdx = 221;
                    section.data(222).dtTransOffset = 249;

                    ;% rtB.bkduzupwea
                    section.data(223).logicalSrcIdx = 222;
                    section.data(223).dtTransOffset = 250;

                    ;% rtB.csam3nbmnv
                    section.data(224).logicalSrcIdx = 223;
                    section.data(224).dtTransOffset = 251;

                    ;% rtB.g0w3taummx
                    section.data(225).logicalSrcIdx = 224;
                    section.data(225).dtTransOffset = 252;

                    ;% rtB.iwq3si5wmy
                    section.data(226).logicalSrcIdx = 225;
                    section.data(226).dtTransOffset = 253;

                    ;% rtB.iynuazrp2u
                    section.data(227).logicalSrcIdx = 226;
                    section.data(227).dtTransOffset = 254;

                    ;% rtB.l45mf0o4u2
                    section.data(228).logicalSrcIdx = 227;
                    section.data(228).dtTransOffset = 255;

                    ;% rtB.ha34k0ralw
                    section.data(229).logicalSrcIdx = 228;
                    section.data(229).dtTransOffset = 256;

                    ;% rtB.dcb0udynvi
                    section.data(230).logicalSrcIdx = 229;
                    section.data(230).dtTransOffset = 257;

                    ;% rtB.n4mym2lzqe
                    section.data(231).logicalSrcIdx = 230;
                    section.data(231).dtTransOffset = 258;

                    ;% rtB.b1mbqfjcgx
                    section.data(232).logicalSrcIdx = 231;
                    section.data(232).dtTransOffset = 259;

                    ;% rtB.gfcwzsw34m
                    section.data(233).logicalSrcIdx = 232;
                    section.data(233).dtTransOffset = 262;

                    ;% rtB.laac5xjlbm
                    section.data(234).logicalSrcIdx = 233;
                    section.data(234).dtTransOffset = 266;

                    ;% rtB.hy4u1hiacf
                    section.data(235).logicalSrcIdx = 234;
                    section.data(235).dtTransOffset = 267;

                    ;% rtB.fqqpqgtlkx
                    section.data(236).logicalSrcIdx = 235;
                    section.data(236).dtTransOffset = 268;

                    ;% rtB.dauygg5stf
                    section.data(237).logicalSrcIdx = 236;
                    section.data(237).dtTransOffset = 269;

                    ;% rtB.ieom4l2aca
                    section.data(238).logicalSrcIdx = 237;
                    section.data(238).dtTransOffset = 272;

                    ;% rtB.a4tcgdymxo
                    section.data(239).logicalSrcIdx = 238;
                    section.data(239).dtTransOffset = 275;

                    ;% rtB.k355e5zk3q
                    section.data(240).logicalSrcIdx = 239;
                    section.data(240).dtTransOffset = 278;

                    ;% rtB.cqbxpcl0oz
                    section.data(241).logicalSrcIdx = 240;
                    section.data(241).dtTransOffset = 281;

                    ;% rtB.gdhbqmyg0b
                    section.data(242).logicalSrcIdx = 241;
                    section.data(242).dtTransOffset = 282;

                    ;% rtB.ozxav1l23g
                    section.data(243).logicalSrcIdx = 242;
                    section.data(243).dtTransOffset = 283;

                    ;% rtB.ca23knnadp
                    section.data(244).logicalSrcIdx = 243;
                    section.data(244).dtTransOffset = 284;

                    ;% rtB.jzn0z4pyml
                    section.data(245).logicalSrcIdx = 244;
                    section.data(245).dtTransOffset = 285;

                    ;% rtB.n11ptzoliw
                    section.data(246).logicalSrcIdx = 245;
                    section.data(246).dtTransOffset = 288;

                    ;% rtB.ikhr2twr1o
                    section.data(247).logicalSrcIdx = 246;
                    section.data(247).dtTransOffset = 291;

                    ;% rtB.jfqgnnmqi2
                    section.data(248).logicalSrcIdx = 247;
                    section.data(248).dtTransOffset = 292;

                    ;% rtB.hcdyqjud1p
                    section.data(249).logicalSrcIdx = 248;
                    section.data(249).dtTransOffset = 293;

                    ;% rtB.hmzl0kxb5i
                    section.data(250).logicalSrcIdx = 249;
                    section.data(250).dtTransOffset = 296;

                    ;% rtB.kz1x3kfm3o
                    section.data(251).logicalSrcIdx = 250;
                    section.data(251).dtTransOffset = 299;

                    ;% rtB.dkmxufila5
                    section.data(252).logicalSrcIdx = 251;
                    section.data(252).dtTransOffset = 300;

                    ;% rtB.bg5rx3ttpk
                    section.data(253).logicalSrcIdx = 252;
                    section.data(253).dtTransOffset = 301;

                    ;% rtB.h3gkldsu5p
                    section.data(254).logicalSrcIdx = 253;
                    section.data(254).dtTransOffset = 302;

                    ;% rtB.oiqlexlgvc
                    section.data(255).logicalSrcIdx = 254;
                    section.data(255).dtTransOffset = 303;

                    ;% rtB.cctvh4lyu1
                    section.data(256).logicalSrcIdx = 255;
                    section.data(256).dtTransOffset = 304;

                    ;% rtB.eayvbdphup
                    section.data(257).logicalSrcIdx = 256;
                    section.data(257).dtTransOffset = 305;

                    ;% rtB.hrqm2zvjsf
                    section.data(258).logicalSrcIdx = 257;
                    section.data(258).dtTransOffset = 306;

                    ;% rtB.jpvkqtqg1d
                    section.data(259).logicalSrcIdx = 258;
                    section.data(259).dtTransOffset = 307;

                    ;% rtB.jpo5sph0q1
                    section.data(260).logicalSrcIdx = 259;
                    section.data(260).dtTransOffset = 308;

                    ;% rtB.putja2b5qr
                    section.data(261).logicalSrcIdx = 260;
                    section.data(261).dtTransOffset = 309;

                    ;% rtB.aovhnrymq5
                    section.data(262).logicalSrcIdx = 261;
                    section.data(262).dtTransOffset = 310;

                    ;% rtB.hm01nu4z13
                    section.data(263).logicalSrcIdx = 262;
                    section.data(263).dtTransOffset = 311;

                    ;% rtB.dfam4nj1zr
                    section.data(264).logicalSrcIdx = 263;
                    section.data(264).dtTransOffset = 312;

                    ;% rtB.cd1tlnr0ka
                    section.data(265).logicalSrcIdx = 264;
                    section.data(265).dtTransOffset = 313;

                    ;% rtB.onpisizxqk
                    section.data(266).logicalSrcIdx = 265;
                    section.data(266).dtTransOffset = 314;

                    ;% rtB.ez3px2f12w
                    section.data(267).logicalSrcIdx = 266;
                    section.data(267).dtTransOffset = 315;

                    ;% rtB.axy1wb5dew
                    section.data(268).logicalSrcIdx = 267;
                    section.data(268).dtTransOffset = 316;

                    ;% rtB.jmje0s3ed4
                    section.data(269).logicalSrcIdx = 268;
                    section.data(269).dtTransOffset = 317;

                    ;% rtB.o0tpy5m2a3
                    section.data(270).logicalSrcIdx = 269;
                    section.data(270).dtTransOffset = 318;

                    ;% rtB.huigacutkc
                    section.data(271).logicalSrcIdx = 270;
                    section.data(271).dtTransOffset = 319;

                    ;% rtB.jp1zla2mmw
                    section.data(272).logicalSrcIdx = 271;
                    section.data(272).dtTransOffset = 320;

                    ;% rtB.fbh3yondzh
                    section.data(273).logicalSrcIdx = 272;
                    section.data(273).dtTransOffset = 321;

                    ;% rtB.nshogscuz4
                    section.data(274).logicalSrcIdx = 273;
                    section.data(274).dtTransOffset = 322;

                    ;% rtB.irrpou22a5
                    section.data(275).logicalSrcIdx = 274;
                    section.data(275).dtTransOffset = 323;

                    ;% rtB.ayzdydcyuo
                    section.data(276).logicalSrcIdx = 275;
                    section.data(276).dtTransOffset = 324;

                    ;% rtB.nn3dmihxcr
                    section.data(277).logicalSrcIdx = 276;
                    section.data(277).dtTransOffset = 325;

                    ;% rtB.ib1lbtcpxj
                    section.data(278).logicalSrcIdx = 277;
                    section.data(278).dtTransOffset = 326;

                    ;% rtB.kbgh1p1ypy
                    section.data(279).logicalSrcIdx = 278;
                    section.data(279).dtTransOffset = 327;

                    ;% rtB.dq0jdlm22o
                    section.data(280).logicalSrcIdx = 279;
                    section.data(280).dtTransOffset = 328;

                    ;% rtB.e5dii5jmkf
                    section.data(281).logicalSrcIdx = 280;
                    section.data(281).dtTransOffset = 329;

                    ;% rtB.iw4qe0xhxt
                    section.data(282).logicalSrcIdx = 281;
                    section.data(282).dtTransOffset = 330;

                    ;% rtB.ie0zpjfucm
                    section.data(283).logicalSrcIdx = 282;
                    section.data(283).dtTransOffset = 331;

                    ;% rtB.doyhm1jj3o
                    section.data(284).logicalSrcIdx = 283;
                    section.data(284).dtTransOffset = 332;

                    ;% rtB.evw1t5tqi5
                    section.data(285).logicalSrcIdx = 284;
                    section.data(285).dtTransOffset = 333;

                    ;% rtB.g04kcj5oqt
                    section.data(286).logicalSrcIdx = 285;
                    section.data(286).dtTransOffset = 334;

                    ;% rtB.ojqiuyxzjb
                    section.data(287).logicalSrcIdx = 286;
                    section.data(287).dtTransOffset = 335;

                    ;% rtB.ksgblwhab0
                    section.data(288).logicalSrcIdx = 287;
                    section.data(288).dtTransOffset = 336;

                    ;% rtB.hxr4w1btbv
                    section.data(289).logicalSrcIdx = 288;
                    section.data(289).dtTransOffset = 339;

                    ;% rtB.dbypezaw4s
                    section.data(290).logicalSrcIdx = 289;
                    section.data(290).dtTransOffset = 340;

                    ;% rtB.mm21k3kcs1
                    section.data(291).logicalSrcIdx = 290;
                    section.data(291).dtTransOffset = 341;

                    ;% rtB.bglurjstz2
                    section.data(292).logicalSrcIdx = 291;
                    section.data(292).dtTransOffset = 342;

                    ;% rtB.adxtwyvkd4
                    section.data(293).logicalSrcIdx = 292;
                    section.data(293).dtTransOffset = 343;

                    ;% rtB.hhlzwpbyhq
                    section.data(294).logicalSrcIdx = 293;
                    section.data(294).dtTransOffset = 344;

                    ;% rtB.anlmlhp1oi
                    section.data(295).logicalSrcIdx = 294;
                    section.data(295).dtTransOffset = 345;

                    ;% rtB.nhrxnqfbca
                    section.data(296).logicalSrcIdx = 295;
                    section.data(296).dtTransOffset = 348;

                    ;% rtB.p1raas45by
                    section.data(297).logicalSrcIdx = 296;
                    section.data(297).dtTransOffset = 351;

                    ;% rtB.afjrrpylsm
                    section.data(298).logicalSrcIdx = 297;
                    section.data(298).dtTransOffset = 354;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.mw05jharoi
                    section.data(1).logicalSrcIdx = 298;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.otkalc5z2p
                    section.data(2).logicalSrcIdx = 299;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.k2kdormzza
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

                    ;% rtDW.nfz0kwiflf
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.eszuv5iy0f
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.djzpq524lt.AQHandles
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kirvxvy4xf.AQHandles
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.hhy2tk0i3m.AQHandles
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jlnqrp0yvl.AQHandles
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.hdk00n5n11.AQHandles
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ahjz0uplov.AQHandles
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.cvh0sgytki
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% rtDW.akcpruesae
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.kuolg0hn2t
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.pe2hrrp0ih
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.f5giqq1c3y
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.flzilct0fk
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ggok2cmx54
                    section.data(6).logicalSrcIdx = 14;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.itrg025sja
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.h1wveotks2
                    section.data(8).logicalSrcIdx = 16;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.dmzweexgpn
                    section.data(9).logicalSrcIdx = 17;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.nr3va1ukar
                    section.data(10).logicalSrcIdx = 18;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.dzfiqmdr2q
                    section.data(11).logicalSrcIdx = 19;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.hlym3zi5ic
                    section.data(12).logicalSrcIdx = 20;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.kyztxzj3e4
                    section.data(13).logicalSrcIdx = 21;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.hzb22tg3eg
                    section.data(14).logicalSrcIdx = 22;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.bqzq022trb
                    section.data(15).logicalSrcIdx = 23;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.ouzoemkqym
                    section.data(16).logicalSrcIdx = 24;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.kgaocerixc
                    section.data(17).logicalSrcIdx = 25;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.h5z1xlbccs
                    section.data(18).logicalSrcIdx = 26;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.foetxjdycj
                    section.data(19).logicalSrcIdx = 27;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.mcpnpjmt5i
                    section.data(20).logicalSrcIdx = 28;
                    section.data(20).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.brz0l2zu41
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.d0b3sedt1h
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ke1ctdguiy
                    section.data(3).logicalSrcIdx = 31;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.nlnr1wiohw
                    section.data(4).logicalSrcIdx = 32;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.pc4zeehxvy
                    section.data(5).logicalSrcIdx = 33;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.lf2tg5j2nw.ga1nldhiel
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gnme1gu3zy.ga1nldhiel
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.kpu1x5dwrk.ga1nldhiel
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jxiate0wnc.ga1nldhiel
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.lramtmlkmq.ga1nldhiel
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.pofcv4yf1q.ga1nldhiel
                    section.data(1).logicalSrcIdx = 39;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.mjycmbyayp.ga1nldhiel
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hjybai3dqf.ga1nldhiel
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.flcsttob5qv.ga1nldhiel
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ikzxkzczgl.mcrdgxbsci
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ki5dfllwmd.mcrdgxbsci
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.kn1zy4gjusi.mcrdgxbsci
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


    targMap.checksum0 = 1711510981;
    targMap.checksum1 = 181310340;
    targMap.checksum2 = 3324002518;
    targMap.checksum3 = 151476577;


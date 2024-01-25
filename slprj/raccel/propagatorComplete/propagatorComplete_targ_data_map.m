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
            section.nData     = 114;
            section.data(114)  = dumData; %prealloc

                    ;% rtP.area
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.mDot
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ref
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.thrustingThreshold
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.CompareToConstant_const
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.CompareToConstant_const_nyz535bbbu
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.NormalizeVector_maxzero
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.NormalizeVector_maxzero_pntl1pmm30
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.NormalizeVector_maxzero_hb0qhx1yar
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.AttitudeProfileCustomTracking_primaryAlignment
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.AttitudeProfileCustomTracking_secondaryAlignment
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 12;

                    ;% rtP.AttitudeProfileCustomTracking_secondaryConstraint
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 15;

                    ;% rtP.M_bNm_Y0
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 18;

                    ;% rtP.Constant_Value
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 19;

                    ;% rtP.Constant_Value_pns05g3b55
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 20;

                    ;% rtP.Gain_Gain
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 21;

                    ;% rtP.Gain1_Gain
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 22;

                    ;% rtP.Gain2_Gain
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 23;

                    ;% rtP.Gain_Gain_fkrnrvat52
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 24;

                    ;% rtP.Gain1_Gain_nkhck1ygxr
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 25;

                    ;% rtP.Gain2_Gain_iquz4fnlzi
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 26;

                    ;% rtP.Gain_Gain_mpa02bou1h
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 27;

                    ;% rtP.Gain1_Gain_oerlhbnxof
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 28;

                    ;% rtP.Gain2_Gain_lhluacmlha
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 29;

                    ;% rtP.Gain2_Gain_int0dpavpw
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 30;

                    ;% rtP.Gain_Gain_g15jpqvdyg
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 31;

                    ;% rtP.Gain1_Gain_faqugitdim
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 32;

                    ;% rtP.Gain_Gain_kfeeor2lhw
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 33;

                    ;% rtP.Gain2_Gain_p3jp4v4bbc
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 34;

                    ;% rtP.Gain1_Gain_gbvqsckych
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 35;

                    ;% rtP.Gain_Gain_aa0wcaoaaz
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 36;

                    ;% rtP.Gain1_Gain_epvwxefqmi
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 37;

                    ;% rtP.Gain2_Gain_hhmnogiwlf
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 38;

                    ;% rtP.Bias_Bias
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 39;

                    ;% rtP.Bias1_Bias
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 40;

                    ;% rtP.Bias_Bias_abfrdlc52d
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 41;

                    ;% rtP.Bias1_Bias_hcyhgh541x
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 42;

                    ;% rtP.Gain2_Gain_fw4b3tt5vg
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 43;

                    ;% rtP.Gain_Gain_gfy041jfbg
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 44;

                    ;% rtP.Gain1_Gain_d1qclj2egp
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 45;

                    ;% rtP.Gain_Gain_ky20gmonrh
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 46;

                    ;% rtP.Gain2_Gain_khli3wzwff
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 47;

                    ;% rtP.Gain1_Gain_k1fon0cayn
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 48;

                    ;% rtP.Gain_Gain_lsbmbjfguo
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 49;

                    ;% rtP.Gain1_Gain_dc5430g0dt
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 50;

                    ;% rtP.Gain2_Gain_k1wqp4egyq
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 51;

                    ;% rtP.Bias_Bias_djq3n4uzff
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 52;

                    ;% rtP.Bias1_Bias_dlcxjxahid
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 53;

                    ;% rtP.Gain_Gain_kx3qnhmcxx
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 54;

                    ;% rtP.Gain_Gain_nm01mepo3f
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 55;

                    ;% rtP.Constant_Value_c5ijra1dvs
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 56;

                    ;% rtP.Constant_Value_nknymy1wan
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 57;

                    ;% rtP.Constant_Value_bh2wousvvw
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 58;

                    ;% rtP.Bias_Bias_g0qrwws1na
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 59;

                    ;% rtP.Bias1_Bias_atthryq0zv
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 60;

                    ;% rtP.Constant_Value_hrp2o0rwmd
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 61;

                    ;% rtP.Constant_Value_ibbq1bfjl1
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 62;

                    ;% rtP.Constant_Value_ozvaaxtkzl
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 63;

                    ;% rtP.Gain_Gain_bkh01xyo4j
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 64;

                    ;% rtP.Constant_Value_plvwaiy2qy
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 65;

                    ;% rtP.Constant1_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 66;

                    ;% rtP.Gain2_Gain_b0l1sq1lnj
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 67;

                    ;% rtP.Gain_Gain_dfsvhso0x2
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 68;

                    ;% rtP.Constant_Value_lh1chvuth3
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 69;

                    ;% rtP.Constant1_Value_eyzq52s3pd
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 70;

                    ;% rtP.Gain2_Gain_jkoscwfz0l
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 71;

                    ;% rtP.Constant_Value_c0wdwq4tzn
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 72;

                    ;% rtP.Constant_Value_iapa0kts2j
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 73;

                    ;% rtP.Constant_Value_hsfi4e2uaa
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 74;

                    ;% rtP.Constant3_Value
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 75;

                    ;% rtP.SpacecraftDynamics_startDate
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 76;

                    ;% rtP.SpacecraftDynamics_mass
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 77;

                    ;% rtP.SpacecraftDynamics_emptyMass
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 78;

                    ;% rtP.SpacecraftDynamics_fullMass
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 79;

                    ;% rtP.SpacecraftDynamics_inertia
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 80;

                    ;% rtP.SpacecraftDynamics_emptyInertia
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 89;

                    ;% rtP.SpacecraftDynamics_fullInertia
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 98;

                    ;% rtP.SpacecraftDynamics_semiMajorAxis
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 107;

                    ;% rtP.SpacecraftDynamics_eccentricity
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 108;

                    ;% rtP.SpacecraftDynamics_inclination
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 109;

                    ;% rtP.SpacecraftDynamics_raan
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 110;

                    ;% rtP.SpacecraftDynamics_argPeriapsis
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 111;

                    ;% rtP.SpacecraftDynamics_trueAnomaly
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 112;

                    ;% rtP.SpacecraftDynamics_trueLon
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 113;

                    ;% rtP.SpacecraftDynamics_argLat
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 114;

                    ;% rtP.SpacecraftDynamics_lonPeriapsis
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 115;

                    ;% rtP.SpacecraftDynamics_inertialPosition
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 116;

                    ;% rtP.SpacecraftDynamics_inertialVelocity
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 119;

                    ;% rtP.SpacecraftDynamics_fixedPosition
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 122;

                    ;% rtP.SpacecraftDynamics_fixedVelocity
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 125;

                    ;% rtP.SpacecraftDynamics_attitude
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 128;

                    ;% rtP.SpacecraftDynamics_attitudeRate
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 132;

                    ;% rtP.SpacecraftDynamics_customR
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 135;

                    ;% rtP.SpacecraftDynamics_customF
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 136;

                    ;% rtP.SpacecraftDynamics_customMu
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 137;

                    ;% rtP.SpacecraftDynamics_customJ2
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 138;

                    ;% rtP.SpacecraftDynamics_customOmega
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 139;

                    ;% rtP.SpacecraftDynamics_cbRA
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 140;

                    ;% rtP.SpacecraftDynamics_cbRARate
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 141;

                    ;% rtP.SpacecraftDynamics_cbDec
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 142;

                    ;% rtP.SpacecraftDynamics_cbDecRate
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 143;

                    ;% rtP.SpacecraftDynamics_cbRotAngle
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 144;

                    ;% rtP.SpacecraftDynamics_cbRotRate
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 145;

                    ;% rtP.SpacecraftDynamics_F107ExtrapValue
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 146;

                    ;% rtP.SpacecraftDynamics_MagneticIndexExtrapValue
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 147;

                    ;% rtP.SpacecraftDynamics_fluxFlags
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 148;

                    ;% rtP.SpacecraftDynamics_dragCoeff
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 171;

                    ;% rtP.SpacecraftDynamics_dragArea
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 172;

                    ;% rtP.SpacecraftDynamics_customThirdBodyMu
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 173;

                    ;% rtP.SpacecraftDynamics_fluxPressure
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 174;

                    ;% rtP.Constant_Value_lw5gurrfpk
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 175;

                    ;% rtP.Constant_Value_ln0uq0icxn
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 176;

                    ;% rtP.Constant_Value_l03ciegqnh
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 177;

                    ;% rtP.Constant_Value_mmyzvxcwyh
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 178;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.jq4zzibyuf.Constant_Value
                    section.data(1).logicalSrcIdx = 114;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.iim0uzjq2f.Constant_Value
                    section.data(1).logicalSrcIdx = 115;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.azhxucr5v2.Constant_Value
                    section.data(1).logicalSrcIdx = 116;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.lhwjkdp01r.Constant_Value
                    section.data(1).logicalSrcIdx = 117;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.p2jn3lrd2r.Constant_Value
                    section.data(1).logicalSrcIdx = 118;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.khi00wnpar.Constant_Value
                    section.data(1).logicalSrcIdx = 119;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.pazq3m0j3m.Constant_Value
                    section.data(1).logicalSrcIdx = 120;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.k4vsitdlsd.Constant_Value
                    section.data(1).logicalSrcIdx = 121;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.l3x3mdhan1r.Constant_Value
                    section.data(1).logicalSrcIdx = 122;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.bngxmawtie.Constant_Value
                    section.data(1).logicalSrcIdx = 123;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.bgq2api2xe.Constant_Value
                    section.data(1).logicalSrcIdx = 124;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.lfxaatuckyk.Constant_Value
                    section.data(1).logicalSrcIdx = 125;
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
            section.nData     = 299;
            section.data(299)  = dumData; %prealloc

                    ;% rtB.i1gdupwxmv
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.dga5uve4em
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.oroad0ht0q
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.hmmusp0g1o
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtB.h5ch5oexhd
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 13;

                    ;% rtB.dve3qulja2
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtB.fqb0csb24q
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 17;

                    ;% rtB.jvs22ygnlb
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 20;

                    ;% rtB.bf0fs5uttf
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 21;

                    ;% rtB.jp4wysmwga
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 22;

                    ;% rtB.p0dt0zhwqq
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 23;

                    ;% rtB.bg4fufsmy1
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 24;

                    ;% rtB.ixoaxw0z3z
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 28;

                    ;% rtB.fj3nbz2brp
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 31;

                    ;% rtB.lf04lkbhu2
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 32;

                    ;% rtB.acj4h4hesu
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 33;

                    ;% rtB.mvf1ryalzv
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 34;

                    ;% rtB.jis02iihtm
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 35;

                    ;% rtB.eezuitvkf2
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 36;

                    ;% rtB.al1oahzn31
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 37;

                    ;% rtB.laettbhgce
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 38;

                    ;% rtB.dxg13zvbtq
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 39;

                    ;% rtB.gdquahf0f2
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 40;

                    ;% rtB.brmutb1g1u
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 41;

                    ;% rtB.fymi0gmyip
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 42;

                    ;% rtB.d5xucg4nfl
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 43;

                    ;% rtB.nieicv1rhk
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 44;

                    ;% rtB.fisaz5rh1d
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 45;

                    ;% rtB.cbatohx55z
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 46;

                    ;% rtB.igelp4q2vf
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 47;

                    ;% rtB.g2a20n1njt
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 48;

                    ;% rtB.fnimcmg5s3
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 49;

                    ;% rtB.j0rfilwsfi
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 50;

                    ;% rtB.gawqjwnyv5
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 51;

                    ;% rtB.h2pfhvsedk
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 52;

                    ;% rtB.fu5mr4vpex
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 53;

                    ;% rtB.lkjfpajzl3
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 54;

                    ;% rtB.m5up2n1nbo
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 55;

                    ;% rtB.jmgq2pwzfq
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 56;

                    ;% rtB.g4niedc4jf
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 57;

                    ;% rtB.icur5un0um
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 58;

                    ;% rtB.pjczvjoh14
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 59;

                    ;% rtB.fhdzfrquqm
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 60;

                    ;% rtB.eft0lj40ww
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 61;

                    ;% rtB.a1k1ptiumf
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 62;

                    ;% rtB.meo1lsqulq
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 63;

                    ;% rtB.dzwjok5d2k
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 64;

                    ;% rtB.lfzqhovs4q
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 65;

                    ;% rtB.byibualgjm
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 66;

                    ;% rtB.mesawx2zut
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 67;

                    ;% rtB.hjewv5w14n
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 68;

                    ;% rtB.pvaph1jxlp
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 69;

                    ;% rtB.nl1z4fd3ri
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 70;

                    ;% rtB.lasrw5ukka
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 71;

                    ;% rtB.iip1hriuva
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 72;

                    ;% rtB.mpkbaajjfa
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 73;

                    ;% rtB.mgnz2gf0nd
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 74;

                    ;% rtB.chxdayrvyc
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 75;

                    ;% rtB.j5rgjgk55e
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 76;

                    ;% rtB.j3m24zp1b2
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 77;

                    ;% rtB.fotwyiilg0
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 78;

                    ;% rtB.dgbrfjrsnf
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 79;

                    ;% rtB.ntuzztetrw
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 80;

                    ;% rtB.hxnnbjicyn
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 81;

                    ;% rtB.blzjelfrwf
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 82;

                    ;% rtB.nhs31lz5yi
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 83;

                    ;% rtB.mlh0r04pcn
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 84;

                    ;% rtB.m0smnb2oey
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 85;

                    ;% rtB.dmaqam0v0h
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 86;

                    ;% rtB.jopolvtd1q
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 87;

                    ;% rtB.mqkkf3g1ci
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 88;

                    ;% rtB.n2b3wgfs0b
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 89;

                    ;% rtB.dfev1qf3y5
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 90;

                    ;% rtB.l3kopglscf
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 91;

                    ;% rtB.bw4dogjhdp
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 92;

                    ;% rtB.bhi3oqiriq
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 93;

                    ;% rtB.bmv5sjbgiy
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 94;

                    ;% rtB.pxr5jc1icn
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 95;

                    ;% rtB.pwxw3btyt3
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 96;

                    ;% rtB.kwxnygmwo4
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 97;

                    ;% rtB.g5vqg0l4d3
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 98;

                    ;% rtB.algyw44cxb
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 99;

                    ;% rtB.dw5fo1tslt
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 100;

                    ;% rtB.geezzyxovx
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 101;

                    ;% rtB.iavnjulq1p
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 102;

                    ;% rtB.g152ybx4et
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 103;

                    ;% rtB.m2biuhqq4b
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 104;

                    ;% rtB.ecfsbxh50q
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 105;

                    ;% rtB.hw3bubstlq
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 106;

                    ;% rtB.aocyydnhyx
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 107;

                    ;% rtB.btadruhgyg
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 108;

                    ;% rtB.oyrhhuf4qk
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 109;

                    ;% rtB.gmkpt4ng2s
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 112;

                    ;% rtB.lguqhr3eed
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 113;

                    ;% rtB.omhh14un54
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 114;

                    ;% rtB.iw3dewpgzo
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 115;

                    ;% rtB.ctzop00roh
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 116;

                    ;% rtB.gbfdgx02zs
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 117;

                    ;% rtB.paao34dbge
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 118;

                    ;% rtB.jaody4hpx1
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 119;

                    ;% rtB.nbej345zml
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 120;

                    ;% rtB.nslfaccjkc
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 121;

                    ;% rtB.hlmoxwhlpo
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 122;

                    ;% rtB.jwb0ahpfau
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 123;

                    ;% rtB.kl1dujwoxs
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 124;

                    ;% rtB.eakab5nckm
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 125;

                    ;% rtB.os1djyx3gq
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 126;

                    ;% rtB.dglowvh22n
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 127;

                    ;% rtB.jbnkmaznx1
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 128;

                    ;% rtB.ilwyp1idaz
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 129;

                    ;% rtB.fsobn51cwo
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 130;

                    ;% rtB.nmhsnnyyjb
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 131;

                    ;% rtB.lc0hygznhb
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 132;

                    ;% rtB.mwkyl1qnsr
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 133;

                    ;% rtB.egepo0qoxn
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 134;

                    ;% rtB.f2tagcydxx
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 135;

                    ;% rtB.a4dmsmw4dd
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 136;

                    ;% rtB.mn52oa3uc3
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 137;

                    ;% rtB.cgtdzhnvtm
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 138;

                    ;% rtB.piqzipmsmc
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 139;

                    ;% rtB.kadajiqlk2
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 140;

                    ;% rtB.gut2lsy3r3
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 141;

                    ;% rtB.bowxeudhcu
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 142;

                    ;% rtB.nceipi1mwm
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 143;

                    ;% rtB.gruwqijb1i
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 144;

                    ;% rtB.lliptltvxv
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 145;

                    ;% rtB.lcks1hemgj
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 146;

                    ;% rtB.lopw34lvpy
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 147;

                    ;% rtB.em1armpiip
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 148;

                    ;% rtB.htgin2wwsm
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 149;

                    ;% rtB.glweuu0jof
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 150;

                    ;% rtB.ehfpacwyjv
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 151;

                    ;% rtB.ox0cvbvwwa
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 152;

                    ;% rtB.docpe423pw
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 153;

                    ;% rtB.cabu5lfoiu
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 154;

                    ;% rtB.a3mxf5yduh
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 155;

                    ;% rtB.hjsxgh2rxw
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 156;

                    ;% rtB.g20f0tyemp
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 157;

                    ;% rtB.eyooagp31g
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 158;

                    ;% rtB.e40sm1esb2
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 159;

                    ;% rtB.fbluqzqpjw
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 160;

                    ;% rtB.dw4tvopbpl
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 161;

                    ;% rtB.crbkqa4zcg
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 162;

                    ;% rtB.bzdn302vol
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 163;

                    ;% rtB.gh5tcqmmg2
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 164;

                    ;% rtB.huximy5ggo
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 165;

                    ;% rtB.j5yfzbfhkx
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 166;

                    ;% rtB.cfpt44ankl
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 167;

                    ;% rtB.ix4zrpudlv
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 168;

                    ;% rtB.ljosvnlw4m
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 169;

                    ;% rtB.kbuzajo4k4
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 170;

                    ;% rtB.ea3joyevwd
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 171;

                    ;% rtB.bhu2xuh1yz
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 172;

                    ;% rtB.k4qexhdxn1
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 175;

                    ;% rtB.gd4e0o2c2n
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 176;

                    ;% rtB.b0nxk2epl4
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 177;

                    ;% rtB.fyxniedijj
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 178;

                    ;% rtB.id1wdzpi4i
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 179;

                    ;% rtB.osslghchcb
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 180;

                    ;% rtB.d31av4qw31
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 181;

                    ;% rtB.hwj20d3bno
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 182;

                    ;% rtB.el0adgnog1
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 183;

                    ;% rtB.hy5wnoloht
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 184;

                    ;% rtB.kfcou4bvza
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 185;

                    ;% rtB.dignlydsoz
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 186;

                    ;% rtB.apg0lfybz1
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 189;

                    ;% rtB.oeuiuc0rml
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 190;

                    ;% rtB.gvuzrrlgxw
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 191;

                    ;% rtB.congrphuyl
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 192;

                    ;% rtB.pctmp0afbx
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 193;

                    ;% rtB.m4kkl4ufjq
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 194;

                    ;% rtB.p1f1e3cdzh
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 195;

                    ;% rtB.fkqjxvrclw
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 198;

                    ;% rtB.bw45iqqgvl
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 199;

                    ;% rtB.fdiv1m4ppv
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 200;

                    ;% rtB.igvpzctkst
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 201;

                    ;% rtB.cm4esdumwi
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 202;

                    ;% rtB.g1rck4njgs
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 203;

                    ;% rtB.a4vdkamzyo
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 204;

                    ;% rtB.iahogspbv0
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 205;

                    ;% rtB.poi0qfbtfo
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 206;

                    ;% rtB.kcvwsci02p
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 207;

                    ;% rtB.ahqfyi5siw
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 208;

                    ;% rtB.nvrevwa3no
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 209;

                    ;% rtB.iz2unhnnvm
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 210;

                    ;% rtB.bfoonghqhn
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 211;

                    ;% rtB.lznbj03k3c
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 212;

                    ;% rtB.khln1tu5lr
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 213;

                    ;% rtB.ehb0gpswkj
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 214;

                    ;% rtB.izfh0vk2px
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 215;

                    ;% rtB.nd0dstt5ik
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 216;

                    ;% rtB.exthhhc1td
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 217;

                    ;% rtB.g3ilclrl2u
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 218;

                    ;% rtB.ae4zf0ag3n
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 219;

                    ;% rtB.gup3rd5lxw
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 220;

                    ;% rtB.m4je0ufogy
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 221;

                    ;% rtB.o2x0gibmio
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 222;

                    ;% rtB.hfmydjiw53
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 223;

                    ;% rtB.biiv5ksp0r
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 224;

                    ;% rtB.gxyluj3lik
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 225;

                    ;% rtB.jmbstbx22u
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 226;

                    ;% rtB.g2dk3vwizf
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 227;

                    ;% rtB.pe4px3w4eb
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 228;

                    ;% rtB.p3mjwuaxhd
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 229;

                    ;% rtB.czkyqqofo0
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 230;

                    ;% rtB.kbxzvlztyd
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 231;

                    ;% rtB.i2cow4avdn
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 232;

                    ;% rtB.nek3egkkpc
                    section.data(208).logicalSrcIdx = 207;
                    section.data(208).dtTransOffset = 233;

                    ;% rtB.krv2csy3hb
                    section.data(209).logicalSrcIdx = 208;
                    section.data(209).dtTransOffset = 234;

                    ;% rtB.cxb5fcymvn
                    section.data(210).logicalSrcIdx = 209;
                    section.data(210).dtTransOffset = 235;

                    ;% rtB.c1csrsuck1
                    section.data(211).logicalSrcIdx = 210;
                    section.data(211).dtTransOffset = 236;

                    ;% rtB.o50igbierp
                    section.data(212).logicalSrcIdx = 211;
                    section.data(212).dtTransOffset = 237;

                    ;% rtB.es1g3iquza
                    section.data(213).logicalSrcIdx = 212;
                    section.data(213).dtTransOffset = 238;

                    ;% rtB.ghcfxitfo5
                    section.data(214).logicalSrcIdx = 213;
                    section.data(214).dtTransOffset = 239;

                    ;% rtB.ndll0vzw51
                    section.data(215).logicalSrcIdx = 214;
                    section.data(215).dtTransOffset = 240;

                    ;% rtB.k00n2fvjcp
                    section.data(216).logicalSrcIdx = 215;
                    section.data(216).dtTransOffset = 241;

                    ;% rtB.ayoaoq4qke
                    section.data(217).logicalSrcIdx = 216;
                    section.data(217).dtTransOffset = 242;

                    ;% rtB.p1mt4d4lqw
                    section.data(218).logicalSrcIdx = 217;
                    section.data(218).dtTransOffset = 243;

                    ;% rtB.bq3ac2ejs1
                    section.data(219).logicalSrcIdx = 218;
                    section.data(219).dtTransOffset = 244;

                    ;% rtB.fzg5vrlob2
                    section.data(220).logicalSrcIdx = 219;
                    section.data(220).dtTransOffset = 245;

                    ;% rtB.ipamocjtp5
                    section.data(221).logicalSrcIdx = 220;
                    section.data(221).dtTransOffset = 246;

                    ;% rtB.p5qkzgyoui
                    section.data(222).logicalSrcIdx = 221;
                    section.data(222).dtTransOffset = 247;

                    ;% rtB.o14k0syu0t
                    section.data(223).logicalSrcIdx = 222;
                    section.data(223).dtTransOffset = 248;

                    ;% rtB.c15nat5wlb
                    section.data(224).logicalSrcIdx = 223;
                    section.data(224).dtTransOffset = 249;

                    ;% rtB.a2nehhwcyt
                    section.data(225).logicalSrcIdx = 224;
                    section.data(225).dtTransOffset = 250;

                    ;% rtB.clluii5k4r
                    section.data(226).logicalSrcIdx = 225;
                    section.data(226).dtTransOffset = 251;

                    ;% rtB.jtm20p3hzi
                    section.data(227).logicalSrcIdx = 226;
                    section.data(227).dtTransOffset = 252;

                    ;% rtB.pk5w14pzrn
                    section.data(228).logicalSrcIdx = 227;
                    section.data(228).dtTransOffset = 253;

                    ;% rtB.b03rarcdmq
                    section.data(229).logicalSrcIdx = 228;
                    section.data(229).dtTransOffset = 254;

                    ;% rtB.mjsbtbhsim
                    section.data(230).logicalSrcIdx = 229;
                    section.data(230).dtTransOffset = 255;

                    ;% rtB.nsovsetmi4
                    section.data(231).logicalSrcIdx = 230;
                    section.data(231).dtTransOffset = 256;

                    ;% rtB.oma1tfw5tf
                    section.data(232).logicalSrcIdx = 231;
                    section.data(232).dtTransOffset = 257;

                    ;% rtB.dikyeoa1sl
                    section.data(233).logicalSrcIdx = 232;
                    section.data(233).dtTransOffset = 258;

                    ;% rtB.cq5px5e2vv
                    section.data(234).logicalSrcIdx = 233;
                    section.data(234).dtTransOffset = 261;

                    ;% rtB.itjtebuhln
                    section.data(235).logicalSrcIdx = 234;
                    section.data(235).dtTransOffset = 265;

                    ;% rtB.ov2djkilpt
                    section.data(236).logicalSrcIdx = 235;
                    section.data(236).dtTransOffset = 266;

                    ;% rtB.cmnnpvygtl
                    section.data(237).logicalSrcIdx = 236;
                    section.data(237).dtTransOffset = 267;

                    ;% rtB.kudzc132rw
                    section.data(238).logicalSrcIdx = 237;
                    section.data(238).dtTransOffset = 268;

                    ;% rtB.gwno0h0ad0
                    section.data(239).logicalSrcIdx = 238;
                    section.data(239).dtTransOffset = 271;

                    ;% rtB.ccgjqwq00r
                    section.data(240).logicalSrcIdx = 239;
                    section.data(240).dtTransOffset = 274;

                    ;% rtB.mhwydlezwh
                    section.data(241).logicalSrcIdx = 240;
                    section.data(241).dtTransOffset = 277;

                    ;% rtB.mxgn531rcl
                    section.data(242).logicalSrcIdx = 241;
                    section.data(242).dtTransOffset = 280;

                    ;% rtB.pmv4ecy5zz
                    section.data(243).logicalSrcIdx = 242;
                    section.data(243).dtTransOffset = 281;

                    ;% rtB.ljatzgyper
                    section.data(244).logicalSrcIdx = 243;
                    section.data(244).dtTransOffset = 282;

                    ;% rtB.pigzm5qj1u
                    section.data(245).logicalSrcIdx = 244;
                    section.data(245).dtTransOffset = 283;

                    ;% rtB.canhkothbr
                    section.data(246).logicalSrcIdx = 245;
                    section.data(246).dtTransOffset = 284;

                    ;% rtB.btbmowyvpj
                    section.data(247).logicalSrcIdx = 246;
                    section.data(247).dtTransOffset = 287;

                    ;% rtB.h1melgebni
                    section.data(248).logicalSrcIdx = 247;
                    section.data(248).dtTransOffset = 290;

                    ;% rtB.lslovmufsj
                    section.data(249).logicalSrcIdx = 248;
                    section.data(249).dtTransOffset = 291;

                    ;% rtB.a3ighfvleh
                    section.data(250).logicalSrcIdx = 249;
                    section.data(250).dtTransOffset = 292;

                    ;% rtB.f4v0hwmwl1
                    section.data(251).logicalSrcIdx = 250;
                    section.data(251).dtTransOffset = 295;

                    ;% rtB.eua3hgkuqw
                    section.data(252).logicalSrcIdx = 251;
                    section.data(252).dtTransOffset = 298;

                    ;% rtB.gbpehgsgh2
                    section.data(253).logicalSrcIdx = 252;
                    section.data(253).dtTransOffset = 299;

                    ;% rtB.fse0xextas
                    section.data(254).logicalSrcIdx = 253;
                    section.data(254).dtTransOffset = 300;

                    ;% rtB.dbndv1qsaf
                    section.data(255).logicalSrcIdx = 254;
                    section.data(255).dtTransOffset = 301;

                    ;% rtB.hkemz4k3jv
                    section.data(256).logicalSrcIdx = 255;
                    section.data(256).dtTransOffset = 302;

                    ;% rtB.mjy2c1ieko
                    section.data(257).logicalSrcIdx = 256;
                    section.data(257).dtTransOffset = 303;

                    ;% rtB.ekgziriw0z
                    section.data(258).logicalSrcIdx = 257;
                    section.data(258).dtTransOffset = 304;

                    ;% rtB.luhuz1y0pa
                    section.data(259).logicalSrcIdx = 258;
                    section.data(259).dtTransOffset = 305;

                    ;% rtB.jwrsvb1440
                    section.data(260).logicalSrcIdx = 259;
                    section.data(260).dtTransOffset = 306;

                    ;% rtB.c50wznxnuu
                    section.data(261).logicalSrcIdx = 260;
                    section.data(261).dtTransOffset = 307;

                    ;% rtB.kiyhu3ma0g
                    section.data(262).logicalSrcIdx = 261;
                    section.data(262).dtTransOffset = 308;

                    ;% rtB.bjydpcizvi
                    section.data(263).logicalSrcIdx = 262;
                    section.data(263).dtTransOffset = 309;

                    ;% rtB.l1ngpg1edp
                    section.data(264).logicalSrcIdx = 263;
                    section.data(264).dtTransOffset = 310;

                    ;% rtB.enyjgablpy
                    section.data(265).logicalSrcIdx = 264;
                    section.data(265).dtTransOffset = 311;

                    ;% rtB.i1atw1qe0l
                    section.data(266).logicalSrcIdx = 265;
                    section.data(266).dtTransOffset = 312;

                    ;% rtB.k00ajdwzvi
                    section.data(267).logicalSrcIdx = 266;
                    section.data(267).dtTransOffset = 313;

                    ;% rtB.pwqzgmz2tj
                    section.data(268).logicalSrcIdx = 267;
                    section.data(268).dtTransOffset = 314;

                    ;% rtB.c2npgjvga0
                    section.data(269).logicalSrcIdx = 268;
                    section.data(269).dtTransOffset = 315;

                    ;% rtB.kez0ugcrs0
                    section.data(270).logicalSrcIdx = 269;
                    section.data(270).dtTransOffset = 316;

                    ;% rtB.lskzsfnyns
                    section.data(271).logicalSrcIdx = 270;
                    section.data(271).dtTransOffset = 317;

                    ;% rtB.fg3nxicf2i
                    section.data(272).logicalSrcIdx = 271;
                    section.data(272).dtTransOffset = 318;

                    ;% rtB.ooh1cadzi5
                    section.data(273).logicalSrcIdx = 272;
                    section.data(273).dtTransOffset = 319;

                    ;% rtB.f44ipg1ur0
                    section.data(274).logicalSrcIdx = 273;
                    section.data(274).dtTransOffset = 320;

                    ;% rtB.kkv2b3yior
                    section.data(275).logicalSrcIdx = 274;
                    section.data(275).dtTransOffset = 321;

                    ;% rtB.bxqqxtzuxt
                    section.data(276).logicalSrcIdx = 275;
                    section.data(276).dtTransOffset = 322;

                    ;% rtB.pbeueed2ng
                    section.data(277).logicalSrcIdx = 276;
                    section.data(277).dtTransOffset = 323;

                    ;% rtB.kdx1qa01wj
                    section.data(278).logicalSrcIdx = 277;
                    section.data(278).dtTransOffset = 324;

                    ;% rtB.iht2w3ghnc
                    section.data(279).logicalSrcIdx = 278;
                    section.data(279).dtTransOffset = 325;

                    ;% rtB.mpeaonrxvr
                    section.data(280).logicalSrcIdx = 279;
                    section.data(280).dtTransOffset = 326;

                    ;% rtB.dmedi11jmf
                    section.data(281).logicalSrcIdx = 280;
                    section.data(281).dtTransOffset = 327;

                    ;% rtB.fiboaixvje
                    section.data(282).logicalSrcIdx = 281;
                    section.data(282).dtTransOffset = 328;

                    ;% rtB.mia3lzsnht
                    section.data(283).logicalSrcIdx = 282;
                    section.data(283).dtTransOffset = 329;

                    ;% rtB.acueu1fhlu
                    section.data(284).logicalSrcIdx = 283;
                    section.data(284).dtTransOffset = 330;

                    ;% rtB.lnqzfviuoy
                    section.data(285).logicalSrcIdx = 284;
                    section.data(285).dtTransOffset = 331;

                    ;% rtB.c0gwhqfxol
                    section.data(286).logicalSrcIdx = 285;
                    section.data(286).dtTransOffset = 332;

                    ;% rtB.ikcevoxr4b
                    section.data(287).logicalSrcIdx = 286;
                    section.data(287).dtTransOffset = 333;

                    ;% rtB.flrignulms
                    section.data(288).logicalSrcIdx = 287;
                    section.data(288).dtTransOffset = 334;

                    ;% rtB.mml3u50iev
                    section.data(289).logicalSrcIdx = 288;
                    section.data(289).dtTransOffset = 335;

                    ;% rtB.gnoip5fbwb
                    section.data(290).logicalSrcIdx = 289;
                    section.data(290).dtTransOffset = 338;

                    ;% rtB.nv0ask5hgo
                    section.data(291).logicalSrcIdx = 290;
                    section.data(291).dtTransOffset = 339;

                    ;% rtB.lpoqde35x5
                    section.data(292).logicalSrcIdx = 291;
                    section.data(292).dtTransOffset = 340;

                    ;% rtB.pqp513dsef
                    section.data(293).logicalSrcIdx = 292;
                    section.data(293).dtTransOffset = 341;

                    ;% rtB.nx0f4e5b5g
                    section.data(294).logicalSrcIdx = 293;
                    section.data(294).dtTransOffset = 342;

                    ;% rtB.jv1m44ghwg
                    section.data(295).logicalSrcIdx = 294;
                    section.data(295).dtTransOffset = 343;

                    ;% rtB.pdtl1hmtz4
                    section.data(296).logicalSrcIdx = 295;
                    section.data(296).dtTransOffset = 344;

                    ;% rtB.kodulhrduv
                    section.data(297).logicalSrcIdx = 296;
                    section.data(297).dtTransOffset = 347;

                    ;% rtB.a4nzpbifls
                    section.data(298).logicalSrcIdx = 297;
                    section.data(298).dtTransOffset = 350;

                    ;% rtB.nid0rlczhv
                    section.data(299).logicalSrcIdx = 298;
                    section.data(299).dtTransOffset = 353;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtB.ohiivs4pv5
                    section.data(1).logicalSrcIdx = 299;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.dzsozrxxtr
                    section.data(2).logicalSrcIdx = 300;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.bmnjmdzbfg
                    section.data(3).logicalSrcIdx = 301;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ii1deoyvuv
                    section.data(4).logicalSrcIdx = 302;
                    section.data(4).dtTransOffset = 3;

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

                    ;% rtDW.mz3ujdnhdi
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.brtwu1qgh5
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.ptfgkkfyx2.AQHandles
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jcuxltf0li.AQHandles
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kou2zo1etl.AQHandles
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.aiet4ledb1
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtDW.iiz2sepanf
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.m1msoix5n5
                    section.data(2).logicalSrcIdx = 7;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.g2lng1ny0m
                    section.data(3).logicalSrcIdx = 8;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ftxygppz3q
                    section.data(4).logicalSrcIdx = 9;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.lugp1oo5al
                    section.data(5).logicalSrcIdx = 10;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.oywob1ksb4
                    section.data(6).logicalSrcIdx = 11;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.omqzxc4eeh
                    section.data(7).logicalSrcIdx = 12;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.hm23vis0tn
                    section.data(8).logicalSrcIdx = 13;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.cumdqvtfo3
                    section.data(9).logicalSrcIdx = 14;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.owjad4jwxk
                    section.data(10).logicalSrcIdx = 15;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.hfy1j41vzc
                    section.data(11).logicalSrcIdx = 16;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ajuavqjsaw
                    section.data(12).logicalSrcIdx = 17;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.hscrj0jxia
                    section.data(13).logicalSrcIdx = 18;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.hoopfaisgo
                    section.data(14).logicalSrcIdx = 19;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.av02raukfc
                    section.data(15).logicalSrcIdx = 20;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.bbzbpxlysv
                    section.data(16).logicalSrcIdx = 21;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.hifcsg5mrr
                    section.data(17).logicalSrcIdx = 22;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.aptstkvao3
                    section.data(18).logicalSrcIdx = 23;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.mv2xcc3rk3
                    section.data(19).logicalSrcIdx = 24;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.nobxmq1veb
                    section.data(20).logicalSrcIdx = 25;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.heyw0zfkr1
                    section.data(21).logicalSrcIdx = 26;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.oyajkldlnf
                    section.data(22).logicalSrcIdx = 27;
                    section.data(22).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtDW.hfidg3r4zu
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.oimusvef0p
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.l1cbemf4kw
                    section.data(3).logicalSrcIdx = 30;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gagixdjljm
                    section.data(4).logicalSrcIdx = 31;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.oc1pyb3rxo
                    section.data(5).logicalSrcIdx = 32;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.kd3jx5f4sh
                    section.data(6).logicalSrcIdx = 33;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.g4my2sec0s
                    section.data(7).logicalSrcIdx = 34;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jq4zzibyuf.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.iim0uzjq2f.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.azhxucr5v2.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.lhwjkdp01r.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.p2jn3lrd2r.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 39;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.khi00wnpar.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.pazq3m0j3m.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.k4vsitdlsd.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.l3x3mdhan1r.n2hrtd2tpt
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.bngxmawtie.feqk14z4ht
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.bgq2api2xe.feqk14z4ht
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.lfxaatuckyk.feqk14z4ht
                    section.data(1).logicalSrcIdx = 46;
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


    targMap.checksum0 = 801017077;
    targMap.checksum1 = 2912609470;
    targMap.checksum2 = 2425025980;
    targMap.checksum3 = 479647457;


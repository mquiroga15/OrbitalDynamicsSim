    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
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
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 51;
            section.data(51)  = dumData; %prealloc

                    ;% rtP.area
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.initMass
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ref
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.thrust
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.NormalizeVector_maxzero
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.NormalizeVector_maxzero_pntl1pmm30
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.NormalizeVector_maxzero_afn2dyubdl
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.SpacecraftDynamics_startDate
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.SpacecraftDynamics_mass
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.SpacecraftDynamics_emptyMass
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.SpacecraftDynamics_fullMass
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.SpacecraftDynamics_inertia
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.SpacecraftDynamics_emptyInertia
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 20;

                    ;% rtP.SpacecraftDynamics_fullInertia
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 29;

                    ;% rtP.SpacecraftDynamics_semiMajorAxis
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 38;

                    ;% rtP.SpacecraftDynamics_eccentricity
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 39;

                    ;% rtP.SpacecraftDynamics_inclination
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 40;

                    ;% rtP.SpacecraftDynamics_raan
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 41;

                    ;% rtP.SpacecraftDynamics_argPeriapsis
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 42;

                    ;% rtP.SpacecraftDynamics_trueAnomaly
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 43;

                    ;% rtP.SpacecraftDynamics_trueLon
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 44;

                    ;% rtP.SpacecraftDynamics_argLat
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 45;

                    ;% rtP.SpacecraftDynamics_lonPeriapsis
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 46;

                    ;% rtP.SpacecraftDynamics_inertialPosition
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 47;

                    ;% rtP.SpacecraftDynamics_inertialVelocity
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 50;

                    ;% rtP.SpacecraftDynamics_fixedPosition
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 53;

                    ;% rtP.SpacecraftDynamics_fixedVelocity
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 56;

                    ;% rtP.SpacecraftDynamics_attitude
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 59;

                    ;% rtP.SpacecraftDynamics_attitudeRate
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 63;

                    ;% rtP.SpacecraftDynamics_customR
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 66;

                    ;% rtP.SpacecraftDynamics_customF
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 67;

                    ;% rtP.SpacecraftDynamics_customMu
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 68;

                    ;% rtP.SpacecraftDynamics_customJ2
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 69;

                    ;% rtP.SpacecraftDynamics_customOmega
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 70;

                    ;% rtP.SpacecraftDynamics_cbRA
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 71;

                    ;% rtP.SpacecraftDynamics_cbRARate
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 72;

                    ;% rtP.SpacecraftDynamics_cbDec
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 73;

                    ;% rtP.SpacecraftDynamics_cbDecRate
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 74;

                    ;% rtP.SpacecraftDynamics_cbRotAngle
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 75;

                    ;% rtP.SpacecraftDynamics_cbRotRate
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 76;

                    ;% rtP.SpacecraftDynamics_F107ExtrapValue
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 77;

                    ;% rtP.SpacecraftDynamics_MagneticIndexExtrapValue
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 78;

                    ;% rtP.SpacecraftDynamics_fluxFlags
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 79;

                    ;% rtP.SpacecraftDynamics_dragCoeff
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 102;

                    ;% rtP.SpacecraftDynamics_dragArea
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 103;

                    ;% rtP.SpacecraftDynamics_customThirdBodyMu
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 104;

                    ;% rtP.SpacecraftDynamics_fluxPressure
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 105;

                    ;% rtP.Burn_Value
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 106;

                    ;% rtP.Constant_Value
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 107;

                    ;% rtP.Constant_Value_ln0uq0icxn
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 108;

                    ;% rtP.Constant_Value_pnqibv1hlu
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 109;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
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
            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtB.gws1dy0r5h
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.i55c2f2ohg
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.g5bjapwpnv
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.dp0ykzxsqj
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtB.jo5kxmwsrg
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 11;

                    ;% rtB.dl1iix2aol
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtB.cm2sh5gwjs
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 17;

                    ;% rtB.idx0fxvvk3
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtB.mfuo45igdq
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 19;

                    ;% rtB.d3trp0rw53
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

                    ;% rtB.g34dv5hrtq
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 21;

                    ;% rtB.epczetk5lz
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 25;

                    ;% rtB.dclql12erk
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 28;

                    ;% rtB.hatpfo3hlm
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 31;

                    ;% rtB.lyaqu2ph4w
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 32;

                    ;% rtB.mi1sjd5xhd
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 35;

                    ;% rtB.axt2x3q3hy
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 38;

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
        nTotSects     = 4;
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

                    ;% rtDW.h3cflltm3q
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.f0h4bwqduk
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.chu05kbpxu.AQHandles
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.czhwoklxpu.AQHandles
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.j4pv5v0dny.AQHandles
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ovdng33q0b.AQHandles
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.iwpwwackcm.AQHandles
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.lbrqpwfmha
                    section.data(1).logicalSrcIdx = 7;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mjolfyo1k3
                    section.data(2).logicalSrcIdx = 8;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.pyb2cpctgm
                    section.data(3).logicalSrcIdx = 9;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.jdbvpmwjyw
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nbxd2gjju2
                    section.data(2).logicalSrcIdx = 11;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.irz00m5icq
                    section.data(3).logicalSrcIdx = 12;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.mojmy2zhqz
                    section.data(4).logicalSrcIdx = 13;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
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


    targMap.checksum0 = 652227924;
    targMap.checksum1 = 3388059650;
    targMap.checksum2 = 905212488;
    targMap.checksum3 = 4246678396;


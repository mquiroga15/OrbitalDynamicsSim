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
            section.nData     = 63;
            section.data(63)  = dumData; %prealloc

                    ;% rtP.area
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.burnOverride
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.initMass
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.mDot
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ref
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.thrust
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.thrustingThreshold
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.NormalizeVector_maxzero
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.NormalizeVector1_maxzero
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.NormalizeVector_maxzero_jpxndxsk21
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.Constant_Value
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.SpacecraftDynamics_startDate
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.SpacecraftDynamics_mass
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.SpacecraftDynamics_emptyMass
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.SpacecraftDynamics_fullMass
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.SpacecraftDynamics_inertia
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.SpacecraftDynamics_emptyInertia
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 24;

                    ;% rtP.SpacecraftDynamics_fullInertia
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 33;

                    ;% rtP.SpacecraftDynamics_semiMajorAxis
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 42;

                    ;% rtP.SpacecraftDynamics_eccentricity
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 43;

                    ;% rtP.SpacecraftDynamics_inclination
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 44;

                    ;% rtP.SpacecraftDynamics_raan
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 45;

                    ;% rtP.SpacecraftDynamics_argPeriapsis
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 46;

                    ;% rtP.SpacecraftDynamics_trueAnomaly
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 47;

                    ;% rtP.SpacecraftDynamics_trueLon
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 48;

                    ;% rtP.SpacecraftDynamics_argLat
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 49;

                    ;% rtP.SpacecraftDynamics_lonPeriapsis
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 50;

                    ;% rtP.SpacecraftDynamics_inertialPosition
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 51;

                    ;% rtP.SpacecraftDynamics_inertialVelocity
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 54;

                    ;% rtP.SpacecraftDynamics_fixedPosition
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 57;

                    ;% rtP.SpacecraftDynamics_fixedVelocity
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 60;

                    ;% rtP.SpacecraftDynamics_attitude
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 63;

                    ;% rtP.SpacecraftDynamics_attitudeRate
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 67;

                    ;% rtP.SpacecraftDynamics_customR
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 70;

                    ;% rtP.SpacecraftDynamics_customF
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 71;

                    ;% rtP.SpacecraftDynamics_customMu
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 72;

                    ;% rtP.SpacecraftDynamics_customJ2
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 73;

                    ;% rtP.SpacecraftDynamics_customOmega
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 74;

                    ;% rtP.SpacecraftDynamics_cbRA
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 75;

                    ;% rtP.SpacecraftDynamics_cbRARate
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 76;

                    ;% rtP.SpacecraftDynamics_cbDec
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 77;

                    ;% rtP.SpacecraftDynamics_cbDecRate
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 78;

                    ;% rtP.SpacecraftDynamics_cbRotAngle
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 79;

                    ;% rtP.SpacecraftDynamics_cbRotRate
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 80;

                    ;% rtP.SpacecraftDynamics_F107ExtrapValue
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 81;

                    ;% rtP.SpacecraftDynamics_MagneticIndexExtrapValue
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 82;

                    ;% rtP.SpacecraftDynamics_fluxFlags
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 83;

                    ;% rtP.SpacecraftDynamics_dragCoeff
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 106;

                    ;% rtP.SpacecraftDynamics_dragArea
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 107;

                    ;% rtP.SpacecraftDynamics_customThirdBodyMu
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 108;

                    ;% rtP.SpacecraftDynamics_fluxPressure
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 109;

                    ;% rtP.Integrator_IC
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 110;

                    ;% rtP.Saturation_UpperSat
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 111;

                    ;% rtP.Saturation_LowerSat
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 112;

                    ;% rtP.Constant4_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 113;

                    ;% rtP.Constant_Value_cddtuuqxak
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 114;

                    ;% rtP.Constant1_Value
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 115;

                    ;% rtP.Constant2_Value
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 116;

                    ;% rtP.Constant3_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 117;

                    ;% rtP.Constant_Value_h1phomc44g
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 118;

                    ;% rtP.Nocontrol_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 119;

                    ;% rtP.Constant_Value_argmstcefl
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 122;

                    ;% rtP.Constant_Value_foidw3bu40
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 123;

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
            section.nData     = 31;
            section.data(31)  = dumData; %prealloc

                    ;% rtB.b5wz2e1q3r
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.jmbluoj1sp
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.cfat5n44y1
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.ci5ovszmua
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 10;

                    ;% rtB.pubw20n1vt
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 13;

                    ;% rtB.gvzjviy51s
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtB.hikecwvwoj
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 15;

                    ;% rtB.jlyvf3hfdh
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtB.cthgspn3yi
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 19;

                    ;% rtB.e1pp5d3wuf
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

                    ;% rtB.nx32abgkuf
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 21;

                    ;% rtB.nwgjkwa0ti
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 22;

                    ;% rtB.lxdw5rcp2v
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 23;

                    ;% rtB.naoluu5k0n
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 26;

                    ;% rtB.ivne3yql1p
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 27;

                    ;% rtB.hwfackdzwr
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 28;

                    ;% rtB.kc1seaev10
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 32;

                    ;% rtB.gjd2qdrduc
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 35;

                    ;% rtB.e21kjd2ys1
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 38;

                    ;% rtB.eul1vo2rhf
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 41;

                    ;% rtB.baic2rkjff
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 42;

                    ;% rtB.ez2krhh41l
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 43;

                    ;% rtB.hcmvpr3bah
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 47;

                    ;% rtB.fhromkhjvt
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 50;

                    ;% rtB.cia0zbdwmn
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 51;

                    ;% rtB.ailbretlt2
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 52;

                    ;% rtB.mqyxknico2
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 53;

                    ;% rtB.ilxrm5djwj
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 56;

                    ;% rtB.molw1d13dq
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 59;

                    ;% rtB.ewkfu1itsr
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 62;

                    ;% rtB.pyeksk1xwg
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 65;

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

                    ;% rtDW.m0s1rjpd4e
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ci1edd4nj3
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtDW.ny4c53recd.AQHandles
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.g5nmlj15wz.AQHandles
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ey5pzbfvpp.AQHandles
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ds12hzh3pt.AQHandles
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.aeff0k5pep.AQHandles
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.obcya3tamr.AQHandles
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dwnk2lieit.AQHandles
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.eyj12p0xo4.AQHandles
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.hdogczrjkq.AQHandles
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.l1sxaadtmn.AQHandles
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.pnk35gmy12
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dlqq3wiqav
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.appywquule
                    section.data(3).logicalSrcIdx = 14;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.bk0zkljr42
                    section.data(4).logicalSrcIdx = 15;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.i23zpgf5ke
                    section.data(5).logicalSrcIdx = 16;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ihd503kyln
                    section.data(6).logicalSrcIdx = 17;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.elz4cbgcbh
                    section.data(1).logicalSrcIdx = 18;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cx1ziv5lns
                    section.data(2).logicalSrcIdx = 19;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.g2bncjomtk
                    section.data(3).logicalSrcIdx = 20;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.dyygij3dkg
                    section.data(4).logicalSrcIdx = 21;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.lwzqppaede
                    section.data(5).logicalSrcIdx = 22;
                    section.data(5).dtTransOffset = 4;

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


    targMap.checksum0 = 2774035365;
    targMap.checksum1 = 86531248;
    targMap.checksum2 = 3808184636;
    targMap.checksum3 = 1764677076;


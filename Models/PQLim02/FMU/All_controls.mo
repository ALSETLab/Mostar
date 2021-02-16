within Mostar.Models.PQLim02.FMU;
model All_controls "System with the original generator parameters"

  Data2Model.PQLim02.init machineData
    annotation (Placement(transformation(extent={{-22,36},{-2,56}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{22,40},
            {82,60}})));
  OpenIPSL.Electrical.Buses.Bus bus(
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=0)                          annotation (Placement(transformation(extent={{-28,6},
            {-8,26}})));
  Modelica.Blocks.Sources.Constant const3(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-58},
            {-70,-48}})));
  Modelica.Blocks.Sources.Constant const4(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-40},
            {-70,-30}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL Gen(
    v_0=machineData.data.V_0,
    M_b=30000000,
    Tpd0=machineData.data.Tpd0,
    Tppd0=machineData.data.Tppd0,
    Tppq0=machineData.data.Tppq0,
    D=machineData.data.D,
    Xd=machineData.data.Xd,
    Xq=machineData.data.Xq,
    Xpd=machineData.data.Xpd,
    Xppd=machineData.data.Xppd,
    Xppq=machineData.data.Xppq,
    Xl=machineData.data.Xl,
    S10=machineData.data.S10,
    S12=machineData.data.S12,
    R_a=machineData.data.R_a,
    H=machineData.data.H,
    angle_0=machineData.data.A_0,
    Q_0=machineData.data.Q_0,
    P_0=machineData.data.P_0)
    annotation (Placement(transformation(extent={{-72,4},{-48,28}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B(
    T_R=machineData.data.T_R,
    T_C1=machineData.data.T_C1,
    T_B1=machineData.data.T_B1,
    T_C2=machineData.data.T_C2,
    T_B2=machineData.data.T_B2,
    K_R=machineData.data.K_R,
    V_RMAX=machineData.data.V_RMAX,
    V_RMIN=machineData.data.V_RMIN,
    T_1=machineData.data.T_1_AVR,
    K_C=machineData.data.K_C,
    T_UC1=machineData.data.T_UC1,
    T_UB1=machineData.data.T_UB1,
    T_UC2=machineData.data.T_UC2,
    T_UB2=machineData.data.T_UB2,
    T_OC1=machineData.data.T_OC1,
    T_OB1=machineData.data.T_OB1,
    T_OC2=machineData.data.T_OC2,
    T_OB2=machineData.data.T_OB2)
                     annotation (Placement(transformation(extent={{-50,-22},{
            -70,-4}})));
  OpenIPSL.Electrical.Buses.Bus bus1(P_0=0)
                                    annotation (Placement(transformation(extent={{20,6},{
            40,26}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{0,6},{20,26}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{62,6},{42,26}})));
  Modelica.Blocks.Math.Add  add3_1 annotation (Placement(transformation(extent={{10,-52},
            {2,-44}})));
  Modelica.Blocks.Sources.Step step1(startTime=5.2, height=0.0278) annotation (Placement(transformation(extent={{34,-58},
            {26,-50}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pSS2B(
    T_w1=machineData.data.T_w1,
    T_w2=machineData.data.T_w2,
    T_6=machineData.data.T_6,
    T_w3=machineData.data.T_w3,
    T_w4=machineData.data.T_w4,
    T_7=machineData.data.T_7,
    K_S2=machineData.data.K_S2,
    K_S3=machineData.data.K_S3,
    T_8=machineData.data.T_8,
    T_9=machineData.data.T_9,
    K_S1=machineData.data.K_S1,
    T_1=machineData.data.T_1,
    T_2=machineData.data.T_2,
    T_3=machineData.data.T_3,
    T_4=machineData.data.T_4,
    T_10=machineData.data.T_10,
    T_11=machineData.data.T_11,
    V_S1MAX=machineData.data.V_S1MAX,
    V_S1MIN=machineData.data.V_S1MIN,
    V_S2MAX=machineData.data.V_S2MAX,
    V_S2MIN=machineData.data.V_S2MIN,
    V_STMAX=machineData.data.V_STMAX,
    V_STMIN=machineData.data.V_STMIN,
    M=machineData.data.M,
    N=machineData.data.N)
    annotation (Placement(transformation(extent={{-6,-28},{-26,-22}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    v_0=machineData.data.V_0,
    PQBRAK=0.7,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0)
                 annotation (Placement(transformation(extent={{-8,-18},{4,-6}})));
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{44,-30},{64,-10}}),  iconTransformation(
          extent={{56,-10},{64,-2}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{68,-30},{88,-10}})));
equation
  Pout = Gen.P;
  Qout = Gen.Q;
  connect(Gen.p, bus.p)
    annotation (Line(points={{-48,16},{-18,16}}, color={0,0,255}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-74.4,22},{-82,22},{
          -82,32},{-40,32},{-40,22},{-46.8,22}}, color={0,0,127}));
  connect(sT5B.VOEL,const4. y) annotation (Line(points={{-60,-22.9},{-56,-22.9},
          {-56,-35},{-69.5,-35}},      color={0,0,127}));
  connect(sT5B.VUEL,const3. y) annotation (Line(points={{-56,-22.9},{-54,-22.9},
          {-54,-53},{-69.5,-53}},   color={0,0,127}));
  connect(Gen.EFD0, sT5B.EFD0) annotation (Line(points={{-46.8,10},{-42,10},{
          -42,-16.6},{-49,-16.6}}, color={0,0,127}));
  connect(sT5B.XADIFD, Gen.XADIFD) annotation (Line(points={{-68,-22.9},{-48,
          -22.9},{-48,-14},{-46.8,-14},{-46.8,5.2}}, color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{30,16},{19,16}},   color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{1,16},{-18,16}},    color={0,0,255}));
  connect(bus1.p,infiniteBus. p)
    annotation (Line(points={{30,16},{42,16}},   color={0,0,255}));
  connect(add3_1.u2,step1. y) annotation (Line(points={{10.8,-50.4},{18,-50.4},
          {18,-54},{25.6,-54}},   color={0,0,127}));
  connect(add3_1.u1, Gen.ETERM) annotation (Line(points={{10.8,-45.6},{12,-45.6},
          {12,12.4},{-46.8,12.4}}, color={0,0,127}));
  connect(pSS2B.VOTHSG,sT5B. VOTHSG) annotation (Line(points={{-27,-25},{
          -31.166,-25},{-31.166,-9.4},{-49,-9.4}},
                                            color={0,0,127}));
  connect(pSS2B.V_S1, Gen.ETERM) annotation (Line(points={{-5,-23.8},{2,-23.8},
          {2,-24},{12,-24},{12,12.4},{-46.8,12.4}}, color={0,0,127}));
  connect(pSS2B.V_S2, Gen.ETERM) annotation (Line(points={{-5,-26.2},{2,-26.2},
          {2,-26},{12,-26},{12,12.4},{-46.8,12.4}}, color={0,0,127}));
  connect(constantLoad.p,bus. p)
    annotation (Line(points={{-2,-6},{-2,16},{-18,16}},    color={0,0,255}));
  connect(sT5B.EFD, Gen.EFD) annotation (Line(points={{-71,-13},{-78,-13},{-78,
          10},{-74.4,10}}, color={0,0,127}));
  connect(sT5B.ECOMP,add3_1. y) annotation (Line(points={{-49,-13},{-38,-13},{
          -38,-48},{1.6,-48}},  color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{100,60}})),
      experiment(StopTime=95, __Dymola_NumberOfIntervals=5000),
    Icon(coordinateSystem(extent={{-100,-80},{100,60}})));
end All_controls;

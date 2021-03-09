within Mostar.Models.AVR_IGLim_Capacitive.FMU;
model fmu_system "System with the original generator parameters"

  Data2Model.IG_Lim_Capacitive.avr_gen
                                    machineData
    annotation (Placement(transformation(extent={{-44,60},{-24,80}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{0,60},{
            60,80}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0, angle_0=
        machineData.data.A_0)       annotation (Placement(transformation(extent={{-40,30},
            {-20,50}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-92,-34},
            {-82,-24}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-92,-16},
            {-82,-6}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL Gen1(
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
    annotation (Placement(transformation(extent={{-84,28},{-60,52}})));
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
                     annotation (Placement(transformation(extent={{-62,2},{-82,
            20}})));
  OpenIPSL.Electrical.Buses.Bus bus1
                                    annotation (Placement(transformation(extent={{4,30},{
            24,50}})));
  Modelica.Blocks.Sources.Constant const4(k=0)    annotation (Placement(transformation(extent={{-18,-8},
            {-28,2}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-12,30},{8,50}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{60,30},{40,50}})));
  Modelica.Blocks.Math.Add  add3_1 annotation (Placement(transformation(extent={{-24,-28},
            {-32,-20}})));
  Modelica.Blocks.Sources.Step step1(
    offset=0,
    startTime=0.42,
    height=0.035)                                                  annotation (Placement(transformation(extent={{0,-34},
            {-8,-26}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=-machineData.data.Q_0,
    v_0=machineData.data.V_0,
    PQBRAK=0.7,
    angle_0=machineData.data.A_0,
    P_0=-machineData.data.P_0)
                 annotation (Placement(transformation(extent={{-24,14},{-12,26}})));
  Modelica.Blocks.Sources.Constant const3(k=0.332057384)
                                                  annotation (Placement(transformation(extent={{-30,16},
            {-40,26}})));
  Modelica.Blocks.Interfaces.RealOutput EFD "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{-100,4},{-114,18}})));
equation

  connect(Gen1.p,bus. p)
    annotation (Line(points={{-60,40},{-30,40}},   color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-86.4,46},{-94,46},
          {-94,56},{-52,56},{-52,46},{-58.8,46}},         color={0,0,127}));
  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-72,1.1},{-68,1.1},{
          -68,-11},{-81.5,-11}},       color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-68,1.1},{-66,1.1},{
          -66,-29},{-81.5,-29}},    color={0,0,127}));
  connect(sT5B.VOTHSG,const4. y) annotation (Line(points={{-61,14.6},{-46,14.6},
          {-46,-3},{-28.5,-3}},      color={0,0,127}));
  connect(sT5B.XADIFD,Gen1. XADIFD) annotation (Line(points={{-80,1.1},{-60,1.1},
          {-60,10},{-58.8,10},{-58.8,29.2}},      color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{14,40},{7,40}},    color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-11,40},{-30,40}}, color={0,0,255}));
  connect(bus1.p,infiniteBus. p) annotation (Line(points={{14,40},{40,40}},
                             color={0,0,255}));
  connect(add3_1.u2,step1. y) annotation (Line(points={{-23.2,-26.4},{-16,-26.4},
          {-16,-30},{-8.4,-30}},  color={0,0,127}));
  connect(Gen1.EFD,sT5B. EFD) annotation (Line(points={{-86.4,34},{-98,34},{-98,
          11},{-83,11}},         color={0,0,127}));
  connect(constantLoad.p,bus. p)
    annotation (Line(points={{-18,26},{-18,40},{-30,40}}, color={0,0,255}));
  connect(add3_1.y,sT5B. ECOMP) annotation (Line(points={{-32.4,-24},{-38,-24},
          {-38,-12},{-61,-12},{-61,11}},color={0,0,127}));
  connect(Gen1.ETERM,add3_1. u1) annotation (Line(points={{-58.8,36.4},{-12,
          36.4},{-12,-21.6},{-23.2,-21.6}}, color={0,0,127}));
  connect(const3.y, sT5B.EFD0) annotation (Line(points={{-40.5,21},{-48.25,21},
          {-48.25,7.4},{-61,7.4}}, color={0,0,127}));
  connect(EFD, sT5B.EFD)
    annotation (Line(points={{-107,11},{-83,11}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -40},{80,80}})),
    Icon(coordinateSystem(extent={{-100,-40},{80,80}})),
    experiment(
      StopTime=20,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=0.01));
end fmu_system;

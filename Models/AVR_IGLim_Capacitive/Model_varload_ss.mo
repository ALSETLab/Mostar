within Mostar.Models.AVR_IGLim_Capacitive;
model Model_varload_ss
  Data2Model.PSS_on.init            machineData
    annotation (Placement(transformation(extent={{-108,76},{-88,96}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000,
                                                       fn=50) annotation (Placement(transformation(extent={{-64,80},
            {-4,100}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0)   annotation (Placement(transformation(extent={{-106,38},
            {-86,58}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-158,
            -26},{-148,-16}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-158,-8},
            {-148,2}})));
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
    annotation (Placement(transformation(extent={{-150,36},{-126,60}})));
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
                     annotation (Placement(transformation(extent={{-128,10},{
            -148,28}})));
  Modelica.Blocks.Sources.Constant const4(k=0)    annotation (Placement(transformation(extent={{-84,0},
            {-94,10}})));
  Modelica.Blocks.Math.Add  add3_1 annotation (Placement(transformation(extent={{-90,-20},
            {-98,-12}})));
  Modelica.Blocks.Sources.Step step1(
    offset=0,
    startTime=0.42,
    height=0.035)                                                  annotation (Placement(transformation(extent={{-66,-26},
            {-74,-18}})));
  Load_ExtInput2                      constantLoad(
    Q_0=0,
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=0,
    PQBRAK=0.7,
    d_P=0,
    t1=0,
    d_t=0)       annotation (Placement(transformation(extent={{-78,22},{-90,34}})));
  Modelica.Blocks.Interfaces.RealInput EFD "Generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-220,22},{-180,62}})));
  Modelica.Blocks.Interfaces.RealInput P
    annotation (Placement(transformation(extent={{40,40},{0,80}})));
  Modelica.Blocks.Interfaces.RealInput Q
    annotation (Placement(transformation(extent={{38,0},{-2,40}})));
  Modelica.Blocks.Interfaces.RealOutput Vt
    annotation (Placement(transformation(extent={{-42,-10},{-22,10}})));
  Modelica.Blocks.Interfaces.RealOutput Ifd
    annotation (Placement(transformation(extent={{-42,-32},{-22,-12}})));
  Modelica.Blocks.Interfaces.RealOutput speed
    annotation (Placement(transformation(extent={{-22,-20},{-2,0}})));
equation
      Vt = Gen1.ETERM;
      Ifd = Gen1.XADIFD;
      speed = Gen1.SPEED;
  connect(Gen1.p,bus. p)
    annotation (Line(points={{-126,48},{-96,48}},  color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-152.4,54},{-160,
          54},{-160,64},{-118,64},{-118,54},{-124.8,54}}, color={0,0,127}));
  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-138,9.1},{-134,9.1},{
          -134,-3},{-147.5,-3}},       color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-134,9.1},{-132,9.1},{
          -132,-21},{-147.5,-21}},  color={0,0,127}));
  connect(sT5B.VOTHSG, const4.y) annotation (Line(points={{-127,22.6},{-112,
          22.6},{-112,5},{-94.5,5}}, color={0,0,127}));
  connect(add3_1.u2, step1.y) annotation (Line(points={{-89.2,-18.4},{-82,-18.4},
          {-82,-22},{-74.4,-22}}, color={0,0,127}));
  connect(constantLoad.p, bus.p)
    annotation (Line(points={{-84,34},{-84,48},{-96,48}}, color={0,0,255}));
  connect(add3_1.y, sT5B.ECOMP) annotation (Line(points={{-98.4,-16},{-104,-16},
          {-104,-4},{-127,-4},{-127,19}},
                                        color={0,0,127}));
  connect(sT5B.EFD0, Gen1.EFD0) annotation (Line(points={{-127,15.4},{-118,15.4},
          {-118,42},{-124.8,42}}, color={0,0,127}));
  connect(Gen1.ETERM, add3_1.u1) annotation (Line(points={{-124.8,44.4},{-76,
          44.4},{-76,-13.6},{-89.2,-13.6}}, color={0,0,127}));
  connect(Gen1.XADIFD, sT5B.XADIFD) annotation (Line(points={{-124.8,37.2},{
          -124,37.2},{-124,9.1},{-146,9.1}}, color={0,0,127}));
  connect(Gen1.EFD, EFD)
    annotation (Line(points={{-152.4,42},{-200,42}}, color={0,0,127}));
  connect(constantLoad.x, Q) annotation (Line(points={{-79.14,25.54},{-69.57,25.54},
          {-69.57,20},{18,20}}, color={0,0,127}));
  connect(constantLoad.u, P) annotation (Line(points={{-79.14,31.3},{-37.57,31.3},
          {-37.57,60},{20,60}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},
            {0,100}})),                                          Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},{0,100}})),
    experiment(
      StopTime=4.5,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false),
    __Dymola_Commands(file="Plot_Efd_Ifd.mos" "Plot_Efd_Ifd"));
end Model_varload_ss;

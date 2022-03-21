within Mostar.Models.PQLim04;
model Generator
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{-40,12},{-32,20}})));
  Data2Model.PQLim04.pso_gen
                          machineData
    annotation (Placement(transformation(extent={{-108,78},{-88,98}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000,
                                                       fn=50) annotation (Placement(transformation(extent={{-64,80},
            {-4,100}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0, angle_0=
        machineData.data.A_0)       annotation (Placement(transformation(extent={{-92,36},
            {-72,56}})));
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
    annotation (Placement(transformation(extent={{-136,34},{-112,58}})));
  OpenIPSL.Electrical.Buses.Bus bus1
                                    annotation (Placement(transformation(extent={{-48,36},
            {-28,56}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-64,36},{-44,56}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{6,36},{-14,56}})));
  Modelica.Blocks.Interfaces.RealInput EFD1
                "Generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-196,22},{-156,62}})));
  Modelica.Blocks.Interfaces.RealOutput Eterm
    "Initial generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-102,12},{-82,32}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    PQBRAK=0.7)  annotation (Placement(transformation(extent={{-90,22},{-78,34}})));
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{-62,12},{-54,20}})));
equation
      Pout = Gen1.P;
      Qout = Gen1.Q;

  connect(Gen1.p,bus. p)
    annotation (Line(points={{-112,46},{-82,46}},  color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-138.4,52},{-146,
          52},{-146,62},{-104,62},{-104,52},{-110.8,52}}, color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{-38,46},{-45,46}}, color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-63,46},{-82,46}}, color={0,0,255}));
  connect(infiniteBus.p,bus1. p) annotation (Line(points={{-14,46},{-38,46}},
                             color={0,0,255}));
  connect(Gen1.EFD, EFD1) annotation (Line(points={{-138.4,40},{-152,40},{-152,42},
          {-176,42}}, color={0,0,127}));
  connect(Gen1.ETERM, Eterm) annotation (Line(points={{-110.8,42.4},{-106,42.4},
          {-106,22},{-92,22}}, color={0,0,127}));
  connect(constantLoad.p, bus.p) annotation (Line(points={{-84,34},{-86,34},{-86,
          46},{-82,46}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-160,0},
            {20,100}})),                                         Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-160,0},{20,100}})),
    experiment(
      StopTime=9,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false));
end Generator;

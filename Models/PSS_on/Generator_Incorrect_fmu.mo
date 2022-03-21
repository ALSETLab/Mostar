within Mostar.Models.PSS_on;
model Generator_Incorrect_fmu
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{-56,26},{-48,34}}),  iconTransformation(
          extent={{-56,26},{-48,34}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{-48,26},{-40,34}})));
  Data2Model.PSS_on.init  machineData
    annotation (Placement(transformation(extent={{-108,76},{-88,96}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000,
                                                       fn=50) annotation (Placement(transformation(extent={{-64,80},
            {-4,100}})));
  OpenIPSL.Electrical.Buses.Bus bus(
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=0)                          annotation (Placement(transformation(extent={{-104,44},
            {-84,64}})));
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
    annotation (Placement(transformation(extent={{-148,42},{-124,66}})));
  OpenIPSL.Electrical.Buses.Bus bus1(P_0=0)
                                    annotation (Placement(transformation(extent={{-56,44},
            {-36,64}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-76,44},{-56,64}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    v_0=machineData.data.V_0,
    PQBRAK=0.7,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0)
                 annotation (Placement(transformation(extent={{-84,24},{-72,36}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{-14,44},{-34,64}})));
  Modelica.Blocks.Interfaces.RealOutput ETERM "Machine terminal voltage [pu]"
    annotation (Placement(transformation(extent={{-54,4},{-34,24}})));
  Modelica.Blocks.Interfaces.RealInput EFD "Generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-220,28},{-180,68}})));
equation
      Pout = Gen1.P;
      Qout = Gen1.Q;

  connect(Gen1.p,bus. p)
    annotation (Line(points={{-124,54},{-94,54}},  color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-150.4,60},{-158,60},
          {-158,70},{-116,70},{-116,60},{-122.8,60}},     color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{-46,54},{-57,54}}, color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-75,54},{-94,54}},  color={0,0,255}));
  connect(constantLoad.p, bus.p)
    annotation (Line(points={{-78,36},{-78,54},{-94,54}}, color={0,0,255}));
  connect(bus1.p, infiniteBus.p)
    annotation (Line(points={{-46,54},{-34,54}}, color={0,0,255}));
  connect(Gen1.EFD, EFD)
    annotation (Line(points={{-150.4,48},{-200,48}}, color={0,0,127}));
  connect(Gen1.ETERM, ETERM) annotation (Line(points={{-122.8,50.4},{-114,50.4},
          {-114,14},{-44,14}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,0},
            {0,100}})),                                          Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,0},{0,100}})),
    experiment(
      StopTime=16.5,
      Interval=0.005,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false));
end Generator_Incorrect_fmu;

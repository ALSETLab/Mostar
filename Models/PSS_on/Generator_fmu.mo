within Mostar.Models.PSS_on;
model Generator_fmu
  Data2Model.PSS_on.init  machineData
    annotation (Placement(transformation(extent={{-112,78},{-92,98}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{-200,80},
            {-140,100}})));
  OpenIPSL.Electrical.Buses.Bus bus(
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=0)                          annotation (Placement(transformation(extent={{-94,52},
            {-74,72}})));
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
    annotation (Placement(transformation(extent={{-124,50},{-100,74}})));
  Load_ExtInput2                      constantLoad(
    Q_0=0,
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=0,
    S_p(re=0, im=0),
    PQBRAK=0.7,
    d_P=0,
    t1=0,
    d_t=0)       annotation (Placement(transformation(extent={{-72,30},{-84,42}})));
  Modelica.Blocks.Interfaces.RealInput P
    annotation (Placement(transformation(extent={{-30,36},{-50,56}})));
  Modelica.Blocks.Interfaces.RealInput Q
    annotation (Placement(transformation(extent={{-30,14},{-50,34}})));
  Modelica.Blocks.Interfaces.RealInput EFD "Generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-200,36},{-160,76}})));
  Modelica.Blocks.Sources.RealExpression realExpression(y=Gen1.ETERM)
    annotation (Placement(transformation(extent={{-160,28},{-140,48}})));
  Modelica.Blocks.Interfaces.RealOutput Vt "Value of Real output"
    annotation (Placement(transformation(extent={{-128,28},{-108,48}})));
  Modelica.Blocks.Sources.RealExpression realExpression1(y=Gen1.XADIFD)
    annotation (Placement(transformation(extent={{-160,12},{-140,32}})));
  Modelica.Blocks.Interfaces.RealOutput Ifd "Value of Real output"
    annotation (Placement(transformation(extent={{-128,12},{-108,32}})));
  Modelica.Blocks.Sources.RealExpression realExpression2(y=Gen1.w)
    annotation (Placement(transformation(extent={{-160,-2},{-140,18}})));
  Modelica.Blocks.Interfaces.RealOutput w "Value of Real output"
    annotation (Placement(transformation(extent={{-128,-2},{-108,18}})));
equation

  connect(Gen1.p,bus. p)
    annotation (Line(points={{-100,62},{-84,62}},  color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-126.4,68},{-134,
          68},{-134,78},{-92,78},{-92,68},{-98.8,68}},    color={0,0,127}));
  connect(constantLoad.p, bus.p)
    annotation (Line(points={{-78,42},{-78,62},{-84,62}}, color={0,0,255}));
  connect(Gen1.EFD, EFD)
    annotation (Line(points={{-126.4,56},{-180,56}}, color={0,0,127}));
  connect(Q, constantLoad.x) annotation (Line(points={{-40,24},{-64,24},{-64,
          33.54},{-73.14,33.54}}, color={0,0,127}));
  connect(P, constantLoad.u) annotation (Line(points={{-40,46},{-64,46},{-64,
          39.3},{-73.14,39.3}}, color={0,0,127}));
  connect(realExpression.y, Vt)
    annotation (Line(points={{-139,38},{-118,38}}, color={0,0,127}));
  connect(realExpression1.y, Ifd)
    annotation (Line(points={{-139,22},{-118,22}}, color={0,0,127}));
  connect(realExpression2.y, w)
    annotation (Line(points={{-139,8},{-118,8}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,0},
            {-20,100}})),                                        Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-200,0},{-20,100}})),
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
end Generator_fmu;

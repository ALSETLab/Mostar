within Mostar.Models.AVR_IGLim_Capacitive;
model Generator_updatedIO
  Data2Model.IG_Lim_Capacitive.init
                          machineData
    annotation (Placement(transformation(extent={{-132,76},{-112,96}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{-88,78},
            {-28,98}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0, angle_0=
        machineData.data.A_0)       annotation (Placement(transformation(extent={{-116,34},
            {-96,54}})));
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
    annotation (Placement(transformation(extent={{-160,32},{-136,56}})));
  OpenIPSL.Electrical.Buses.Bus bus1
                                    annotation (Placement(transformation(extent={{-72,34},
            {-52,54}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-88,34},{-68,54}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{-28,34},{-48,54}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    PQBRAK=0.7)  annotation (Placement(transformation(extent={{-114,20},{-102,
            32}})));
  Modelica.Blocks.Interfaces.RealInput EFD1
                "Generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-220,18},{-180,58}})));
  Modelica.Blocks.Interfaces.RealOutput Eterm
    "Initial generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-126,10},{-106,30}})));
  Modelica.Blocks.Interfaces.RealOutput XADIFD1
                    "Machine field current [pu]"
    annotation (Placement(transformation(extent={{-128,-2},{-108,18}})));
  Modelica.Blocks.Interfaces.RealOutput SPEED1
                   "Machine speed deviation from nominal [pu]"
    annotation (Placement(transformation(extent={{-126,56},{-106,76}})));
equation


  connect(Gen1.p,bus. p)
    annotation (Line(points={{-136,44},{-106,44}}, color={0,0,255}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{-62,44},{-69,44}}, color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-87,44},{-106,44}},color={0,0,255}));
  connect(infiniteBus.p,bus1. p) annotation (Line(points={{-48,44},{-62,44}},
                             color={0,0,255}));
  connect(Gen1.EFD,EFD1)  annotation (Line(points={{-162.4,38},{-200,38}},
                      color={0,0,127}));
  connect(Gen1.ETERM,Eterm)  annotation (Line(points={{-134.8,40.4},{-130,40.4},
          {-130,20},{-116,20}},color={0,0,127}));
  connect(constantLoad.p,bus. p) annotation (Line(points={{-108,32},{-110,32},{
          -110,44},{-106,44}},
                         color={0,0,255}));
  connect(Gen1.XADIFD, XADIFD1) annotation (Line(points={{-134.8,33.2},{-134.8,
          6.6},{-118,6.6},{-118,8}}, color={0,0,127}));
  connect(Gen1.SPEED, SPEED1) annotation (Line(points={{-134.8,52.4},{-116,52.4},
          {-116,66}}, color={0,0,127}));
  connect(Gen1.PMECH, Gen1.PMECH0) annotation (Line(points={{-162.4,50},{-170,
          50},{-170,66},{-128,66},{-128,50},{-134.8,50}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,0},
            {-20,100}})),                                        Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,0},{-20,100}})),
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
end Generator_updatedIO;

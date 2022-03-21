within Mostar.Models.PQLim04.FMU;
model Generator_fmu
  Data2Model.PQLim04.init machineData
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
  Load_ExtInput2                      constantLoad(
    Q_0=0,
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=0,
    S_p(re=0, im=0),
    PQBRAK=0.7,
    d_P=0,
    t1=0,
    d_t=0)       annotation (Placement(transformation(extent={{-102,18},{-90,30}})));
  Modelica.Blocks.Interfaces.RealInput EFD1
                "Generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-220,72},{-180,112}}),
        iconTransformation(extent={{-208,72},{-180,100}})));
  Modelica.Blocks.Interfaces.RealOutput Eterm
    "Initial generator main field voltage [pu]"
    annotation (Placement(transformation(extent={{-20,70},{0,90}}),
        iconTransformation(extent={{-20,70},{0,90}})));
  Modelica.Blocks.Interfaces.RealInput P annotation (Placement(transformation(
          extent={{-220,22},{-180,62}}), iconTransformation(extent={{-208,34},{
            -180,62}})));
  Modelica.Blocks.Interfaces.RealInput Q annotation (Placement(transformation(
          extent={{-220,-12},{-180,28}}), iconTransformation(extent={{-208,0},{
            -180,28}})));
  Modelica.Blocks.Interfaces.RealOutput XadIfd "Machine field current [pu]"
    annotation (Placement(transformation(extent={{-20,50},{0,70}})));
  Modelica.Blocks.Interfaces.RealOutput w
    "Machine speed deviation from nominal [pu]"
    annotation (Placement(transformation(extent={{-20,10},{0,30}})));
equation

  connect(Gen1.p,bus. p)
    annotation (Line(points={{-136,44},{-106,44}}, color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-162.4,50},{-170,
          50},{-170,60},{-128,60},{-128,50},{-134.8,50}}, color={0,0,127}));
  connect(Gen1.EFD,EFD1)  annotation (Line(points={{-162.4,38},{-176,38},{-176,
          92},{-200,92}},
                      color={0,0,127}));
  connect(Gen1.ETERM,Eterm)  annotation (Line(points={{-134.8,40.4},{-130,40.4},
          {-130,80},{-10,80}}, color={0,0,127}));
  connect(constantLoad.p,bus. p) annotation (Line(points={{-96,30},{-110,30},{
          -110,44},{-106,44}},
                         color={0,0,255}));
  connect(Eterm, Eterm) annotation (Line(points={{-10,80},{-120,80},{-120,80},{
          -10,80}}, color={0,0,127}));
  connect(constantLoad.u, P) annotation (Line(points={{-100.86,27.3},{-110.43,
          27.3},{-110.43,42},{-200,42}}, color={0,0,127}));
  connect(constantLoad.x, Q) annotation (Line(points={{-100.86,21.54},{-200,
          21.54},{-200,8}}, color={0,0,127}));
  connect(Gen1.XADIFD, XadIfd) annotation (Line(points={{-134.8,33.2},{-76.4,
          33.2},{-76.4,60},{-10,60}}, color={0,0,127}));
  connect(Gen1.SPEED, w) annotation (Line(points={{-134.8,52.4},{-75.4,52.4},{
          -75.4,20},{-10,20}}, color={0,0,127}));
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
end Generator_fmu;

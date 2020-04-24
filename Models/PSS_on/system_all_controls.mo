within Mostar.Models.PSS_on;
model System_all_controls "System with the original generator parameters"

  OpenIPSL.Electrical.Branches.PwLine pwLine(
    G=0,
    B=0,
    R=0,
    X=0.1169) annotation (Placement(transformation(extent={{14,-4},{26,4}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    PQBRAK=0.7,
    V_0=0.97042,
    angle_0=0,
    P_0=5.19486) annotation (Placement(transformation(extent={{-6,-32},{6,-20}})));
  OpenIPSL.Electrical.Buses.Bus bus annotation (Placement(transformation(extent={{-18,-10},{2,10}})));
  OpenIPSL.Electrical.Buses.Bus bus1 annotation (Placement(transformation(extent={{40,-10},{60,10}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL gENSAL(
    M_b=30,
    Tpd0=3.77,
    Tppd0=0.0552,
    Tppq0=0.0823,
    D=0,
    Xd=1.183,
    Xq=0.62,
    Xpd=0.371,
    Xppd=0.215,
    Xppq=0.241,
    Xl=0.1,
    S10=0.1,
    S12=0.4,
    R_a=0.017637/(10.5^2/30),
    H=2.137,
    angle_0=0,
    Q_0=0.07332*30,
    V_0=0.9705,
    P_0=5.19486) annotation (Placement(transformation(extent={{-72,-12},{-48,12}})));
  Modelica.Blocks.Sources.Constant const(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-76},
            {-70,-66}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B(
    T_C1=1.071137,
    T_B1=10.7561,
    T_C2=3.414283,
    T_B2=1.701033,
    K_R=358.6086,
    T_1=0.004361481) annotation (Placement(transformation(extent={{-54,-38},{-74,
            -20}})));
  Modelica.Blocks.Sources.Constant const1(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-56},
            {-70,-46}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30, fn=50) annotation (Placement(transformation(extent={{40,80},{100,100}})));
  VoltageSource voltageSource
    annotation (Placement(transformation(extent={{88,-10},{68,10}})));
  Modelica.Blocks.Sources.CombiTimeTable combiTimeTable(tableOnFile=true,
    tableName=machineData.filename,
    fileName=machineData.filename,
    verboseRead=false)
    annotation (Placement(transformation(extent={{124,12},{104,32}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pSS2B(M=1, N=1)
    annotation (Placement(transformation(extent={{-24,-50},{-44,-44}})));
  Modelica.Blocks.Sources.CombiTimeTable combiTimeTable1(tableOnFile=true)
    annotation (Placement(transformation(extent={{124,-20},{104,0}})));
  Data2Model.Ifmax.Ifmax
    machineData annotation (Placement(transformation(extent={{10,60},{30,80}})));
equation
  connect(bus.p, pwLine.p) annotation (Line(points={{-8,0},{14.6,0}},    color={0,0,255}));
  connect(constantLoad.p, pwLine.p) annotation (Line(points={{0,-20},{0,-20},
          {0,0},{14.6,0}},                                                                      color={0,0,255}));
  connect(pwLine.n, bus1.p) annotation (Line(points={{25.4,0},{25.4,0},{50,0}},
                                                                            color={0,0,255}));
  connect(gENSAL.p, bus.p) annotation (Line(points={{-48,0},{-48,0},{-8,0}},     color={0,0,255}));
  connect(const.y, sT5B.VUEL) annotation (Line(points={{-69.5,-71},{-57.5,-71},{
          -57.5,-38}},                                                                          color={0,0,127}));
  connect(const1.y, sT5B.VOEL) annotation (Line(points={{-69.5,-51},{-60.5,-51},
          {-60.5,-38}},                                                                          color={0,0,127}));
  connect(sT5B.EFD, gENSAL.EFD) annotation (Line(points={{-74.5,-28},{-86,-28},{
          -86,-6},{-74.4,-6}},                                                                        color={0,0,127}));
  connect(gENSAL.PMECH, gENSAL.PMECH0) annotation (Line(points={{-74.4,6},{-80,6},
          {-80,16},{-42,16},{-42,6},{-46.8,6}},                                                                                 color={0,0,127}));
  connect(gENSAL.EFD0, sT5B.EFD0) annotation (Line(points={{-46.8,-6},{-42,-6},{
          -42,-34.5},{-54,-34.5}},                                                                                  color={0,0,127}));
  connect(sT5B.XADIFD, gENSAL.XADIFD) annotation (Line(points={{-54,-31},{-40,-31},
          {-40,-10.8},{-47.04,-10.8}},                                                                                  color={0,0,127}));
  connect(bus1.p, voltageSource.p)
    annotation (Line(points={{50,0},{67,0}}, color={0,0,255}));
  connect(sT5B.ECOMP, gENSAL.ETERM) annotation (Line(points={{-54,-28},{-32,
          -28},{-32,-3.6},{-46.8,-3.6}}, color={0,0,127}));
  connect(voltageSource.u1, combiTimeTable.y[1]) annotation (Line(points={{90,4},{
          96,4},{96,22},{103,22}},        color={0,0,127}));
  connect(sT5B.VOTHSG, pSS2B.VOTHSG) annotation (Line(points={{-54,-23.5},{-46,
          -23.5},{-46,-47},{-44.3333,-47}},     color={0,0,127}));
  connect(pSS2B.V_S1, gENSAL.ETERM) annotation (Line(points={{-24,-45.5},{
          -22,-45.5},{-22,-28},{-32,-28},{-32,-3.6},{-46.8,-3.6}}, color={0,
          0,127}));
  connect(pSS2B.V_S2, gENSAL.ETERM) annotation (Line(points={{-24,-48.5},{
          -22,-48.5},{-22,-28},{-32,-28},{-32,-3.6},{-46.8,-3.6}}, color={0,
          0,127}));
  connect(voltageSource.u2, combiTimeTable1.y[1]) annotation (Line(points={
          {90,-4},{96,-4},{96,-10},{103,-10}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}})));
end System_all_controls;

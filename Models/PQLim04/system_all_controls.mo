within Mostar.Models.PQLim04;
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
  Modelica.Blocks.Sources.Constant const(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-76},
            {-70,-66}})));
  Modelica.Blocks.Sources.Constant const1(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-56},
            {-70,-46}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30, fn=50) annotation (Placement(transformation(extent={{40,40},
            {100,60}})));
  VoltageSource voltageSource
    annotation (Placement(transformation(extent={{88,-10},{68,10}})));
  Modelica.Blocks.Sources.CombiTimeTable combiTimeTable(tableOnFile=true,
    tableName=machineData.filename,
    fileName=machineData.filename,
    verboseRead=false)
    annotation (Placement(transformation(extent={{124,12},{104,32}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pSS2B(M=1, N=1)
    annotation (Placement(transformation(extent={{-16,-50},{-36,-44}})));
  Modelica.Blocks.Sources.CombiTimeTable combiTimeTable1(tableOnFile=true)
    annotation (Placement(transformation(extent={{124,-20},{104,0}})));
  Data2Model.Ifmax.Ifmax
    machineData annotation (Placement(transformation(extent={{-58,32},{-38,52}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL Gen(
    M_b=30,
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
    V_0=machineData.data.V_0,
    P_0=machineData.data.P_0)
    annotation (Placement(transformation(extent={{-66,-12},{-42,12}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B(
    T_C1=1.071137,
    T_B1=10.7561,
    T_C2=3.414283,
    T_B2=1.701033,
    K_R=358.6086,
    T_1=0.004361481) annotation (Placement(transformation(extent={{-48,-38},{
            -68,-20}})));
equation
  connect(bus.p, pwLine.p) annotation (Line(points={{-8,0},{14.6,0}},    color={0,0,255}));
  connect(constantLoad.p, pwLine.p) annotation (Line(points={{0,-20},{0,-20},
          {0,0},{14.6,0}},                                                                      color={0,0,255}));
  connect(pwLine.n, bus1.p) annotation (Line(points={{25.4,0},{25.4,0},{50,0}},
                                                                            color={0,0,255}));
  connect(bus1.p, voltageSource.p)
    annotation (Line(points={{50,0},{67,0}}, color={0,0,255}));
  connect(voltageSource.u1, combiTimeTable.y[1]) annotation (Line(points={{90,4},{
          96,4},{96,22},{103,22}},        color={0,0,127}));
  connect(voltageSource.u2, combiTimeTable1.y[1]) annotation (Line(points={
          {90,-4},{96,-4},{96,-10},{103,-10}}, color={0,0,127}));
  connect(Gen.p, bus.p)
    annotation (Line(points={{-42,0},{-8,0}}, color={0,0,255}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-68.4,6},{-74,6},{
          -74,16},{-36,16},{-36,6},{-40.8,6}}, color={0,0,127}));
  connect(sT5B.EFD, Gen.EFD) annotation (Line(points={{-68.5,-28},{-74,-28},{
          -74,-6},{-68.4,-6}}, color={0,0,127}));
  connect(sT5B.VOEL, const1.y) annotation (Line(points={{-54.5,-38},{-56,-38},{
          -56,-51},{-69.5,-51}}, color={0,0,127}));
  connect(const.y, sT5B.VUEL) annotation (Line(points={{-69.5,-71},{-51.5,-71},
          {-51.5,-38}}, color={0,0,127}));
  connect(sT5B.VOTHSG, pSS2B.VOTHSG) annotation (Line(points={{-48,-23.5},{-42,
          -23.5},{-42,-47},{-36.3333,-47}}, color={0,0,127}));
  connect(Gen.XADIFD, sT5B.XADIFD) annotation (Line(points={{-41.04,-10.8},{-32,
          -10.8},{-32,-31},{-48,-31}}, color={0,0,127}));
  connect(sT5B.EFD0, Gen.EFD0) annotation (Line(points={{-48,-34.5},{-38,-34.5},
          {-38,-6},{-40.8,-6}}, color={0,0,127}));
  connect(sT5B.ECOMP, Gen.ETERM) annotation (Line(points={{-48,-28},{-30,-28},{
          -30,-3.6},{-40.8,-3.6}}, color={0,0,127}));
  connect(pSS2B.V_S1, sT5B.XADIFD) annotation (Line(points={{-16,-45.5},{-16,
          -12},{-32,-12},{-32,-31},{-48,-31}}, color={0,0,127}));
  connect(pSS2B.V_S2, sT5B.XADIFD) annotation (Line(points={{-16,-48.5},{-12,
          -48.5},{-12,-38},{-16,-38},{-16,-12},{-32,-12},{-32,-31},{-48,-31}},
        color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{140,60}})), Icon(coordinateSystem(extent={{-100,-80},{140,60}})));
end System_all_controls;

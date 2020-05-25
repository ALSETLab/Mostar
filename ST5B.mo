within Mostar;
model ST5B "IEEE 421.5 2005 ST5B Excitation System"
  extends OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.BaseExciter;
  parameter Real T_R=0.025 "Regulator input filter time constant (s)";
  parameter Real T_C1=0.1
    "Lead time constant of first lead-lag block (voltage regulator channel) (s)";
  parameter Real T_B1=0.2
    "Lag time constant of first lead-lag block (voltage regulator channel) (s)";
  parameter Real T_C2=1
    "Lead time constant of second lead-lag block (voltage regulator channel) (s)";
  parameter Real T_B2=1
    "Lag time constant of second lead-lag block (voltage regulator channel) (s)";
  parameter Real K_R=1 "Voltage regulator gain (pu)";
  parameter Real V_RMAX=10 "Voltage regulator maximum limit (pu)";
  parameter Real V_RMIN=-10 "Voltage regulator minimum limit (pu)";
  parameter Real T_1=0.58 "voltage regulator time constant (s)";
  parameter Real K_C=0.3 "(pu)";
  parameter Real VR0(fixed=false);
  parameter Real T_UC1=1
    "Lead time constant of first lead-lag block (under- excitation channel) (s)";
  parameter Real T_UB1=1
    "Lag time constant of first lead-lag block (under- excitation channel) (s)";
  parameter Real T_UC2=1
    "Lead time constant of second lead-lag block (under- excitation channel) (s)";
  parameter Real T_UB2=1
    "Lag time constant of second lead-lag block (under- excitation channel) (s)";
  parameter Real T_OC1=1
    "Lead time constant of first lead-lag block (over- excitation channel) (s)";
  parameter Real T_OB1=1
    "Lag time constant of first lead-lag block (over- excitation channel) (s)";
  parameter Real T_OC2=1
    "Lead time constant of second lead-lag block (over- excitation channel) (s)";
  parameter Real T_OB2=1
    "Lag time constant of second lead-lag block (over- excitation channel) (s)";
  Modelica.Blocks.Math.Add VERR1 annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=0,
        origin={-10,0})));
  OpenIPSL.NonElectrical.Logical.LV_GATE lV_Gate
    annotation (Placement(transformation(extent={{-48,0},{-26,12}})));
  OpenIPSL.NonElectrical.Logical.HV_GATE hV_Gate
    annotation (Placement(transformation(extent={{-84,-4},{-58,10}})));
  Modelica.Blocks.Math.Gain K_r(k=K_R) annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={104,38})));
  Modelica.Blocks.Nonlinear.Limiter limiter(uMax=V_RMAX, uMin=V_RMIN)
    annotation (Placement(transformation(extent={{108,-10},{128,10}})));
  Modelica.Blocks.Math.Add VERR2(k1=-1, k2=1) annotation (Placement(
        transformation(
        extent={{-10,10},{10,-10}},
        rotation=0,
        origin={150,0})));
  Modelica.Blocks.Math.Gain K_c(k=K_C) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={130,-92})));
  OpenIPSL.NonElectrical.Continuous.LeadLagLim imLimitedLeadLag1(
    K=1,
    T1=T_UC1,
    T2=T_UB1,
    outMin=V_RMIN/K_R,
    y_start=VR0/K_R,
    outMax=V_RMAX/K_R)
    annotation (Placement(transformation(extent={{20,-60},{40,-40}})));
  OpenIPSL.NonElectrical.Continuous.LeadLagLim imLimitedLeadLag3(
    K=1,
    outMax=V_RMAX/K_R,
    T1=T_UC1,
    T2=T_UB1,
    outMin=V_RMIN/K_R,
    y_start=VR0/K_R)
    annotation (Placement(transformation(extent={{50,-60},{70,-40}})));
  OpenIPSL.NonElectrical.Continuous.LeadLagLim imLimitedLeadLag4(
    K=1,
    outMax=V_RMAX/K_R,
    T1=T_OC1,
    T2=T_OB1,
    outMin=V_RMIN/K_R,
    y_start=VR0/K_R)
    annotation (Placement(transformation(extent={{20,-100},{40,-80}})));
  OpenIPSL.NonElectrical.Continuous.LeadLagLim imLimitedLeadLag5(
    K=1,
    outMax=V_RMAX/K_R,
    T1=T_OC1,
    T2=T_OB1,
    outMin=V_RMIN/K_R,
    y_start=VR0/K_R)
    annotation (Placement(transformation(extent={{50,-100},{70,-80}})));
  Modelica.Blocks.Math.Gain high(k=V_RMAX) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={116,-32})));
  Modelica.Blocks.Math.Gain low(k=V_RMIN) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={116,-70})));
  Modelica.Blocks.Interfaces.RealInput XADIFD annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={130,-140}), iconTransformation(extent={{-10,-10},{10,10}},
          origin={-200,-60})));
  OpenIPSL.NonElectrical.Functions.Switch_3way switch_3way(val=1) annotation (
      Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={86,24})));
  Modelica.Blocks.Continuous.TransferFunction transferFunction(
    b={T_C1,1},
    a={T_B1,1},
    initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{22,106},{42,126}})));
  Modelica.Blocks.Nonlinear.Limiter limiter1(uMax=V_RMAX/K_R, uMin=V_RMIN/K_R)
    annotation (Placement(transformation(extent={{62,106},{82,126}})));
  Modelica.Blocks.Continuous.TransferFunction transferFunction1(
    b={T_C2,1},
    a={T_B2,1},
    initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{82,66},{62,86}})));
  Modelica.Blocks.Nonlinear.Limiter limiter2(uMax=V_RMAX/K_R, uMin=V_RMIN/K_R)
    annotation (Placement(transformation(extent={{40,-6},{60,14}})));
  Modelica.Blocks.Continuous.TransferFunction transferFunction2(
    b={1},
    a={T_R,1},
    initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{-160,-10},{-140,10}})));
  Modelica.Blocks.Continuous.TransferFunction transferFunction3(
    b={1},
    a={T_1,1},
    initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{170,-10},{190,10}})));
  Modelica.Blocks.Nonlinear.VariableLimiter variableLimiter
    annotation (Placement(transformation(extent={{172,-72},{192,-52}})));

initial equation
  VR0 = Efd0 + K_C*XADIFD;
  //V_REF = VR0/K_R + ECOMP;
  V_REF = Efd0/K_C + ECOMP;
equation
  connect(imLimitedLeadLag1.y, imLimitedLeadLag3.u)
    annotation (Line(points={{41,-50},{41,-50},{48,-50}}, color={0,0,127}));
  connect(K_c.y, VERR2.u1) annotation (Line(points={{130,-81},{130,-81},{130,-6},
          {138,-6}}, color={0,0,127}));
  connect(imLimitedLeadLag4.y, imLimitedLeadLag5.u)
    annotation (Line(points={{41,-90},{41,-90},{48,-90}}, color={0,0,127}));
  connect(lV_Gate.p, VERR1.u2)
    annotation (Line(points={{-27.375,6},{-22,6}}, color={0,0,127}));
  connect(hV_Gate.p, lV_Gate.n2) annotation (Line(points={{-59.625,3},{-54.8125,
          3},{-54.8125,3},{-49.375,3}}, color={0,0,127}));
  connect(hV_Gate.n2, DiffV.y) annotation (Line(points={{-85.625,-0.5},{-91.8125,
          -0.5},{-91.8125,0},{-99,0}}, color={0,0,127}));
  connect(hV_Gate.n1, VUEL) annotation (Line(points={{-85.625,6.5},{-92,6.5},{-92,
          -160},{-130,-160},{-130,-200}}, color={0,0,127}));
  connect(lV_Gate.n1, VOEL) annotation (Line(points={{-49.375,9},{-54,9},{-54,-160},
          {-70,-160},{-70,-200}}, color={0,0,127}));
  connect(K_r.y, limiter.u) annotation (Line(points={{104,31.4},{104.5,31.4},{
          104.5,0},{106,0}}, color={0,0,127}));
  connect(limiter.y, VERR2.u2) annotation (Line(points={{129,0},{132,0},{132,6},
          {138,6}}, color={0,0,127}));
  connect(VOTHSG, VERR1.u1) annotation (Line(points={{-200,90},{-26,90},{-26,-6},
          {-22,-6}}, color={0,0,127}));
  connect(XADIFD, K_c.u)
    annotation (Line(points={{130,-140},{130,-104}}, color={0,0,127}));
  connect(K_r.u, switch_3way.y) annotation (Line(points={{104,45.2},{86,45.2},{
          86,32.8}}, color={0,0,127}));
  connect(imLimitedLeadLag3.y, switch_3way.In2)
    annotation (Line(points={{71,-50},{86,-50},{86,14.4}}, color={0,0,127}));
  connect(imLimitedLeadLag5.y, switch_3way.In3) annotation (Line(points={{71,
          -90},{90.8,-90},{90.8,14.4}}, color={0,0,127}));
  connect(transferFunction.y, limiter1.u)
    annotation (Line(points={{43,116},{60,116}}, color={0,0,127}));
  connect(transferFunction.u, VERR1.y)
    annotation (Line(points={{20,116},{8,116},{8,0},{1,0}}, color={0,0,127}));
  connect(imLimitedLeadLag4.u, VERR1.y) annotation (Line(points={{18,-90},{10,
          -90},{10,0},{1,0}}, color={0,0,127}));
  connect(imLimitedLeadLag1.u, VERR1.y) annotation (Line(points={{18,-50},{10,
          -50},{10,0},{1,0}}, color={0,0,127}));
  connect(transferFunction1.u, limiter1.y) annotation (Line(points={{84,76},{
          102,76},{102,116},{83,116}}, color={0,0,127}));
  connect(switch_3way.In1, limiter2.y) annotation (Line(points={{81.2,14.4},{82,
          14.4},{82,4},{61,4}}, color={0,0,127}));
  connect(limiter2.u, transferFunction1.y)
    annotation (Line(points={{38,4},{26,4},{26,76},{61,76}}, color={0,0,127}));
  connect(DiffV.u2, transferFunction2.y) annotation (Line(points={{-122,-6},{
          -132,-6},{-132,0},{-139,0}}, color={0,0,127}));
  connect(transferFunction2.u, ECOMP)
    annotation (Line(points={{-162,0},{-200,0}}, color={0,0,127}));
  connect(high.u, ECOMP) annotation (Line(points={{104,-32},{-176,-32},{-176,0},
          {-200,0}}, color={0,0,127}));
  connect(low.u, ECOMP) annotation (Line(points={{104,-70},{100,-70},{100,-32},
          {-176,-32},{-176,0},{-200,0}}, color={0,0,127}));
  connect(VERR2.y, transferFunction3.u)
    annotation (Line(points={{161,0},{168,0}}, color={0,0,127}));
  connect(variableLimiter.limit1, high.y) annotation (Line(points={{170,-54},{
          148,-54},{148,-32},{127,-32}}, color={0,0,127}));
  connect(low.y, variableLimiter.limit2)
    annotation (Line(points={{127,-70},{170,-70}}, color={0,0,127}));
  connect(variableLimiter.u, transferFunction3.y) annotation (Line(points={{170,
          -62},{156,-62},{156,-22},{191,-22},{191,0}}, color={0,0,127}));
  connect(variableLimiter.y, EFD) annotation (Line(points={{193,-62},{202,-62},
          {202,0},{210,0}}, color={0,0,127}));
  annotation (
    Diagram(coordinateSystem(
        preserveAspectRatio=true,
        extent={{-200,-200},{200,160}},
        grid={2,2})),
    Icon(coordinateSystem(
        extent={{-200,-200},{200,160}},
        preserveAspectRatio=true,
        grid={2,2}), graphics={Text(
          extent={{-60,154},{62,110}},
          lineColor={28,108,200},
          textString="ST5B"),Text(
          extent={{-184,-52},{-114,-72}},
          lineColor={28,108,200},
          textString="XADIFD")}),
    Documentation(info="<html>
<table cellspacing=\"1\" cellpadding=\"1\" border=\"1\">
<tr>
<td><p>Reference</p></td>
<td>PSS/E Manual</td>
</tr>
<tr>
<td><p>Last update</p></td>
<td>2016-04-29</td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>Tin Rabuzin,SmarTS Lab, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p><a href=\"mailto:luigiv@kth.se\">luigiv@kth.se</a></p></td>
</tr>
</table>
</html>"));
end ST5B;

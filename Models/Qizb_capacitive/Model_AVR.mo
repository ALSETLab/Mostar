within Mostar.Models.Qizb_capacitive;
model Model_AVR
  Data2Model.Qizb_capacitive.init
                          machineData
    annotation (Placement(transformation(extent={{-108,76},{-88,96}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-98,8},
            {-88,18}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-100,
            -10},{-90,0}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000,
                                                       fn=50) annotation (Placement(transformation(extent={{-64,80},
            {-4,100}})));
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
                     annotation (Placement(transformation(extent={{-82,40},{-62,
            58}})));
  Modelica.Blocks.Interfaces.RealOutput Efd annotation (Placement(
        transformation(extent={{-24,62},{-16,70}}),iconTransformation(extent={{42,
            66},{50,74}})));
  Modelica.Blocks.Sources.Constant const3(k=0)    annotation (Placement(transformation(extent={{-152,46},
            {-142,56}})));
  Modelica.Blocks.Sources.Constant const4(k=0.453070820000000)
                                                  annotation (Placement(transformation(extent={{-146,22},
            {-136,32}})));
  Modelica.Blocks.Interfaces.RealInput V
    annotation (Placement(transformation(extent={{-218,24},{-178,64}})));
  Modelica.Blocks.Interfaces.RealInput Ifd
    annotation (Placement(transformation(extent={{-220,-20},{-180,20}})));
equation

      Efd = sT5B.EFD;

  connect(sT5B.VUEL, const1.y) annotation (Line(points={{-76,39.1},{-78,39.1},{-78,
          13},{-87.5,13}}, color={0,0,127}));
  connect(const2.y, sT5B.VOEL) annotation (Line(points={{-89.5,-5},{-72,-5},{
          -72,39.1}},
                  color={0,0,127}));
  connect(const3.y, sT5B.VOTHSG) annotation (Line(points={{-141.5,51},{-111.75,51},
          {-111.75,52.6},{-83,52.6}}, color={0,0,127}));
  connect(const4.y, sT5B.EFD0) annotation (Line(points={{-135.5,27},{-109.75,27},
          {-109.75,45.4},{-83,45.4}}, color={0,0,127}));
  connect(sT5B.ECOMP, V)
    annotation (Line(points={{-83,49},{-198,49},{-198,44}}, color={0,0,127}));
  connect(sT5B.XADIFD, Ifd) annotation (Line(points={{-64,39.1},{-62,39.1},{-62,
          0},{-200,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,
            -40},{0,100}})),                                     Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},{0,100}})),
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
end Model_AVR;

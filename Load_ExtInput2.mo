within Mostar;
model Load_ExtInput2 "PSS/E Load with variation"
  extends OpenIPSL.Electrical.Loads.PSSE.BaseClasses.baseLoad;
  parameter OpenIPSL.Types.PerUnit d_P "Active Load Variation";
  parameter OpenIPSL.Types.Time t1 "Time of Load Variation";
  parameter OpenIPSL.Types.Time d_t "Time duration of load variation";
protected
  parameter Real PF=if q0 <=Modelica.Constants.eps
                                   then 1 else p0/q0 "Ration between active and reactive power; Not Power Factor";
  parameter OpenIPSL.Types.PerUnit d_Q=(p0 + d_P)/PF - q0;
public
  Modelica.Blocks.Interfaces.RealInput u annotation (Placement(transformation(
          extent={{48,16},{88,56}}), iconTransformation(extent={{-100,36},{-62,
            74}})));
public
  Modelica.Blocks.Interfaces.RealInput x annotation (Placement(transformation(
          extent={{52,-56},{92,-16}}), iconTransformation(extent={{-100,-60},{
            -62,-22}})));
equation
  if time >= t1 and time <= t1 + d_t then
    kI*S_I.re*v + S_Y.re*v^2 + kP*(S_P.re + d_P) + u = p.vr*p.ir + p.vi*p.ii;
    kI*S_I.im*v + S_Y.im*v^2 + kP*(S_P.im + d_Q) + x = (-p.vr*p.ii) + p.vi*p.ir;
  else
    kI*S_I.re*v + S_Y.re*v^2 + kP*S_P.re + u = p.vr*p.ir + p.vi*p.ii;
    kI*S_I.im*v + S_Y.im*v^2 + kP*S_P.im + x = (-p.vr*p.ii) + p.vi*p.ir;
  end if;
  annotation (
    Documentation(revisions="<html>
<table cellspacing=\"1\" cellpadding=\"1\" border=\"1\">
<tr>
<td><p>Reference</p></td>
<td>PSS&reg;E Manual</td>
</tr>
<tr>
<td><p>Last update</p></td>
<td> </td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>Mengjia Zhang, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p>see <a href=\"modelica://OpenIPSL.UsersGuide.Contact\">UsersGuide.Contact</a></p></td>
</tr>
</table>
</html>"));
end Load_ExtInput2;

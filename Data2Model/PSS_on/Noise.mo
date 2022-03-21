within Mostar.Data2Model.PSS_on;
record Noise =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PSS_on.Noise) "noise";

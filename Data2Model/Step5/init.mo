within Mostar.Data2Model.Step5;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.Step5.init) "initialization of all parameters on GENSAE";

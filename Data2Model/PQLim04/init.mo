within Mostar.Data2Model.PQLim04;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PQLim04.init) "initialization of all parameters on GENSAE";

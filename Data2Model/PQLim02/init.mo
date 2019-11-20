within Mostar.Data2Model.PQLim02;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PQLim02.init) "initialization of all parameters on GENSAE";

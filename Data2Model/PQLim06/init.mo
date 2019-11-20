within Mostar.Data2Model.PQLim06;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PQLim06.init) "initialization of all parameters on GENSAE";

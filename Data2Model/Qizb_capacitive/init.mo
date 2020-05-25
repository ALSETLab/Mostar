within Mostar.Data2Model.Qizb_capacitive;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.Qizb_capacitive.init) "initialization of all parameters on GENSAE";

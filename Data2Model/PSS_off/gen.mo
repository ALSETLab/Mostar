within Mostar.Data2Model.PSS_off;
record gen =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PSS_off.gen) "initialization of all parameters on GENSAE";

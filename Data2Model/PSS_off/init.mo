within Mostar.Data2Model.PSS_off;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PSS_off.init) "initialization of all parameters on GENSAE";

within Mostar.Data2Model.PSS_on;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PSS_on.init) "initialization of all parameters on GENSAE";

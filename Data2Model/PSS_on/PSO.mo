within Mostar.Data2Model.PSS_on;
record PSO =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PSS_on.PSO) "initialization of all parameters on GENSAE";

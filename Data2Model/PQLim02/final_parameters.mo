within Mostar.Data2Model.PQLim02;
record final_parameters =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PQLim02.final_parameters) "initialization of all parameters on GENSAE";

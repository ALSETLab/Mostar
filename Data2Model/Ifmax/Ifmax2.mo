within Mostar.Data2Model.Ifmax;
record Ifmax2 =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.AVR_Ifmax.init2) "initialization of all parameters on GENSAE";

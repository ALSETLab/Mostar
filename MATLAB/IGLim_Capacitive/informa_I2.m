
clear
close all
%%
Ts=0.005;


 
load('Capacitive_simulation.mat');
load('ST5B_data.mat');
 %%
 t=time;   
 
 
 V=V-mean(V(1:60));
  Efd=Efd-mean(Efd(1:60));
  Ifd=Ifd-mean(Ifd(1:60));
 
 
  
  data=iddata(Efd,[Ifd V],Ts);
  
  modelv=oe(data,[[1 3],[1 3],[0 0]]);
  
  figure(1); bode(modelv,'r',linsys1);
  
  figure(2); compare(data,modelv,'b')
  



data3=iddata(Efd,[V],Ts); 

modelK1K2=oe(data3,[[6 ],[6 ],[0 ]]);

figure(8); bode(modelK1K2,'r'); 

  
  figure(9); compare(data3,modelK1K2)
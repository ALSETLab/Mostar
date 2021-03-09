
clear 
close all
%%
Ts=0.005;


Gq=sys(1);
t=time;

%u=Efd-0.3388;
%y=Q+0.0809;
u=V-1.023715203;
    
y=Efd-0.585498891000000;


%y_sim=lsim(Gq,u,t);

%%plot(t,u,'r',t,y_sim,'b',t,y,'k')

data=iddata(y,u,Ts)

model=bj(data,[2 2 2 2 1]);

figure(1)
[y,fit,ic]= compare(data,model);
figure(2);
bode(model,'r',Gq,'b')


%%

Gq=sys(2);
t=time;
u = Ifd - 0.784985613000000;
y=Efd-0.585498891000000;


%y_sim=lsim(Gq,u,t);

%%plot(t,u,'r',t,y_sim,'b',t,y,'k')

data=iddata(y,u,Ts)

model=bj(data,[2 2 2 2 1]);

figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')

%%
Gq=sys(1);
t=time;

u=Efd-0.58549889;
y = Q - 0.340417632000000;


%y_sim=lsim(Gq,u,t);

%%plot(t,u,'r',t,y_sim,'b',t,y,'k')

data=iddata(y,u,Ts)

model=bj(data,[2 2 2 2 1]);

figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')
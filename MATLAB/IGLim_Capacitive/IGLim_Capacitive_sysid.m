
clear 
close all
%%
Ts=0.005;
load AVR_IG_Capacitive
%load AVR_ss
%load Generator_ss

Gq=sys(1);
t=time;

%u=Efd-0.3388;
%y=Q+0.0809;
u=V-0.974402868000000;
    
y=Efd-0.336801864000000;


%y_sim=lsim(Gq,u,t);

%%plot(t,u,'r',t,y_sim,'b',t,y,'k')

data=iddata(y,u,Ts)

model=bj(data,[2 2 2 2 1]);

figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')


%%

Gq=sys(2);
t=time;
u = Ifd - 0.447148883000000;
y=Efd-0.336801864000000;


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

u=Efd-0.60891362;
y = Q - 0.419514974;


%y_sim=lsim(Gq,u,t);

%%plot(t,u,'r',t,y_sim,'b',t,y,'k')

data=iddata(y,u,Ts)

model=bj(data,[2 2 2 2 1]);

figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')

clear 
close all
%%
Ts=0.005;


Gq=sys(1);
t=time;

%u=Efd-0.3388;
%y=Q+0.0809;
u=V-0.962559053000000;
    
y=Efd-0.325853936000000;


%y_sim=lsim(Gq,u,t);

%%plot(t,u,'r',t,y_sim,'b',t,y,'k')

data=iddata(y,u,Ts)

model=bj(data,[2 2 2 2 1]);

figure(1)
[y]=compare(data,model);
res = y.y+0.325853936000000;
figure(2);
bode(model,'r',Gq,'b')


%%

Gq=sys(2);
t=time;
u = Ifd -0.432907213000000;
y=Efd-0.325853936000000;


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

u=Efd-0.325853936000000;
y = Q +0.191401129000000;


%y_sim=lsim(Gq,u,t);

%%plot(t,u,'r',t,y_sim,'b',t,y,'k')

data=iddata(y,u,Ts)

model=bj(data,[2 2 2 2 1]);

figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')
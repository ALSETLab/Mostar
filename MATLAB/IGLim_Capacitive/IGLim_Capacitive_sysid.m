
clear 
close all
%%
Ts=0.005;
load AVR_IG_Capacitive
%%
%load AVR_ss
%load Generator_ss

Gq=sys;


% V = V(:,2);
% Efd = Efd(:,2);
% Ifd = Ifd(:,2);

%Efd = Efd+noise(:,2);

u=[V-mean(V(1:60)),Ifd - mean(Ifd(1:60))];  
y=Efd-mean(Efd(1:60));


data=iddata(y,u,Ts);
opt = bjOptions;
opt.Focus = 'simulation';
%model=bj(data,[2 2 2 2 2],opt);
model = oe(data,[[2 2] [2 2] [1 1]])
%model = tfest(data,6,5)
figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')

%res = y.y+Efd(1);

%%

Gq=sys(2);
t=time;
u = Ifd - Ifd(1);
y=Efd-Efd(1);

data=iddata(y,u,Ts)
model = oe(data,[2 2 0])
%model=bj(data,[2 2 2 2 1]);
%model = tfest(data,1,1)
figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')

%%


Gq=sys(1);
t=time;

u=Efd-Efd(1);
y = Q - Q(1);
data=iddata(y,u,Ts)
opt = bjOptions;
opt.Focus = 'simulation';
model=bj(data,[2 2 2 2 1],opt);


figure(1)
compare(data,model);
figure(2);
bode(model,'r',Gq,'b')
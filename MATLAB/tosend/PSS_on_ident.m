%% PSSOn
%%
clear
close all

Ts=0.005;

%%
odefun = 'PSS_greyest2';

%%%% True parameters
    T_w1 = 2;
    T_w2 = 2;
    T_6 = 0.01;
    T_w3 = 2;
    T_w4 = 2;
    T_7 = 2;
    K_S1= 5;
    K_S2 = 0.4;
    K_S3 = 1;
    T_8 = 0;
    T_9 = 0.1;
    T_1 = 0.2;
    T_2 = 0.04;
    T_3 = 0.36;
    T_4 = 0.12;
    T_10 = 0.01;
    T_11 = 0.01;
    V_S1MAX = 0.8;
    V_S1MIN = -0.8;
    V_S2MAX = 1.25;
    V_S2MIN = -1.25;
    V_STMAX = 0.1;
    V_STMIN = -0.1;
    M = 5;
    N = 0;
    
parameters0 = {'T_w1',T_w1;'T_w2',T_w2;'T_6',T_6;'T_w3',T_w3;'T_w4',T_w4;'T_7',T_7;'K_S1',K_S1;'K_S2',K_S2;'K_S3',K_S3;'T_8',T_8;'T_9',T_9;'T_1',T_1;'T_2',T_2;'T_3',T_3;'T_4',T_4;'T_10',T_10;'T_11',T_11};

fcn_type = 'c';

sys_true1 = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
%%
%%%% RaPId parameters
    T_w1 = 1.9675;
    T_w2 = 2.137;
    T_6 = 0.0105388;
    T_w3 = 2.1786;
    T_w4 = 2.002;
    T_7 = 2.0489;
    K_S1= 5.02712;
    K_S2 = 0.44074;
    K_S3 = 1.0215;
    T_8 = 0.33863;
    T_9 = 0.14362;
    T_1 = 0.208823;
    T_2 = 0.045679;
    T_3 = 0.38894;
    T_4 = 0.1209067;
    T_10 = 0.009203;
    T_11 = 0.013378;
    V_S1MAX = 0.8;
    V_S1MIN = -0.8;
    V_S2MAX = 1.25;
    V_S2MIN = -1.25;
    V_STMAX = 0.1;
    V_STMIN = -0.1;
    M = 5;
    N = 0;
    
parameters0 = {'T_w1',T_w1;'T_w2',T_w2;'T_6',T_6;'T_w3',T_w3;'T_w4',T_w4;'T_7',T_7;'K_S1',K_S1;'K_S2',K_S2;'K_S3',K_S3;'T_8',T_8;'T_9',T_9;'T_1',T_1;'T_2',T_2;'T_3',T_3;'T_4',T_4;'T_10',T_10;'T_11',T_11};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)

%%
load PSS_ON_sim
load PSS_linearized
load PSS_RaPId
t=time;   

t=t(1:1000);
P=P(1:1000);
w=w(1:1000);
V_PSS=V_PSS(1:1000);
PSS_sim = PSS_sim(1:1000);

P=P-mean(P(1:60));
w=w-mean(w(1:60));
V_PSS=V_PSS-mean(V_PSS(1:60));
PSS_sim=PSS_sim-mean(PSS_sim(1:60));



data=iddata(V_PSS,[w P],Ts);
 
modelv=oe(data,[[4 4] [8 8] [0 0]]);

y=lsim(sys_true,[w P],t,'foh');
z=lsim(modelv,[w P],t,'foh');  

%%
opt = greyestOptions;
opt.InitialState = 'backcast';
opt.Display = 'on';
opt.SearchOptions.MaxIterations = 50;
model_grey=greyest(data,sys_true1,opt);

%%
y=lsim(sys_true,[w P],t,'foh');
z=lsim(modelv,[w P],t,'foh');  
a=lsim(model_grey,[w P],t,'foh');
b=lsim(sys_est,[w P],t,'foh');


figure(1); bode(sys_true,'b',modelv,'r',sys_est,'g',model_grey,'k'); legend('True system','OE model','RaPId model','Grey box model');
figure(2); plot(t,V_PSS,'m',t,y,'b',t,z,'r',t,b,'g',t,a,'k');legend('Measurements','True system','OE model','RaPId model','Grey box model');xlabel('Time(s)','FontSize',14);ylabel('PSS Voltage(p.u.)','FontSize',14);
%%
load PSS_ON_sim_noise

t=time;   
% 
% t=t(250:1000);
% P=P(250:1000);
% w=w(250:1000);
% V_PSS=V_PSS(250:1000);
% PSS_sim = PSS_sim(1:1000);

P=P-mean(P(1:60));
w=w-mean(w(1:60));
V_PSS=V_PSS-mean(V_PSS(1:60));
PSS_sim=PSS_sim-mean(PSS_sim(1:60));
data=iddata(V_PSS,[w P],Ts);

%%
opt = greyestOptions;
opt.InitialState = 'backcast';
opt.Display = 'on';
opt.SearchOptions.MaxIterations = 50;
model_grey=greyest(data,sys_true1,opt);
%%
load PSS_linearized
load PSS_RaPId
modelv=oe(data,[[3 3] [8 8] [0 0]]);

y=lsim(sys_true,[w P],t,'foh');
z=lsim(modelv,[w P],t,'foh');  
a=lsim(model_grey,[w P],t,'foh');
b=lsim(sys_est,[w P],t,'foh');

fit_true =100*(1- norm(V_PSS-y(:,1))/norm(y(:,1)-mean(y(:,1))));
fit_OE =100*(1- norm(V_PSS-z(:,1))/norm(z(:,1)-mean(z(:,1))));
fit_grey =100*(1- norm(V_PSS-a(:,1))/norm(a(:,1)-mean(a(:,1))));
fit_est =100*(1- norm(V_PSS-b(:,1))/norm(b(:,1)-mean(b(:,1))));

figure(3); bode(sys_true,'b',modelv,'r',sys_est,'g',model_grey,'k'); legend('True system','OE model','RaPId model','Grey box model');
figure(4); plot(t,V_PSS,'m',t,y,'b',t,z,'r',t,b,'g',t,a,'k');legend('Measurements','True system','OE model','RaPId model','Grey box model');xlabel('Time(s)','FontSize',14);ylabel('PSS Voltage(p.u.)','FontSize',14);
%% Show that the PSS has informativity issues
%%
clear
close all

Ts=0.005;

%%
odefun = 'PSS_greyest2';
   
% %%%% INITIALIZATION (I Do not know where this come from, but it gives
% quite good results for the initialization of the grey-box identification)
    T_w1 = 1.9675;
    T_w2 = 2.0137;
    T_6 = 0.0105388;
    T_w3 = 2.01786;
    T_w4 = 2.002;
    
    K_S1= 5.02712;
    K_S2 = 0.404074;
    K_S3 = 1.0215;
    
    T_7 = 2.0489;
    T_8 = 0.5003863;
    T_9 = 0.10014362;
    T_1 = 0.2008823;
    T_2 = 0.0395679;
    T_3 = 0.368894;
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
    
  parametersinit = {'T_w1',T_w1;'T_w2',T_w2;'T_6',T_6;'T_w3',T_w3;'T_w4',T_w4;'T_7',T_7;'K_S1',K_S1;'K_S2',K_S2;'K_S3',K_S3;'T_8',T_8;'T_9',T_9;'T_1',T_1;'T_2',T_2;'T_3',T_3;'T_4',T_4};

fcn_type = 'c';

sys_est = idgrey(odefun,parametersinit,fcn_type); %%% True system (it is equivalent to your linearized model)


%%
%%%% PARAMETERS GIVEN BY MOSTAR (IT ALSO CORRESPONDS TO THE LINEARIZED MODEL OBTAINED WITH THESE PARAMETERS, see Figure 100 below) 
    T_w1 = 2;
    T_w2 = 2;
    T_6 = 0.01;
    T_w3 = 2;
    T_w4 = 2;
    T_7 = 2;
    K_S1= 5;
    K_S2 = 0.4;
    K_S3 = 1;
    T_8 = 0.5;
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
 
    parameters0 = {'T_w1',T_w1;'T_w2',T_w2;'T_6',T_6;'T_w3',T_w3;'T_w4',T_w4;'T_7',T_7;'K_S1',K_S1;'K_S2',K_S2;'K_S3',K_S3;'T_8',T_8;'T_9',T_9;'T_1',T_1;'T_2',T_2;'T_3',T_3;'T_4',T_4};

fcn_type = 'c';

sys_MOSTAR = idgrey(odefun,parameters0,fcn_type);
%% 
    T_w1 = 4;
    T_w2 = 4;
    T_6 = 0.02;
    T_w3 = 2;
    T_w4 = 2;
    T_7 = 2;
    K_S1= 5;
    K_S2 = 0.4;
    K_S3 = 1;
    T_8 = 0.5;
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
 
    parameters0 = {'T_w1',T_w1;'T_w2',T_w2;'T_6',T_6;'T_w3',T_w3;'T_w4',T_w4;'T_7',T_7;'K_S1',K_S1;'K_S2',K_S2;'K_S3',K_S3;'T_8',T_8;'T_9',T_9;'T_1',T_1;'T_2',T_2;'T_3',T_3;'T_4',T_4};

fcn_type = 'c';

sys_edited = idgrey(odefun,parameters0,fcn_type);


%%
load generator_Tppq0_10823_short
%%
mdl = 'PSS2B_block';
t;   
P=P-mean(P(1:60));
w=w-mean(w(1:60));


out = sim(mdl);
%%
V_PSS = out.VPSS.data; 
V_PSS = V_PSS(1:901);
V_PSS=V_PSS-mean(V_PSS(1:60));

data=iddata(V_PSS,[w P],Ts);
 
modeloe=oe(data,[[8 8] [3 3] [0 0]]);

%%
% opt = greyestOptions;
% %opt.InitialState = 'backcast';
% opt.Display = 'on';
% opt.SearchOptions.MaxIterations =20;
% [model_grey,Xo]=greyest(data,sys_MOSTAR,opt);
% 
% 
% %Ghat=ssbal(ss(model_grey.A,model_grey.B,model_grey.C,model_grey.D));
% 
% %Ghatd=c2d(Ghat,Ts,'zoh');
% 
% 
% [y,fit,xogrey]=compare(data,model_grey);
% [y,fit,xooe]=compare(data,modeloe);
% [y,fit,xoreal]=compare(data,sys_MOSTAR);

%%
t = t(1:901);
V_PSS = V_PSS(1:901);
w = w(1:901);
P = P(1:901);


%w2=zeros(size(w2));
data=iddata(V_PSS,[w P],Ts);
  
% ygrey=lsim(model_grey,[w P],t,xogrey,'zoh');
% yoe=lsim(modeloe,[w P],t,xooe,'zoh');
% y_sys=lsim(sys_MOSTAR,[w P],t,'zoh');
% y_est=lsim(sys_est,[w P],t,'zoh');


%figure(1); bode(sys_MOSTAR,'b',modeloe,'r',sys_est,'g',model_grey,'k'); legend('Mostar system','OE model','RaPId model','Grey-box model');
% figure(2); compare(data,sys_MOSTAR,'b',modeloe,'r',sys_est,'g',model_grey,'k');legend('Data','Mostar system','OE model','RaPId model','Grey-box model');
figure(2); compare(data,sys_MOSTAR,'b');legend('Data','Mostar system');


%figure(3); plot(t,V_PSS,'m',t,y_sys,'b',t,yoe,'r',t,y_est,'g',t,ygrey,'k');legend('Measurements','Mostar system','OE model','RaPId model','Grey-box model','FontSize',14);xlabel('Time(s)','FontSize',14);ylabel('PSS Voltage(p.u.)','FontSize',14);xlim([0 16.5]);


%theta_grey_init_mostar=[getpvec(model_grey),getpvec(sys_est),getpvec(sys_MOSTAR)];

%% Adding noise for informativity 

load exc_r_I2

r = 0.005*r(1:3301);

load PSS_ON
%%
mdl = 'PSS2B_block';
t=time;   
P=P-mean(P(1:60));
w=w-mean(w(1:60));
w = w+r;


out = sim(mdl);
%%
V_PSS = out.VPSS.data; 
V_PSS=V_PSS-mean(V_PSS(1:60));

data=iddata(V_PSS,[w P],Ts);
 
modeloe=oe(data,[[8 8] [3 3] [0 0]]);

%%
opt = greyestOptions;
%opt.InitialState = 'backcast';
opt.Display = 'on';
opt.SearchOptions.MaxIterations =20;
[model_grey,Xo]=greyest(data,sys_MOSTAR,opt);


%Ghat=ssbal(ss(model_grey.A,model_grey.B,model_grey.C,model_grey.D));

%Ghatd=c2d(Ghat,Ts,'zoh');


[y,fit,xogrey]=compare(data,model_grey);
[y,fit,xooe]=compare(data,modeloe);
[y,fit,xoreal]=compare(data,sys_MOSTAR);

%%
t = t(1:901);
V_PSS = V_PSS(1:901);
w = w(1:901);
w_org = w - r(1:901);
P = P(1:901);
%w2=zeros(size(w2));
data=iddata(V_PSS,[w P],Ts);
  
ygrey=lsim(model_grey,[w P],t,xogrey,'zoh');
yoe=lsim(modeloe,[w P],t,xooe,'zoh');
y_sys=lsim(sys_MOSTAR,[w P],t,'zoh');
y_est=lsim(sys_est,[w P],t,'zoh');


figure(4); bode(sys_MOSTAR,'b',modeloe,'r',sys_est,'g',model_grey,'k'); legend('Mostar system','OE model','RaPId model','Grey-box model');
figure(5); compare(data,sys_MOSTAR,'b');legend('Data','Mostar system','OE model','RaPId model','Grey-box model');
figure(6); plot(t,V_PSS,'m',t,y_sys,'b',t,yoe,'r',t,y_est,'g',t,ygrey,'k');legend('Measurements','Mostar system','OE model','RaPId model','Grey-box model','FontSize',14);xlabel('Time(s)','FontSize',14);ylabel('PSS Voltage(p.u.)','FontSize',14);xlim([0 16.5]);
figure(7); plot(t,w,t,w_org);legend('Signal with excitation','Measurement','FontSize',14);xlabel('Time(s)','FontSize',14);ylabel('\Delta \omega(Speed deviation, p.u.)','FontSize',14);



theta_grey_init_mostar=[getpvec(model_grey),getpvec(sys_est),getpvec(sys_MOSTAR)];



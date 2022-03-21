
clear all 
close all

load PSS_ON


Ts=0.005;
t=time;
P2=P-mean(P(1:60));
w2=w-mean(w(1:60));
V_PSS2=V_PSS-mean(V_PSS(1:60));

w2 = zeros(size(w2));

data=iddata(V_PSS2,[w2 P2],Ts);
odefun = 'PSS_greyest2';


fcn_type = 'c';

%% Real parameters

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
mdl = 'PSS2B_block';
load_system(mdl);
simOut = sim(mdl,'SaveOutput','on',...
   'OutputSaveName','yOut',...
   'SaveTime','on',...
   'TimeSaveName','tOut');
y = simOut.get('VPSS');
sim_t = get(y,'time');
%V_PSS2 = get(y,'data');
y = get(y,'data');
real_fit = 100*(1- norm(V_PSS2-y)/norm(y-mean(y)));

parameters0 = {'T_w1',T_w1;'T_w2',T_w2;'T_6',T_6;'T_w3',T_w3;'T_w4',T_w4;'T_7',T_7;'K_S1',K_S1;'K_S2',K_S2;'K_S3',K_S3;'T_8',T_8;'T_9',T_9;'T_1',T_1;'T_2',T_2;'T_3',T_3;'T_4',T_4;'T_10',T_10;'T_11',T_11};

%sys_MOSTAR = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
figure(1);compare(data,sys_MOSTAR)
figure(2);plot(t,V_PSS,t,y)
%% RaPId real parameters init
    T_w1 = 1.9675;
    T_w2 = 2.137;
    T_6 = 0.0105388;
    T_w3 = 2.1786;
    T_w4 = 2.002;
    T_7 = 2.0415;
    
    K_S1= 5.02712;
    K_S2 = 0.44074;
    K_S3 = 1.0289;
    
    T_8 = 0.3388;
    T_9 = 0.14362;
    T_1 = 0.208823;
    T_2 = 0.045679;
    T_3 = 0.38889;
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
    
mdl = 'PSS2B_block';
load_system(mdl);
simOut = sim(mdl,'SaveOutput','on',...
   'OutputSaveName','yOut',...
   'SaveTime','on',...
   'TimeSaveName','tOut');
y = simOut.get('VPSS');
sim_t = get(y,'time');
y = get(y,'data');
RaPId_real_init =[sim_t,y];
fit_RaPId_real_init =100*(1- norm(V_PSS2-y)/norm(y-mean(y)));

figure(3);plot(t,V_PSS2,t,y)
%% RaPId greybox parameters init
    T_w1 = 2.05 ;
    T_w2 = 1.95;
    T_6 =  0.0166;
    T_w3 =  1.66 ;
    T_w4 = 2.44;
    T_7 = 2.2774;
    
    
    K_S1=  4.51;
    K_S2 =  0.445 ;
    K_S3 =  0.4915;
    
    T_8 =  0.447;
    T_9 =  0.203 ;
    T_1 = 0.252 ;
    T_2 = 0.0519;
    T_3 =  0.3457 ;
    T_4 = 0.153 ;
    T_10 = 0.0514;
    T_11 =  0.0353;
    V_S1MAX = 0.8;
    V_S1MIN = -0.8;
    V_S2MAX = 1.25;
    V_S2MIN = -1.25;
    V_STMAX = 0.1;
    V_STMIN = -0.1;
    M = 5;
    N = 0; 
    
mdl = 'PSS2B_block';
load_system(mdl);
simOut = sim(mdl,'SaveOutput','on',...
   'OutputSaveName','yOut',...
   'SaveTime','on',...
   'TimeSaveName','tOut');
y = simOut.get('VPSS');
sim_t = get(y,'time');
y = get(y,'data');
RaPId_grey_init =[sim_t,y];

fit_RaPId_grey_init =100*(1- norm(V_PSS2-y)/norm(y-mean(y)));

plot(t,y,t,V_PSS2)
%% Greybox parameters with RaPId (using mostar parameters) init
    T_w1 = 1.8648;
    T_w2 = 2.0937;
    T_6 = 0.0137;
    T_w3 = 1.9476;
    T_w4 = 1.9675;
    T_7 = 2.2057;
    
    K_S1= 3.2103;
    K_S2 = 0.40534;
    K_S3 = 1.0241;
   
    
    
    T_8 = 0;
    T_9 = 0.101;
    T_1 = 0.4414;
    T_2 = 0.0404;
    T_3 = 0.2203;
    T_4 = 0.12;
    T_10 = 0.0092;
    T_11 = 0.0134;
    V_S1MAX = 0.8;
    V_S1MIN = -0.8;
    V_S2MAX = 1.25;
    V_S2MIN = -1.25;
    V_STMAX = 0.1;
    V_STMIN = -0.1;
    M = 5;
    N = 0; 
        
mdl = 'PSS2B_block';
load_system(mdl);
simOut = sim(mdl,'SaveOutput','on',...
   'OutputSaveName','yOut',...
   'SaveTime','on',...
   'TimeSaveName','tOut');
y = simOut.get('VPSS');
sim_t = get(y,'time');
y = get(y,'data');
Grey_RaPId_init =[sim_t,y];
fit_Grey_RaPId_init =100*(1- norm(V_PSS2-y)/norm(y-mean(y)));    

plot(t,y,t,V_PSS2)
%% Greybox parameters with mostar parameters init
    T_w1 = 2.0118;
    T_w2 = 1.9506;
    T_6 = 0.0027;
    T_w3 = 1.939;
    T_w4 = 1.9782;
    T_7 = 2.0811;
    
    K_S1 = 5.028;
    K_S2= 0.3542;
    K_S3 = 1.0198;
    
    T_8 = -0.0009;
    T_9 = 0.101;
    T_1 = 0.1103;
    T_2 = 0.0404;
    T_3 = 0.3147;
    T_4 = 0.1162;
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
    
    
        
mdl = 'PSS2B_block';
load_system(mdl);
simOut = sim(mdl,'SaveOutput','on',...
   'OutputSaveName','yOut',...
   'SaveTime','on',...
   'TimeSaveName','tOut');
y = simOut.get('VPSS');
sim_t = get(y,'time');
y = get(y,'data');
Grey_real_init =[sim_t,y];
fit_Grey_real_init =100*(1- norm(V_PSS2-y)/norm(y-mean(y))); 
plot(t,y,t,V_PSS2)
%%




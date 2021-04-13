%% IFMAX
T = readtable('AVR_MR_Ifmax_Lim_CH 1 _ TrendingRecorder @ 9-20-2015 1-11-14 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

V = V(14500:1:17000);
vr = vr(14500:1:17000);
vi = vi(14500:1:17000);
P = P(14500:1:17000);
Q = Q(14500:1:17000);

Efd = Efd(14500:1:17000);
Ifd = Ifd(14500:1:17000);

time = [0:0.005:2500*.005]';

signal_in = [vr,vi];
signal = [P,Q];


P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('AVR_Ifmax.mat','P','Q','vi','vr','V','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% IG_LIM INDUCTIVE
T = readtable('AVR_MR_IG_Lim_Induktivno_CH 1 _ TrendingRecorder @ 9-20-2015 1-17-22 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

V = V(38300:39500);
ang = ang(38300:39500);
vr = vr(38300:39500);
vi = vi(38300:39500);
P = P(38300:39500);
Q = Q(38300:39500);

Efd = Efd(38300:39500);
Ifd = Ifd(38300:39500);

time = [0:0.005:1200*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('IG_Lim_Inductive.mat','ang','P','Q','V','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% IG_LIM CAPACITIVE
T = readtable('AVR_MR_IG_Lim_kapacitivno_CH 1 _ TrendingRecorder @ 9-20-2015 1-22-01 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

ang = ang(7000:7900);
vr = V.*cosd(ang);
vi = V.*sind(ang);
V = V(7000:7900);
vr = vr(7000:1:7900);
vi = vi(7000:1:7900);
P = P(7000:1:7900);
Q = Q(7000:1:7900);

Efd = Efd(7000:1:7900);
Ifd = Ifd(7000:1:7900);

time = [0:0.005:900*.005]';

signal_in = [vr,vi];
signal = [P,Q];



P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];
V_plot=[time,V];

save('AVR_IG_Capacitive.mat','P','Q','vi','vr','V','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% PQLIM00
T = readtable('AVR_MR_PQ_lim_00_CH 1 _ TrendingRecorder @ 9-20-2015 1-28-49 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

vr = vr(23100:1:24000);
vi = vi(23100:1:24000);
P = P(23100:1:24000);
Q = Q(23100:1:24000);

Efd = Efd(23100:1:24000);
Ifd = Ifd(23100:1:24000);

time = [0:0.005:900*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PQ_Lim_00.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% PQLIM02
T = readtable('AVR_MR_PQ_Lim02_CH 1 _ TrendingRecorder @ 9-20-2015 1-26-03 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);
V = V(15000:10:25400);
ang = ang(15000:10:25400);
vr = vr(15000:10:25400);
vi = vi(15000:10:25400);
P = P(15000:10:25400);
Q = Q(15000:10:25400);

Efd = Efd(15000:10:25400);
Ifd = Ifd(15000:10:25400);

time = [0:0.05:10400*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PQ_LIM_02.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% PQLIM04
T = readtable('AVR_MR_PQ_LIM_04_CH 1 _ TrendingRecorder @ 9-20-2015 1-32-00 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);


V = V(24000:1:25500);
ang = ang(24000:1:25500);
vr = vr(24000:1:25500);
vi = vi(24000:1:25500);
P = P(24000:1:25500);
Q = Q(24000:1:25500);

Efd = Efd(24000:1:25500);
Ifd = Ifd(24000:1:25500);

time = [0:0.005:1500*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PQ_LIM_04.mat','P','Q','V','ang','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');
%% PQLIM06
T = readtable('AVR_MR_PQ_Lim_06_CH 1 _ TrendingRecorder @ 9-20-2015 1-35-54 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

V = V(24000:1:28000);
ang = ang(24000:1:28000);
vr = vr(24000:1:28000);
vi = vi(24000:1:28000);
P = P(24000:1:28000);
Q = Q(24000:1:28000);

Efd = Efd(24000:1:28000);
Ifd = Ifd(24000:1:28000);

time = [0:0.005:4000*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PQ_LIM_06.mat','P','Q','vi','vr','V','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% PSS ON
T = readtable('AVR_MR_PSS_ON_CH 1 _ TrendingRecorder @ 9-20-2015 1-42-14 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

vr = vr(1:10:1300);
vi = vi(1:10:1300);
P = P(1:10:1300);
Q = Q(1:10:1300);

Efd = Efd(1:10:1300);
Ifd = Ifd(1:10:1300);

time = [0:0.05:1299*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PSS_on.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');
%% PSS OFF
T = readtable('AVR_MR_PSS_OFF_CH 1 _ TrendingRecorder @ 9-20-2015 1-40-24 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

% V = V(24000:1:25500);
% ang = ang(24000:1:25500);
% vr = vr(24000:1:25500);
% vi = vi(24000:1:25500);
% P = P(24000:1:25500);
% Q = Q(24000:1:25500);
% 
% Efd = Efd(24000:1:25500);
% Ifd = Ifd(24000:1:25500);
% 
% time = [0:0.005:1500*.005]';
V = V(24000:1:28000);
ang = ang(24000:1:28000);
vr = vr(24000:1:28000);
vi = vi(24000:1:28000);
P = P(24000:1:28000);
Q = Q(24000:1:28000);


V = V(0:1500);
ang = ang(0:1500);
vr = vr(0:1500);
vi = vi(0:1500);
P = P(0:1500);
Q = Q(0:1500);
Efd = Efd(0:1500);
Ifd = Ifd(0:1500);
res = res(0:1500);

time = [0:0.005:1500*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PSS_off.mat','P','Q','vi','vr','V','ang','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% Qizb Capacitive
T = readtable('AVR_MR_Q_izb_kapacitivno_CH 1 _ TrendingRecorder @ 9-20-2015 1-58-26 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

V = V(28000:10:32000);
ang = ang(28000:10:32000);
vr = vr(28000:10:32000);
vi = vi(28000:10:32000);
P = P(28000:10:32000);
Q = Q(28000:10:32000);

Efd = Efd(28000:10:32000);
Ifd = Ifd(28000:10:32000);

time = [0:0.05:4000*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];

save('Qizb_Capacitive.mat','P','Q','V','ang','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');
    
%% Qizb Inductive
T = readtable('AVR_MR_Qizb_Induktivno_CH 1 _ TrendingRecorder @ 9-20-2015 1-50-49 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

vr = vr(60000:10:67200);
vi = vi(60000:10:67200);
P = P(60000:10:67200);
Q = Q(60000:10:67200);

Efd = Efd(60000:10:67200);
Ifd = Ifd(60000:10:67200);

time = [0:0.05:7200*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];

save('Qizb_Inductive.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');
    
%% Step 5
T = readtable('AVR_MR_Step5_CH 1 _ TrendingRecorder @ 9-20-2015 12-55-05 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

vr = vr(60000:10:67200);
vi = vi(60000:10:67200);
P = P(60000:10:67200);
Q = Q(60000:10:67200);

Efd = Efd(60000:10:67200);
Ifd = Ifd(60000:10:67200);

time = [0:0.05:17200*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];

save('Step_5.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');
    
%% RR_Step10
T = readtable('RR_MR_Step10_CH 1 _ TrendingRecorder @ 9-20-2015 2-06-57 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

vr = vr(25000:10:30800);
vi = vi(25000:10:30800);
P = P(25000:10:30800);
Q = Q(25000:10:30800);

Efd = Efd(25000:10:30800);
Ifd = Ifd(25000:10:30800);

time = [0:0.05:5800*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];

save('Step_10.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');
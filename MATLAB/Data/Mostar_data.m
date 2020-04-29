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

vr = vr(8000:10:20000);
vi = vi(8000:10:20000);
P = P(8000:10:20000);
Q = Q(8000:10:20000);

Efd = Efd(8000:10:20000);
Ifd = Ifd(8000:10:20000);

time = [0:0.05:12000*.005]';

signal_in = [vr,vi];
signal = [P,Q];


P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('AVR_Ifmax.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
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

vr = vr(1:10:42800);
vi = vi(1:10:42800);
P = P(1:10:42800);
Q = Q(1:10:42800);

Efd = Efd(1:10:42800);
Ifd = Ifd(1:10:42800);

time = [0:0.05:42799*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('IG_Lim_Inductive.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
        'P_plot','Q_plot','vr_plot','vi_plot','Ifd_plot','Efd_plot');

%% IG_LIM CAPACITIVE
T = readtable('AVR_MR_IG_Lim_kapacitivno_CH 1 _ TrendingRecorder @ 9-20-2015 1-22-01 PM.csv');

P = T.SFS_Meas_PRel;
Q = T.SFS_Meas_QRel;

Efd = T.SFS_Meas_UfRel;
Ifd = T.SFS_Meas_IfRel;

ang = atand(Q./P);
V = T.SFS_Meas_UgRel;

vr = V.*cosd(ang);
vi = V.*sind(ang);

vr = vr(1:10:9400);
vi = vi(1:10:9400);
P = P(1:10:9400);
Q = Q(1:10:9400);

Efd = Efd(1:10:9400);
Ifd = Ifd(1:10:9400);

time = [0:0.05:9399*.005]';

signal_in = [vr,vi];
signal = [P,Q];



P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('AVR_IG_Capacitive.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
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

vr = vr(20000:10:26000);
vi = vi(20000:10:26000);
P = P(20000:10:26000);
Q = Q(20000:10:26000);

Efd = Efd(20000:10:26000);
Ifd = Ifd(20000:10:26000);

time = [0:0.05:6000*.005]';

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

vr = vr(15000:10:28000);
vi = vi(15000:10:28000);
P = P(15000:10:28000);
Q = Q(15000:10:28000);

Efd = Efd(15000:10:28000);
Ifd = Ifd(15000:10:28000);

time = [0:0.05:13000*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PQ_LIM_04.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
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

vr = vr(15000:10:28000);
vi = vi(15000:10:28000);
P = P(15000:10:28000);
Q = Q(15000:10:28000);

Efd = Efd(15000:10:28000);
Ifd = Ifd(15000:10:28000);

time = [0:0.05:13000*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PQ_LIM_06.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
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

vr = vr(23000:10:28000);
vi = vi(23000:10:28000);
P = P(23000:10:28000);
Q = Q(23000:10:28000);

Efd = Efd(23000:10:28000);
Ifd = Ifd(23000:10:28000);

time = [0:0.05:5000*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];


save('PSS_off.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
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

vr = vr(20000:10:32000);
vi = vi(20000:10:32000);
P = P(20000:10:32000);
Q = Q(20000:10:32000);

Efd = Efd(20000:10:32000);
Ifd = Ifd(20000:10:32000);

time = [0:0.05:12000*.005]';

signal_in = [vr,vi];
signal = [P,Q];

P_plot = [time,P];
Q_plot = [time,Q];
vr_plot = [time,vr];
vi_plot = [time,vi];
Efd_plot = [time,Efd];
Ifd_plot = [time,Ifd];

save('Qizb_Capacitive.mat','P','Q','vi','vr','signal_in','time','signal','Efd','Ifd',...
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

vr = vr(15000:10:21600);
vi = vi(15000:10:21600);
P = P(15000:10:21600);
Q = Q(15000:10:21600);

Efd = Efd(15000:10:21600);
Ifd = Ifd(15000:10:21600);

time = [0:0.05:6600*.005]';

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

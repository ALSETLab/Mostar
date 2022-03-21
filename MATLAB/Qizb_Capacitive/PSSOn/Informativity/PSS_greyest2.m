
function [A,B,C,D]=PSS_greyest2(T_w1,T_w2,T_6,T_w3,T_w4,T_7,K_S1,K_S2,K_S3,T_8,T_9,T_1,T_2,T_3,T_4,Ts)
%%

s = tf('s');

LP1 = (T_w1*s)/(T_w1*s+1);
LP2 = (T_w2*s)/(T_w2*s+1);
LP3 = 1/(T_6*s+1);

LP4 = (T_w3*s)/(T_w3*s+1);
LP5 = (T_w4*s)/(T_w4*s+1);
LP6 = (K_S2)/(T_7*s+1);

K1=LP1*LP2*LP3;
K2=LP4*LP5*LP6;

sum1 = ss([K1,0;0,K2]);
ramptrack = ss((s*T_8+1)/((T_9*s+1)^6));

%LLsum1=ramptrack*sum1;
%sum2 = LLsum1 - linsys10;
%sum2 = LLsum1 - [0,LP4*LP5*LP6];


LLsum1=ss(ramptrack*[1, K_S3]-[0 1]);
%sum2 = LLsum1 - linsys10;
sum2 = ss(LLsum1*sum1);

%sum2=
LL1 = ss(((T_1*s+1)*(T_3*s+1))/((T_2*s+1)*(T_4*s+1)));
out = ss(sum2*LL1*K_S1);


sys=ssbal(ss(out));


[A,B,C,D]=ssdata(sys);

end

%%


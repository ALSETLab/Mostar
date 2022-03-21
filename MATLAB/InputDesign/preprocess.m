out = unique(out,'rows');

y=[];
t=0
for x = 1:length(out-1)
if (mod(out(x,1),0.005)==0)&&(out(x,1)~=out(x+1,1))
 y = [y;out(x,:)];
 t=t+0.005;
end
end

t=y(:,1);Efd = y(:,2);P = y(:,3); Q = y(:,4); V = y(:,5); Ifd = y(:,6); speed = y(:,7);

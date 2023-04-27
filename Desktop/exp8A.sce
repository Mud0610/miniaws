//% - - - CDMA Transmitter- - - %

clc;
spread=[];
Data=((randint(1,8))>.5)+0;
Goldcode=((randint(1,15))>.5)+0
k=1;
LD=length(Data);
LG=length(Goldcode);
fori=1:LD
for j=1:LG
spread(1,k)=xor(Data(1,i),Goldcode(1,j));
k=k+1;
end
end

//%.......bit time............
figure
Tb=10;
Data_pulse = rectpulse(Data(1,:),10);
subplot(3,1,1);
stem(Data_pulse);
ylabel('\bf Original Bit Sequence');
title('\bf\it TRANSMITTED MESSAGE');
Gold_pulse = rectpulse(Goldcode(1,:),10);
subplot(3,1,2);
stem(Gold_pulse);
ylabel('\bf Gold Code');

//%.........................
spreaded_pulse = rectpulse(spread(1,:),10);
subplot(3,1,3);
stem(spreaded_pulse);
ylabel('\bf Spreaded Sequence')

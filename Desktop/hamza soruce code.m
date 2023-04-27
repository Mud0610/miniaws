clc ;
clear all;
close all;
pr = input(&#39;Enter the prob of the symbols = &#39;);
pr = pr&#39;; %transposetak en
ln_pr = length(pr);
a = sort(pr,&#39;descend&#39;);
final_a = a;
ln = length(a);
all_add_last = [];
for cnt=1:1:ln_pr-2
add_last = a(ln) + a(ln-1);
all_add_last = [all_add_last,add_last];
ln = ln-2;
a = a(1:ln);
a = [a;add_last];
a = sort(a,&#39;descend&#39;);
ln = ln+1;
a = [a;zeros(1,cnt)&#39;];
final_a = [final_a ,a];
end
disp(&#39;The HUFFMAN tree&#39;);
disp(final_a);
n=length(pr);
symbol = [1:n] ;
p=pr&#39;;
[cde,LEN] = huffmandict(symbol,p);
for(i = 1:1:n)
disp(&#39;The Huffman code for the symbol&#39;)
disp(p(1,i))
cde{i,2}
end
H=0;
for j=1:1:n
H=H+(-p(1,j)*log2(p(1,j)));
end
disp(&#39;The Entropy of given symbol is = &#39;);
disp(H);
disp(&#39;The avrage codeword length for the code is = &#39;);
disp(LEN);
E=H/LEN;
disp(&#39;The code efficiency is = &#39;);
disp(E);
R=1-E;
disp(&#39;The code redundancy is = &#39;);
disp(R);
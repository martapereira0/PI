 1)n=0
 1 <= n <= 10 isto é:
  1<=n <=> 0
  0 <= 10 <=> 1
output: n entre e e 10

2)
int i = 1;
if (i == 2 || 3)
printf("i igual 2 ou 3\n");

0 || 3 <=> 1
output: i igual 2 ou 3

3)
int i = 2, j = 1, k = 0;
if(i==j==k)
printf("i,j,k iguais\n");

2==1 <=> 0
0==0 <=> 1

output: i,j,k iguais


4)
int i = 1, j = 2, k = 3;
if(i!=(j&&k))
printf("i diferente j e k\n");

(1!=(2&&3)) <=> (1 != 1) <=> 0
output: // nao imprime nada

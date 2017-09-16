#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Rnd(a,b) (rand()%(b-a)) + a
int main()
{
int a,b,c;
printf("1부터 3 사이의 시작할 숫자를 입력해 주세요.");
scanf("%d",&a);
while(a<=0||a>=4){
printf("1부터 3 사이의 숫자를 입력해야 합니다. 다시 입력해 주세요.");
scanf("%d",&a);}
printf("현재 숫자는 %d 입니다.\n",a);

while(a<=30){
if(a>=26){
b = 29-a;
goto c;}
if(a>=22){
b = 25-a;
goto c;}
if(a>=18){
b = 21-a;
goto c;}
if(a>=14){
b = 17-a;
goto c;}
if(a>=10){
b = 13-a;
goto c;}
if(a>=6){
b = 9-a;
goto c;}
if(a>=2){
b = 5-a;
goto c;}


if(a==1){
srand(time(NULL));
b = rand()%3+1;}
if(a==5){
srand(time(NULL));
b = rand()%3+1;}
if(a==9){
srand(time(NULL));
b = rand()%3+1;}
if(a==13){
srand(time(NULL));
b = rand()%3+1;}
if(a==17){
srand(time(NULL));
b = rand()%3+1;}
if(a==21){
srand(time(NULL));
b = rand()%3+1;}
if(a==25){
srand(time(NULL));
b = rand()%3+1;}
if(a==29){
srand(time(NULL));
b = rand()%3+1;}




c:
a = a + b;
printf("컴퓨터가 %d의 숫자를 불렀습니다. 현재 숫자 : %d\n",b,a);
if(a>=30){
printf("승리하셨습니다.");
getchar();
getchar();
exit(0);}
printf("숫자를 입력해 주세요.  :");
scanf("%d",&c);
while(c<=0||c>=4){
printf("1부터 3 사이의 숫자를 입력해야 합니다. 다시 입력해 주세요.");
scanf("%d",&c);}
a = a + c;
printf("현재 숫자는 %d 입니다.\n",a);
if(a>=30){
printf("패배하셨습니다.");
getchar();
getchar();
exit(0);}
b=0;
c=0;}


return 0;}


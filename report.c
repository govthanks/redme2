#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Rnd(a,b) (rand()%(b-a)) + a
int main()
{
int a,b,c;
printf("1���� 3 ������ ������ ���ڸ� �Է��� �ּ���.");
scanf("%d",&a);
while(a<=0||a>=4){
printf("1���� 3 ������ ���ڸ� �Է��ؾ� �մϴ�. �ٽ� �Է��� �ּ���.");
scanf("%d",&a);}
printf("���� ���ڴ� %d �Դϴ�.\n",a);

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
printf("��ǻ�Ͱ� %d�� ���ڸ� �ҷ����ϴ�. ���� ���� : %d\n",b,a);
if(a>=30){
printf("�¸��ϼ̽��ϴ�.");
getchar();
getchar();
exit(0);}
printf("���ڸ� �Է��� �ּ���.  :");
scanf("%d",&c);
while(c<=0||c>=4){
printf("1���� 3 ������ ���ڸ� �Է��ؾ� �մϴ�. �ٽ� �Է��� �ּ���.");
scanf("%d",&c);}
a = a + c;
printf("���� ���ڴ� %d �Դϴ�.\n",a);
if(a>=30){
printf("�й��ϼ̽��ϴ�.");
getchar();
getchar();
exit(0);}
b=0;
c=0;}


return 0;}


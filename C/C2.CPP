//reading FEN Code
#include<stdio.h>
#include<conio.h>
char a[10][10],b[100];
int v;
//void loop(int),rr(),nn(),bb(),qq(),pp();
void get();

void main()
{
int i,j;
clrscr();
gets(b);
get();
for(i=0;i<8;i++){
for(j=0;j<8;j++)
printf("%c",a[i][j]);
printf("\n");}

printf("%d",v);

getch();
}


void get()
{
static int i,p,j,k;
for(i=0;b[i]!='\0';i++)
{
if(b[i]=='k')//finding the black king position
v=10*j+p;
if(b[i]=='/')
{j++;p=0;continue;}
k=b[i];
if((k<=56)&&(k>=49)){
while(0<(k--)-48)
a[j][p++]=0;}
else
a[j][p++]=b[i];
}}


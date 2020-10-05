#include<stdio.h>
#include<string.h>
int main()
{
char n[10],m[]="sanchari";
int p,c=0,i;
scanf("%s",n);
p=strlen(n);
for(i=0;i<p;i++)
{
    if(n[i]==m[i])
    {
        c++;
    }
}
if(c==8)
{
printf("ritik love");
}
else
{
printf("nikal jaao yaha se ritik sanchari ka hai");
}
return 0;

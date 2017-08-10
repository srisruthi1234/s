#include<stdio.h>
int main()
{
char c;
int ilc,iuc;
do
{
printf("enter an alphabet"\n);
scanf("%d",&c);
}
while(isalpha(c));
ilc=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
iuc=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(ilc||iuc)
{
printf("%c is vowel",c);
]
else
{
printf("%c is consonant",c);
}
return(0);
}

#include<stdio.h>
#include<conio.h>
void main()
{
char v;
clrscr();
printf("\n enter the charcters");
scanf("%c",&v);
if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
{
printf("\n vowels");
}
else
{
printf("\n characters");
}
getch();
}

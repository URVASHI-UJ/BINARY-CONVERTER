#include<iostream.h>
#include<conio.h>
void main()
{
int a,b[20];
static int i=0;
clrscr();
cout<<"enter a number in decimal";
cin>>a;
while(a!=0)
{
b[i]=a%2;
a/=2;
i++;
};
while(i>=0)
{
cout<<b[i];
i--;
};
getch();
}
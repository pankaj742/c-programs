#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int num,cube=0;;
//clrscr();
int i=0;
while(i<=num)
{
cout<<" \n Enter any positive integer number to find its cube,type 0 to exit \n ";
cin>>num;
cube = num * num * num;
cout<<"\n Cube of num "<<num<<" = "<<cube;
i=i+1;
}
getch();
return 0;
}


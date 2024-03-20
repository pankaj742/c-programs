#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int a=3,b=7;
int* p; int* q;
p=&a;
q=&b;
int c=p-q;
cout<<p<<endl;
cout<<q<<endl;
cout<<c;
return 0;
}

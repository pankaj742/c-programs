#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string name;
	string l;
	cout<<"\nenter two strings \t";
	cin>>name>>l;
	if(name==l)
	cout<<"\nstring's are equal\t";
	else
	cout<<"\nstring's are not equal";
	cout<<l.length();
	return 0;
}

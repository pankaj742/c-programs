#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string name;
	string data;
	cout<<"\nenter name of the file \t";
	cin>>name;
	
	ofstream f1;
	f1.open("pankaj.txt");
	cout<<"\nfile pankaj.txt is opend for writing\t";
	cout<<"\nenter data to enter into file\t";
	cin>>name;
	f1<<name;
	f1.close();
	ifstream f2;
	f2.open("pankaj.txt");
while(f2>>data){
data=data+"\0";
}
	f2.close();
	cout<<data;
	return 0;
}

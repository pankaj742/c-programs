#include <iostream>
using namespace std;
int main(){
int t;
do{
	cin>>t;
	cout<<"\n1.case 1"<<endl;
	cout<<"\n2.case 2"<<endl;
	cout<<"\n3.exit";
		cout<<"\nenter you choice";
	switch(t){
		case 1:
			cout<<"\nwow case 1";
			break;
		case 2:
			cout<<"\ncase 2";
			break;
		case 3:
		
			exit(0);
	}
}while(t!=4);
return 0;
}

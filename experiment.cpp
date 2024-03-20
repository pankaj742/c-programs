#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter value of x";
	cin>>x;
	while(x){
		cout<<"\n"<<++x;
		//if(x>10)
		break;
	}
	return 0;
}

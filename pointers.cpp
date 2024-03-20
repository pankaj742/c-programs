	#include <iostream>
	using namespace std;
int main(){
	int n;
	const int* p=&n;
	cout<<"\n enter the value of n:\t";
	cin>>n;
	cout<<"\nvalue of n=\t"<<n<<"\tvalue of p=\t"<<*p<<"\naddress of n=\t"<<&n<<"\taddress of p="<<p;
	int m;
	cout<<"\nenter the value for m:\t";
	cin>>m;
	p=&m;
	*p=8;
	cout<<"\nvalue of m is=\t"<<*p;
	return 0;
}	

#include <iostream>
using namespace std;
int main(){
	int *b;
	int a[3][4],l1=0,u1=2,l2=0,u2=3,s;
	b=&a[0][0];
	s=sizeof(int);
	cout<<"enter the elements of the array";
	for(int i=0;i<3;i++)
	for(int j=0;j<4;j++)
	cin>>a[i][j];
	cout<<"\nelements of the array are:\n";
		for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
          cout<<a[i][j];
          cout<<"\t";
}
cout<<"\n";
}
cout<<"\nsize of the one element in the array is:\t"<<s;
cout<<"\naddress of the array elements are:\n";
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
          cout<<b+(i-l1)*(u2-l2+1)*s+(j-l2)*s;
          cout<<"\t";
}
cout<<"\n";
}
}


#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct reading{
	int hour;
	double temperature;
	reading(int h,double t):hour(h),temperature(t){
	}
}; 
int main(){
	string name;
	cout<<"\nPlease enter input file name";
	cin>>name;
	ifstream ist(name.c_str());
	if(!ist) 
	cout<<"cant open input file"<<name;
	cout<<"\nPlease enter name for output file";
	cin>>name;
	ofstream ost(name.c_str());
	if(!ost)
	cout<<"\ncan't open output file"<<name;
	vector<reading>temps;
	int hour;
	double temperature;
	while(ist>>hour>>temperature){
		if(hour<0||23<hour)
		cout<<"\nhour out of range";
		temps.push_back(reading(hour,temperature));
		
	}
	for(int i=0;i<temps.size();++i){
	ost<<'('<<temps[i].hour<<','<<temps[i].temperature<<")\n";
}
	return 0;
}

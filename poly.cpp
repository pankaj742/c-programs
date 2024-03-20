#include <iostream>
#include <math.h>
using namespace std;
class poly{
	public:
		int a;
		int b;
		int c;
		public:
			poly(){
				a=0;
				b=0;
				c=0;
			}
			poly operator+(poly p){
				poly dx;
				dx.a=a+p.a;
				dx.b=b+p.b;
				dx.c=c+p.c;
				return dx;
			}
			friend istream& operator>>(istream &is,poly &p1);
			friend ostream& operator<<(ostream &os,poly &p1);
			float eval(float x)
			{
				float val=a*(x*x)+(b*x)+c;
				return val;
			}
			//find root of poly x=-(b+-sqrt(b^2-4ac)/2*a
			void compute_root(){
				int t;
				t=(b*b)-(4*a*c);
				int x1=-(-b+t)/2*a;
				int x2=-(-b-t)/2*a;
				cout<<"\n Two roots of given polynomial are given by x1="<<x1<<endl;
				cout<<"                                              x2="<<x2;
			}
};
ostream& operator<<(ostream& os,poly p){
	os<<"\n"<<p.a<<"x^2"<<p.b<<"x"<<p.c;
	return os;
}
istream& operator<<(istream& is,poly p){
	cout<<"\nenter value's a,b,c for polynomial";
	is>>p.a;
	is>>p.b;
	is>>p.c;
	return is;
}
int main(){
	poly p;
	cout<<p;
	cin>>p;
	cout<<p;
	poly b;
	cin>>b;
	cout<<b;
	poly c=p+b;
	cout<<c;
	return 0;
}

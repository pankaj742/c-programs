#include <iostream>
using namespace std;

class base{
	int a,b;
	public:
		base(){
			cout<<"\n base class constructor";
		}
		virtual void func(){
			cout<<"\n base class virtual function";
		};
		void danger(){
			cout<<"\nbase class danger function";
		}
		~base(){
			
			cout<<"\nbase class destructor ";
		}
		
	
};
class derived:public base{
	public:
		derived(){
			cout<<"\nderived class constructor";
		}
		void func(){
			cout<<"\nderived class virtual function";
		}
		void danger(){
			cout<<"\nderived class danger function";
		}
	~derived(){
		cout<<"\nderived class destructor";
	}
};
int main(){
	base b;
	derived d;
	b.danger();
	b.func();
	d.danger();
	d.func();
	
	base *p;
	derived *q=new derived;
	p=new derived;
//	q=new base;
	p->danger();
	p->func();
	q->danger();
	q->func();
	
//	delete q;
	delete p;
	delete q;
	return 0;
	
	
}

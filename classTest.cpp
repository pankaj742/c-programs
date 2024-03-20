#include <iostream>
using namespace std;
class A{
	public:
		virtual void run(){
			cout<<"hi A";
		}
};
class B:public A{
	public:
		void run(){
			cout<<"hi B";
		}
};

int main(){
	B obj;
	A ob=obj;
	ob.run();
}

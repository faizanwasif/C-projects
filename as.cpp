#include<iostream>
using namespace std;

class P{
	protected:
		int h;
	public:
	void x(int a){
		int h = a;
	}
};

class S: public P{
	public:
		int print(){
			cout<< this -> h;
		}
};



char a(){
}
int main(){
	P p1;
	S s1;
	
	p1.x(2);
	s1.print();
}

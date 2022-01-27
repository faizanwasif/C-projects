#include <iostream>
using namespace std;

int main(){
	int a = 55;
	int *p = &a;
	int **pp = &p;
	void *ppp = &pp;
	cout<<p<<endl;
	cout<<pp<<"\n";
	cout<<ppp<<"\n";
	cout<<*pp<<"\n";
	
}

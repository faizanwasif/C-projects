#include<iostream>
using namespace std;


int main(){
	int x, y, result;
	char operate;
	cout<<"Enter 1st number : "<<endl;
	cin>>x;
	cout<<"Enter 2nd number : "<<endl;
	cin>>y;
	cout<<"Eneter the operator (+, -, /, *)"<<endl;
	result = x+y;
	cout<<result<<endl;
	result = x-y;
	cout<<result<<endl;
	result = x/y;
	cout<<result<<endl;
	result = x*y;
	cout<<result<<endl;
}


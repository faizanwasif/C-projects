#include<iostream>
using namespace std;

void part1(int x){
	if(x<0){
		cout<<"it is negative";
	}
	if(x = 0){
		cout<<"Niether positive nor negative";
	}
	else{
		cout<<"positive";
	}
}

void part2(int x){
	if(x%2 == 0){
		cout<<"Odd";
	}
	else{
		cout<<"Even";
	}
}

void part3(int x){
	if(x%4 == 0 or x%100 == 0 or x%400 == 0){
		cout<<"It is leap year :) ";
	}
	else{
		cout<<"Not a leap year :(";
	}
}

void part4(){
	double x,y ;
	cout<<"Enter two numbers : "<<endl;
	cin>>x;
	cin>>y;
	
	if(x>y){
		cout<<"No1 is greater than No2";
	}
	else{
		cout<<"No2 is greater than No 1";
	}
}

int main(){
	part4();
}

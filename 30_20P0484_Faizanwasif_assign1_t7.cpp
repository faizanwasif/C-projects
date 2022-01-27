#include <iostream>
using namespace std;

void part1(){
	int x;
	x = 0;
	do{
		cout<<x<<endl;
		x += 1;
	}
	while(x<11);
}









void part2(){
	
	int x, y, i, j;
	x = 0;
	y = 0;
	
	cout<<"The even numbers are : ";
	do{
		if(x%2 == 0){
		cout<<x<<" ";
	}
	x += 1;
	}
	while(x<10);
	
	cout<<endl<<"The odd numbers are : ";
	do{
		if(y%2 != 0){
		cout<<y<<" ";
	}
	y += 1;
	}
	while(y<10);
	
}





















void part3(){
	
	int x, i;
	
	i = 0;
	
	cout<<"Enter : ";
	cin>>x;
	
	do{
		cout<<x * i<<endl;
		i += 1;
	
	}	
	while(i<11);
	
}














void part4(){
	
	int x, i, fact;
	i = 1;
	
	cout<<"Enter : ";
	cin>>x;
	
	do{
		
		fact = fact * i;
		i += 1;		
	
	}
	while(i<=x);
	cout<<"Factorial of "<<x<<" is "<<fact;
}







void part5(){
	int value, value2;
	char x, ask;
	cout<<"Enter your values : ";
	cin>>value;
	cin>>x;
	cin>>value2;
	if(x == '+'){
		cout<<value + value2;
	}
	else if(x == '-'){
		cout<<value - value2;
	}
	else if(x == '*'){
		cout<<value * value2;
	}
	else if(x == '/'){
		cout<<value / value2;
	}
	else if(x == '%'){
		cout<<value % value2;
	}

	do {
		cout<<endl<<"Play again (y/n) : ";
		cin>>ask;
		if(ask == 'y')
		{
			part5();
		}
		if (ask == 'n')
		{
			break;
		}
		break;
	}
	while(true);
}
int main(){

	part2();

	return 0;
}

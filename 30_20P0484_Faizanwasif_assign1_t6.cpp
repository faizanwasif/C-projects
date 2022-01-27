#include <iostream>
using namespace std;

void part1(){
	int x;
	x = 0;
	while(x<11){
		cout<<x<<endl;
		x += 1;
	}
}









void part2(){
	
	int x, y, i, j;
	x = 0;
	y = 0;
	
	cout<<"The even numbers are : ";
	while(x<10){
		if(x%2 == 0){
		cout<<x<<" ";
	}
	x += 1;
	}
	
	cout<<endl<<"The odd numbers are : ";
	while(y<10){
		if(y%2 != 0){
		cout<<y<<" ";
	}
	y += 1;
	}
	
}





















void part3(){
	
	int x, i;
	
	i = 0;
	
	cout<<"Enter : ";
	cin>>x;
	
	while(i<11){
		cout<<x * i<<endl;
		i += 1;
	
}
	
}
















void part4(){
	
	int x, i, fact;
	i = 1;
	
	cout<<"Enter : ";
	cin>>x;
	
	while(i<=x){
		
		fact = fact * i;
		i += 1;		
	
	}
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

	while(true){
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
}
int main(){
	part5();
	return 0;
}

#include<iostream>
using namespace std;


void part1(){
	int value, value2;
	char x;
	
	cout<<"Enter your values : ";
	cin>>value;
	cin>>x;
	cin>>value2;
		
	switch (x){

	case '+':
		cout<<value + value2;
		break;
		
	case '-':
		cout<<value - value2;
		break;
	
	case '*':
		cout<<value * value2;
		break;
	
	case '/':
		cout<<value / value2;
		break;
	
	
	case '%':
		cout<<value % value2;
		break;
	
	}
}

void part2(){
	int x;
	
	cout<<"Enter month number : ";
	cin>> x;
	
	
	switch (x){

		case 1:
			cout<<"It is Janurary";
			break;
		case 2:
			cout<<"It is Feburary";
			break;
		case 3:
			cout<<"It is March";
			break;
		case 4:
			cout<<"It is April";
			break;
		case 5:
			cout<<"It is May";
			break;
		case 6:
			cout<<"It is June";
			break;
		case 7:
			cout<<"It is July";
			break;
		case 8:
			cout<<"It is August";
			break;
		case 9:
			cout<<"It is September";
			break;
		case 10:
			cout<<"It is October";
			break;
		case 11:
			cout<<"It is November";
			break;
		case 12:
			cout<<"It is December";
			break;

	}
	
}


int main(){
	part2();
	return 0;
}

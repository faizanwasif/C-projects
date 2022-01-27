#include<iostream>
using namespace std;

void part1(int x){
	if(x<0){
		cout<<"it is negative";
	}
	else if(x = 0){
		cout<<"Neutral";
	}
	else{
		cout<<"positive";
	}
}

void part2(){
	int temp;
	
	cout<<"Enter temprature value : ";
	cin>>temp;
	
	if (temp<=15){
		cout<<"It is cold today";
	}
	else if(temp>15 and temp<=20){
		cout<<"The weather is mild today";
		
	}
	else{
		cout<<"The weather is cold today";
	}
}

void part3(){
	int perc;
	
	cout<<"Enter you percentage : ";
	cin>>perc;
	
	if(perc<100 and perc>=90){
		cout<<"Your grade is A*";
	}
	else if(perc<90 and perc>=80){
		cout<<"Your grade is A";
	}
	else if(perc<80 and perc>=70){
		cout<<"Your grade is B";
	}
	else if(perc<70 and perc>60){
		cout<<"Your grade is C";
	}
	else if(perc<0 and perc>=50){
		cout<<"Your grade is F";
	}
	else{
		cout<<"Percentage can't be greater than 100 and lower tha 0'";
	}
}

void part4(){
	int value, value2;
	char x;
	
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
}

void part5(){
	double x,y ;
	cout<<"Enter two numbers : "<<endl;
	cin>>x;
	cin>>y;
	
	(y<x)?cout<<"No1 is greater": cout<<"No2 is greater";

}
void part6(){
	int x,y;
	
	cout<<"Enter a number : ";
	cin>>x;
	
	y = x%2;
	(y == 0)?cout<<"No is even": cout<<"No is odd";

}


int main(){
	part6();
	return 0;
 }

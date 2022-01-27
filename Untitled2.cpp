#include<iostream>
using namespace std;



struct date_of_birth(){
	
	int day, year;
	string month;
	
	
}
struct employee(){
	
	string name, emp_id;
	char gender;
	int age;
	struct date_of_birth;
	
}



struct vegetable();{
	string food1, food2;
	
};

struct fruit(){
	string food1, food2;
}
struct food(){
	struct vegetable;
	struct fruit;
}

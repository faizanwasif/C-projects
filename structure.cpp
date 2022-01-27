#include<iostream>
using namespace std;

struct Student{
	
	int rollNo;
	char name[20];
	void salary(int a){
		cout<<a;
	}
	
};

int main(){
	
	Student s1;
	
		
	cout<<"enter name : ";
	cin.get(s1.name, 20);
	cout<<"Enter roll no : ";
	cin>>s1.rollNo;

	
	cout<<s1.rollNo<<endl;
	cout<<s1.name;
	
	s1.salary(20);
	
}

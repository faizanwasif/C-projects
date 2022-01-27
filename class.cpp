#include<iostream>
using namespace std;

class Person{
	char name[50];
	int cnic;
	public:
		void enterName(){
			cout<<"Enter name : ";
			cin.get(name, 50);
		}
};

class Student: public Person{
	private:
		int sem;
	public:
		void entrsem(int a){
			this -> sem = a;
		}

	
};

int main(){
	Student s1;

	s1.enterName();
	s1.entrsem(20);
}

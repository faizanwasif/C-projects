#include<iostream>
#include<string.h>
using namespace std;
/*
class A{
	public:
		A(void){
			cout<<"Constructor of Class A "<<endl;
		}
};
class B{
	public:
		B(void){
			cout<<"Constructor of Class B"<<endl;	
		}
};

class C : public B, public A{
	public:
		C(void) {
			cout<<"Constructor of class C "<<endl;
		}
}; 

int main(){
	C c;
	return 0;
}
*/




/*
class Student{
	private:
		char name[15], address[25];
	public:
		Student(char nm[], char add[]){
			strcpy(name, nm);
			strcpy(address, add);
		}	
		void show(){
			cout<<"Name is : "<<name<<endl;
			cout<<"Address : "<<address<<endl;
		}
};

class Marks : public Student{
	
	public:
		int sub1, sub2, sub3, total;
		Marks(char nm[], char add[], int a, int b, int c): Student(nm, add){
			sub1  = a;
			sub2  = b;
			sub3  = c;
			total = a+b+c;
		}
		void show_detail()
		{
			cout<<"Marks of 1st sub : "<<sub1<<endl;
			cout<<"Marks of 2nd sub : "<<sub2<<endl;
			cout<<"Marks of 3rd sub : "<<sub3<<endl;
			cout<<"Total  marks     : "<<total<<endl;
		}

};

class Show : public Student, public Marks
{
	public:
		Show(char nm[], char add[], int a, int b, int c): Student(nm, add), Marks(sub1, sub2, sub3){
			show();
			show_details();
		}
};

int main(){
	Show marks("Faizan", "Pesh", 66, 77, 88);

	return 0;
}
*/










/*
class Student{
	private:
		char name[15], address[25];
	public:
		Student(char nm[], char add[]){
			strcpy(name, nm);
			strcpy(address, add);
		}	
		void show(){
			cout<<"Name is : "<<name<<endl;
			cout<<"Address : "<<address<<endl;
		}
};

class Marks : public Student{
	private:
		int sub1, sub2, sub3, total;
		
	public:
		Marks(char nm[], char add[], int a, int b, int c): Student(nm, add){
			sub1  = a;
			sub2  = b;
			sub3  = c;
			total = a+b+c;
		}
		void show_detail();
};

int main(){
	Marks marks("Faizan", "Pesh", 66, 77, 88);
	marks.show_detail();
	return 0;
}

void show_detail(){
	show();
		cout<<"Marks of 1st sub : "<<sub1<<endl;
		cout<<"Marks of 2nd sub : "<<sub2<<endl;
		cout<<"Marks of 3rd sub : "<<sub3<<endl;
		cout<<"Total  marks     : "<<total<<endl;
}



#include<iostream>
using namespace std;


class BB{
	public:
		void ppp(){
			cout<<"It is class BB"<<endl;
		}	
};

class d1 : public BB{
	public:
		void ppp(){
			cout<<"It is first devrived class"<<endl;
		}
};

class d2 : public BB{
	public:
		void ppp(){
			cout<<"It is second derived class"<<endl;
		}
};

int main(){
	BB *p;
	d1 a;
	d2 b;
	p = &a;
	p->ppp();
	
	p=&b;
	p->ppp();
	return 0;
	//complied time polymorphesim
}
*/
/*
class Student{
	private:
		char name[20];
		int age;
		
	public:
		void input(){
			cout<<"Enter name : "<<endl;
			cin>>name;
			cout<<"Enter age : "<<endl;
			cin>>age;
		}
		void show(){
			cout<<"Name is : "<<name<<endl;
			cout<<"Age     : "<<age<<endl;
		}
};

int main(){
	Student s, *p;
	p = &s;
	p -> input();
	p -> show();
	return 0;
}



class BB{
	public:
		virtual	void ppp() = 0;	
};

class d1 : public BB{
	public:
		void ppp(){
			cout<<"It is first devrived class"<<endl;
		}
};

class d2 : public BB{
	public:
		void ppp(){
			cout<<"It is second derived class"<<endl;
		}
};

int main(){
	BB *p;
	d1 a;
	d2 b;
	p = &a;
	p->ppp();
	
	p=&b;
	p->ppp();
	return 0;
	//complied time polymorphesim
}*/


#include <iostream>
using namespace std;
class Shape
{
protected:
double width, height;
public:
void set_data (double a, double b)
{
width = a;
height = b;
}
virtual double area() = 0;
};
class Rectangle: public Shape
{
public:
double area ()
{
return (width * height);
}

};
class Triangle: public Shape
{
public:
double area ()
{
return (width * height)/2;
}
};
int main ()
{
Shape *sPtr;
Rectangle Rect;
sPtr = &Rect;
sPtr -> set_data (5,3);
cout << "Area of Rectangle is " << sPtr -> area() << endl;
Triangle Tri;
sPtr = &Tri;
sPtr -> set_data (4,6);
cout << "Area of Triangle is " << sPtr -> area() << endl;
return 0;
}

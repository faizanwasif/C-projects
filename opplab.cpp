#include<iostream>
#include<string.h>
using namespace std;

class Student{
	private:
		char name[15];
		char addr[25];
	
	public:
		Student(char nm[], char add[]){
			strcpy(name , nm);
			strcpy(addr , add);
		}
		void show(){
			cout<<"Name is : "<<name<<endl;
			cout<<"Address is : "<<addr<<endl;
		}
};

class Marks : public Student{
	private:
		int sub1, sub2, sub3, total;
	public:
		Marks(char nm[], char add[], int a, int b, int c):Student(nm, add){
			sub1 = a;
			sub2 = b;
			sub3 = c;
			total = a + b + c;
		}
		void show_detail();
};

void Marks::show_detail(){
	show();
		cout<<"Marks of 1st sub : "<<sub1<<endl;
		cout<<"Marks of 1st sub : "<<sub2<<endl;
		cout<<"Marks of 1st sub : "<<sub2<<endl;
		cout<<"Total Marks      : "<<total<<endl;
}

int main(){
	Marks marks("Faizan", "Hangyu", 66, 77, 88);
	marks.show_detail();
}
/*
class A
{
	public:
	A()
	{
		cout<<"Base"<<endl;
	}	
};

class B: public A
{
	public:
	B()
	{
		cout<<"Dev";
	}	
};

int main(){
	B();
}




class Animal
{
	public:
		void info()
		{
			cout<<"I am an animal. "<<endl;
		}
};

class Cat : public Animal
{
	public:
		void  meow()
		{
			cout<<"I am a cat. Meow"<<endl;
		}
};

class Dog : public Animal{
	public:
		void bark(){
			cout<<"SAAD SAAD"<<endl;
		}
};

int main(){
	Dog dog;
	dog.info();
	dog.bark();
	Cat c;
	c.info();
	c.meow();
}










class A{
	public:
		void print()
		{
			//A::print);
			cout<<"I am A Class :)"<<endl;
		}
};

class B
{
	public:
		void print()
		{	
			cout<<"I am class B"<<endl;
		}	
};

class C : public B, public A{
	public:
	
		void print()
		{
			A::print();
			B::print();
			cout<<"I am class c";
		}
		
};
int main(){
	C c;
	c.print();
	
	//b.print();
}


#include<iostream>
using namespace std;

class base1
{
	protected:
		int x;
	public:
		void readx(){
			cout<<"Enter value of x : ";
			cin>>x;
		}
		void showx()
		{
			cout<<"x = "<<x;
		}
};

class base2
{
	protected:
		int y;
	public:
		void ready()
		{
			cout<<"Enter value of y : ";
			cin>>y;
		}
		void showy()
		{
			cout<<"y = "<<y;
		}
};

class der : public base1, public base2
{
	private:
		int z;
	public:
		void add()
		{
			z = x+y;
		}
		void showz()
		{
			cout<<"\n = "<<z;
		}
};



int main(){
	der d;
	
	d.readx();
	d.ready();
	d.showx();
	d.showy();
	d.add();
	d.showz();
}

















class person {
  private:
    char name[20];
    long int phno;
  public:
    void read() {
     cout<<"Enter name and phno = ";
     cin>>name>>phno;
    }
    void show() {
     cout<<"\nName = "<<name;
     cout<<"\nPhone number = "<<phno; 
    }
};  // end of person class
class student : public person {
  private:
    int rollno;
    char course[20];
  public:
    void read() {
      person::read();//Access person's read()
      cout<<"Enter rollno and course=";
      cin>>rollno>>course;
    }
    void show() {
      person::show(); //Access person's show()
      cout<<"\nRollno = "<<rollno;
      cout<<"\nCourse ="<<course;
    }
}; // end of student class
class exam : public student {
 private:
   int m[4];
   double per;
 public:
   void read();
   void cal();
   void show();
};  // end of exam class


// Function definitions
void exam::read() 
{
student::read();//Access student's read()
cout<<"Enter marks :";
for(int i=0;i<4;i++)
  cin>>m[i];
}
void exam::cal()
{
int tot_marks=0;
for(int i=0;i<4;i++)
  tot_marks+=m[i];
  per=double(tot_marks)/4;
}
void exam::show()
{
student::show();//Access student's show()
cout<<"\nMarks :";
for(int i=0;i<4;i++)
  cout<<m[i]<<"\t";
  cout<<"\nPercentage = "<<per;
}
//main function
int main() {
   exam e1;
   e1.read(); 
   e1.cal();  
   e1.show(); 
   return 0;
}*/

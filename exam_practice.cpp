#include<iostream>
using namespace std;




/*
class A{
	private:
		int i;
		
	public:
		A(int x){
			this->i = x;
		}
		
	friend void show(A a);
};

void show(A a){
	cout<< "The value of i is : "<<a.i<<endl;
}

int main(){
	A b(5);
	show(b);
}


class A{
	public:
		void print()
		{
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

class C : public B , public A{
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





class Vehicle{
	protected:
		int engine_no;
		
	public:
		void display(){
			cout<<"Engine No : "<<engine_no;
		}
		
};

class Car: public Vehicle{
	public:
		void get_no(){
		cout<<"Enter car no ";
		cin>>engine_no;
	}
	void display(){
			cout<<"Engine No : "<<engine_no;
		}
};

class Bike: public Car{
	public:
		void get_no(){
		cout<<"Enter car no ";
		cin>>engine_no;
	}
};

int main(){
	
	Car c;
	c.get_no();
}




int array[3];

void get_data(){
	int x;
	cout<<"Enter values : ";
	for(int i = 0 ; i < 4 ; i++){
		cin>>x;
		array[i] = x;
	}
}

void find(){
	get_data();
	int *p = &array[0];
	int min = *p;
	int max = *p;
	for(int j = 0 ; j < 4; j++){
		if(array[j] <  min){
			min = array[j];
		}
		if(array[j] > max){
			max = array[j];
		}
	}
	cout<<"min : "<<min<<endl;
	cout<<"max : "<<max<<endl;
}

int main(){
	find();	
}


/*
struct time{
	int hours, minutes, seconds;
};

void get_time(int h, int m, int s){
	time t;
	t.hours 	= h;
	t.minutes 	= m;
	t.seconds 	= s;
}

int main(){
	int h, m, s;
	float x, y;
	cout<<"Enter hrs 	: ";	cin>>h;
	cout<<"Enter mins 	: ";	cin>>m;
	cout<<"Enter secs	: ";	cin>>s;
	get_time(h, m, s);

	x = h*3600;
	y = m*60;
	
	cout<<x+y+s;
}


struct employee{
	int employee_no;
	float employee_com;
};

int main(){
	employee e1, e2, e3;
	cout<<"Enter employee no1 ";
	cin>>e1.employee_no;
}
*/











/*
#include<iostream>
using namespace std;
int main(){
	float b = 5;
	cout<<b;
}




class A
{
private:
int a1, a2;
protected:
int pa1, pa2;
public:
void ppp(void)
{
cout<<"Value of pa1 of class A: "<<pa1<<endl;
cout<<"Value of pa2 of class A: "<<pa2<<endl;
}
}; // end of base class A

//derived class
class B : private A //privately-derived class
{
public:
void get(void)
{
cout<<"Enter value of pa1: "; cin>>pa1;
cout<<"Enter value of pa2: "; cin>>pa2;
cout<<"Value of pa1 of class A: "<<pa1<<endl;
cout<<"Value of pa2 of class A: "<<pa2<<endl;
}
}; // end of derived class B


int main()
{
B obj;
obj.get();
//obj.ppp();
} // end of main() function





enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
int main()
{
week day;
day = Friday;
cout << "Day: " << day+1<<endl;
return 0;
}



class Account {
public:
int accno; //data member (also instance variable)
string name;
static int count;
Account(int accno, string name)
{
	this->accno = accno;
	this->name = name;
	count++;
}
void display()
{
	cout<<accno<<" "<<name<<endl;
}

};

int Account::count=0;
int main(void) {
Account a1 =Account(201, "Ali"); //creating an object of Account
Account a2=Account(202, "Saad");
Account a3=Account(203, "Sharjeel");
a1.display();
a2.display();
a3.display();
cout<<"Total Objects are: "<<Account::count;
return 0;
}



class Count
{
private:
static int count; //only one data item for all objects
//note: “declaration” only!
public:
Count() //increments count when object created
{
count++;
//cout<<count;
}
int getcount() //returns count
{ return count; }
};


//--------------------------------------------------------------
int Count::count = 0; //*definition* of count
////////////////////////////////////////////////////////////////
int main()
{
Count c1, c2, c3; //create three objects
cout << "Count is "<< c1.getcount() << endl; //each object
cout << "Count is " << c2.getcount() << endl; //sees the
cout << "Count is " << c3.getcount() << endl; //same value
return 0;
}




class Account {
public:
int accno; //data member (also instance variable)
string name; //data member(also instance variable)
static float rateOfInterest;
Account(int accno, string name)
{
this->accno = accno;
this->name = name;
}
void display()
{
cout<<accno<< " "<<name<< " "<<rateOfInterest<<endl;
}

};

// Initialize static member of class Account
float Account::rateOfInterest=6.5;
int main(void) {
Account a1 =Account(201, "Kashif"); //creating an object of Employee
Account a2= Account(202, "Amir"); //creating an object of Employee
a1.display();
a2.display();
return 0;
}






class Employee {
public:
int id; //data member (also instance variable)
string name; //data member(also instance variable)
float salary;
Employee(int i, string name, float salary)
{
this->id = id;
this->name = name;
this->salary = salary;
}


void display()
{
cout<<id<<" "<<name<<" "<<salary<<endl;
}

}; // class body ends


int main(void) {

Employee e1 =Employee(101, "Ali", 890000); //creating an object of Employee
Employee e2=Employee(102,"Sania", 59000); //creating an object of Employee

e1.display();
e2.display();
return 0;
}



class Max{
	private:
		int a, b, c;
		
	public:
		Max(int x, int y){
			a = x;
			b = y;
			cout<<"Mx in 1st : "<<max(a, b)<<endl;
		}
		Max(int q, int w, int e){
			a = q;
			b = w;
			c = e;
			cout<<"Max in 2nd : "<<max(c,max(a, b));
		}
		
};

int main(){
	Max m1(4, 5);
	Max m2(6, 7 ,8);
}








void array(){	
	
	
	int x[3][3];
	int a;
	for(int i = 0 ; i <= 2 ; i++){
		for(int j = 0; j <= 2 ; j++){
		cout<<"Enter value for R"<<i+1<<" C"<<j+1<<" : ";
		cin>>a;
		x[i][j] = a;
	}
		
	}
	cout<<"Array values are ";
	for(int y = 0 ; y < 3 ; y ++){
		cout<<endl;
		for(int z = 0 ; z < 3 ; z ++){
			cout<<x[y][z]<<" ";
		}	
	}
	
	
	
}

int main(){
	array();
	return 0 ;
}

*/









/* lab task 3
void cal(){
	float n1, n2;
	char x;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	
	cout<<"Enter operator : ";
	cin>>x;
	switch(x){
		
		case '+':
			cout<<n1+n2;
			break;
		case '-':
			cout<<n1-n2;
			break;
		case '*':
			cout<<n1*n2;
		case '/':
			cout<<n1/n2;
			break;
	}
	
}
int main(){
	cal();
	return 0;
}*/

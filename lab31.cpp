#include <iostream>
using namespace std;
//specify enum type
/*
int main()
{
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
days_of_week day1, day2; //define variables of type days_of_week

day1 = Mon; //give values to variables
day2 = Thu; 
int diff = day1 - day2; //can do integer arithmetic

cout << "Days between = " << diff << endl;
if(day1 < day2) //can do comparisons
{
cout << "day1 comes before day2\n";
}
return 0;
}


class Rectangle
{
    private :
        int length;
        int width;

    public:
        void setData(int len, int wid)
        { 
            length = len;
            width = wid; 
        }

        int getArea()
        {
            return length * width ;
        }
	
        //friend function of class Rectangle
        friend double getCost(Rectangle); 
        
};  // end of class body

//friend function getCost can access private member of class
double getCost (Rectangle rect)  
{
    double cost;
    cost = rect.length * rect.width * 5; 
    return cost;
}

int main(){
	
	Rectangle floor;
    floor.setData(20,3);
    cout<<"Area is:"<<floor.getArea()<<endl;

    cout << "Expense " <<getCost(floor) << endl;
    return 0;
}

class RectangleTwo;   // class declaration

// class definition
class RectangleOne   
{
	int L,B; // private data members

	public:
	RectangleOne(int l,int b)
	{
        L = l;
		B = b;
	}
    
    //friend function
	friend void Sum(RectangleOne, RectangleTwo);

};  // end of RectangleOne class
class RectangleTwo
{
	int L,B; // private data members
	public:
	RectangleTwo(int l,int b)
	{
		L = l;
		B = b;
	}
    
    //friend function
    friend void Sum(RectangleOne, RectangleTwo); 
};  // end of RectangleTwo
//friend function definiton
void Sum(RectangleOne R1,RectangleTwo R2)
{
	cout<<"\n\t\tLength\tBreadth";
	cout<<"\n Rectangle 1  :   "<<R1.L<<"\t  "<<R1.B;
    cout<<"\n Rectangle 2  :   "<<R2.L<<"\t  "<<R2.B;
	cout<<"\n -------------------------------";
	cout<<"\n\tSum   :   "<<R1.L+R2.L<<"\t  "<<R1.B+R2.B;
	cout<<"\n -------------------------------";
}
int main()
{
	RectangleOne Rec1(5,3);
	RectangleTwo Rec2(2,6);

	Sum(Rec1,Rec2);
    return 0;

}  // end of main() function*/



// C++ program to demonstrate protected access modifier
#include <iostream>
using namespace std;

// base class
class Parent
{
	// protected data members
	protected:
	int id_protected;	
}; //parent class ends

// sub class or derived class from public base class
class Child : public Parent
{
	public:
	void setId(int id)
	{	
		// Child class is able to access the inherited
		// protected data members of base class
		id_protected = id;	
	}
	void displayId()
	{
		cout << "id_protected is: " << id_protected << endl;
	}
};  // child class ends
// main function
int main() {
	
	Child obj1;
	// member function of the derived class can
	// access the protected data members of the base class
	obj1.setId(81);
	obj1.displayId();
	return 0;
}  // end of main() function

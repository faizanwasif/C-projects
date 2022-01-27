#include<iostream>
#include <cstring>
using namespace std;

class Sample
{
private:
int x;
double y;
public :
Sample(){

	x = 0;
	y = 0;
	cout<<x<<" and "<<y<<endl;

} //Constructor 1
Sample(int a){
	x = a;
	y = 0;
	
	cout<<x<<" and "<<y<<endl;
}//Constructor 2
Sample(int b, int c){
	x = b;
	y = c;
	cout<<x<<" and "<<y<<endl;
}
 //Constructor 3
Sample(int e, double f){

	x = e;
	y = f;
	cout<<x<<" and "<<y<<endl;

}//Constructor 4
};

int main(){
	Sample s1;
	Sample s2(4);
	Sample s3(5, 6);
	Sample s4(7, 8.5);
}







/*
class Test
{
char paper[20];
int marks;
public:
Test () // Function 1
{
strcpy (paper, "Computer");

marks = 0;
}
Test (char p[]) // Function 2
{
strcpy(paper, p);
marks = 0;
}
Test (int m) // Function 3
{
strcpy(paper,"Computer");
marks = m;
}
Test (char p[], int m) // Function 4
{
strcpy (paper, p);
marks = m;
}
};


int main(){
	Test t1;
	Test t2(char);
	Test t3(int);
	Test t4(char, int);
}


class Seminar
{
int time;
public:
Seminar() //Function 1
{
time = 30;
cout << "Seminar starts now" << endl;
}
void lecture() //Function 2
{
cout << "Lectures in the seminar on" << endl;
}
Seminar(int duration) //Function 3
{
time = duration;
cout << "Seminar starts now" << endl;
}
~Seminar() //Function 4
{
cout << "Thanks" << endl;
}
};

//Q1) (i)
int main(){
	Seminar s1;
	Seminar s2(20);

}

//(ii)
// the function 4 is reffered as destructor, it is called after the excution of the construtor.

//(iii)
//Constructor Overloading
*/




#include<iostream>
using namespace std;

/*
class Student{
	private:
		// these cannot accessed outside the class
		int admno;// int type
		char sname[20]; // character type
		float eng, math, sci, total; // float type
		/////////////////////////////////////////////////////////////////////////////////////////////////
		// this function will calculate total
		float ctotal(float a, float b, float c){
			// assigning values to variables
			eng = a;
			math = b;
			sci = c;
			
			total = a + b + c;
			// this returns total
						
			return total;
		}
		
	public:
		//thi function will take data and invoke ctotal()
		float takeData(float e, float m, float s){
			// asking user for input
			cout<<"Enter student name : ";
			cin.get(sname, 20);
			cout<<"Enter admno : ";
			cin>>admno;
			cout<<endl;
			/////////////////////////////////////////////////////////////////////
			cout<<"Enter value for English : "; cin>>e;
			cout<<"Enter value for Math : "; cin>>m;
			cout<<"Enter value for Science : "; cin>>s;
			// calling ctotal()
			ctotal(e, m, s);
	}
	
		// this will display the data
		void showData(){
			cout<<endl<<"Student name is : "<<sname<<endl<<"Admno is : "<<admno<<endl<<"Total is : "<<total<<endl;
			
	}
};

int main(){
	
	float a, b, c;// float type
	Student s1;// object s1
	// asking user for values	

	// invoking function
	s1.takeData(a, b, c);
	s1.showData();
	
	return 0;
}

*/
















class Batsman{
	
	private:
		// these cannot accessed outside the class
		int innings, notout, runs;// type integer
		char bname[20];// type character
		string bcode;// string type
		double batavg; //double type
		// to calculate average
		void calcavg(int a, int b, int c){
			runs = a;
			innings = b;
			notout = c;
			batavg =runs/(innings-notout);
			
		}
	
	public:
		// thi function will take data and invoke calcavgl()
		float readData(int r, int i, int n){
			// asking user for input
			cout<<"Enter batsman name : ";
			cin.get(bname, 20);
			cout<<"Enter bcode : ";
			cin>>bcode;
			// if the code size increase 4 enter again
			while((bcode.size())>4){
				cout<<"Invalid code, please try again"<<endl;
				cout<<"Enter bcode : ";
				cin>>bcode;
			}
			cout<<endl;
			/////////////////////////////////////////////////////////////////////
			// asking user for input
			cout<<"Enter value for runs : "; cin>>r;
			cout<<"Enter value for innings : "; cin>>i;
			cout<<"Enter value for notout : "; cin>>n;
			// calling calcavgl()
			calcavg(r, i, n);
		}
		
				// this will display the data
		void displayData(){
			cout<<endl<<"Batsman name is : "<<bname<<endl<<"Batsman code is : "<<bcode<<endl<<"Runs made are : "<<runs<<endl;
			cout<<"Innings : "<<innings<<endl<<"Not outs : "<<notout<<endl<<"Average : "<<batavg;
			
	}
				
		
};



int main(){
	
	int a, b, c;// integer type
	Batsman b1;// object b1
	// asking user for values	

	// invoking function
	b1.readData(a, b, c);
	b1.displayData();
	
	return 0;
	

}












#include<iostream>
using namespace std;

class time
{	
	private:
		int hrs, mins;
		
	public:
		void settime(int a, int b)
		{
			hrs = a;
			mins = b;
		}
		void showtime()
		{
			cout<<hrs<<" hrs "<<mins<<" mins";
		}
		time sum(time);
		//void showtime();
};

time time::sum(time tt)
{
	time x;
	x.mins = mins + tt.mins;
	x.hrs=x.mins/60;
	x.mins=x.mins%60;
	x.hrs += hrs + tt.hrs;
	return x;
}

int main()
{
	time t, t2, t3;
	t.settime(21,5);
	cout<<"Time 1   : ";
	t.showtime();
	t2.settime(12,3);
	cout<<endl<<"Time 2   : ";
	t2.showtime();
	t3= t.sum(t2);
	cout<<endl<<"Time sum : ";
	t3.showtime();
	
	return 0;
}

/*
class Report
{
	
	private:
		char adno[4], name[20];
		float marks[5] = {};
		float average;
		float total_marks;
		
		void getAvg()
		{
			for(int i = 0; i <= 4; i++)
			{
				total_marks += marks[i];
				average = total_marks/4;
			}
		}
	
	public:	
		void readInfo()
		{
			cout<<"Enter name : ";
			cin.getline(name, 20);
			cout<<"Enter addmisson no 4 digits only : ";
			cin>>adno;
			
			cout<<"Enter marks : ";
			for(int j = 0; j <= 4; j++)
			{
				cin>>marks[j];
			}
			getAvg();
		}
		void displayInfo()
		{
			cout<<"Admission NO : "<<adno<<endl<<"Name : "<<name<<endl<<"Average : "<<average;
		}
};

int main(){
	Report r;
	r.readInfo();
	r.displayInfo();
}




class Book{
	private:
		int bookNo;
		char bookTitle[20];
		float price;
		
		void total_cost(int n)
		{
			float cost = n*price;
			cout<<"Total cost        : "<<cost;
		}
	
	public:
		void input()
		{
			cout<<"Enter book title  : ";
			cin.getline(bookTitle, 20);
			cout<<"Enter book no     : ";
			cin>>bookNo;
			cout<<"Enter price       : ";
			cin>>price;
		}
		void purchase()
		{
			int a;
			cout<<"Enter no of books : ";
			cin>>a;
			total_cost(a);
		}
};

int main(){
	Book b;
	b.input();
	b.purchase();
}





class AirTraffic{
	int flightNo;
	float distance, fuel;
	string destination;
	
	int calFuel(){
		if (distance <= 1000){
			fuel = 500;
		}
		if (1000 < distance <= 2000 ){
			fuel = 1100;
		}
		else if (distance > 2000){
			fuel = 2200;
		}
	}
	
	public:
		void feedInfo(){
			cout<<"Enter value for flight no : ";
			cin>>flightNo;
			cout<<"Enter Destination         : ";
			cin>>destination;
			cout<<"Enter value for distance  : ";
			cin>>distance;
			calFuel();
		}
		void showInfo(){
			cout<<"Value for distance   : "<<distance<<endl;
			cout<<"Value for flight no  : "<<flightNo<<endl;
			cout<<"Value for fuel       : "<<fuel<<endl;
			cout<<"We are going to      : "<<destination;
		}
};

int main(){
	AirTraffic t;
	t.feedInfo();
	t.showInfo();
}





class Test{
	private:
		int TestCode, NoCandidate, CenterReqd;
		string Description;
		
		int CALCNTR(){
			CenterReqd = NoCandidate/100+1;
			return CenterReqd;
		}
		
	public:
		void SCHEDULE(){
			cout<<"Enter test code : ";
			cin>>TestCode;
			cout<<"Enter Description : ";
			cin>>Description;
			cout<<"Enter no of candidate : ";
			cin>>NoCandidate;
			CALCNTR();
		}
		void DISPTEST(){
			cout<<"Test code          : "<<TestCode<<endl;
			cout<<"Description        : "<<Description<<endl;
			cout<<"No of candidate    : "<<NoCandidate<<endl;
			cout<<"Center req         : "<<CenterReqd<<endl;
		}
};

int main(){
	Test t;
	t.SCHEDULE();
	t.DISPTEST();
}*/

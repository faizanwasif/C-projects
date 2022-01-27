#include<iostream>
#include<string>
using namespace std;

class Floors{
	private:
		int vans, hiAces, cars, bi_cycles, bikes, scooters, btotal, ttotal, gtotal;
		
	public:
		void basement(int v, int h, int bt){
			vans 		= v;
			hiAces 		= h;
			btotal 		= bt;
		}
		void ground(int c, int gt){
			cars 		= c;
			gtotal 		= gt;
		}
		void top(int b, int bi, int s, int tt){
			bikes 		= b;
			bi_cycles 	= bi;
			scooters 	= s;
			ttotal		= tt;
		}
};


class Basement{
	// Vans and Hi-aces, exception cars if no space on grnd flr
	private:
		Floors obj; //USING COMPOSITION
	public:
		int v = 0, h = 0, bt = 0;
		void bfslots(){
			obj.basement(v, h, bt);
		}
		
};

class GroundFloor{
	// cars not van and hi-aces
	private:
		Floors obj1; //USING COMPOSITION
	public:
		int c = 0, gt = 0;
		void gfslots(){
			obj1.ground(c, gt);
		}
};

class TopFloor{
	// bi-cycles, motor-bikes and scooters and no more than two wheelers
	private:
		Floors obj2; //using composition
	public:
		int bi = 0, b = 0, s = 0, tt = 0;
		void tfslots(){
			obj2.top(b, bi, s, tt);
		}
		
};



class Members{

	private:
		char  i, o;
	public:
		long members = 0, newMember = 0;
		void newMembers()
		{
			cout<<"Want membership? y/n : ";
			cin>>o;
			if(o == 'y')
			{
				newMember += 1;
			}
			else if(o == 'n')
			{
				cout<<"Ok"<<endl;
			}
			else
			{
				cout<<"Invalid"<<endl;
				newMembers();
			}
		}
		void addmembers()
		{
			cout<<"Member y/n ? : ";
			cin>>i;
			if(i == 'y')
			{
				members += 1;
			}
			else if(i == 'n')
			{
				newMembers();
			}
			else
			{
				cout<<"Invalid!!"<<endl;
				addmembers();
			}
			
		}
};

class Entry: public Basement, public GroundFloor, public TopFloor, public Members{//using multiple inheritence

	private:
		string veh;
		Members m;
	////ALL INFORMATION						
	public:
		void newEntry()
		{
			addmembers(); 
			
			cout<<"Enter Vehicle type : ";
			cin>>veh;	
			
			if(veh == "car")
			{
				cout<<"Go to Ground floor "<<endl;
				c  += 1;
				gt += 1;
			}
			else if (veh == "van")
			{
				cout<<"Go to Basement "<<endl;
				v  += 1;
				bt += 1;
			}
			else if (veh == "hiace")
			{
				cout<<"Go to Basement "<<endl;
				h  += 1;
				bt += 1;
			}
			else if (veh == "bi_cycle")
			{
				cout<<"Go to Top Floor "<<endl;
				bi += 1;
				tt += 1;
			
			}
			else if (veh == "bike")
			{
				cout<<"Go to Top Floor "<<endl;
				b  += 1;
				tt += 1;
			}
			else if (veh == "scooter")
			{
				cout<<"Go to Top Floor "<<endl;
				s  += 1;
				tt += 1;
			}
			else
			{
				cout<<"Invalid!!"<<endl;
				newEntry();
			}
			
		}		
};

class Slots: public Entry{
		
	public:
		char x;
		void baseCall(){	
		//Check for new entries and empty slots
			while(true){
				cout<<"New entry y/n ? : ";
				cin>>x;
				if(x == 'y'){
					newEntry();
				}
				else if( x == 'n'){
					break;
				}
				else if(bt >= 30)
				{
					cout<<"No Slots left in Basement!!"<<endl;
				}
				else if(gt >= 40)
				{
					cout<<"No Slots left in Ground Floor!!"<<endl;
				}
				else if(tt >= 150)
				{
					cout<<"No Slots left in Top Floor!!"<<endl;

				}
				else if(bi >= 50)
				{
					cout<<"No more slots for bi-cycles!!"<<endl;
				}
				else if((b + s) >= 100)
				{
					cout<<"No more slots for bikes or scooters!!"<<endl;
				}
				else
				{
					cout<<"Invalid!!"<<endl;
				}
		}
	}
};

class Charges : public Slots{
	private:
		long  tCharges;
			
	public:
		
		double total;
		
		void charges()
		{
			baseCall();
			tCharges = (v + h)*50 + (c * 30)+ ((bi * 10) + (b + s)*20);

			total = ((((tCharges/members)*50)/100)*members) + newMember*1000;
		}
		
};

class EmployeeSalary : public Charges{
	// G.M = 1000/per day, 3 attendants = 500 each, 2 guards = 300 each
	public:
		long salaries;
		void salary(){
			charges();
			salaries = 1000 + 1500 + 600;
		}
};

class Accounts: public EmployeeSalary{
	private:
		double profit;
	public:	

		void tprofit()
			{	
				salary();
				profit = (total-salaries)-((total * 5)/100);
			
			}
		void showDetails(){		
			tprofit();
			
			cout<<endl<<endl<<"* REPORT *"<<endl<<endl;
			
			cout<<"Total amount of today's income		:	"<<total<<endl<<endl;
			cout<<"Salaries given				:	"<<salaries<<endl<<endl;
			cout<<"Amount generated from new members	:	"<<newMember*1000<<endl<<endl;
			
			cout<<"Total profit after tax deduction	:	"<<profit<<endl;
		}
};

class Report{
	private:
		Accounts a;//USING COMPOSITION

	public:		
		void report()
		{		
			a.showDetails();
		}
		
};


int main(){
	Report r;
	r.report();
}

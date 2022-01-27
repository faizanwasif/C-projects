#include<iostream>
using namespace std;

class Basement;
class GroundFloor;
class TopFloor;
class EmployeeSalary;
class Members;
class Charges;
class Entry;




class Basement{
	// Vans and Hi-aces, exception cars if no space on grnd flr
	friend class Charges;
	friend class Slots;
	
	private:
		int vans, cars, hiAces;
	
	public:
		Basement(int v, int c, int h){
			vans = v;
			cars = c;
			hiAces = h;
		}
};

class GroundFloor{
	// cars not van and hi-aces
	private:
		int cars1;
	
	public:
		GroundFloor(int d){
			cars1 = d;
		}
	friend class Charges;
	friend class Slots;
};

class TopFloor{
	// bi-cycles, motor-bikes and scooters and no more than two wheelers
	private:
		int bi_cycles, bikes, scooters;
	
	public:
		TopFloor(int e, int f, int g){
			bi_cycles =e;
			bikes = f;
			scooters =g;
		}
	friend class Charges;
	friend class Slots;
};

class Members{
	// prices reduce to half
	private:
		long bik, bic, cars, scoot, vans, hia, ttlMembers;
		
	public:
		Members(int bk, int bi, int ca, int sco, int va, int hi){
			
			bik = bk;
			bic = bi;
			cars = ca;
			scoot = sco;
			vans = va;
			hia = hi;
			
			ttlMembers = bik + bic + cars + scoot + vans + hia;
			
		}
	friend class Charges;
};

class Charges{
	private:
		long bikes, biCycles, cars, cars1, scooters, vans, hiAces, tCharges, final;
			
	public:
		
		Charges(Basement veh1, GroundFloor veh2, TopFloor veh3, Members charg){
			
			cars = veh1.cars;
			vans = veh1.vans;
			hiAces = veh1.hiAces;
			
			cars1 = veh2.cars1;
			
			biCycles = veh3.bi_cycles;
			bikes = veh3.bikes;
			scooters = veh3.scooters;
			
			tCharges = ((vans + hiAces)*50) + (cars * 30) + (cars1 * 30) + ((biCycles * 10) + (bikes + scooters)*20);
			final = (((tCharges/charg.ttlMembers)*50)/100)*charg.ttlMembers;
						
		}
	friend class Tax;
	friend class Report;
};


class Tax{
	// 5% tax
	private:
		long tfinal;
	public:
		Tax(Charges t){
			tfinal = (t.final)-((t.final * 5)/100);
		}
	friend class Report;
};
class NewMembers{
	private:
		int membersCount;
	public:
		NewMembers(){
			cout<<endl<<endl<<"Enter no of New Members : ";
			cin>>membersCount;
			membersCount = membersCount * 1000;
		}
		
	friend class Report;

};

class EmployeeSalary{
	// G.M = 1000/per day, 3 attendants = 500 each, 2 guards = 300 each
	private:
		long salaries;
	
	public:
		EmployeeSalary(){
			salaries = 1000 + 1500 + 600;
		}
	
	friend class Report;
};

class Report{
	private:
		double tamount;
	public:
		void totalAmount(Tax t, NewMembers m, EmployeeSalary es){
			
			tamount = t.tfinal + m.membersCount - es.salaries;
			
			
		}
		
		void report(Tax t, NewMembers m, EmployeeSalary es, Charges fi){
			
			cout<<endl<<endl<<"* REPORT *"<<endl<<endl;
			
			cout<<"Total amount of today's income : "<<fi.final<<endl<<endl;
			cout<<"Amount after tax deduction : "<<t.tfinal<<endl;
			cout<<"Salaries given : "<<es.salaries<<endl;
			cout<<"Amount generated from new members : "<<m.membersCount<<endl<<endl;
			
			cout<<"Total todays income : "<<tamount;	
			
		}
		
};
class Slots{
	// bassement = 30, grnd flr = 40, top floor = 100 fr bikes,scooter & 50 fr bi-cycles
	public:
		void emptySlots(Basement veh1, GroundFloor veh2, TopFloor veh3){
			
			if((veh1.vans+veh1.cars+veh1.hiAces)>30){
				cout<<"NO MORE EMPTY SLOTS in BASEMENT!!"<<endl;
			}
				
			if((veh2.cars1)>40){
				cout<<"NO MORE EMPTY SLOTS in GROUND FLOOR!!"<<endl;
			}
					
			if((veh3.bikes + veh3.scooters)>50){
				cout<<"NO MORE EMPTY SLOTS in TOP FLOOR for BIKES & SCOOTERs!!"<<endl;
			}
						
			if ((veh3.bi_cycles) > 50){
				cout<<"NO MORE EMPTY SLOTS in TOP FLOOR for BI-CYCLEs!!";
			}
	}							
		
};



int main() {
	Report r1;
    Slots s1;
		
    Basement b1(3, 15, 8);
    GroundFloor g1(25);
    TopFloor t1(55, 51, 55);
    Members m1(1, 3, 4, 2, 5, 6);
    
    s1.emptySlots(b1, g1, t1);
    
    Charges c1(b1, g1, t1, m1);
    Tax ta1(c1);
    NewMembers nm1;
    EmployeeSalary es1;
       
    r1.totalAmount(ta1, nm1, es1);
    r1.report(ta1, nm1, es1, c1);
    
    

    return 0;
}


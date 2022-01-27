#include<iostream>
#include<string>
using namespace std;



class Floors{
	private:
		int vans;
	public:
		
		void addSlots(int v){
			vans = v;
		}
};

class Basement{
	private:

	Floors x;
	public:
		int v = 0;
		void show(){
			x.addSlots(v);
		}
		
};


class Entry: public Basement{
	private:
		string veh;
	////ALL INFORMATION						
	public:
		void newEntry()
		{
			cout<<"Enter Vehicle type : ";
			cin>>veh;	
			
			if (veh == "van")
			{
				cout<<"Go to Basement "<<endl;
				v += 1;
				cout<<v;
				
			}
	}
};



int main(){
	Entry e;
	e.newEntry();
}



















/*
class Floors{
	private:
		int basement[30]={};
		int ground[40] = {};
		int top[150] = {};
		
	public:
		void emptySlots(int b, int g, int t){
			basement[b];
			ground[g];
			top[t];
		}
		void showSlots(){
			cout<<"Slots vailable in Basement     "<<basement[b]<<endl;
			cout<<"Slots vailable in Ground floor "<<ground[g]<<endl;
			cout<<"Slots vailable in Top floor    "<<top[t]<<endl;
		}
};

class Basement{
	
	private:
		int vans = 0, hiAces = 0, slots = 0, btotal = 0;
		Floors x;
	public:
		void show(){
			x.emptySlots(3, 4, 5);
			x.showSlots();
		}
		
};

int main(){
	Basement b;
	b.show();
}*/


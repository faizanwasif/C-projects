#include<iostream>
using namespace std;

struct employee{
	int employee_number;
	float employee_compenstaion;
};
int main(){
	//////////////////////////////////////////////////////////////////////
	employee e1, e2, e3;
	//taking values
	cout<<"Enter employee number : ";
	cin>>e1.employee_number;
	cout<<"Enter employee compensation : ";
	cin>>e1.employee_compenstaion;
	/////////////////////////////////////////////////////////////////////
	cout<<"Enter employee number : ";
	cin>>e2.employee_number;
	cout<<"Enter employee compensation : ";
	cin>>e2.employee_compenstaion;
	/////////////////////////////////////////////////////////////////////
	cout<<"Enter employee number : ";
	cin>>e3.employee_number;
	cout<<"Enter employee compensation : ";
	cin>>e3.employee_compenstaion;
	//printing output
	cout<<"Employee number : "<<e1.employee_number<<endl;
	cout<<"Employee compensation : "<<e1.employee_compenstaion<<"$"<<endl;
	cout<<"Employee number : "<<e2.employee_number<<endl;
	cout<<"Employee compensation : "<<e2.employee_compenstaion<<"$"<<endl;	
	cout<<"Employee number : "<<e3.employee_number<<endl;
	cout<<"Employee compensation : "<<e3.employee_compenstaion<<"$"<<endl;
	
	return 0;
}



/*
struct volume
{
	double leng,width,height,inch_len,inch_w,inch_h;
};
int main()
{
	volume v;
	//taking values	
	cout<<"Enter the length of room in feet : ";
	cin>>v.leng;
	cout<<"Enter the length of room in inches : ";
	cin>>v.inch_len;
	////////////////////////////////////////////////////////////////////////////
	cout<<"Enter the width of room in feet : ";
	cin>>v.width;
	cout<<"Enter the width of room in inches : ";
	cin>>v.inch_w;
	///////////////////////////////////////////////////////////////////////////
	cout<<"Enter the Height of room in feet : ";
	cin>>v.height;
	cout<<"Enter the Heigth of room in inches : ";
	cin>>v.inch_h;
	///////////////////////////////////////////////////////////////////////////
	//Now convert these values in float
	float length,width,height,volume;
	length=v.leng+((v.inch_len)/12);
	width=v.width+((v.inch_w)/12);
	height=v.height+((v.inch_h)/12);
	//printing output
	cout<<"The length of room in feet is : "<<length<<endl;
	cout<<"The Base of room in feet is: "<<width<<endl;
	cout<<"The Height of room in feet is : "<<height<<endl;
	volume=length*width*height;
	cout<<"Volume of Room is: "<<volume;
}


q5
struct phone
{
    int area, exchange, number;
};

int main()
{
    phone No1 = { 212, 767, 8900 };  
	phone No2;                       
                                                               
	cout << "Enter your area code, exchange, and number : ";
	cin >> No2.area >> No2.exchange >> No2.number;
	   
	cout << "My number is "<< '(' << No1.area << ") "<< No1.exchange << " - " << No1.number<<endl;
	cout << "Your number is " << "(" << No2.area << ") "<< No2.exchange << " - " << No2.number << endl;
	return 0;
}


q3
struct time{
	double hours, minutes, seconds;
};
int main(){
	////////////////////////////////////////////////////////////////////////////////
	int y,z;
	time hrs, mins, secs;
	//time value 1
	cout<<"Enter hrs : ";
	cin>>hrs.hours;
	cout<<"Enter mins : ";
	cin>>mins.minutes;
	cout<<"Enter secs : ";
	cin>>secs.seconds;
	y = (hrs.hours*3600)+(mins.minutes*60)+secs.seconds;
	//time value 2
	cout<<"Enter hrs : ";
	cin>>hrs.hours;
	cout<<"Enter mins : ";
	cin>>mins.minutes;
	cout<<"Enter secs : ";
	cin>>secs.seconds;
	z = (hrs.hours*3600)+(mins.minutes*60)+secs.seconds;
	//total secs
	int combined_secs = y+z;
	//formulae
	int ttl_hrs = combined_secs/3600;
	int ttl_mins = ((combined_secs%3600)/60);
	int ttl_secs = ((combined_secs%3600)%60);
	//printing output
	cout<<"Total time is : "<<ttl_hrs<<":"<<ttl_mins<<":"<<ttl_secs;	
	return 0;
}

q2

struct time{
	int hours, minutes, seconds;
};

int main(){
	//////////////////////////////////////////////////////////////////////////////
	time hrs, mins, secs;
	//Taking values
	cout<<"Enter hrs : ";
	cin>>hrs.hours;
	/////////////////////////////////////////////////////////////////////////////
	cout<<"Enter mins : ";
	cin>>mins.minutes;
	/////////////////////////////////////////////////////////////////////////////
	cout<<"Enter secs : ";
	cin>>secs.seconds;
	//printing resukt
	cout<<"Total Seconds are : "<<(hrs.hours*3600)+(mins.minutes*60)+secs.seconds;
	/////////////////////////////////////////////////////////////////////////////
	return 0;
}


q1
*/

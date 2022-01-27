#include<iostream>
#include<cmath>
using namespace std;

void doll_to_rs_converter(){
	double doll, rups;
	
	cout<<"Enter amount in dollars : ";
	cin>>doll;
			
	rups = doll*150;
	
	cout<<"It is : "<<rups<<"rs";
}

void rs_doll_conv(){
	double doll, rups;
	
	doll = rups/150;
	
	cout<<"Enter amount in Rs : ";
	cin>>rups;
	
	cout<<doll<<"$";	
}

void cen_fer_conv(){
	double cen, fer;
		
	cout<<"Enter the amount in centigrade : ";
	cin>>cen;
	
	fer = ((cen) * 9/5) + 32;
	
	cout<<fer;
}













void dmc(){
	string st_name;
	double marks, per;
	
	cout<<"Enter your name : ";
	cin>>st_name;
	cout<<"Enter your 2nd semester marks out of 1000 : ";
	cin>>marks;
	
	per = (marks*100)/1000;
	
	cout<<"Obtained marks : "<<marks<<"/1000"<<endl;
	cout<<"Your percentage is : "<<per;
}



void other_math(){
	double x, y, z;
	
	cout<<"Enter a number : ";
	cin>>x;
	
	cout<<"Sin of "<<x<<" : "<<sin(x)<<endl;
	cout<<"Sinh of "<<x<<" : "<<sinh(x)<<endl;
	cout<<"Tan of "<<x<<" : "<<tan(x)<<endl;
	cout<<"Tanh of "<<x<<" : "<<tanh(x)<<endl;
	cout<<"Abs of "<<x<<" : "<<abs(x)<<endl;
	cout<<"Arc cos of "<<x<<" : "<<acos(x)<<endl;
	cout<<"Arc sin of "<<x<<" : "<<asin(x)<<endl;
	cout<<"Arc tan of "<<x<<" : "<<atan(x)<<endl;
	cout<<"Cube root of "<<x<<" : "<<cbrt(x)<<endl;
	cout<<"Round off of "<<x<<" : "<<ceil(x)<<endl;
	cout<<"Cos of "<<x<<" : "<<cos(x)<<endl;
	cout<<"Cosh of "<<x<<" : "<<cosh(x)<<endl;
	cout<<"E**x of "<<x<<" : "<<exp(x)<<endl;
	cout<<"e**x - 1 of "<<x<<" : "<<expm1(x)<<endl;
	cout<<"Absolute of "<<x<<" : "<<fabs(x)<<endl;
	cout<<"Rounded of to nearest value of "<<x<<" : "<<floor(x)<<endl;
	
	cout<<"Enter second Number : ";
	cin>>y;
	
	cout<<"Positive difference between "<<x<<" and "<<y<<" : "<<fdim(x,y)<<endl;
	cout<<"Square root of "<<x<<" and "<<y<<" : "<<hypot(x,y)<<endl;
	cout<<"Highest No between "<<x<<" and "<<y<<" : "<<fmax(x,y)<<endl;
	cout<<"Lowest No between "<<x<<" and "<<y<<" : "<<fmin(x,y)<<endl;
	cout<<"Remainder between "<<x<<" and "<<y<<" : "<<fmod(x,y)<<endl;
	cout<<"No1 to the power of No2 is "<<pow(x,y)<<endl;
	
	cout<<"Enter Third Number : ";
	cin>>z;
	
	cout<<"No1 x No2 + No3 = "<<fma(x, y, z);
	
}
int main(){
	other_math();
	return 0;
}

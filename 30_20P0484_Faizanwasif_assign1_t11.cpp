#include<iostream>
#include<typeinfo>
using namespace std;

void table(int x){

	int i;
	

	for(i = 0; i < 11; i++){
		cout<<x<<" x "<<i<<" = "<<x * i<<endl;
}

}





int fac(int n){
	
	int i;
	long long fact;
	
    if(n > 1)
        return n * fac(n - 1);
    else
        return 1;
        
}



int add(int x, int y){
	cout<<x + y;
}

int sub(int x, int y){
	cout<<x - y;
}

int mul(int x, int y){
	cout<<x * y;
}

int div(int x, int y){
	cout<<x / y;
}

int rem(int x, int y){
	cout<<x % y;
}

void cal(){
	int value, value2;
	char x, ask;
	cout<<"Enter your values : ";
	cin>>value;
	cin>>x;
	cin>>value2;
	if(x == '+'){
		add(value, value2);
	}
	else if(x == '-'){
		sub(value, value2);
	}
	else if(x == '*'){
		mul(value, value2);
	}
	else if(x == '/'){
		div(value, value2);
	}
	else if(x == '%'){
		rem(value, value2);
	}


	do {
		cout<<endl<<"Play again (y/n) : ";
		cin>>ask;
		if(ask == 'y')
		{
			cal();
		}
		if (ask == 'n')
		{
			break;
		}
		break;
	}
	while(true);
}








/*
int array[5] = {};

void arrayfunction(){

	
	
	int x;
	
	for(int i = 0; i<5; i++){
	cout<<"1st array element No "<<i+1<<" : ";
	cin>>x;
	array[i] = x;
}
}

int main(){

	arrayfunction();
	
	for(int i = 0; i<5; i++){
		cout<<array[i]<<",";	
	}
		
	return 0;
	
}*/

void printtype(int a){
	int b;
	if(typeid(a) == typeid(b)){
		cout<<a<<" is an integer data type";
	}
}

void printtype(char a){
	char c;
	if(typeid(a) == typeid(c)){
		cout<<a<<" is a character data type";
	}
}
void printtype(double a){
	double d;
	if(typeid(a) == typeid(d)){
		cout<<a<<" is a double data type";
	}

}
void printtype(bool a){
	bool e;
	if(typeid(a)==typeid(e)){
		cout<<a<<" is boolean data type";
	}
}




/*
int main() {
	int array[3]= {};
	for(int j = 0; j<3; j++){
	cout<<"Enter the value : ";
	cin>>array[j];
	}
	int min =array[0];
	for (int i = 0; i <3; i++)
	{
	if (array[i]<min)
	{
	min=array[i];
	}
	}
	cout<<"Manimum number is: "<<min<<endl;
	int max =array[0];
	for (int i = 0; i <3; i++)
	{
	if (array[i]>max)
	{
	max=array[i];
	}
	}
	cout<<"Maximum number is: "<<max;
	return 0;
}*/

/*
void converter(float f){
	
	float c;
	
	cout<<"Enter the value in Fahrenheit : "<<endl;
	cin>>f;
	
	c = (f - 32) * 5/9;
	
	cout<<"Converted value : "<<c;
	
}








int main(){
	
	float f;
	
	float *f_p = &f;
	
	converter(*f_p);
	
}
*/












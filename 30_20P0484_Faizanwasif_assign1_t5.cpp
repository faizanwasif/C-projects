#include <iostream>
using namespace std;

void part1(){
	int x, i;
	x = 0;
	for(i = 0; i < 11; i++){
		cout<<x<<endl;
		x += 1;
	}
}


void part2(){
	
	int x, y, i, j;
	x = 0;
	y = 0;
	
	cout<<"The even numbers are : ";
	for(i = 0; i < 11; i++){
		if(x%2 == 0){
		cout<<x<<" ";
	}
	x += 1;
	}
	
	cout<<endl<<"The odd numbers are : ";
	for(j = 0; j < 11; j++){
		if(y%2 != 0){
		cout<<y<<" ";
	}
	y += 1;
	}
	
}










void part3(){
	
	int x, i;
	
	cout<<"Enter : ";
	cin>>x;
	
	for(i = 0; i < 11; i++){
		cout<<x * i<<endl;
	
}
}





























void part4(){
	
	int x, i, fact;
	
	cout<<"Enter : ";
	cin>>x;
	
	for(i = 1; i <= x; i++){
		
		fact = fact * i;		
	
	}
	cout<<"Factorial of "<<x<<" is "<<fact;
}

int main() {
	int array[3]= {};
	for(int j = 0; j<3; j++){
		cout<<"Enter the value : ";
		cin>>array[j];
	}
	int *min = &array[0];
	for (int i = 0; i <3; i++)
	{
    	if (array[i]<*min)
    	{
        	*min = array[i];
    	}
	}
	cout<<"Manimum number is: "<<*min<<endl;
	
	int *max = &array[0];

	for (int i = 0; i <3; i++)
	{
    	if (array[i]>*max)
    	{
        	*max = array[i];
    	}
	}
	cout<<"Maximum number is: "<<*max;
  return 0;
}

/*
int main(){
	part4();
	
	return 0;
}*/

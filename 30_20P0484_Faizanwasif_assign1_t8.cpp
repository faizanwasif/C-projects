#include<iostream>
#include <iomanip>
#include <ios>
using namespace std;

void prt2(){
	int j, i;

	for(i = 5; i>-1; i--){
	
		for(j = 1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void prt3(){
	int i, k, j;
	j = 5;
	
	for(i = 1, k = 0; i <= 5; ++i, k = 0)
	{	cout<<setw(j);
		while(k != 2*i-1)
	    {
	        cout<< "*";
	        k+=1;
	    }
	    j -= 1;
    	cout<<endl;
	}
}
void prt4(){
	int i, k, j;
	j = 5;
	
	for(i = 5, k = 0; i>-1; --i, k = 0)
	{	cout<<setw(j);
		while(k != 2*i+1)
	    {
	        cout<< "*";
	        k+=1;
	    }
	    j += 1;
    	cout<<endl;
	}
}
int main(){
	prt4();
}

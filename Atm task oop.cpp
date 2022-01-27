#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//notes possible 1, 10, 20, 50, 100, 500, 1000 and 5000
	int amount;
	int notes[8] = { 1, 10, 20, 50, 100, 500, 1000, 5000 };
	int numofnotes = 0;
	cout<<"Enter the amount"<<endl;
	cin>>amount;
	for (int i=0; i <8; i++){
		if (amount <= notes[i]){
			int divider[8]={amount/notes[i]};
			//cout<<(divider[i])<<endl;
			cout<<(amount/notes[i])<<endl;
		}
		
	}
}

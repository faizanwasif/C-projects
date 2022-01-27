#include<iostream>
using namespace std;

void forward(int sp, int ep){
	int i, j;
	
	for( i = sp; i <= ep ; i++){
		for( j = 0; j <= i; j++){
			if(i%j == 0){
				cout<<i;
			}
		}
	}
}

int main(){
	forward(1, 10);
	return 0;
}

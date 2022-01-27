#include <iostream>
using namespace std;


int main(){
	int array1[] = {1,2,3};
	int array2[] = {4,5,6};
	int array3[] = {7,8,9};
	
	cout<<"Using indexes "<<endl;
	for(int i; i<3; i++){
		cout<<array1[i]<<endl;
	}
	cout<<"Using addresses "<<endl;
	cout<<*(&array2[0])<<endl;
	for(int j; j<3; j++){
		cout<<*(&array2[j])<<endl;
	}
	
	

	cout<<"Using pointers "<<endl;
	for(int k; k<3; k++){
		int *p = array3 + k;
		cout<<*p<<endl;
	}
}




/*
int main(){
	int x = 100;
	int y = 101;
	char z = 'a';
	
	int *p1 = &x;
	int *p2 = &y;
	char *p3 = &z;
	
	cout<<"Values before changing : "<<*p1<<" "<<*p2<<" "<<*p3<<endl;
	
	*p1 = 1;
	*p2 = 2;
	*p3 = 'b';
	
	cout<<"Values after changing : "<<*p1<<" "<<*p2<<" "<<*p3;
}*/

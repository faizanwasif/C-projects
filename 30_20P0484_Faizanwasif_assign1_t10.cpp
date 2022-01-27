#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void part2() {
	
   int up_bound;
   
   up_bound = 100; 
   
   srand(time(0));
   
   cout << "The random number is: "<<rand()%up_bound;

}

void part1(){
	
	int array1[5] = {};
	int array2[5] = {};
	
	int x, y;
		
	cout<<"Enter elements of 1st array"<<endl;
	for(int i = 0; i<5; i++){
		cout<<"1st array element No "<<i+1<<" : ";
		cin>>x;
		array1[i] = x;
		
		cout<<"2nd array element No "<<i+1<<" : ";
		cin>>y;
		array2[i] = y;

	}
	
	cout<<"The resultant array is : ";
	for(int j = 0; j<5; j++){
		
		cout<<array1[j]+array2[j]<<",";
	}	
	
}


void part3(){
	
	int array1[5] = {};
	int array2[5] = {};
	
	int x, y;
		
	cout<<"Enter elements of 1st array"<<endl;
	for(int i = 0; i<5; i++){
		cout<<"1st array element No "<<i+1<<" : ";
		cin>>x;
		array1[i] = x;
		
		cout<<"2nd array element No "<<i+1<<" : ";
		cin>>y;
		array2[i] = y;

	}
	
	cout<<"The resultant array is : ";
	for(int j = 0; j<5; j++){
		
		srand(time(0));
		
		int a = rand()%5;
		int b = rand()%5;
		
		cout<<(array1[a])+(array2[b])<<",";
	
	}	
	
}



void part4(){
	
	int list[] = {20,25,1,4};
	int max = list[0];
	for(int i = 0;i<3;i++){
	
		if(max<list[i]){
			max = list[i];

	}
	}
	cout<<"Maximum Number is = "<<max<<endl;
	
}

















void part5(){
	int list[] = {20,25,1,4};
	int min = list[0];
	for(int i = 0;i<3;i++){
		if(min>list[i]){
			min = list[i];
	}
	}
	cout<<"Minimum Number is = "<<min<<endl;
}









int main(){
	part5();
}

#include<iostream>
#include<typeinfo>
using namespace std;


void arrayFunction(){
	int a,b,c,d,e,f,g,h,i;	
	cout<<"Array [0][0] = ";
	cin>>a;
	cout<<"Array [0][1] = ";
	cin>>b;
	cout<<"Array [0][2] = ";
	cin>>c;
	cout<<"Array [1][0] = ";
	cin>>d;
	cout<<"Array [1][1] = ";
	cin>>e;
	cout<<"Array [1][2] = ";
	cin>>f;
	cout<<"Array [2][0] = ";
	cin>>g;
	cout<<"Array [2][1] = ";
	cin>>h;
	cout<<"Array [2][2] = ";
	cin>>i;
	int array[3][3] = {{a,b,c}, {d,e,f}, {g,h,i}};
	for (int i = 0 ; i<3; i++){
		for (int j = 0; j<3; j++){
			cout<<array[i][j]<<" ";
			if (j == 2 ){
				cout<<"\n";
			}
		}
	}

}

int main(){
	arrayFunction();

}

/*q1
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

int main(){
	printtype(true);
}*/

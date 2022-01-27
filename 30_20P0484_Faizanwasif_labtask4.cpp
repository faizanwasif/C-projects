#include <iostream>
using namespace std;



int main(){
	int list[3][3];
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
	list [0][0] = a;
	cout<<list[0][0]<<" ";
	list [0][1] = b;
	cout<<list[0][1]<<" ";
	list [0][2] = c;
	cout<<list[0][2]<<endl;
	list [1][0] = d;
	cout<<list [1][0]<<" ";
	list [1][1] = e;
	cout<<list [1][1]<<" ";
	list [1][2] = f;
	cout<<list [1][2]<<endl;
	list [2][0] = g;
	cout<<list [2][0]<<" ";
	list [2][1] = h;
	cout<<list [2][1]<<" ";
	list [2][2] = i;
	cout<<list [2][2]<<endl;
}





/*


int main(){
	int list[3][3];
	cout<< "1st method of Array Intialization"<<endl;
	list [0][0] = 70;
	cout<<list[0][0]<<" ";
	list [0][1] = 80;
	cout<<list[0][1]<<" ";
	list [0][2] = 90;
	cout<<list[0][2]<<endl;
	list [1][0] = 10;
	cout<<list [1][0]<<" ";
	list [1][1] = 70;
	cout<<list [1][1]<<" ";
	list [1][2] = 30;
	cout<<list [1][2]<<endl;
	list [2][0] = 95;
	cout<<list [2][0]<<" ";
	list [2][1] = 77;
	cout<<list [2][1]<<" ";
	list [2][2] = 76;
	cout<<list [2][2]<<endl;

}




int main(){
	int list[3][3] = {{30,40,50}, {70,80,10}, {12,45,67}};
	cout<< "2nd method of Array Intialization"<<endl;
	for (int i = 0 ; i<3; i++){
		for (int j = 0; j<3; j++){
			cout<<list[i][j]<<" ";
			if (j == 2 ){
				cout<<"\n";
			}
		}
	}
}
*/

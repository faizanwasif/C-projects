#include<iostream>
#include<typeinfo>
using namespace std;

int array[3][3];

int arrayFunction(){

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
	array[0][0]=a;
	array[0][1]=b;
	array[0][2]=c;
	array[1][0]=d;
	array[1][2]=e;
	array[1][2]=f;
	array[2][0]=g;
	array[2][1]=h;
	array[2][2]=i;
}

int main(){
	arrayFunction();
	for (int a = 3; a<3;a++){
		for(int b = 3; b<3;b++){
			cout<<array[a][b]<<endl;
		}
	}
}


/*
int main(){
	int list[3][3],list2[3][3];
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;
	cout<<"a [0][0] = ";
	cin>>a;
	cout<<"b [0][0] = ";
	cin>>j;
	cout<<"a [0][1] = ";
	cin>>b;
	cout<<"b [0][1] = ";
	cin>>k;
	cout<<"a [0][2] = ";
	cin>>c;
	cout<<"b [0][2] = ";
	cin>>l;
	cout<<"a [1][0] = ";
	cin>>d;
	cout<<"b [1][0] = ";
	cin>>m;
	cout<<"a [1][1] = ";
	cin>>e;
	cout<<"b [1][1] = ";
	cin>>n;
	cout<<"a [1][2] = ";
	cin>>f;
	cout<<"b [1][2] = ";
	cin>>o;
	cout<<"a [2][0] = ";
	cin>>g;
	cout<<"b [2][0] = ";
	cin>>p;
	cout<<"a [2][1] = ";
	cin>>h;
	cout<<"b [2][1] = ";
	cin>>q;
	cout<<"a [2][2] = ";
	cin>>i;
	cout<<"b [2][2] = ";
	cin>>r;
	cout<<"Values of Array a"<<endl;
	list [0][0] = a;
	cout<<a<<" ";
	list [0][1] = b;
	cout<<b<<" ";
	list [0][2] = c;
	cout<<c<<endl;
	list [1][0] = d;
	cout<<d<<" ";
	list [1][1] = e;
	cout<<e<<" ";
	list [1][2] = f;
	cout<<f<<endl;
	list [2][0] = g;
	cout<<g<<" ";
	list [2][1] = h;
	cout<<h<<" ";
	list [2][2] = i;
	cout<<i<<endl;
	cout<<"Values of Array b"<<endl;
	list [0][0] = j;
	cout<<j<<" ";
	list [0][1] = k;
	cout<<k<<" ";
	list [0][2] = l;
	cout<<l<<endl;
	list [1][0] = m;
	cout<<m<<" ";
	list [1][1] = n;
	cout<<n<<" ";
	list [1][2] = o;
	cout<<o<<endl;
	list [2][0] = p;
	cout<<q<<" ";
	list [2][1] = q;
	cout<<q<<" ";
	list [2][2] = r;
	cout<<r<<endl;
	cout<<"Values of Array c"<<endl;
	list2 [0][0] = a*j+b*m+c*p;
	cout<<j<<" ";
	list2 [0][1] = a*k+b*n+c*q ;
	cout<<k<<" ";
	list2 [0][2] = a*l+b*o+c*r;
	cout<<l<<endl;
	list2 [1][0] = d*j+e*m+f*p;
	cout<<m<<" ";
	list2 [1][1] = d*k+e*n+f*q;
	cout<<n<<" ";
	list2 [1][2] = d*l+e*o+f*r;
	cout<<o<<endl;
	list2 [2][0] = g*j+h*m+i*p;
	cout<<q<<" ";
	list2 [2][1] = g*k+h*n+i*q;
	cout<<q<<" ";
	list2 [2][2] = g*l+h*o+i*r;
	cout<<r<<endl;
}*/

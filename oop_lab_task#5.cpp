#include<iostream>
using namespace std;


/*
int main(){
	int list[3][3], max, min;
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
	cout<<"Array values are : "<<endl;
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
	max = list[0][0];
	for(int y = 0;y<3;y++){
		for(int z = 0;z<3;z++){
		if(max<list[y][z]){
			max = list[y][z];
		}
	}
	}
	min = list[0][0];
	for(int y = 0;y<3;y++){
		for(int z = 0;z<3;z++){
		if(min>list[y][z]){
			min = list[y][z];
		}
	}
	}
	cout<<"Maximum Number is = "<<max<<endl;
	cout<<"Minimum Number is = "<<min<<endl;
}*/

int main(){
	int list[3][3],list2[3][3], max, min;
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
	cout<<a+j<<" ";
	cout<<b+k<<" ";
	cout<<c+l<<endl;
	cout<<d+m<<" ";
	cout<<e+n<<" ";

	cout<<f+o<<endl;

	cout<<g+p<<" ";

	cout<<h+q<<" ";

	cout<<i+r<<endl;
}


#include<iostream>
using namespace std;




void ppp(char *);

int main(){
	char st[]="Pakistan";
	
	ppp(st);
	
	cout<<"OK";
	
}

void ppp(char *sss){
	while(*sss != '\0'){
		cout<<*sss<<endl;
		*sss++;
	}
}


/*
void display(char *);
void display(string);

int main(){
	string str1;
	char str[100];
	cout<<"Enter a string"<<endl;
	getline(cin, str1);
	
	cout<<"Enter another string"<<endl;
	cin.get(str, 100);
	display(str1);
	display(str);
	return 0;
}

void display(char s[]){
	cout<<"Entered char array is "<<s<<endl;
}

void display(string s){
	cout<<"Entered string is "<<s<<endl;
}*/




/*
int main(){
	char str[100];
	cout<<"enter"<<endl;
	cin.get(str,100);
	cout<<"you entered \n"<<str<<endl;
	string str;
	cout<<"enter"<<endl;
	getline(cin,str);
	cout<<str<<endl;
}*/

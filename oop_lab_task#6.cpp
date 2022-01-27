#include<iostream>
#include<string>
using namespace std;

/*
int main(){
	
	char str[100];
	char str1[100];
	int i;

	cout<<"Enter a string : ";
	cin.get(str, 100);
	cout<<"Enter 2nd string : ";
	cin.get(str1, 100);
	
	char *p_str = str;
	char *p_str1 = str1;

	while(*(++p_str));
		while(*(p_str++) = *(p_str1));
	
	
	char *final = str;
	while(*(final)){
		cout<<*final;
		final++;
		}
}
*/




int main(){
		
	char str[100];
	char str1[100];
	int i;
	cout<<"Enter a string : ";
	
	cin.get(str, 100);
	
	char *p_str = str;
		
	for(i =0; *p_str != '\0'; p_str++, i++){
		str1[i] = str[i];
	}
	
	char *p_str1 = str1;
	
	str1[i] = '\0';
	
	
	for(i = 0; *p_str1 != '\0'; p_str1++, i++){
		cout<<str1[i];
	}
		
}

void copy(char *p_str, char *p_str1){

	cout<<"You typed : ";

}




/*
void string_lenght(string a){
	
	int length;
	
	cout<<"Enter a string"<<endl;
	getline(cin,a);
	
	int	x = a.length();
	
	int *a_p = &x;
	
	cout<<"Lenght = "<<*a_p;
	
}

int main(){
	
	string a;
	
	string_lenght(a);
}
*/



/*
void converter(float kg){
	
	float g;
	
	cout<<"Enter the value in kg : "<<endl;
	cin>>kg;
	
	g = kg * 1000 ;
	
	cout<<"Converted value : "<<g<<"g";
	
}

int main(){
	
	float kg;
	
	float *kg_p = &kg;
	
	converter(*kg_p);
	
}*/









/*
void converter(float f){
	
	float c;
	
	cout<<"Enter the value in Fahrenheit : "<<endl;
	cin>>f;
	
	c = (f - 32) * 5/9;
	
	cout<<"Converted value : "<<c;
	
}

int main(){
	
	float f;
	
	float *f_p = &f;
	
	converter(*f_p);
	
}*/

















/*
int main() {

int array[3]= {};

for(int j = 0; j<3; j++){
	cout<<"Enter the value : ";
	cin>>array[j];
	
}

int min =array[0];

for (int i = 0; i <3; i++)
{
    if (array[i]<min)
    {
        min=array[i];
    }
    
}
cout<<"Manimum number is: "<<min<<endl;

int max =array[0];

for (int i = 0; i <3; i++)
{
    if (array[i]>max)
    {
        max=array[i];
    }
    
}
cout<<"Maximum number is: "<<max;


  return 0;
}*/

#include <iostream>
#include <cmath>
using namespace std;

int binary(int);

int main()
{
  int num;
  num = 11;
  
  cout << "Equivalent Decimal number: " <<binary(num)<< endl;
   

}




int binary(int num){
  int decimalNum, i, rem,result;
    
  if(num != 0)
     {
        rem = num % 10;
        num /=  10;
        decimalNum = rem * pow(2,i);
        result = decimalNum;
        return(result + binary(num));
        
     }
   else if(num == 0)
  {return 0;}
  
}


/*
int binary(int);

int main(){
	int num, dec;
	num =10101010;
	dec = binary(num);
	cout << "The decimal equivalent of " << num << " is " << dec;
    return 0;
}

int binary (int num)
{
    int rem, temp, dec = 0, b = 1;
    temp = num;
    if (num > 0)
    {
        rem = temp % 10;
        dec = dec + rem * b;
        b *= 2;
        temp /= 10;
        return dec;
    }
}



int difference(int a, int b){
	//return the difference between two number (difference must be positive)
	if(a<b){
		return (b - a);
	}
	else if (a>b){
		return (a - b);
	}
}

int difference(string a, string b){
	//return the difference of characters between the strings
	if(a.length()>b.length()){
	
		return(a.length() - b.length());
	}
	else if(a.length()<b.length()){
	
		return(b.length() - a.length());
	}
	
}


int main(){
	cout<<difference(10,4)<<endl;
	cout<<difference("Hodasad", "Hi");
}*/

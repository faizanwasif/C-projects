#include<iostream>
using namespace std;

#include<iostream>
#include<string>
using namespace std;

int main()
{
        string str;
        int i, len;
        int max = -1;
        char result;
        
        int freq[256] = {0}; 
        
        cout << "Please Enter the String to Find Max Occur Char  =  ";
        getline(cin, str);
        
        len = str.length();
        
        for(i = 0; i < len; i++)
        {
                freq[str[i]]++;
        }
                
        for(i = 0; i < 256; i++)
        {
                if(freq[i] > freq[max])
                {
                        max = i;
                }
        }
        cout<< "The Maximum Occurring Character in " << str <<" = " << (char)max<<endl;
        cout << "Character " << (char)max << " appears Maximum of " <<  freq[max] << " Times in " << str << endl;
                
        return 0;
}












/*
int main()
{
    int amount;
    
	int note1000 ,note500, note100, note50, note20, note10;
	note1000 = note500 = note100 = note50 = note20 = note10  = 0; 	
	
	cout <<"Please Enter the Amount of Cash =  "<<endl;

	cin >> amount;
    if (amount > 1000)
	{
  		note1000 = amount / 1000;
  		amount = amount - (note1000 * 1000);	
  	} 
  	if (amount > 500)
	{
  		note500 = amount / 500;
  		amount = amount - (note500 * 500);	
  	} 
	if (amount >= 100)  	
	{
  		note100 = amount / 100;
  		amount = amount - (note100 * 100);	
  	}
	if (amount >= 50)  	
	{
  		note50 = amount / 50;
  		amount = amount - (note50 * 50);	
  	} 
	if (amount >= 20)  	

	{
  		note20 = amount / 20;
  		amount = amount - (note20 * 20); 	
  	} 
	if (amount >= 10)  	
	{
  		note10 = amount / 10;
  		amount = amount - (note10 * 10); 	
  	} 

	cout << "Total Number of Notes "<<endl;
    cout << "1000 notes =  " << note1000<<endl;
	cout << "500 Notes  =  " << note500<<endl; 
	cout << "100 Notes  =  " << note100<<endl; 
	cout << "50 Notes   =  " << note50<<endl; 
	cout << "20 Notes   =  " << note20<<endl; 
	cout << "10 Notes   =  " << note10<<endl; 

			
 	return 0;
}

*/

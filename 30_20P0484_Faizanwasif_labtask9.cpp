#include<iostream>
using namespace std;

class Complex{
	private:
		float real, img;
	
	public:
		void set(float a, float b){
			
			real = a;
			img = b;
			
		}

		Complex sum(Complex c){
					
			c.real = real + c.real;
			c.img = img + c.img;
			
			return c;
			
		}
		
		void disp(){
			
			cout<<"val of real part : "<<real<<endl<<"val of imginary part : "<<img<<endl;
			
		}
};





int main(){
	Complex cx1, cx2, cx3;
	
	cout<<"**COMPLEX NO 1**"<<endl;
	cx1.set(2.5, 4.5);
	cx1.disp();
	cout<<endl<<"**COMPLEX NO 2**"<<endl;
	cx2.set(3.4, 6.5);
	cx2.disp();
	
	cx3 = cx2.sum(cx1);
	cout<<endl<<"**COMPLEX NO 3**"<<endl;
	cx3.disp();
	
	return 0;
	
}






































































/*
class Rectangle{
	private:
		// these cant be accessed outside the class
		float length, width, primtr, ara;
		
	public:
		// to set length
		void setlength(float l){
			length = l;
		}
		// to set width
		void setwidth(float w){
			width = w;
		}
		// to calculate perimeter
		float perimeter(){
			float p;
			p = 2*(length+width);
			return p;
		}
		// to calculate area
		float area(){
			float a;
			a = length*width;
			return a;
		}
		// to display data members
		void show(){
			cout<<"The length is : "<<length<<endl<<"The width is : "<<width<<endl;			
		}
		// to compare
		int sameArea(Rectangle r){
			float area1 = length * width;
			float area2 = r.length * r.width;
			if (area1 == area2){
				return 1;
			}
			else{
				return 0;
			}
		}
				
};

int main(){
	// objects
	Rectangle r1, r2;
	// calling this function
	int sameArea(int r);
	
	r1.setlength(5);
	r1.setwidth(2.5);
	cout<<"*Rectangle 1*"<<endl;
	r1.show();
	cout<<"Perimeter of Rectangle is : "<<r1.perimeter()<<endl;
	cout<<"Area of Rectangle is : "<<r1.area()<<endl;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	r2.setlength(5);
	r2.setwidth(18.9);
	cout<<"*Rectangle 2*"<<endl;
	r2.show();
	cout<<"Perimeter of Rectangle is : "<<r2.perimeter()<<endl;
	cout<<"Area of Rectangle is : "<<r2.area()<<endl;
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(r1.sameArea(r2) == false){
		cout<<"They have different areas "<<endl;
		r1.setlength(5);
		r1.setwidth(2.5);
		cout<<"*Rectangle 1*"<<endl;
		r1.show();
		cout<<"Perimeter of Rectangle is : "<<r1.perimeter()<<endl;
		cout<<"Area of Rectangle is : "<<r1.area()<<endl;
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		r2.setlength(15);
		r2.setwidth(6.3);
		cout<<"*Rectangle 2*"<<endl;
		r2.show();
		cout<<"Perimeter of Rectangle is : "<<r2.perimeter()<<endl;
		cout<<"Area of Rectangle is : "<<r2.area()<<endl;
		if(r1.sameArea(r2) == false){
			cout<<"They have different areas "<<endl;
		}
		else{cout<<"Areas match :)";}
	}
	else{
		cout<<"Areas match :)";
	}
	
	return 0;
	
}*/

#include<iostream>
using namespace std;
class A
{
    private:
    int a1, a2;

    protected:
    int pa1, pa2;

    public:
    int b;  

    void ppp(void)
    {
        cout<<"Value of pa1 of class A: "<<pa1<<endl;
        cout<<"Value of pa2 of class A: "<<pa2<<endl;
        //cout<<"Value of b of class A: "<<b<<endl;
    }
}; // end of base class A
//derived class 
class B : public A   //publicly-derived class
{
    public:
    void get(void)
    {
        cout<<"Enter value of pa1: "; cin>>pa1;
        cout<<"Enter value of pa2: "; cin>>pa2;
    }
};  // end of derived class B

int main()
{
    B obj;
    //int a= obj.b=100;
    //cout<<"Value of a is: "<<a<<endl;
    obj.get();
    obj.ppp();
} // end of main() function

/*
class student
{
    private:
    char name[15], address[15];
    int id;
    
    public:
    void input(void)
    {
        cout<<"Enter your name: "; 
        cin>>name;
        cout<<"Enter address:";
        cin>>address;
    }
    void show(void)
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Address is :"<<address<<endl;
    }
}; // end of base class student

//derived class 
class marks : public student
{
    private:
    int s1,s2,s3,s4,total;
    public:
    void inputmarks(void)
    {
        cout<<"Enter marks of sub1: ";cin>>s1;         
        cout<<"Enter marks of sub2: ";cin>>s2;
        cout<<"Enter marks of sub3: ";cin>>s3;
        total= s1+s2+s3;
    }
    
    void show_detail(void);
};  // end of derived class marks

int main()
{
    marks mmm;
    mmm.input();
    mmm.inputmarks();
    mmm.show_detail();
} // end of main() function

void marks :: show_detail()
{
    show();
    cout<<"Marks of 1st subject: "<<s1<<endl;
    cout<<"Marks of 2nd subject: "<<s2<<endl;
    cout<<"Marks of 3rd subject: "<<s3<<endl;
    cout<<"Total Marks         : "<<total<<endl;

}*/

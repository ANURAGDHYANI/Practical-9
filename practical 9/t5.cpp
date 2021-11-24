#include<iostream>
using namespace std; 

struct student         
{ 
    string sname;      
    char sec;          
    int rn;
}s1;

class College
{
    string cname;   
    public:
    College(string s) 
    {  
        cname=s;        
    }
    void print(struct student s)
    {
        cout<<"Details of student"<<endl;
        cout<<"Name : "<<s.sname<<endl;
        cout<<"Roll no.: "<<s.rn<<endl;
        cout<<"Section: "<<s.sec<<endl;
        cout<<"College: "<<cname<<endl;
    }
};

int main()
{
    s1.sname="Bony";
    s1.sec='C';
    s1.rn=1;
    College c1("GEHU");
    c1.print(s1);
}

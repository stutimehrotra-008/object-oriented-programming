#include<iostream>
#include<string>
using namespace std;
class Student{//student is a new data type
    public:
    string name;
    int rno;
    float gpa;
    //we can add arrays in this as well
    //this is declaration
};
int main()
{Student s1;
s1.name="stuti mehrotra";
//s1.rno=38;
s1.gpa=8.2;
cout<<"enter roll no."<<endl;
cin>>s1.rno;
Student s2;
s2.name="fiza khan";
s2.rno=15;
s2.gpa=9.0;
//this is initialization
cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
return 0;
}
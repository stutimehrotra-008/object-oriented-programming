#include<iostream>
#include<string>
using namespace std;
class car
{public:
string name;
int price;
int seats;};
void print(car c)
{cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;}

int main()
{car c1;
    c1.name ="honda civic";
c1.price=1000000;
c1.seats=4;
car c2;
c2.name="maruti swift";
c2.price=700000;
c2.seats=5;
car c3;
c3.name="ford";
c3.price=2000000;
c3.seats=6;
print(c1);
print(c2);
print(c3);
return 0;}
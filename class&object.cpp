
#include<iostream>
using namespace std;
class fan{
public:
string color;
double price;
string type;
void on(){
cout<< " Fan is ON ";
}void off(){
cout<< " Fan is OFF ";
}void regulate(){
cout<< " Control Speed ";
}void addDetail(){
cout<<"Enter Fan Detail";
cin>>color>>type>>price;
}void showDetail(){
cout<<"Fan color"<<color<<endl;
cout<<"Fan type"<<type<<endl;
cout<<"Fan price"<<price<<endl;
}
};
int main() 
{
fan f;
f.addDetail();
f.showDetail();
f.on();
f.off();
f.regulate();
return 0;
}

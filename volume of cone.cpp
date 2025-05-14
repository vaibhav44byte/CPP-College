#include<iostream>
using namespace std;
// volume of cone 
int main()
{
    float radi,height;
    cout<<"Enter your radius =";
    cin>>radi;
    cout<<"Enter your height =";
    cin>>height;
    float vol=0.33*radi*radi*height*3.14;
    cout<<vol<<"cm³";
    return 0;
}
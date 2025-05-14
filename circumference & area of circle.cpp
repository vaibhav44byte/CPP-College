#include<iostream>
using namespace std;
// circumference and area of circle
int main()
{
    float r;
    cout<<"Enter your radius =";
    cin>>r;
    float c=2*3.14*r;
    float a=3.14*r*r;
    cout<<"circumference of circle =";
    cout<<c<<"cm";
    cout<<"Area of circle =";
    cout<<a<<"cm²";
    return 0;
}
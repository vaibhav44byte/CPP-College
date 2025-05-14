#include<iostream>
using namespace std;
class Sam
{ public:
Sam()
{
cout<<"one object created"<<endl;
}
~Sam(){
cout<<"one object deleted"<<endl;
}
};
int main()
{ 
Sam a;
Sam b;
{
Sam c;
}
Sam d;
{
Sam e,f;
}
Sam g;
return 0;
}
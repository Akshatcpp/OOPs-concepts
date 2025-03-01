#include<iostream>
using namespace std;
class senior
{ 
    public:
    void show()
    {
        cout<<"non parameterized"<<endl;
    }
};

class junior{
    public:
   void display(int a,int b)
    {
        cout<<"parameterised" <<endl;
        cout<<a+b;
    }
};
class jaggu{
    public:
   void di  (int a,int b)
    {
        cout<<"parameterised" <<endl;
        cout<<a+b;
    }
};
int main(){

    senior obj1,obj2;
    obj1.show();
    
    junior val1;
    val1.display(1,3);
    return 0;
}
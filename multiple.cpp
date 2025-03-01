#include<iostream>
using namespace std;
class xyz
{
public:
int x = 10;
int y = 20;
int z;
void show(){
  z= x*y;
}
};
class one
{
    public:
    void done(){
        cout<< endl;
       cout<<"second class called" <<endl;
    }
};
class two : public one ,public xyz
{
    public:
    void done2(){
        cout<< endl;
        cout<<z <<"third";
        cout<< "third class called";
    }
};
int main()
{
    two obj;
    one obj1;
    obj1.done;
    obj.show();
    obj.done2();
    return 0;
}

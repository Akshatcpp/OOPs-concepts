#include<iostream>
using namespace std;
class xyz
{
    public:
    int x = 10;
    int y = 20;
};
class one :public xyz
{
    public:
    int z=15;
    int a=16;
};
class two: public one
{
    public:
void show(){
    cout<< x <<endl << y <<endl <<z  <<endl <<a;
}
};
int main()
{
    two obj;
    obj.show();
    return 0;
}
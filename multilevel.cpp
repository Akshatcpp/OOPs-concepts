#include<iostream>
using namespace std;
class xyz
{
    public:
    int x =10;
    int z=16;
    
};
class two : public xyz
{
public:
int c =10;
int d =17;

} ;
class three : public two
{
    public:
    void view()
    {

    
    cout<< c << d << x << z;
    }

};

int main()
{
    
    three obj;
    obj.view();
 
    return 0;

}
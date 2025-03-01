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

};
class three : public xyz
{
    public:
    int f=100;

};
class four : public two
{
  public:
  void c()
  int a=15;

};
class five : public two
{

public :
void d()
int b=20
};

class six : public three
{
    public:
    void b()
    int e=78;
};
class seven : public two
{
    public:
    void a()
    cout<<x  <<endl <<z;

};

int main()
{
    
    four obj;
    obj.c();
    five obj1;
    obj1.d();
    six obj2;
    obj2.b();
    seven obj3;
    obj3.a();

 
    return 0;

}
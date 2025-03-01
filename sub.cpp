#include<iostream>
using namespace std;
class xyz
{
    public:
  int a;
  int b;
    int add(){
        
        return a-b;
    }
};
int main ()
{
    xyz obj;
    int sub;
   sub= obj.add();
    cin>>obj.a >>obj.b;
    cout<< sub;
    return 0;
}
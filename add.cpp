#include<iostream>
using namespace std;
class xyz
{
    public:
    int a,b;
  
    int add(){
        
        return a+b;
    }
};
int main ()
{
    xyz obj;
    int add;
   add= obj.add();
    cin>>obj.a >>obj.b;
    cout<< add;
    add= obj.add();
    cout<< add;
    return 0;
}
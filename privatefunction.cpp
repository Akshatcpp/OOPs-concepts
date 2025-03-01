#include<iostream>
using namespace std;
class xyz
{
    private:
    int a,b;
    void display()
    {
       cout<<"display method called";
        cout<<a+b;
    }
   public:
  void show(int t1,int t2)
  {
    a = t1;
    b = t2;
    display();
   
   }
  
};
int main()
{
   int a,b;
    xyz obj,obj1;
//   cin>> obj.a >>obj.b;
    obj.show(2,3);
 
    return 0;
}
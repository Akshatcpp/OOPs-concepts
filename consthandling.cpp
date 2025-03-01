#include<iostream>
using namespace std;
class xyz
{
    public:
   
    xyz(int a,int b )
    {
        cout<<"first constructor called" <<endl;
        cout<< a+b <<endl;
    }

};
class two : public xyz
{
public:
two (int c, int a ,int b):xyz(a,b)
{
    cout<<"second constructor"<<endl;
    cout<< a+b+c <<endl;
}


};
class three :public two 
{ 
   
public:
  three(int p,int q,int r ): two(p,q,r)
  {
    cout<<"all set";
  }
};


int main()
{
   three obj(10,11,12);
    return 0;

}
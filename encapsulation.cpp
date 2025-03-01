#include<iostream>
using namespace std;
class xyz
{
    public:
    int x =10;
    int z=16;
    xyz()
    {
        cout<<"first constructor called" <<endl;
    }

};
class two : private xyz
{
public:
int c =10;
int d =17;
int gig =x+z;
two (){
    cout<<"second constructor"<<endl;
}


};
class three :public two 
{
    public:
    void show()
    { 
      
        cout<< gig + c+d;
    }


};


int main()
{
    
  
   
    three obj;
      obj.show();
    return 0;

}
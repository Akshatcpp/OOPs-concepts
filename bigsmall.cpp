#include<iostream>
using namespace std;
class xyz
{  
    private:
    int a,b;
    void display()
    {
        if(a>b){
            cout<< a <<" is bigger";
        }
        else 
        {
            cout<< b <<" is bigger";
        }
    }
    
    public:
    int t1,t2;
    void show(){
        a = t1;
        b = t2;
        
        display();
    }

};
int main(){

     xyz obj;
    //  int x,y;
    cout<<"enter value of x and y";
   cin>>obj.t1 >>obj.t2;
    obj.show();
    return 0;
}
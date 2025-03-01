#include<iostream>
using namespace std;
class senior
{public:
    void add(int a,int b){
        cout<<"parameterised"<< endl;
        cout<< a+b<<endl;
    }
    void sub(int a,int b){
        cout <<"substract ";
        cout<<endl;
        cout<<a-b<<endl;
    }
};
class junior
{public:
    void mul(int a, int b){
        cout<< "multiplication "<<endl;
        cout<< a*b<<endl;
    }
    void div(int a,int b){
        cout<<"division "<<endl;
        cout<<a/b<<endl;
    }
};
int main()
{

 senior obj,obj1;


junior val,val1;


int x,y;
cout<<"enter value of x=";

cin>>x ;
cout<<"enter value of y";
cin>>y;

obj1.add(x,y);
val.mul(x,y);
val.div(x,y);
obj.sub(x,y);
return 0;
}
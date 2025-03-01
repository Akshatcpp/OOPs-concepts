#include<iostream>
using namespace std;
class xyz
{
   public:
   
    void show(int a, int b)
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
     void display(int m,int n){
        int i;
        for(i=m;i<=n;i++){
            
            if(i%2==0){
                cout<<i  << "=even" << endl;
            }
            else{
                cout<< i <<"=odd" <<endl;
            }
         
        }
    }
   public:
   
   void count(int n){

        int i;
        cout<<"reverse counting"<<endl;
        for(i=n;i>=0;i--){
            cout<< i << endl;
        }

    }
    public:
    void reverse(int n){
        int i;
         cout<< "counting"<<endl;
        for(i=0;i<=n;i++){
           
            cout<< i <<endl;
        }
    }
    public:
    void table(int m){
        int i;
        cout<<"table of given no."<<endl;
        for(i=1;i<=10;i++){
            cout<< i*m <<endl;
        }

    }
    public:
    void check(int num){
        int i;
        int count;
        for(i=2;i<=num;i++){
                if (num % i == 0){
                    count++;
                }
        }
                if (count ==1){
                    cout<< num << "= prime";
                }
                else {
                    cout<< num <<"=is not prime";
                }
        }

    public:
    void year(int m){
       if(m%4 == 0){
        cout<<"the year is leap";
       }
        else {
            cout<<"the year is not a leap year";
        }
       }
        
    };

int main(){

    xyz obj;

int ch;
cout<<"press 1 for small big"<<endl <<"press 2 for checking even or odd"<<endl <<"press 3 for reverse counting "<<endl;
cout<<"press 4 for forward counting" <<endl <<"press 5 for printing table of any no." <<endl << "press 6 for checking no is prime or not "<<endl;
cout<<"press 7 for checking year is leap or not"<<endl;
cin>>ch;
switch (ch)
{
case 1:
int p,q;
cout<< "enter value of p and q numbers"<<endl;
cin>> p >>q;
cout<<"small big"<<endl;
obj.show(p,q);
    break;

case 2:
int x,y;
cin>>x >>y;
cout<<endl;
cout<<"even or odd"<<endl;
obj.display(x,y);
    break;

case 3:
int o;
cout<<"enter value of x till you want your reverse counting "<<endl;
cin>>o;
cout<< endl;
cout<<"counting "<<endl;
obj.count(o);
break;

case 4:
int z;
cout<<"enter value of no. till you want your counting"<<endl;
cin>>z;
cout<<endl;
cout<<"reverse"<<endl;
obj.reverse(z);
break;

case 5:
int j;
cout<< "enter the no. to print table"<<endl;
cin>>j;
obj.table(j);
break;
case 6:
int l;
cout<< "enter the no. for checking prime or not prime"<<endl;
cin>>l;
obj.check(l);
break;
case 7:
int h;
cout<<"enter value of year you want to check"<<endl;
cin>>h;
obj.year(h);
break;
};
}


// ***********VVIP PRIME NOT PRIME PROGRAM***********
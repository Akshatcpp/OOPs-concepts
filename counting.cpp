#include<iostream>
using namespace std;

class xyz
{
    public:
    void display(int n){
        int i;
        cout<<"reverse counting"<<endl;
        for(i=n;i>=0;i--){
            cout<< i << endl;
        }

    }
    void show(int n){
        int i;
         cout<< "counting"<<endl;
        for(i=0;i<=n;i++){
           
            cout<< i <<endl;
        }
    }
    
};
int main(){
    xyz obj;
    int x;
    cout<< "enter the value of x"<<endl;
    cin>>x;
    obj.display(x);
   int y;
   cout<<"enter the value of y"<<endl;
   cin>>y;
   obj.show(y);

    return 0;

}
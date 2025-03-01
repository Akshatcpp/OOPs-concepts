#include<iostream>
using namespace std;

class xyz
{
    public:
    void display(int m,int n){
        int i;
        for(i=m;i<=n;i++){
            
            if(i%2==0){
                cout<<i  << "=prime" << endl;
            }
            else{
                cout<< i <<"=not prime" <<endl;
            }
         
        }
    }
};
int main(){
    xyz obj;
    int x,y;
    cout<<"enter value of x and y";
    cin>> x >>y;
    obj.display(x,y);
    return 0;
}
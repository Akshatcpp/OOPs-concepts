#include<iostream>
using namespace std;

class xyz
{
    private:
    int m, n;
    void display(){
        int i;
        for(i=m;i<=n;i++){
            cout<< i << endl;
        }
    }

    public:
    // int t1,t2;
    void show(int t1,int t2){
               
               m = t1;
               n = t2;
         display();
    }
};
int main()
{
    xyz obj;
    int x,y;
    cout<< "enter value of x and y";
    cin>>obj.t1 >>obj.t2;
    obj.show();

    return 0;

}
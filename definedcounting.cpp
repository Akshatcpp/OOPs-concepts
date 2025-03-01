#include<iostream>
using namespace std;

class xyz
{
    public:
    void display(int m,int n){
        int i;
        for(i=m;i<=n;i++){
            cout<< i << endl;
        }
    }
};
class table
{
    public:
    void show(int m){
        int i;
        for (i=0;i<m;i++)
        {
            cout<<"5*" << i <<"=" << 5*i  ;
        }
    }
};
int main()
{
    xyz obj;
    int x,y;
    cout<< "enter value of x and y";
    cin>>x >>y;
    obj.display(x,y);
    table obj1;
    int m;
    cout<< "enter value of m";
    cin>>m;
    obj1.show(m);

    return 0;

}
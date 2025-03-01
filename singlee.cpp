#include<iostream>
using namespace std;
class xyz
{
    public:
    int x =10;
    int z=16;
    void show()
    {
        cout<<x <<endl;
    }

};
class two : public xyz
{
public:
int c =10;
int d =17;
 void don()
 {
    cout<<c <<endl <<d <<endl <<x <<endl <<z;
 }
} ;

int main()
{
    two obj;

    obj.don();
    cout<< "first condtructor";
    obj.show();
 
    return 0;

}
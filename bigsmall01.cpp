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
 
    void show(int t1,int t2){
        a = t1;
        b = t2;
        
        display();
    }

};
int main(){

     xyz obj;
     int x,y;
    cout<<"enter value of x and y";
    cin>> x >> y;
    obj.show();
    return 0;
}
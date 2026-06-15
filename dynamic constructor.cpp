#include<iostream>
using namespace std;
class sample
{
    int*data;
public:
    sample(int value){
    data=new int;
    *data=value;
    cout<<"dynamic constructor:"<<*data<<endl;
    }
    ~sample()
    {
        delete data;
        cout<<"destructor called:"<<endl;
    }
};
int main()
{
    sample obj(42);
    return 0;
}

#include<iostream>
using namespace std;
class test{
int*p;
public:
    test()
    {
        p=new int(100);
    }
    ~test()
    {
        delete p;
        cout<<"memory deallocated";
    }

};
int main()
{
    test obj;
    return 0;
}

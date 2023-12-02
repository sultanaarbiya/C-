#include<iostream>
using namespace std;

class book
{
    private:
             int ar[3];
    public:
            void setdata()
            {
            for(int i=0;i<3;i++)
            {
            cout<<"enter the value of "<<i<<endl;
            cin>>ar[i];
            }
            }
            void getdata()
            {
            for(int i=0;i<3;i++)
            {
            cout<<ar[i]<<" ";
            }
            }
};

int main()
{
book b;
b.setdata();
b.getdata();
return 0;
}

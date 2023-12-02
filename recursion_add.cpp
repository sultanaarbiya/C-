  #include<iostream>
  using namespace std;
  int add(int);
  int main()
  {
     int num,sum;
     cout<<"enter the value of n:";
     cin>>num;
     add(num);
     cout<<"sum="<<sum;
   }

  int add(int n)
    {
       if(n!=0)
           return n+add(n-1);

       else
           return 1;

    }

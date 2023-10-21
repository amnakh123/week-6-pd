#include<iostream>
using namespace std;
void amplify(int num);
main()
{
    int n;
    cout<< "Enter the number to Amplify: ";
    cin>>n;
     amplify(n);
}
void amplify(int num)
{
   int n=1;
    for(int count=1; count<=num; count++)
    {
        n=count;
  if(count%4==0)
    {
        n=count*10;
    }
  cout<<n;
  if(count<num)
  {
    cout<<", ";
  }
    }
   
}
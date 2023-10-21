#include<iostream>
using namespace std;
bool isPrime(int num);
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<isPrime(num);
}
bool isPrime(int num)
{
    if(num <= 1)
    {
        return false;
    }
   for(int n=2; n*n<=num; n++)
   {
    if(num%n==0){
        return false;
    }
    }
    return true;
}
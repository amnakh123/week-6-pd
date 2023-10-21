#include<iostream>
using namespace std;
bool isPrime(int num);
int primorial(int number);
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<< primorial(num);
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
int primorial(int number)
{
    int n=1;
    int primecount=0, product=1;
    while(primecount!=number)
    {
        int check=isPrime(n);
        if(check==1)
        {
            primecount++;
            product=product*n;
            n++;
        }
        else{
            n++;
        }
    }  
        return product;
}
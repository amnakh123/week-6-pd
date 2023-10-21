#include<iostream>
using namespace std;
int triangleDots(int num);
main()
{
    int num;
    cout<< "Enter number of triangle: ";
    cin>>num;
    int result=triangleDots(num);
    cout<<"Dots in the Triangle: "<<result;
}
int triangleDots(int num)
{
    if(num==1)
    {
        return num;
    }
    else{
        int num1=(num*(num+1))/2;
        return num1;
    }
}
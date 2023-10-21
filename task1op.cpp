#include<iostream>
using namespace std;
void printStars(int rowSize);
main()
{
    int radius;
    cout<<"Enter desired number of rows: ";
    cin>>radius;
    printStars(radius);
}
void printStars(int rowSize)
{
    for(int row=1; row<=rowSize; row++)
    {
        for(int col=rowSize; col>=row; col--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
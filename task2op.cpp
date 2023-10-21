#include<iostream>
using namespace std;
void printStarsUpper(int rowSize);
void printStarsLower(int rowSize);
main()
{
    int radius;
    cout<<"Enter desired number of rows: ";
    cin>>radius;
    printStarsUpper(radius);
    printStarsLower(radius);
}
void printStarsUpper(int rowSize)
{
    for(int rows=1; rows<rowSize/2; rows++)
    {
        for(int col=(rowSize/2)-rows; col>1; col--)
        {
            cout<<" ";
        }
        {
            for(int r=1; r<=rows; r++)
            {
                cout<<"*";
            }
        }
        cout<< endl;
    }
}
void printStarsLower(int rowSize)
{
    for(int rows=rowSize/2; rows>=1; rows--)
    {
        for(int col=(rowSize/2)-rows; col>1; col--)
        {
            cout<<" ";
        }
        {
            for(int r=1; r<=rows; r++)
            {
                cout<<"*";
            }
        }
        cout<< endl;
    }
}
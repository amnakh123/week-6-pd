#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    int count, c1;
    cout<< "Enter the count of cargo for transportation: ";
    cin>>count;
      double costPerTon=0.0, tonOfminiBus=0.0, tonOfTrain=0.0, tonOftruck=0.0, totalCost=0.0;
    double totalOfCargo=0.0;
     
    for(int c=1; c<=count; c++)
    {
    cout<< "Enter the tonnage of cargo "<<c<<" : ";
    cin>>c1;
    totalOfCargo=totalOfCargo+c1;
   if(c1<=3)
    {
         
        tonOfminiBus += c1;
        
    }
   else if(c1>3 && c1<=11)
    {
         
         tonOftruck += c1;
    }
    else
    {
         
        tonOfTrain += c1;
    }
    }
    float costminBus=200*tonOfminiBus;
    float costTruck=175*tonOftruck;
    float costTrain=120*tonOfTrain;
    cout<< fixed;
    cout<< setprecision(2);
    double average=(costminBus+costTrain+costTruck)/totalOfCargo;
    double miniBuspercent=(tonOfminiBus/totalOfCargo)*100;
    double truckpercent=(tonOftruck/totalOfCargo)*100;
    double trainpercent=(tonOfTrain/totalOfCargo)*100;

    cout<<average<<endl;
    cout<<miniBuspercent<<"%"<<endl;
    cout<<truckpercent<<"%"<<endl;
    cout<<trainpercent<<"%"<<endl;
}
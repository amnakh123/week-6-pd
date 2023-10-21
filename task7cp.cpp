#include<iostream>
using namespace std;

main()
{
    int n1, n2;
     cout<< "Enter Number of days you visited Hospital: ";
     cin>>n1;
     
    int doc = 7, treatedpatients = 0, untreatedpatients = 0;
    for(int day = 1; day <= n1; day++){
     cout<<"Number of patients who visited hospital on Day "<<day<<" : ";
     cin>>n2;
        if(day % 3 == 0)
        {
            if(untreatedpatients > treatedpatients)
            {
                doc++;
            }
        }
        if(n2 > doc){
            untreatedpatients = untreatedpatients + (n2 - doc);
            treatedpatients = treatedpatients + doc;
        }
        else{
            treatedpatients = treatedpatients + n2;
        }
    }
    cout<<"Treated Patients: "<<treatedpatients<<endl;
    cout<<"Untreated Patients: "<<untreatedpatients<<endl;
}
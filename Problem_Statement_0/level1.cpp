#include<iostream>
using namespace std;

int main()
{
    int no=1,capacity,temp,temp2;
    float avg;
    float sum=0;

cout<<"ENTER PORTS CAPACITY  :";
cin>>capacity;

cout<<"ENTER TOTAL NUMBER OF CONTAINERS  ";
cin>>no;

int weight[no];

for(int i=0;i<no;i++)
{
    cout<<"ENTER WEIGHT OF CONTAINER  "<<i+1<<endl;
    cin>>weight[i];
}
temp=weight[0];
temp2=weight[0];

for(int i=0;i<no;i++)
{
    if(weight[i]>temp)
    {
        temp=weight[i];
    }
    if(weight[i]<temp2)
    {
        temp2=weight[i];
    }
     sum=weight[i]+sum;
}

avg= sum/no;


//final output

cout<<"\nTotal shipment weight: "<<sum;
cout<<"\nAverage container weight: "<<avg;
cout<<"\nHeaviest container: "<<temp;
cout<<"\nLightest container: "<<temp2;

if(sum>=200)
{cout<<"\nClassification: Heavy";}
else{cout<<"\nClassification: Light";}

cout<<"\nPort capacity: "<<capacity;

if(sum<=capacity)
{
    cout<<"\nStatus: Shipment can be unloaded";
}
else
{
    cout<<"\nStatus: Shipment exceeds port capacity";
}
return 0;
}
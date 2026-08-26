#include<iostream>
#include<vector>
using namespace std;

int i,j,neo=0,meh=0,z;
vector<vector<char>> symbol;
vector<vector<int>> grid;



void printgrid(vector<vector<char>>& symbol)
{
for(int a=0;a<i;++a)
{
for(int b=0;b<j;b++)
{
    cout<<symbol[a][b];
}
cout<<"\n";
}
}

void checker()
{
   for(int a=0;a<i;++a)
{
for(int b=0;b<j;b++)
{
    if(a-1<0)
    {
;
    }
    for(int z=-1;z<=1;++z)
    {
    if(symbol[a-1][b+z]=='#')
    {
        neo++;
    }
    else{meh++;}
    if(symbol[a][b+z]=='#' && z!=0)
    {
        neo++;
    }
    else{meh++;}
    if(symbol[a+1][b+z]=='#')
    {
        neo++;
    }
    else{meh++;}
//vector add karna hai
    }
} 
}
}



int main()
{
    

cout<<"ENTER NUMBER OF ROWS :";
cin>>i;
cout<<"\nENTER NUMBER OF COLUMN :";
cin>>j;


cout<<"\n\n\n\nENTER YOUR FORMATION\n";
string s;
    for(int a=1;a<=i;++a)
    {
    cout<<"ENTER FOR THE"<<a<<" ROW\n";
    cin>>s;
    symbol.push_back(vector<char>(s.begin(),s.end()));
    }
//INPUT SAMPYA

cout<<"GEN "<<z<<" FORMATION \n";
printgrid(symbol);

//ACTUAL CODE STARTS 



for(int a=1;a<=i;++a)
{
    for(int b=1;b<=j;++b)
    {
        char cell=symbol[a][b];

        switch (cell)
        {  
        case '.':
        if(neo>=3)
        {
            symbol[a][b]='#';
        }
        case '#':
        if(meh<2 || meh>3)
        {
            symbol[a][b]='.';
        }
        }
    }
}


return 0;
}
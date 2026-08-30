#include<iostream>
#include<vector>
#include<string>
using namespace std;

int i,j,neo=0,meh=0,z,gen,id=0,osc=0,alive=0;
vector<vector<char>> symbol;



//CODE TO PRINT GRID
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


int main()
{
    

cout<<"ENTER NUMBER OF ROWS :";
cin>>i;
cout<<"\nENTER NUMBER OF COLUMN :";
cin>>j;
cout<<"\nENTER NUMBER OF GENERATIONS YOU WANT TO RUN";
cin>>gen;


cout<<"\n\n\n\nENTER YOUR FORMATION\n";
string s;
    for(int a=1;a<=i;++a)
    {
    cout<<"ENTER FOR THE "<<a<<" ROW\n";
    cin>>s;
    symbol.push_back(vector<char>(s.begin(),s.end()));
    }
//INPUT SAMPYA

cout<<"GEN "<<z<<" FORMATION \n";
printgrid(symbol);

vector<vector<vector<char>>> history ;
history.push_back(symbol);

//ACTUAL CODE STARTS 
for(int x=1;x<=gen;++x)
{

vector<vector<char>> grid(i,vector<char>(j));
   for(int a=0;a<i;++a)
{
for(int b=0;b<j;++b)
{


int up_a=a-1;
int down_a=a+1;
    neo=0;
    meh=0;

//JOINING END POINTS
   if(a-1<0)
    {
        up_a=i-1;
    }
     if(a+1==i)
    {
        down_a=0;
    }


  for(int z=-1;z<=1;++z)
{
    int cont_b=b+z;
     if(b+z<0)
    {
        cont_b=j-1;
    }
    else if(b+z==j)
    {
        cont_b=0;
    }

    
  //COUTNTING LIVES
    if(symbol[up_a][cont_b]=='#')
    {
        neo++;
    }
    else{meh++;}
    if(symbol[a][cont_b]=='#' && z!=0)
    {
        neo++;
    }
    else{meh++;}
    if(symbol[down_a][cont_b]=='#')
    {
        neo++;
    }
    else{meh++;}
}

//USING RULES
char cell=symbol[a][b];
 switch (cell)
        {  
        case '.':
        if(neo==3)
        {
            grid[a][b]='#';
        }
        else
        {
            grid[a][b]='.';
        }
        break;
        case '#':
        if(neo<2 || neo>3)
        {
            grid[a][b]='.';
        }
        else
        {
            grid[a][b]='#';
        }
        break;
        }
} 
}
if(grid==symbol)
    {
        id=1;
    }


//REPLACING ORIGNAL VECTOR
 for(int a=0;a<i;++a)
{
for(int b=0;b<j;++b)
{
    
    symbol[a][b]=grid[a][b];
    
}
}
history.push_back(symbol);
cout<<"\n\n"<<x<<" th  GEN";
printgrid(symbol);
}

for(int k=0;k<i;++k)
{
    for(int l=0;l<j;++l)
    {
        if(symbol[k][l]=='#')
        {
            alive++;
        }
    }
}

for(int k=0;k+2<history.size();++k)
{
    if(history[k]==history[k+2] && history[k]!=history[k+1])
    {
        osc=1;
    }
}



if(id==1)
{
    cout<<"THE PATTERN IS STILL LIFE\n";    
}
else if(osc==1)
{
    cout<<"PATTERN IS OSCILLATORY";
}
else if(alive>0)
{
    cout<<"ALIVE";
}
else{cout<<"EXTINCT";}
return 0;
}
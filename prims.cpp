#include<iostream>

using namespace std;
int cost[20][20],N,M,c,i,j;
class prims
{
public:
 

void read();
void display();
void algo();
};


void prims::read()
{
 cout<<"enter the no of vertices"<<endl;
 cin>>N;
 cout<<"enter the no of edges"<<endl;
 cin>>M;
  for( i=1;i<=N;i++)
 {

  for( j=1;j<=M;j++)
 {
   cost[i][j]=9999;
 }
 }

 for(int k=1;k<=M;k++)
  {
   cout<<"enter the node,weight"<<endl;
   cin>>i>>j>>c;
   cost[i][j]=c;
   cost[j][i]=c;
 }
}




void prims::display()
 {
 for(i=1;i<=N;i++)
 {
 for(j=1;j<=N;j++)
 
 cout<<""<<i<<"--"<<j<<"cost"<<cost[i][j]<<"\t";
 cout<<endl;
    
   }
 }


 void prims::algo()
 {
 int count;
 int v=1;
 while(v<=M && count>0)
 { 
 int min cost[1][1];
 for(i=1;i<=N;i++)
 for(j=1;j<M;j++)
 if(min>cost[i][j])
 {
min=cost[i][j];
i=k;
j=l;
T[i][1]=k;
T[i][2]=l;
 }
for(i=1;i<=N;i++)
 {
if(cost[i][k]<cost[i][l])
 n[i]=k;
 else
n[j]=l;


 n[k]=0;
 n[l]=0;
 }
 


 int main()
{ 
prims obj;
obj.read();
 obj.display();
 return(0);
 }

 



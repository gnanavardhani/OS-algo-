#include<iostream>

using namespace std;

int cost[20][20],i,j,n,m,k,c,t[20],a,b,s;
class bellman
 {
 public:
 void read();
 void display();
 void algo();

 };




void bellman::read()
 {
 cout<<"enter the no of edges"<<endl;
 cin>>m;
 cout<<"enter the no of vertices"<<endl;
 cin>>n;
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 cost[i][j]=9999;
 
 for(k=1;k<=m;k++)
 {
 cout<<"enter nodes and weights"<<endl;
 cin>>i>>j>>c;
 cost[i][j]=c;

 }
}

void bellman::display()
 {
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
   {
 cout<<""<<i<<""<<j<<"cost"<<cost[i][j]<<"\t";
   }
cout<<endl;
 }
 

}




 void bellman::algo()
 {
 cout<<"enter the source vertex"<<endl;
 cin>>s;
 t[s]=0;

 for(i=1;i<=n;i++)
  {
 if(i!=s)
   {
  t[i]=9;
  }
 }
for(k=1;k<=n;k++)
 {
for(a=1;a<=n;a++)
for(b=1;b<=n;b++)
 {
 if(t[b]!=9&&t[a]>t[b]+cost[b][a])
  t[a]=t[b]+cost[b][a];
 
 }
}
cout<<"output array is"<<endl;

for(i=1;i<=n;i++)
 {
 cout<<t[i]<<""<<endl;
}
}


int main()
 {
 bellman obj;
 obj.read();
 obj.display();
 obj.algo();

 return(0);
 }
 

#include<iostream>
using namespace std;

int cost[20][20],N,M,c,i,j,k,s,d[20],m[20],w[20],u,p,flag;
 
class dij
 {
 public:
 void read();
 void display();
 void algo();
 void output();
void path(int o);

 };
 

void dij::read()
 {
 cout<<"enter the no of vertices"<<endl;
 cin>>N;
 cout<<"enter the no of edges"<<endl;
 cin>>M;
 for(i=1;i<=N;i++)
 {
 for(j=1;j<=N;j++)
 {
 cost[i][j]=9999;
 }
 }
 for(k=1;k<=M;k++)
 {
 //cout<<"enter the nodes and cost"<<endl;
 cin>>i>>j>>c;
 cost[i][j]=c;

 }
 }

 void dij::display()
 {
 for(i=1;i<=N;i++)
 {
 for(j=1;j<=N;j++)
 cout<<"--"<<i<<"--"<<j<<"cost"<<cost[i][j]<<"\t";
  cout<<endl;
 }
 }


void dij::algo() 
{
 cout<<"enter the source"<<endl;
 cin>>s;
 
 m[s]=1;
 d[s]=0;
  

 for(i=1;i<=N;i++)
 {
   if(m[i]==0)
   d[i]=cost[s][i];
  
 }
 
 
 for(p=1;p<=N-1;p++)
 {
   int f=999;
   for(i=1;i<=N;i++) 
   {
    if(m[i]==0)
    {
     if(d[i]<f)
     {
      f=d[i];
      u=i;
     }
    }
   }   

  m[u]=1;

 for(j=1;j<=N;j++)
 {
   if(m[j]==0)
   {
     if(d[j]>d[u]+cost[u][j])
     {
      d[j]=d[u]+cost[u][j];
      w[j]=u;
     }
   }
  }
 }
}
 
 
void dij::output() 
 {
 cout<<"the distance array is"<<endl; 
  for(i=1;i<=N;i++)
   {
  cout<<d[i]<<""<<"\t";
  }
  cout<<endl;
 cout<<"the PATH array is"<<endl;
  for(j=1;j<=N;j++)
 {
   cout<<"path: ";
   path(j);

   if(flag==1)
    cout<<j<<" ";
 } 
cout<<endl;
 }


void dij::path(int o)
 {
   if(w[o]==0)
     {
        if(w[o]!=999)
          {
            cout<<s<<" ";
            flag=1;
            return;
          }

        else
          {
            cout<<"no path"<<endl;
            flag=0;
            return;
          }
     }    
 
  path(w[o]);
  cout<<w[o]<<endl;
     
 }

int main()
 {
 dij obj;
 obj.read();
 obj.display();
 obj.algo();
 obj.output();

 return(0);
 }


#include<iostream>
#include<cstdio>
#define asize 100
using namespace std;

 struct node
 {
 struct node *lcptr;
 struct node *rcptr;
 int freq;
 char c;
 };
class heap
{
public:
struct node A[100];
 int hsize;
 heap();
void insertheap(struct node &T);
void displayheap();
struct node *delmin();
char C[10];
}H;

heap::heap()
{
int i;
 for(i=0;i<100;i++)
  A[i].lcptr=A[i].rcptr=NULL;
}
struct node *hptr;
void swap(struct node &a,struct node &b);
void tree();
struct node *tree_insert(struct node *tp1,struct node *tp2);
 void tree_inorder(struct node *ptr);
  void getcode(int B[],char letter,struct node *Ptr,int val);





int main()
{
  int B[20],N,f,i;
   H.hsize=0;
 char C[50],l;
 struct node *temp=new struct node;
cout<<"enter the no of letters "<<endl;
cin>>N;
 for(i=0;i<N;i++)
{
  cout<<"enter the frequeny and character"<<endl;
  cin>>temp->freq;
  cin>>temp->c;
 H.insertheap(*temp);
 }
 H.displayheap();
 tree();
cout<<"inorder"<<endl;
 tree_inorder(hptr);
 cout<<endl;

 cout<<"enter the string to find hoffman code"<<endl;
 cin>>C;
 for(int i=0;C[i]!='\0';i++)
 getcode(B,C[i],hptr,0);


return(0);
}







void heap::insertheap(struct node &T)
  {
 hsize++;
 A[hsize]=T;
 int i=hsize;
 while(i>1&&A[i].freq<A[i/2].freq) 
 {
 swap(A[i],A[i/2]);
  i=i/2;
 }
 }

void heap::displayheap()
 {
 cout<<"the heap is"<<endl;
 struct node *temp; 
heap H1=H;
for(int i=1;i<=H1.hsize;)
temp=H1.delmin();
 
 }

 struct node *heap::delmin()
{ 
 struct node *TEMP=new struct node;
  TEMP->lcptr=A[1].lcptr;
  TEMP->rcptr=A[1].rcptr;
  TEMP->c=A[1].c;
  TEMP->freq=A[1].freq;
  A[1]=A[hsize];
   hsize--;
 cout<<"this element got deleted"<<TEMP->freq<<""<<TEMP->c<<endl<<""<<endl; 
  int i=1,minl;
while(2*i<=hsize)
 {
 if((2*i+1)>hsize)
 minl=2*i;
 else
 {
if(A[2*i].freq<A[2*i+1].freq)
 minl=2*i;
 else
 minl=2*i+1;
 }
if(A[minl].freq<A[i].freq)
 {
 swap(A[i],A[minl]);
 i=minl;
 }
else
break;
 } 
return TEMP;
 }
 void swap(struct node &a,struct node &b)
 {
 struct node temp=a;
 a=b;
b=temp;
}

void tree()
 {
 struct node *tp1,*tp2;
 while(H.hsize>1)
 {
 tp1=H.delmin();
 tp2=H.delmin();
 struct node *TEMP=tree_insert(tp1,tp2);
H.insertheap(*TEMP);
 cout<<endl;
 }
 hptr=H.delmin(); 
}




struct node *tree_insert(struct node *tp1,struct node *tp2)
{
 struct node *thptr=new struct node;
 thptr->lcptr=tp1;
 thptr->rcptr=tp2;
 thptr->freq=tp1->freq+tp2->freq;
 thptr->c='.';

 return(thptr);
 }


void tree_inorder(struct node *ptr)
 {
 if(ptr!=NULL)
 {
 tree_inorder(ptr->lcptr);
 cout<<"freq:"<<ptr->freq<<"char:"<<ptr->c<<endl;
 tree_inorder(ptr->rcptr);
 }
}

void getcode(int B[],char letter,struct node *ptr,int val)
{
  
  if(ptr->lcptr!=NULL)
 {
 B[val]=0;
getcode(B,letter,ptr->lcptr,val+1);
 }
if(ptr->rcptr!=NULL)
 {
 B[val]=1;
 getcode(B,letter,ptr->rcptr,val+1);
 }

  if(ptr->lcptr==NULL&&ptr->rcptr==NULL)
 {
 if(ptr->c==letter)
 {
 cout<<"code for "<<letter<<"is;"<<endl;
 for(int i=0;i<val;i++)
 cout<<B[i];
 cout<<endl;
 }
}
}
































 

#include<bits/stdc++.h>
using namespace std;
#define mxx 100009 
int data[mxx],l[mxx],r[mxx];
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n;i++)scanf("%d",&data[i]);
   l[1]=1;
   r[n]=n;
   for(int i=2;i<=n;i++)
     l[i]=data[i]<=data[i-1]?l[i-1]:i;// \v
   for(int i=n-1;i>0;i--)
     r[i]=data[i]<=data[i+1]?r[i+1]:i;// /^
   while(m--)
   {
       int le,re;
       cin>>le>>re;
       cout<<(r[le]>=l[re]?"Yes":"No")<<endl;
   }

} 
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{long long int a[108][108]={0};

		long long int n,m,i,k,l,j,x,s,ma=-2*10000000000099;
		scanf("%lld %lld",&n,&m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)scanf("%lld",&a[i][j]);
        
        for(i=0;i<n;i++)
			for(j=0;j<m;j++){
				x=min(min(i,j),min(n-1-i,m-j-1));
				s=a[i][j];
				long long int s2;
				for(k=1;k<=x;k++){
					s+=a[i+k][j+k]+a[i-k][j+k]+a[i-k][j-k]+a[i+k][j-k];
					if(k==1)s2=s;
					else s2=max(s2,s);
				}
				if(x>=1){
					ma=max(ma,s2);	
				}
				x=min(min(i,j),min(n-i-2,m-j-2));
				if(x>=0){
				s=a[i][j]+a[i+1][j]+a[i+1][j+1]+a[i][j+1]; 
				s2=s;
				for(k=1;k<=x;k++){
					s+=a[i-k][j-k]+a[i+1+k][j-k]+a[i+1+k][j+1+k]+a[i-k][j+1+k];
					s2=max(s2,s);
				}
				//printf("%lld s:%lld %lld %lld %lld x:%lld\n",s2,a[i][j],a[i+1][j],a[i+1][j+1],a[i][j+1],x);
				ma=max(ma,s2);

			}
			}
			printf("%lld\n",ma);
	}
}
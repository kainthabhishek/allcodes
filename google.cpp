//alpha coder
//ths problem consumed alot of tym ! but it was simple and a intresting one ! due to one silly mistake at line 26 ! i got many wa !


#include<stdio.h>
#include<algorithm>
#include<math.h>
long long int max(long long int a,long long int b){
    return (a>b)?a:b;
}
int main(){
    long long int t,i,j,k,c,n,ans,p,loop,loop2,z,x,y,w,q,cpy;
    scanf("%lld",&t);
    while(t){c=1;i=9;w=0;q=1;loop=1;
            scanf("%lld %lld",&n,&k);
            while(k>=w){
                w+=c*i;if(w>k){w=w-c*i;break;}
                c++;
                i=i*10;
                q*=10;loop=0;
            }if(loop)q=0;
            else q--;
            k=k-w;
            q=q+k/c;
            k=k%c;
           ans=q%10;
            if(k!=0)q++;

            while(c-k>=0&&k){
                ans=q%10;
                q=q/10;
                k++;
            }
            printf("%lld\n",ans);

    t--;}
}

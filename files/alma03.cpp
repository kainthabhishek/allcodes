//author : alpha coder
//happy coding :)
#include<stdio.h>
#include<algorithm>
int gcd(int a, int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
void makeit(int divi[205],int grp,int n,int make){
    for(int i=0;i<n;i++){
        if(divi[i]==grp)divi[i]=make;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t){int n,input[205]={0},ma[205]={0},divi[205]={0},grp=1,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&input[i]);
    }
    for(i=0;i<n;i++){
            if(divi[i]==0){divi[i]=grp;grp++;}
        for(j=i+1;j<n;j++){
            if(gcd(input[i],input[j])>1){

                     if(divi[j]>0){
                            makeit(divi,divi[i],n,std::min(divi[j],divi[i]));
                            makeit(divi,divi[j],n,std::min(divi[j],divi[i]));
                    }
                    else if(divi[j]==0){
                        divi[j]=divi[i];
                    }
            }
        }

    }long long int ans=1;
    for(i=0;i<grp;i++){int g=0,ma=1;
        for(j=0;j<n;j++){
            if(divi[j]==i){
                ma=std::max(input[j],ma);
            }
        }
        ans=(ans*ma)%1000000007;
    }
printf("%lld\n",ans);

    t--;}
}

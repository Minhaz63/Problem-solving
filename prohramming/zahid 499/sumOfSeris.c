#include<stdio.h>
void summetion(int n){
    int i,sum1=3,sum2=0,ans=0,count=3;
    for(i=1;i<=n;i++){
        if(i==1){
            sum1=sum1;
            sum2=sum1;
            sum2=sum2*sum2;
            ans=ans+sum2;
            printf("%d^2+",sum1);

            }
        else{
            sum1=sum1*count;
            sum2=sum1;
            sum2=sum2*sum2;
            ans=ans+sum2;
            count++;
            printf("%d^2+",sum1);

        }

    }
printf("= %d",ans);

}
int main(){


int n;
printf("Enter the value of n: ");
scanf("%d",&n);
summetion(n);

}

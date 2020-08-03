#include<bits/stdc++.h>
using namespace std;

int summation(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++)
 sum=sum+arr[i];

 return sum;

}








int main(){

int n,j;
cin>>n;
int flag=0;
int index=0;

int arr[n];
int mini=0;

for(int i=0;i<n;i++)
    cin>>arr[i];

int sum=0;

for(int i=0;n>0;i++){

    mini=arr[0];

    sum=summation(arr,n);
    //cout<<sum<<endl;
    if(sum%2==1){
        cout<<"NO"<<endl;
        flag=1;
        break;
        }
     else
     {
       for(j=0;i<n;j++){
            if(mini<arr[j]){
              mini=arr[j];
                index=j;
              }
       if(index!=0){
            arr[index-1]=arr[index-1]-mini;
            arr[index]=arr[n];
            n=n-1;

       }
       else{
         arr[index+1]=arr[index+1]-mini;
        arr[index]=arr[n];
        n=n-1;
       }
    }



     }

}
if(flag==0)
    cout<<"YES"<<endl;

return 0;
}

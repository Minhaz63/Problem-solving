#include<bits/stdc++.h>

using namespace std;
int main(){

char str[1000];

while(cin>>str){
        if(str[0]=='0')
        break;
int num[100];
for(int i=0;i<strlen(str);i++){
    num[i]=str[i]- '0';
   // cout<<num[i]<<endl;

}

int sum1=0,sum2=0,sum=0;
for(int i=0;i<strlen(str);i++ ){
    if(i%2==0)
        sum1=sum1+num[i];
    else
        sum2=sum2+num[i];
// cin>>str;
}

//cout<<sum1<<" "<<sum2<<endl;
sum=sum1-sum2;
sum=abs(sum);
if(sum%11==0)
    cout<<str<<" is a multiple of 11."<<endl;
else
    cout<<str<<" is not a multiple of 11."<<endl
    ;}
return 0;
}

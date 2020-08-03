#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
while(t--){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int maxi=-1;
    if(a>maxi)
        maxi=a;
    if(b>maxi)
        maxi=b;
    if(c>maxi)
        maxi=c;
    int sum=(maxi-a)+(maxi-b)+(maxi-c);
    if(n>=sum){
        n=n-sum;
        if(n%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

return 0;
}

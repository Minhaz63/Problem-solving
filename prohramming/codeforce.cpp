#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){

    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<0<<endl;
    else if(a<b){
        int dif=b-a;
        if(dif%2==0){
            cout<<2<<endl;
        }
        else
            cout<<1<<endl;
    }
    else{

        int diff=a-b;
        if(diff%2==0){
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
}

}

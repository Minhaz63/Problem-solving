#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){


int n;
cin>>n;
string str;
cin>>str;
int counter1=0,counter2=0;

if(str.length()%2!=0){
    cout<<1<<endl<<str<<endl;
}
else{
        for(int i=0;i<n;i++){
            if(str[i]=='1')
                counter1++;
            else
                counter2++;
        }
        if(counter1!=counter2){

            cout<<1<<endl<<str<<endl;
        }
        else{
            char str2[n-1];
            for(int j=0;j<n-1;j++){
                str2[j]=str[j];
                //cout<<str2[j]<<endl;
            }
            //cout<<str2<<endl;
            cout<<2<<endl;
            //puts(str2);
            cout<<str2<<" "<<str[n-1]<<endl;
        }

}
}

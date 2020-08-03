#include<bits/stdc++.h>
using namespace std;
int main(){


int t,i=1;
cin>>t;
while(t--){

    int r1,c1;
    int counter=0;
    int val=0;
    cin>>r1>>c1;
    for(int row=1;row<=8;row++){

        for(int col=1;col<=8;col++){
               val=(r1-row)*(r1-row)+(c1-col)*(c1-col);
            if(val==5)
                counter++;
        }
    }

    cout<<"Case "<<i<<": "<<counter<<endl;
    i++;
}

return 0;
}

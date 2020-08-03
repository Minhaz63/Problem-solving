#include<iostream>
using namespace std;
int main(){

string s;
cin>>s;

int n=s.size();

string s2="minhaz";
s2=s2+s;
if(s.compare(s2)==0){
    cout<<"same"<<endl;
}
else
    cout<<"not same"<<endl;
cout<<s2<<endl;
return 0;


}

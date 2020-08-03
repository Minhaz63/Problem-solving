#include <iostream>
#include <fstream>

using namespace std;

int main(){

  ifstream ip("data.csv");

  if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

  string a;
  string b;
 string c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
  //double s;

int counter=0;

  while(ip.good()){

   getline(ip,a,',');
   getline(ip,b,',');
   getline(ip,c,',');
   getline(ip,d,',');
   getline(ip,e,',');
   getline(ip,f,',');
   getline(ip,g,',');
   getline(ip,h,',');
   getline(ip,i,',');
   getline(ip,j,',');
   getline(ip,k,',');
   getline(ip,l,',');
    getline(ip,m,',');
    getline(ip,n,',');
    getline(ip,o,',');
   getline(ip,p,',');
    getline(ip,q,',');
    getline(ip,r,',');
    getline(ip,s,'\n');
    counter++;

    std::cout <<a<<" "<<b <<" "<< c<< " "<< d<<" "<< e<<" "<< f<<" "<< g<<" "<< h<<" "<< i<<" "<< j<<" "<<k <<" "<< l<<" "<< m<<" "<<n <<" "<< o<<" "<<p <<" "<< q<<" "<< r<<" "<<s <<endl;
   //std::cout << "-------------------" << '\n';

   //cout<<s<<endl;
  }

  ip.close();
}

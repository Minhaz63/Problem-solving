#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream inFile("data.csv");
    ofstream outFile("data.txt");
    string line = "";
    while (getline(inFile, line))
    {
        outFile<<line<<endl;
    }
    inFile.close();
    outFile.close();
}
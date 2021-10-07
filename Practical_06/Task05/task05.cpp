#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    string s2;
    cout<<"Enter S1 string\n";
    getline(cin,s1);
    cout<<"Enter S2 string\n";
    getline(cin,s2);

    int x=s1.compare(s2);
    if(x==0)
    {
          cout<<" s1 And s2 are equal\n";
    }
    else if(x>0)
    {
          cout<<"s1 is greater than s2\n";
    }
    else
    {
          cout<<"s2 is greater than s1\n";
    }
    return 0;
}

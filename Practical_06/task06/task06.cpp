#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Hello";
    cout<<&s<<endl;
    s[0]='j';
    cout<<&s<<endl;
    cout<<s<<endl;
    return 0;
}

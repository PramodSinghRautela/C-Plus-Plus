#include<iostream>
using namespace std;
void fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of number "<<n<<" is: ";
        cout<<fact<<endl;
}
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	fact(n);
	return 0;

}

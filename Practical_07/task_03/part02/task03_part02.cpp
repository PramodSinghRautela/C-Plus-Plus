#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"\nEnter the elements in array:"<<endl;
    for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	cin>>arr[i][j];
        }   
    }
    cout<<"Matrix before reversing"<<endl;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          cout<<arr[i][j]<<" ";
       }
      cout<<endl;
    }   
    
    cout<<"Reversed Matrix:"<<endl;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          cout<<10-arr[i][j]<<" ";
       }
      cout<<endl;
    } 
}

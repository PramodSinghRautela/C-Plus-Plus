#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],c;
    cout<<"\nEnter the elements in array:"<<endl;
    for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	cin>>arr[i][j];
        }   
    }
    cout<<"Matrix before :"<<endl;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          cout<<arr[i][j]<<" ";
       }
      cout<<endl;
    }   
    for(int i=0;i<3;i++){
       
       for(int j=0;j<3;j++)
       {
            arr[i][j]=arr[i][j]-(2*i+j);
       }
    }
    cout<<"Matrix After:"<<endl;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          cout<<arr[i][j]<<" ";
       }
      cout<<endl;
    } 
    
    
}

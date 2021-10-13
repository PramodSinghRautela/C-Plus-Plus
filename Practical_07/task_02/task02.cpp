#include<iostream>
#include<time.h>
using namespace std;
int main()
{
     int n;
     string str;
     time_t curtime; 
     time(&curtime);
     str=ctime(&curtime);
     
 
     do{
           cout<<"\nEnter your choice:\n";
           cout<<"\n  1.DAY\n  2.MONTH\n  3.DATE\n  4.TIME\n  5.YEAR\n  0.EXIT\n";
           cin>>n;
           switch(n){
                 
                 case 1:
                     
                     for(int i=0;i<3;i++)
                     {
                        cout<<str.at(i);
                     }
                     break;
                 case 2:
                     for(int i=4;i<7;i++)
                     {
                        cout<<str.at(i);
                     }
                     break;
                 case 3:
                     for(int i=8;i<10;i++)
                     {
                       cout<<str.at(i);
                     }
                     break;
                 case 4:
                     for(int i=11;i<19;i++)
                     {
                       cout<<str.at(i);
                     }
                     break;
                 case 5:
                     for(int i=20;i<=23;i++)
                     {
                       cout<<str.at(i);
                     }
                     break;
                 case 0:
                     return 0;
                     break;
                 default:
                     cout<<"INVALID CHOICE!!"<<endl;
                     break;                  
                    
           }
       }while(n);
       return 0;
}

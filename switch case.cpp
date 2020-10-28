#include<iostream>
using namespace std;
int main()
{
 char ch ;
 cout<<"enter the char"<<endl;
 cin>>ch;
 switch(ch)
 {
  case'e':
     cout<<"excellent";
           break;
  case'v':
      cout<<"very good";
           break;
  case'g':
      cout<<"good";
           break;
  case'a':
      cout<<"avg";
           break;
  case'f':
      cout<<"fail";
           break;
 default:
       cout<<"not valid";
        return 0;
       }
       
 }



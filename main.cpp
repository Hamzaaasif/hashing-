#include<iostream>
using namespace std;
#include"hash.h"
int main()
{
  int size=10,i,value;
  int arr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
  linear a;
  cout<<"Linear hash function !!"<<endl;
  for(i=0;i<10;i++)
  {
    cout<<"Enter Value : ";
    cin>>value;
    arr[a.linearhashfunction(value,size,arr)]=value;
  }
  cout<<endl<<"Array : ";
  for(i=0;i<10;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<"Enter value for search :";
  cin>>value;
  int temp = a.linearsearch(value,size,arr);
  if(temp==-1)
  {
    cout<<"Not found"<<endl;
  }
  else
  {
    
    cout<<"Value : "<<arr[temp]<<endl;
  }

  cout<<"Quadratic hash function !!"<<endl;
  int array[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
  for(i=0;i<10;i++)
  {
    cout<<"Enter Value : ";
    cin>>value;
    array[a.quadratichashfunction(value,size,array)]=value;
  }
  cout<<endl<<"Array : ";
  for(i=0;i<10;i++)
  {
    cout<<array[i]<<" ";
  }
  system("pause");
}
#include<iostream>
using namespace std;
#include <cmath>
class linear 
{
  public:
  int linearhashfunction(int val,int size,int *arr)
  {
    int index=val % size;
    if(arr[index]==-1)
    {
    }
    else
    {
      while(arr[index]!=-1)
      {
        index++;
        if(index==size)
        {
          index=0;
        }
      }
    }
    return index;
  }
  int linearsearch(int val,int size,int *arr)
  {
    int index = val % size;
    int count=0;
    if(arr[index]==-1)
    {
      return -1;
    }
    else
    {
      while(arr[index]!=val)
      {
        index++;
        if(index==size)
        {
          index=0;
        }
        if(index == val % size)
        {
          count++;
          break;
        }
      }
      if(count > 0)
      {
        return -1;
      }
      else
      {
        return index;
      }
    }
  }

int quadratichashfunction(int val,int size,int *arr)
  {
    int index=val % size;
    if(arr[index]==-1)
    {
    }
    else
    {
      int count=1;
      while(arr[index]!=-1)
      {
        index=val%size + pow(count,2);
        count++;
        index = index % size;
      }
    }
    return index;
  }

  
};
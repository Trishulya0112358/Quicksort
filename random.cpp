#include<iostream>
#include<cstdlib>
#include<ctime>
#include<chrono>
#include<math.h>
using namespace std;

int random_bit()
    {
        int a=rand()%2;

        return a;
    }

int random_pivot(int n)
    {
        int s=(log10(n)/log10(2))+1,a;
        int bit=0;
        for(int b=0;b<s;b++)
        {
            a=random_bit();
            bit+=a*pow(2,b);
        }
        return bit;
    }

void sort_about_pivot(int *A,int i,int j,int pos)
    {
        int iter;
        int index=i;

        int temp=A[pos];
        A[pos]=A[j-1]

        for(iter=i;iter<j;iter++)
        {
            if(A[iter]<A[pos]){continue;}
            else{}
        }
    }


void Quicksort(int *A,int i,int j,int n)
    {
        if(i<j)
        {
        int pos=random_pivot(j-i+1);
        while(pos>j-i-1)
        {
            pos=random_pivot(j-i+1);
        }
        pos=pos+i;
        sort_about_pivot(A,i,j,pos);

        }


        int pos=random_pivot(j-i+1);
        cout<<pos<<" ";
        while(pos>j-i-1)
        {
            pos=random_pivot(j-i+1);
            cout<<pos<<" ";
        }

//        int pivot=A[pos];
//        cout<<endl<<"pivot="<<pivot<<" "<<endl;
        
    }


int main()
    {
        srand(time(0));
        
        int test,i=0,j=10,n=10;
        int A[10]={1,2,3,4,5,6,7,8,9,10};
//        for(test=0;test<20;test++)
  //      {
  //          cout<<"Testcase:"<<test<<endl;
            Quicksort(A,i,j,n);
  //          cout<<endl<<endl;
  //      }
        
        
        return 0;

    }
    
    
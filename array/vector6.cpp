#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int array[]={1,2,1,2,1,2};
    int sum;
    int evensum=0;
    int oddsum=0;
     for(int i=0;i<6;i++)
     {
        if(i%2==0)
        {
           evensum+=array[i];
           evensum++;  

        }
        else
        {
            oddsum+=array[i];
            oddsum++;  
        }
      
        
     }
        cout<<evensum<<endl;
        cout<<oddsum<<endl;
        sum=evensum-oddsum;
        cout<<sum<<endl;
}
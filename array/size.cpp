#include <iostream>
using namespace std;
int main()
{
    
    int array[]={1,2,3,4};

    cout<<sizeof(array)<<endl;//to find  size of array

    cout<<sizeof(array)/sizeof(array[0])<<endl;//to find length of array

    int size = sizeof(array)/sizeof(array[0]);
    //for loop
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }


    //for each loop
    for(int ele:array)//for traversing through all the element of array
    {
        cout<<ele<<endl;
    }

    //while loop
    int i=0;
    while(i<size)//for traversing through all the element of array
    {
        cout<<array[i]<<endl;
        i++;
    }

    char vowels[5];

    


    

     
}
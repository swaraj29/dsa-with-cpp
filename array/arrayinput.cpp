#include <iostream>
using namespace std;
int main()
{
    char vowels[5];
    for(int i=0;i<5;i++)
    {
        cin>>vowels[i];
    }
        for(int i=0;i<5;i++)
    {
        cout<<vowels[i]<<" ";
    }


//for taking input through for each loop

for(char &element:vowels)
{
    cin>>element;
}

}   
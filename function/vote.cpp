#include <iostream>
using namespace std;

bool checkeligible(int age, int limit)
{
    if(age >= limit)
    {
        //the person is eligible
        return true;
    }
    else{
        //person is not eligible
        return false;
    }
}
int main()
{
    int voting_limit=18;
    int is_eligible_for_voting = checkeligible(15,18);
    
    if(is_eligible_for_voting)
    {
        cout<<"yes the current person is eligible to vote";
    }
    else
    {
        cout<<"No,the current person is not eligible to vote";
    }
    return 0;
}
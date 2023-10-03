#include <iostream>
using namespace std;
void fun(string);
int addition(int,int);

int main()
{
    fun("swaraj");
   int response= addition(9,8);
   cout<<response;

    return 0;

}

void fun(string name)
{
    cout<<"are you having fun ?"<<name<<" ?"<<"\n";
}
int addition(int x, int y)
{
    //processing
    int result=x+y;
    return result;
}
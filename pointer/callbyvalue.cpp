#include <iostream>
using namespace std;
void swap(int x,int y)
{
    //try to swap x and y

    int temp=x;
    x=y;
    y=temp;

}
int main()
{
    int x=10;
    int y=20;

    swap(x,y);
    cout<<x<<endl<<y<<endl;
}

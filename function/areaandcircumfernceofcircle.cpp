

#include <iostream>
#include <math.h>
using namespace std;


float area(int r)
{
    return 3.14*r*r;
}
float perimeter(int r)
{
    return 2*3.14*r;
}

int main()
{
    cout<<area(3)<<"\n";
    cout<<perimeter(3)<<"\n";

}
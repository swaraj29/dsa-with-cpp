#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int getMin(int num[], int size) {
  int min = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (num[i] < min) {
      min = num[i];
    }
  }
  return min;
}
int main(){
    int num[] = {4,5,3,1,8};
    cout<<getMin(num,5);
}

// in this we find pivot element with the help of linear search

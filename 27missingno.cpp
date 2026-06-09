#include <iostream>
using namespace std;

int main() {
    

    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int n = 8;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < 7; i++) {
        actualSum += arr[i];
    }
    cout << expectedSum - actualSum;
    return 0;
    
 
}
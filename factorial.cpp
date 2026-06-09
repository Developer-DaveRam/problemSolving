
#include <iostream>
using namespace std;

int main() {

    cout<<"Enter number"<<endl;
    int number;
    cin >> number;
   

    long long factorial = 1;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;    

}





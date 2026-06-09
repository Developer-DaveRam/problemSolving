#include <iostream>
using namespace std;

// Function to find GCD
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;

}

// Function to find LCM
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;  // safer to avoid overflow
}

int main(){


    int a,b;
    cout << "Enter two numbers: ";
    cin >>a>>b;

    cout << "LCM is" << lcm(a, b) << endl;

    return 0;


}
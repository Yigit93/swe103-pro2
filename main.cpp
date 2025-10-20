#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    cout << "****Comparison Program****" << endl;
    cout << "Enter first integer: " << endl;
    cin >> number1;
    cout << "Enter second integer: " << endl;
    cin >> number2;

    if (number1>number2){

        cout << "Number 1 is bigger than number 2. " << endl;
    }
    else if (number1<number2){
        cout << "Number 1 is smaller than number 2. " << endl;
    }
    else {
        cout << "Number 1 is equals to number 2. " << endl;
    }
    return 0;

}
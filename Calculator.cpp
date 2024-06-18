// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int firstNum;
    int secNum;
    int sum;
    
    int thirdNum;
    int fourthNum;
    int diff; 
    
    int fifthNum;
    int sixthNum;
    double prod;
    
    int seventhNum;
    int eighthNum;
    float quot;
    

    cout << "Welcome to C++ calculator" << endl;
    
    cout << "Enter a first number to add" << endl;
    cin >> firstNum;
    
    cout << "Enter a second number to add" << endl;
    cin >> secNum;
    
    sum = firstNum + secNum;
    
    cout << "SUM = " << sum << endl;
    
    cout << "Enter third number to subtract" << endl;
    cin >> thirdNum;
    
    cout << "Enter fourth number to subtract" << endl;
    cin >> fourthNum;
    
    diff = thirdNum - fourthNum;
    
    cout << "Difference = " << diff << endl;
    
    cout << "Enter fifth number to multiply" << endl;
    cin >> fifthNum;
    
    cout << "Enter sixth number to multiply" << endl;
    cin >> sixthNum;
    
    prod = fifthNum * sixthNum;
    
    cout << "Product = " << prod << endl;
    
    
    cout << "Enter seventh number to divide" << endl;
    cin >> seventhNum;
    
    cout << "Enter eighth number to divide" << endl;
    cin >> eighthNum;
    
    if (eighthNum != 0){
        quot = (seventhNum / eighthNum);
    
        cout << "Quotient = " << quot << endl;
    }else{
        cout << "You are hurting the program when you divide by 0" << endl;
    }
    return 0;
}
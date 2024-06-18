#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0))); // seed for random number generation
    int secretNumber = rand() % 100 + 1;       // random number between 1 and 100
    int guess = 0;
    int attempt = 5;
    
    while (guess != secretNumber){
        cout << "Guess a number between (1 - 100)" << endl;
        cin >> guess;
        attempt --;
        
        if (attempt != 0){
            if (guess == secretNumber){
                cout << "You got it in " << attempt << " attempt(s) " << endl;
            }else if(guess > secretNumber){
                cout << "Guess a lesser number, " << attempt << " attempt(s) " <<  "remaining" << endl;
            }else if(guess < secretNumber){
                cout << "Guess a higher number, " << attempt << " attempt(s) " << "remaining" << endl;
            }else{
                cout << "Out of bound!" << endl;
            }
            
        }else {
            cout << "Game over! The correct number was " << secretNumber << "." << endl;
            break;
        }
    }
 
 return 0;   
}  
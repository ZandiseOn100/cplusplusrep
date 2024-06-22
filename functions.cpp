#include <iostream>
using namespace std;

void askUserName(string&);

int askUserScore();
void print (string, int);


int main() {
    // Write C++ code here
    string name;
    askUserName(name);
    print(name, askUserScore());
    
    return 0;
}
void askUserName(string& newName){
    cout << "Enter your name " << endl;
    cin >> newName;
}
int askUserScore(){
    int score;
    cout << "Enter credit score" << endl;
    cin >> score;
    return score;
}
void print (string newName, int newScore){
    if (newScore >= 750){
        cout << newName << " is killing it!" << endl;
    }else if (newScore >= 500){
        cout << newName << " needs to pull harder in in this yoke called life!" << endl;
    }else{
        cout << newName << " Needs to get multiple jobs and spend less" << endl;
    }
}
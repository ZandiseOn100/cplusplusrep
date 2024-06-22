// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

// Headwer file (Class) 
#ifndef BMI_H
#define BMI_H
// funtion declerations go here
class BMI{
    // Member variables
    public: 
    // Default constructor sets values to null
    BMI();
    // Overload constructor
    BMI(string, int, double);
    // destructor
    ~BMI();
    
    // Accessor functions
    string getName() const; // const shows/ means that its not going to be modfying the member variables
    int getHeight() const;
    double getWeight() const;
    
    // mutator functions (for modifying)
    void setName(string);
        // sets the name
    void setHeight(int);
    void setWeight(double); 
    
    double calculateBMI();
    
    private:
    // Member variables
    string newName;
    int newHeight;
    double newWeight;
};

#endif
// implementation file
BMI::BMI(){
   
    newHeight = 0;
    newWeight = 0.0;
}
BMI::BMI(string name, int height, double weight){
    newName = name;
    newHeight = height;
    newWeight = weight;
}
BMI::~BMI(){
    
}
string BMI::getName() const{
    return newName;
}
int BMI::getHeight() const{
    return newHeight;
}
double BMI::getWeight() const {
    return newWeight;
}
void BMI::setName(string name){
    newName = name;
}
void BMI::setHeight(int height){
    newHeight = height;
}
void BMI::setWeight(double weight){
    newWeight = weight;
}
double BMI::calculateBMI(){
    
    return((newWeight * 703) / (newWeight * newWeight));
}

int main() {
    string name;
    double weight;
    int height;
    
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your weight "<< endl;
    cin >> weight;
    cout << "Enter height(cetimeters)"<< endl;
    cin >> height;
    
    // object (this uses the accessor functions)
    BMI myBmi_1(name, height, weight);
    
    cout << "Name: " << myBmi_1.getName() << endl;
    cout << "Weight: " << myBmi_1.getWeight() << endl;
    cout << "Height: " << myBmi_1.getHeight() << endl;
    cout << "BMI: " << myBmi_1.calculateBMI() << endl;

    cout << "This is for a second person" << endl;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your weight "<< endl;
    cin >> weight;
    cout << "Enter height(cetimeters)"<< endl;
    cin >> height;
    
    // object (this uses the mutator functions)
    BMI myBmi_2;
    
    myBmi_2.setName(name);
    myBmi_2.setWeight(weight);
    myBmi_2.setHeight(height);
    cout << "Name 2: " << myBmi_2.getName() << endl;
    cout << "Weight 2: " << myBmi_2.getWeight() << endl;
    cout << "Height 2: " << myBmi_2.getHeight() << endl;
    cout << "BMI: " << myBmi_2.calculateBMI() << endl;

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

// Headwer file (Class) 
#ifndef BMI_H
#define BMI_H
// funtion declerations go here
class BMI{
    // Member variables
    public: 
    // Default constructor sets values to null
    BMI();
    // Overload constructor
    BMI(string, int, double);
    // destructor
    ~BMI();
    
    // Accessor functions
    string getName() const; // const shows/ means that its not going to be modfying the member variables
    int getHeight() const;
    double getWeight() const;
    
    // mutator functions (for modifying)
    void setName(string);
        // sets the name
    void setHeight(int);
    void setWeight(double); 
    
    double calculateBMI();
    
    private:
    // Member variables
    string newName;
    int newHeight;
    double newWeight;
};

#endif
// implementation file
BMI::BMI(){
   
    newHeight = 0;
    newWeight = 0.0;
}
BMI::BMI(string name, int height, double weight){
    newName = name;
    newHeight = height;
    newWeight = weight;
}
BMI::~BMI(){
    
}
string BMI::getName() const{
    return newName;
}
int BMI::getHeight() const{
    return newHeight;
}
double BMI::getWeight() const {
    return newWeight;
}
void BMI::setName(string name){
    newName = name;
}
void BMI::setHeight(int height){
    newHeight = height;
}
void BMI::setWeight(double weight){
    newWeight = weight;
}
double BMI::calculateBMI(){
    
    return((newWeight * 703) / (newWeight * newWeight));
}

int main() {
    string name;
    double weight;
    int height;
    
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your weight "<< endl;
    cin >> weight;
    cout << "Enter height(cetimeters)"<< endl;
    cin >> height;
    
    // object (this uses the accessor functions)
    BMI myBmi_1(name, height, weight);
    
    cout << "Name: " << myBmi_1.getName() << endl;
    cout << "Weight: " << myBmi_1.getWeight() << endl;
    cout << "Height: " << myBmi_1.getHeight() << endl;
    cout << "BMI: " << myBmi_1.calculateBMI() << endl;

    cout << "This is for a second person" << endl;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your weight "<< endl;
    cin >> weight;
    cout << "Enter height(cetimeters)"<< endl;
    cin >> height;
    
    // object (this uses the mutator functions)
    BMI myBmi_2;
    
    myBmi_2.setName(name);
    myBmi_2.setWeight(weight);
    myBmi_2.setHeight(height);
    cout << "Name 2: " << myBmi_2.getName() << endl;
    cout << "Weight 2: " << myBmi_2.getWeight() << endl;
    cout << "Height 2: " << myBmi_2.getHeight() << endl;
    cout << "BMI: " << myBmi_2.calculateBMI() << endl;

    return 0;
}

#include <iostream> // This is the header file library
#include <string> //This is the header file for the string library
#include <cmath> //this is the header file for the math library

using namespace std;

int main(){
	int current, voltage, resistance, power;// Declaring all the variables that are integers
	string name; //Declaring the string variable
	cout<< "Please input your name: " ;
	cin >> name;//  cin for collecting inputs
	cout<< "Please input the Voltage: ";
	cin >> voltage;
	cout<< "Please input the Resistance: ";
	cin >> resistance; 
	current = voltage/resistance;
	power= voltage*current;
	cout << "Name: "<< name << "\n" << "Current: "<< current << "A\n" << "Power: " << power << "W\n";
}

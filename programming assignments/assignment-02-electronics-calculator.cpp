#include <iostream> //Used for input and output stream
#include <string> //Library used for handling string 
#include <cmath> //library used for mat operations

using namespace std;

int main(){
	double current, voltage, resistance, power;// Declaring all the variables that are integers
	string name; //Declaring the string variable
	
	cout<< "Please input your name: " ;
	cin >> name;
	cout<< "Please input the Voltage: ";
	cin >> voltage;
	cout<< "Please input the Resistance: ";
	cin >> resistance; 

	if (resistance==0){
		cout<< "Resistance cannot be zero. \n";//To prevent division by zero
		return 1;
	} 
	current = voltage/resistance; // calculating current using ohm's law
	power= voltage*current;
	cout << "Name: "<< name << "\n" << "Current: "<< current << "A\n" << "Power: " << power << "W\n";
}

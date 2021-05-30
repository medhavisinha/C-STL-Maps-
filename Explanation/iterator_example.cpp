#include <iostream>
#include <string>

//Include the map header file into our code to use its functions
#include <map> 

using namespace std; //To use its classes without calling it
int main() {

//Create a map namely 'Students' here, where the keys will be integers, and the values will be strings.
map<int, string> Students;

//Inserting values into the map of 'Students'. A key of 200 and a value of Alice has been inserted into the map. Same has been followed for the other two.
Students.insert(std::pair<int, string>(200, "Alice"));

Students.insert(std::pair<int, string>(201, "John"));
    
Students.insert(std::pair<int, string>(202, "Marcus"));

//We will use the size() function to get the size of the map of 'Students'. In our case, it will return a size of 3.
cout << "Map size is: " << Students.size() << endl;

//Declare a line 
cout << endl << "Default Map Order is: " << endl;

//Use a for loop to create an iterator named it to iterate over the elements of the map named Students.
for (map<int, string>::iterator it = Students.begin(); it != Students.end(); ++it) {

//Print the values of the map Students on the compiler/editor.
cout << (*it).first << ": " << (*it).second << endl;
	}
}

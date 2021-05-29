#include <iostream>
#include <string>
#include <map> 

using namespace std;
int main() {

	map<int, string> Students;

	Students.insert(std::pair<int, string>(200, "Alice"));

	Students.insert(std::pair<int, string>(201, "John"));
    
    Students.insert(std::pair<int, string>(202, "Marcus"));

	cout << "Map size is: " << Students.size() << endl;

	cout << endl << "Default map Order is: " << endl;

	for (map<int, string>::iterator it = Students.begin(); it != Students.end(); ++it) {

		cout << (*it).first << ": " << (*it).second << endl;
	}
}
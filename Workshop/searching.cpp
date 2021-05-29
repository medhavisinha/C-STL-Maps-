#include <iostream>
#include <string>
#include <map> 

using namespace std;

int main() {
	
	map<int, string> Students;
	
	Students.insert(std::pair<int, string>(190789, "Akash"));
	Students.insert(std::pair<int, string>(190790, "Manas"));
	
	std::map<int, string>::iterator it = Students.find(190790);
	
	if (it != Students.end()) {
		std::cout << endl << "Key 190790 has the value: => "<< Students.find(190790)->second << '\n';
	}
}

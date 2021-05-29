#include <iostream>
#include <string>
#include <map> 

using namespace std;

int main() {

	////Create a map named 'Students' where the keys will be integers and values wil be strings.
    map<int, string> Students;
    
    ////Insert values into the map 'Students'. A key of 190789 and a value of Alice has ben inserted into the map. The same gets followed for the next entry.
	Students.insert(std::pair<int, string>(190789, "Akash"));
	Students.insert(std::pair<int, string>(190790, "Manas"));
    
	//Using the find() function for the value associated with a key (of 190790).
    std::map<int, string>::iterator it = Students.find(190790);
    
    ////Use an 'if' statement to check whether the value for the key is found.
	if (it != Students.end()) {
    
		////Print the value of the key alongside with a text on the compiler/editor.
        std::cout << endl << "Key 190790 has the value: => "<< Students.find(190790)->second << '\n';
	}
}
#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {

	//Create a map named 'my_map' whose keys will be strings and values integers.
    map<std::string, int> my_map;

	//Insert values into the map of 'my_map'. A key of Akash that has a value of '190789' has been inserted into the map. The same is followed for all the enteries.
    my_map.insert(std::make_pair("Akash", 190789));

	my_map.insert(std::make_pair("Manas", 190790));

	//Add a value of '190791' into the map of 'my_map' with a key of 'Tanveer'.
    my_map["Tanveer"] = 190791;

	//Create an iterator to iterate over the map of 'my_map' looking for the key 'Manas'.
    map<std::string, int>::iterator it = my_map.find("Manas");

	//Delete the element pointed to by the iterator.
    my_map.erase(it);

	//Use an iterator to iterate over the elements of the map of 'my_map' from the start to the end using begin() and end().
    for (map<string, int>::iterator it = my_map.begin(); it != my_map.end(); ++it)

		//Print out the contents of the map my_map on the compilar/editor.
        cout << (*it).first << ": " << (*it).second << endl;

  return 0; //The program must return output upon successful completion.
	
}

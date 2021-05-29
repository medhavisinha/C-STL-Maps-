#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {

	map<std::string, int> my_map;

	my_map.insert(std::make_pair("Akash", 190789));

	my_map.insert(std::make_pair("Manas", 190790));

	my_map["Tanveer"] = 190791;

	map<std::string, int>::iterator it = my_map.find("Manas");

	my_map.erase(it);

	for (map<string, int>::iterator it = my_map.begin(); it != my_map.end(); ++it)

		cout << (*it).first << ": " << (*it).second << endl;

  return 0;
}
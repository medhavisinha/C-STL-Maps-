#include<iostream>
#include<map>
#include<iterator>
using namespace std;
 
int main(){
//Create a map named m1 where the keys will be integers, and the values will be integers.
map<int, int> m1;

//Insert a new entry into the map m1. A key of 1 and a value of 5 will be inserted into the map. We will follow the same steps for all the enteries.
m1.insert(pair<int, int>(1, 5));
m1.insert(pair<int, int>(2, 10));
m1.insert(pair<int, int>(3, 15));
m1.insert(pair<int, int>(4, 20));
m1.insert(pair<int, int>(5, 25));

//m1.clear();
  
map<int, int>::iterator itr;
  
//Use a for loop to create an iterator named itr to iterate over the elements of the map named m1.
for (itr = m1.begin(); itr != m1.end(); ++itr) {

//Print the values of the map m1 on the console. The "\t" character creates a horizontal space between each key and its corresponding value. In contrast, the "\n" character moves the mouse cursor to the next line after every iteration.
cout << '\t' << itr->first
<< '\t' << itr->second << '\n';
}  
cout<<"\n";

return 0; //The program must return value upon successful completion.
  
}
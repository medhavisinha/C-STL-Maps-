#include<iostream>
#include<map>
#include<iterator>

using namespace std;
 
int main(){
 
  map<int, int> m1;
  
  m1.insert(pair<int, int>(1, 5));
  m1.insert(pair<int, int>(2, 10));
  m1.insert(pair<int, int>(3, 15));
  m1.insert(pair<int, int>(4, 20));
  m1.insert(pair<int, int>(5, 25));
  //m1.clear();
  
  map<int, int>::iterator itr;
  for (itr = m1.begin(); itr != m1.end(); ++itr) {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }  
    cout<<"\n";
  
}

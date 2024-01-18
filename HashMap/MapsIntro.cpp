#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

  // creation
  unordered_map<string,int>m;

  // insertion

  // method 1
  pair<string,int> p = make_pair("babbar",3);
  m.insert(p);

  // method 2
  pair<string,int> pair2("love", 2);
  m.insert(pair2);

  // method 3
  m["mera"] = 1;

  // What will happen
  m["mera"] = 2; // it update the value of mera of 1 to 2 not duplicate the value


  // search
  cout << m["mera"] << endl;
  cout << m.at("babbar") << endl;

  cout << m["unknownKey"] << endl;
  cout << m.at("unknownKey") << endl;

  // size
  cout << m.size() << endl;

  // to check presence 
  cout << m.count("love") << endl;

  // erase
  m.erase("love");
  cout << m.size() << endl;

  // iterator
  unordered_map<string , int> :: iterator it = m.begin();

  while(it != m.end()){
    cout << it->first << " " << it->second << endl;
    it++;
  }

}
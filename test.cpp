#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    map<int, string> myMap;
    myMap[10] = "cherry";
    myMap[5] = "Apple";
    myMap[20] = "Banana";

    for(auto &p: myMap){
        cout << p.first << " -> " << p.second << endl;
    }

    unordered_map<int, string> myUnorderedMap;
    myUnorderedMap[10] = "cherry";
    myUnorderedMap[5] = "Apple";
    myUnorderedMap[20] = "Banana";

    cout << endl <<  "The following is UnorderedMap:" << endl;
    for(auto &p: myUnorderedMap){
        cout << p.first << " -> " << p.second << endl;
    }
}
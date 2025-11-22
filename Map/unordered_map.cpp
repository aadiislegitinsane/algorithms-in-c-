#include <bits/stdc++.h>
using namespace std;

int main(){
    //creation
    //unorderd map -> constant time for insertion,deletion,searching
    //ordered map --> logn time for insertion,deletion,searching
    //unordered map is faster but doesnot store elements in the inserted order
    //ordered map stores elements in sorted order of keys and preserves the order of insertion
    //ordered map is implemented using balanced BST
    //unordered map is implemented using hash tables
    unordered_map<string, int> map;

    //insertion 1 
    pair<string,int> p = make_pair("aaditya", 1);
    map.insert(p);

    pair<string, int> p2("tom",2);
    map.insert(p2);

    //insertion 3 
    map["aaditya"] = 5;
    map["tom"] = 7;


    //search 
    cout << "the key related to aaditya is : " << map["aaditya"] << endl;
    cout << "they key related to tom is : " << map["tom"] << endl;

    //important : 
    //this method if no key is present pushes 0 as deafult in it
    cout << map["unknown"] << endl;

    //this method does not insert any key if not present
    cout << map.at("unknown") << endl;

    // note that if you put map.at function above it will return an error or unessecary garabage.
    //putting map["unknown"] above will insert the key with 0 value taking account of no error.
    

    //size 
    cout << "size of map is : " << map.size() << endl;
    

    // to check presence of key 
    cout << "finding aaditya : " << map.count("aaditya") << endl;
    cout << "accessing something that is not present : " << map.count("notpresent") << endl;

    //deletion in map
    map.erase("unknown");
    cout << "size after erasing unknown : " << map.size() << endl;

    cout << "finding unknown : " << map.count("unknown") << endl;

    //accesing the map
    for(auto i:map){
        cout << i.first << " --> " << i.second << endl;
    }

    // iterators in map
    unordered_map<string,int> :: iterator it = map.begin();
    while(it != map.end()){
        cout << it->first << " --> " << it->second << endl;
        it++;
    }

    return 0;
}
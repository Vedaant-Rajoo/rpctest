//
// Created by Vedaant Rajoo on 11/21/22.
//

#include <string>
#include <unordered_map>
using namespace std;
class KVStore {
public:
    unordered_map<string,int>m;
    KVStore() = default;
    int set(const string& Key, int value){
        m[Key] = value;
        return 0;
    }

    int get(const string& key){
        auto it = m.find(key);
        if (it == m.end()) return -1;
        else return it->second;
    }
};
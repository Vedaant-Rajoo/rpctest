//
// Created by Vedaant Rajoo on 11/21/22.
//

#include <iostream>
using namespace std;
#include "rpc/client.h"

int main() {
    rpc::client c("localhost", 8080);

    int n,i;
    cin >> n ;
    for(i=0;i<n;i++) {
        string command;
        cin >> command;
        if (command == "g") {
            string key;
            cin >> key;
            cout << c.call("get", key).as<int>() << endl;
        } else if (command == "s") {
            string key;
            int value;
            cin >> key >> value;
            cout << c.call("set", key, value).as<int>() << endl;
        }
    }

    return 0;
}
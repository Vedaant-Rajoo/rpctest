//
// Created by Vedaant Rajoo on 11/21/22.
//

#include "KVStore.h"
#include "iostream"
int main(){
    KVStore m;

    m.set("Hello",23);
    m.set("Get",199);
    m.set("G",90);

    std::cout<< m.get("G");
    std::cout<<m.get("Ge");
}
//
// Created by Vedaant Rajoo on 11/21/22.
//

#include <iostream>

#include "rpc/client.h"

int main() {
    rpc::client c("localhost", 8080);

    std::cout << "set('k1', 34) = ";
    auto set1 = c.call("set", "k1", 34).as<int>();
    std::cout << set1 << std::endl;

    std::cout << "set('k2', 102) = ";
    auto set2 = c.call("set", "k2", 102).as<int>();
    std::cout << set2 << std::endl;

    std::cout << "set('k3', 134) = ";
    auto set3 = c.call("set", "k3", 134).as<int>();
    std::cout << set3 << std::endl;

    std::cout << "set('k4', 99) = ";
    auto set4 = c.call("set", "k4", 99).as<int>();
    std::cout << set4 << std::endl;

    std::cout << "get('k1') = ";
    auto get1 = c.call("get", "k1").as<int>();
    std::cout << get1 << std::endl;

    std::cout << "set('k7') = ";
    auto get2 = c.call("get", "k7").as<int>();
    std::cout << get2 << std::endl;

    std::cout << "set('k3') = ";
    auto get3 = c.call("get", "k3").as<int>();
    std::cout << get3 << std::endl;

    return 0;
}
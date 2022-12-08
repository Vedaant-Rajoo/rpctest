#include "rpc/server.h"
#include "KVStore.h"

using namespace rpc;

int main(){
    server srv(8080);
    KVStore store;

    srv.bind("set", [&store] (const string& Key, int Value) {
       return store.set(Key,Value);
    });

    srv.bind("get", [&store] (const string& Key) {
        return store.get(Key);
    });

    srv.run();

    return 0;
}
cmake_minimum_required(VERSION 3.16)
project(testrpc)

add_subdirectory(rpclib)
include_directories(rpclib/include)
set(CMAKE_CXX_STANDARD 14)

add_library(testrpc server.cpp client.cpp KVStore.h test.cpp viewServer.cpp)
target_link_libraries(testrpc PRIVATE rpc)

add_executable(server server.cpp)
target_link_libraries(server PRIVATE rpc)
add_executable(client client.cpp)
target_link_libraries(client PRIVATE rpc)
add_executable(test test.cpp)
target_link_libraries(test PRIVATE rpc)
add_executable(viewServer viewServer.cpp)
target_link_libraries(viewServer PRIVATE rpc)

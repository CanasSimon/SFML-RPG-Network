cmake_minimum_required(VERSION 3.15)
project(RPGServer)
project(RPGClient1)
project(RPGClient2)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS system window graphics audio network)

add_executable(RPGServer Server.cpp Player.cpp Player.h TextManager.cpp TextManager.h)
add_executable(RPGClient1 Client.cpp)
add_executable(RPGClient2 Client.cpp)

target_link_libraries(RPGServer ws2_32 sfml-system sfml-network)
target_link_libraries(RPGClient1 ws2_32 sfml-system sfml-network)
target_link_libraries(RPGClient2 ws2_32 sfml-system sfml-network)
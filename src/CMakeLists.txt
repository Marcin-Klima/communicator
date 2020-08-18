add_executable(communicator-client client.cpp Screen.h Screen.cpp)
target_link_libraries(communicator-client LINK_PUBLIC ${Boost_LIBRARIES} pthread)

add_executable(communicator-server server.cpp)
target_link_libraries(communicator-server LINK_PUBLIC ${Boost_LIBRARIES} pthread)
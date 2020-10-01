add_executable(communicator-client)
target_link_libraries(communicator-client LINK_PUBLIC tui)
target_include_directories(communicator-client PRIVATE ${COMMUNICATOR_SRC_DIR}/tui/headers)
target_sources(communicator-client PRIVATE
        CommunicatorClient.cpp
        ../utilities/Talkative.cpp
        client.cpp
        )
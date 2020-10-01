add_executable(communicator-server)
target_link_libraries(communicator-server LINK_PUBLIC tui)
target_sources(communicator-server PRIVATE
        server.cpp
        )
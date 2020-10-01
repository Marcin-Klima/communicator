add_library(tui STATIC)
target_link_libraries(tui LINK_PUBLIC ${Boost_LIBRARIES} cppurses pthread)
target_include_directories(tui PRIVATE headers)
target_sources(tui PRIVATE
        EchoBox.cpp
        CommandBox.cpp
        MainLayout.cpp
        )
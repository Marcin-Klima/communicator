find_package(Boost 1.72.0 REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/builds/debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/builds/release)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    message(STATUS "Compiling using Clang (LLVM) compiler")
    set(CMAKE_CXX_FLAGS "-Wall -std=c++17")
    set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DRELEASE")

    set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -fstandalone-debug -DDEBUG")
endif ()

if (WIN32)
    message(STATUS "Compiling for Windows system.")
    include_directories(${CURSES_INCLUDE_DIR})
elseif (UNIX)
    message(STATUS "Compiling for Unix system.")
endif ()

if (BOOST_FOUND)
    message(STATUS "Boost include directories ${Boost_INCLUDE_DIRS}")
endif ()

set(COMMUNICATOR_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(tui)
add_subdirectory(client)
add_subdirectory(server)
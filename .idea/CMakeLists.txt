cmake_minimum_required(VERSION 4.0)
project(_idea)

set(CMAKE_CXX_STANDARD 26)

# Gemeinsame Quelldateien in Variable speichern
set(COMMON_SOURCES
    ../src/Caesar.cpp
)

# Test-Executable
add_executable(test
    ../test/TextEncryption.cpp
    ${COMMON_SOURCES}
)

# Haupt-Executable
add_executable(main_app
    ../src/main.cpp
    ${COMMON_SOURCES}
)

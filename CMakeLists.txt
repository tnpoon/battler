cmake_minimum_required (VERSION 3.5.1)
project (Battler)

set (CMAKE_C_STANDARD 11)
add_executable (Battler.out main.c functions.c)
include_directories( ${MY_SOURCE_DIR} )
target_link_libraries(Battler.out m)

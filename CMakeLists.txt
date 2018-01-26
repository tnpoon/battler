cmake_minimum_required (VERSION 3.5.1)
project (Battler)

set (CMAKE_C_STANDARD 11)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin) 
add_executable (Battler.out main.c functions.c monsters.c menuitems.c)
include_directories( ${CMAKE_SOURCE_DIR} )
target_link_libraries(Battler.out m)

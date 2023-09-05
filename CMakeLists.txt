cmake_minimum_required(VERSION 3.5)

project(03.game_number)

add_executable(game_number
	main.cpp
        random_value.cpp
        high_scores_reader.cpp
        high_scores_writer.cpp
        random_value.h
        high_scores.h
        
	
)
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(game_number PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(game_number PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()



set_target_properties(game_number PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
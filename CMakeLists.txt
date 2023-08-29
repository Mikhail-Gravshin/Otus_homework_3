cmake_minimum_required(VERSION 3.5)

project(03.game_number)

add_executable(game_number
	game_number.cpp
	
)

set_target_properties(game_number PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
cmake_minimum_required(VERSION 3.25)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp Texture.cpp Texture.h Board.cpp Board.h Game.cpp Game.h Piece.cpp Piece.h)

include_directories(${SFML_INCLUDE_DIRS})
include_directories(usr/local/include)

add_executable(tic_tac_toe ${SOURCE_FILES})
find_package(SFML 2.6 COMPONENTS system window graphics audio network REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(tic_tac_toe sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
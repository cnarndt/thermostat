cmake_minimum_required(VERSION 3.17)
project(thermostat)

set(CMAKE_CXX_STANDARD 14)

add_executable(thermostat agent.cpp agent.h environment.cpp environment.h simulator.cpp simulator.h thermostat.cpp)
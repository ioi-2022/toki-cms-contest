@echo off

set problem=partition
set grader_name=grader

g++ -std=c++17 -o "%problem%" "%grader_name%.cpp" "%problem%.cpp" -O2 -lm -Wall

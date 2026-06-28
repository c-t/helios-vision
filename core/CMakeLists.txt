cmake_minimum_required(VERSION 3.20)

project(helios_core)

add_library(
	helios_core
	src/engine.cpp
)

target_include_directories(
	helios_core
	PUBLIC
	include
)

target_compile_features(
	helios_core
	PUBLIC
	cxx_std_20
)

add_executable(
	helios_demo
	examples/main.cpp
)

target_link_libraries(
	helios_demo
	PRIVATE
	helios_core
)

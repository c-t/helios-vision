add_library(
	helios_core
	src/engine.cpp
)

target_include_directories(
	helios_core
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
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

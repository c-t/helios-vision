add_executable(
	helios_tests
	engine_test.cpp
)

target_link_libraries(
	helios_tests
	PRIVATE
	helios_core
	GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(helios_tests)

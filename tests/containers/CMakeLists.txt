add_executable(test_array_list test_array_list.cpp)

target_link_libraries(test_array_list
    PRIVATE
        eth_dsa
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_array_list)

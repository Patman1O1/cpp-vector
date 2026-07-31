#-----------------------------------------------------------------------------------------------------------------------
# Google Test
#-----------------------------------------------------------------------------------------------------------------------
include(GoogleTest)
enable_testing()

#-----------------------------------------------------------------------------------------------------------------------
# Target: cpp_vector_test
# Alias: collections::cpp_vector_test
# Type: Executable
# Dependencies: GTest::gtest_main, GTest::gmock_main, collections::cpp_vector_headers
#-----------------------------------------------------------------------------------------------------------------------
# Target definition
add_executable(cpp_vector_test)

# Target alias
add_executable(collections::cpp_vector_test ALIAS cpp_vector_test)

# Target sources
target_sources(cpp_vector_test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/cpp_vector_test.cpp
)

# Target dependencies
target_link_libraries(cpp_vector_test
    PRIVATE
        collections::cpp_vector_headers
        GTest::gtest_main
        GTest::gmock_main
)

# Test discovery
gtest_discover_tests(cpp_vector_test)
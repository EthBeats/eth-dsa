cmake_minimum_required(VERSION 3.16)

project(eth_dsa
    VERSION 0.1.0
    DESCRIPTION "Educational Data Structures & Algorithms Library"
    LANGUAGES CXX
)

# ----------------------------------------
# Global Settings
# ----------------------------------------

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable warnings (good SWE practice!)
add_compile_options(-Wall -Wextra -Wpedantic -Werror)

# ----------------------------------------
# Library Target
# ----------------------------------------

add_library(eth_dsa INTERFACE)

target_include_directories(eth_dsa
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_compile_features(eth_dsa INTERFACE cxx_std_20)

# ----------------------------------------
# Options
# ----------------------------------------

option(ETH_DSA_BUILD_TESTS "Build unit tests" ON)
option(ETH_DSA_BUILD_BENCHMARKS "Build benchmarks" OFF)

# ----------------------------------------
# Subdirectories
# ----------------------------------------

if (ETH_DSA_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

if (ETH_DSA_BUILD_BENCHMARKS)
    add_subdirectory(benchmarks)
endif()

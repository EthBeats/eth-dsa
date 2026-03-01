#include <gtest/gtest.h>
#include <eth/dsa/containers/array_list.hpp>

TEST(ArrayList, DefaultConstructible)
{
    eth::dsa::containers::array_list<int> arr;
    EXPECT_EQ(arr.size(), 0);
}
#pragma once

#include <cstddef>

namespace eth::dsa::containers
{

/**
 * @brief A dynamic resizing array (std::vector)
 * 
 * @tparam T Element type
 */
template <typename T>
class array_list
{
public:
    array_list() = default;
    ~array_list() = default;

    void push_back(const T &)
    {
    
    }
    [[nodiscard]] std::size_t size() const noexcept
    {
        return 0;
    }
};

} // namespace eth::dsa::containers

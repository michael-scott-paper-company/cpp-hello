#include <cstdint>
#include <iterator>

int main(int argc, char *argv[]) noexcept
{
    constexpr std::int8_t arraySize = 7;
    std::uint32_t array[arraySize] = {0, 1, 2, 3, 4, 5, 6};
    
    for (std::int8_t idx = 0; idx < arraySize; ++idx) // Compliant
    {
        array[idx] = idx;
    }
    
    for (std::int8_t idx = 0; idx < arraySize / 2; ++idx) // Compliant - for does not loop though all elements
    {}
    
    for (std::uint32_t* iter = std::begin(array); iter != std::end(array); ++iter) // Non-compliant
    {}

    for (std::int8_t idx = 0; idx < arraySize; ++idx) // Non-compliant
    {}
    
    for (std::uint32_t value : array) // Compliant - equivalent to non-compliant loops above
    {}

    for (std::int8_t idx = 0; idx < arraySize; ++idx) // Compliant
    {
        if ((idx % 2) == 0) {}
    }
    
    return 0;
}

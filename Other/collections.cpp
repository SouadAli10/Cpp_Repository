#include <iostream>
#include <vector>

namespace utils
{
void print_vector(std::vector<int> data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << '\t';
    }
}
} // namespace utils

int main()
{
    std::vector<int> data = {1, 2, 3};
    utils::print_vector(data);
}
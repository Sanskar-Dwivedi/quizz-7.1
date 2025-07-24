#include <iostream>

int max(int x, int y)
{
    int max{((x > y) ? x : y)};
    return max;
}

int main()
{

    int big{};
    int small{};
    std::cout << "Enter an integer: ";
    std::cin  >> small;
    std::cout << "Enter a larger integer: ";
    std::cin  >> big;

    {
        if (small == max(big, small))
        {
            const int temp{big};          // the born of temp
            big = small;
            small = temp;
            std::cout<<"Swaping the values\n";
        }                                 // the death of temp
    }
    std::cout << "The smaller value is " << small << "\n";
    std::cout << "The larger value is "  << big   << "\n";

    return 0;
}
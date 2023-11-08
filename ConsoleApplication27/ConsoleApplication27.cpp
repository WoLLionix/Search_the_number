#include <iostream>
#include <vector>

int main()
{
    std::vector<int> A(366);
    srand(time(0));

    int n;
    std::cout << "Enter a number from 1 to 366:\n";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 2;
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;

    int firstI = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == 1)
        {
            firstI = i + 1;
            break;
        }
    }
    if (firstI != -1)
    {
        std::cout << "The position of the first element that equal to 1:\n" << firstI << std::endl;
    }
    else
        std::cout << "An element with value 1 not found\n";
}
#include <iostream>
#include <string>

int main()
{
    int n; std::cin >> n;
    std::cin.get();
    std::string string;
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, string);
        if (string.length() > 10)
            std::cout<<string[0]<<string.length()-2<<string[string.length()-1];
        else std::cout<<string;
        std::cout<<std::endl;
    }

    return 0;
}

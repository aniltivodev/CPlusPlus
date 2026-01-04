#include <string>
#include <iostream>

// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int appleQuantity)
{
    std::string retVal {};
    if (appleQuantity < 0)
    {
        retVal = "negative";
    }
    else if (appleQuantity == 0 )
    {
        retVal = "no";
    }
    else if (appleQuantity == 1 )
    {
        retVal = "a single";
    }
    else if (appleQuantity == 2 )
    {
        retVal = "a couple of";
    }
    else if (appleQuantity == 3 )
    {
        retVal = "a few";
    }
    else if (appleQuantity > 3)
    {
        retVal = "many";
    }

    return retVal;

}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(int appleQuantity)
{
    if (appleQuantity == 1)
        return "apple";
    
    return "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}

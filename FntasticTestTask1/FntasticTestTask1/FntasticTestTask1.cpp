#include <iostream>
#include <string>
#include <unordered_map>


int main(int argc, char* argv[])
{
    std::string input_string;
    std::cin >> input_string;
    std::unordered_map<char, int> symbols_dictionary;

    for (const char string_symbol : input_string)
    {
        char template_symbol = std::tolower(string_symbol);
        std::unordered_map<char, int>::iterator it;
        if ((it = symbols_dictionary.find(template_symbol)) != symbols_dictionary.end())
        {
            ++it->second;
        }
        else
        {
            symbols_dictionary[template_symbol] = 1;
        }
    }

    for (const char string_symbol : input_string)
    {
        symbols_dictionary[std::tolower(string_symbol)] > 1 ? std::cout << ")" : std::cout << "(";
    }

    return 0;
}
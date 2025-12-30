#include "header.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: " << av[0] << " <filename> <term> <replacement>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string term = av[2];
    std::string replacement = av[3];

    if (term.empty())
    {
        std::cerr << "Error: term is empty" << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return 1;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: could not open output file" << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string fileContent = buffer.str();

    size_t startpos = 0;
    size_t foundpos;
    std::string result;

    while ((foundpos = fileContent.find(term,startpos)) != std::string::npos)
    {
        result.append(fileContent, startpos, foundpos - startpos);
        result.append(replacement);
        startpos = foundpos + term.length();
    }

    result.append(fileContent, startpos);

    outputFile << result;

    return 0;
}
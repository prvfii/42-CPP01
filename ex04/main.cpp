#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 (search string) cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Unable to open file: " << filename << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Unable to create file: " << outputFilename << std::endl;
        inputFile.close();
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::string newLine;
        size_t pos = 0;
        size_t prev = 0;

        // Remplacement manuel des occurrences de s1 par s2
        while ((pos = line.find(s1, prev)) != std::string::npos)
        {
            newLine.append(line.substr(prev, pos - prev)); // Ajoute le texte avant s1
            newLine.append(s2);                            // Ajoute s2 à la place de s1
            prev = pos + s1.length();                      // Continue après s1
        }
        newLine.append(line.substr(prev)); // Ajoute la fin de la ligne

        outputFile << newLine << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
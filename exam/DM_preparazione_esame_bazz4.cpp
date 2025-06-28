// Pass a file by command line and count the n° of lines, n° characters, length of shortest and longest line 

#include <iostream>
#include <fstream>
#include <string>
#include <limits>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Error opening the file " << argv[1] << "\n";
        return 1;
    }

    std::string line;
    int linecount = 0;
    int charcount = 0;
    int shortest_line = std::numeric_limits<int>::max();
    int longest_line = 0;

    while (std::getline(file, line)) {
        int current_line = line.length();
        linecount++;
        charcount += current_line;

        if (current_line < shortest_line)
            shortest_line = current_line;

        if (current_line > longest_line)
            longest_line = current_line;
    }

    file.close();

    std::cout << "Lines: " << linecount << "\n";
    std::cout << "Characters: " << charcount << "\n";
    std::cout << "Shortest line length: " << shortest_line << "\n";
    std::cout << "Longest line length: " << longest_line << "\n";

    return 0;
}

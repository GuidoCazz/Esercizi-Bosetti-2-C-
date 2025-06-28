
/* Function that counts the number of NON empty lines in a file (Empty line = Lines that contains nothing except the newline() character) */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int count_lines(ifstream &file) {
    string line;
    int count = 0;

    while (getline(file, line)) {
        // Una riga non vuota è quella che non è solo '\n' (ossia ha contenuto visibile)
        if (line.length() > 1 || (line.length() == 1 && line[0] != '\n')) {
            count++;
        }
    }

    return count;
}

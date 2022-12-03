#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc, char* argv[]){
    int highest_total = 0, current_total = 0;
    string current_num;

    while(getline(cin, current_num)){
        // get first line
        if (cin.eof())
            break;

    /**
     * keep a list of elf items
     * let max = 0;
     * for every line of stdin {
     *   is line == ""? {
     *     compute the sum
     *     empty the list
     * 
     *     is sum > max? then max = sum
     *   }
     *   else add the line to a list of elves
     * }
     * 
     * print(max) --> that's the answer
    */

        // while we have a list of numbers, add 'em up! stop when you hit a whitespace line.
        while(current_num != ""){
            current_total += stoi(current_num);
            getline(cin,current_num);
        }

        if(current_total > highest_total)
            highest_total = current_total;

        current_total = 0;
    }
    cout << highest_total << endl;
}
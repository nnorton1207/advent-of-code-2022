#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc, char* argv[]){
    int list = 0, sum = 0, max = 0;
    string line;
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
    **/

    while(!cin.eof()){
        getline(cin, line);
        if(line == ""){
            sum = list;
            list = 0;
            
            if(sum > max)
                max = sum;
        } else {
            list += stoi(line);
        }
    }
    cout << max << endl;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc, char* argv[]){
    int previous_elf = 0, current_elf = 0;
    string test;

    getline(cin,test);

    while(test != ""){
        current_elf += stoi(test);
        getline(cin,test);
    }

    cout << current_elf << endl;

    // cycle thru input list, compare current elf calorie total with the previous and replace highest calorie count if prev < current until eof

}
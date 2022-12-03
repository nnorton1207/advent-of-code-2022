#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc, char* argv[]){
    ifstream elf_list;
    int previous_elf = 0, current_elf = 0;
    string test;

    elf_list.open("input.txt");
    getline(elf_list,test);

    while(test != ""){
        current_elf += stoi(test);
        getline(elf_list,test);
    }
    
    cout << current_elf << endl;
    elf_list.close();

    // cycle thru input list, compare current elf calorie total with the previous and replace highest calorie count if prev < current until eof

}
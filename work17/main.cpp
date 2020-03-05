#include <iostream>
//#include <fstream>
#include "linked_list.h"
#include "mytask.h"

#define IN_PATH "/home/yaroslav/practical works/basic_prog/FILES/work17_in.txt"
#define OUT_PATH "/home/yaroslav/practical works/basic_prog/FILES/work17_out.txt"

int main()
{
    std::ifstream ist;
    std::ofstream ost;

    ist.open(IN_PATH);
    ost.open(OUT_PATH);

    if (!ist.is_open() || !ost.is_open())
    {
        std::cerr << "Unable to open file/files";
        return 1;
    }

    LIST lst = LIST();

    lst.loadTxt(ist);
    lst.printList(lst.getFirst(), ost);

    return 0;
}

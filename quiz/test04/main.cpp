/*

*/

#include <iostream>
#include <stdlib.h>
#include <map>
using namespace std;

int main()
{
    std::map<char, int, std::greater<char>> mymap;
    mymap['b'] = 1;
    mymap['a'] = 2;
    mymap['c'] = 3;
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
        std::cout << it->second;
    return 0;
}

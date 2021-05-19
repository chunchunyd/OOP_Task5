/*

*/

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main()
{
    string s = "abcdefg";
    cout<<s.substr(0,3)<<endl;
    cout<<s.substr(0,s.length());
    return 0;
}
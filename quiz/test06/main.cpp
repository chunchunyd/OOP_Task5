/*

*/

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;


int main()
{
    vector<int> v = {1,2,3,4,5};
    cout<<v.end()-v.begin()<<endl;              //迭代器可以做减法
    return 0;
}
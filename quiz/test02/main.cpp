/*

*/

#include <iostream>
#include <stdlib.h>
#include <tuple>
using namespace std;


int main()
{
    tuple<int,int,int> t;
    t = {1,2,3};
    cout<<get<0>(t)<<get<1>(t)<<get<2>(t)<<endl;
    return 0;
}
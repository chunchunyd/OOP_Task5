/*

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

namespace A{int i;}
namespace A{int j;}

int main()
{
    using A::j;
    A::i = 1;
    j = 2;
    cout<<A::i<<" "<<j;
    return 0;
}
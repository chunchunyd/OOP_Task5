/*
1.
c++11中按范围遍历
for(auto x:vec){}

2.
std::map<char, int, std::greater<char>> mymap;
    mymap['b'] = 1;
    mymap['a'] = 2;
    mymap['c'] = 3;
begin是c,从前到后用迭代器迭代分别是312


3.bash
mkdir 123 && mkdir 456              创建了123 和 456
mkdir 123 && mkdir 789              创建不了123 因为已经存在，因此不会创建789
mkdir 123 || mkdir 789              创建不了123 因为已经存在，因此会创建789
mkdir 234 || mkdir 567              创建了234 因此不会创建567

4.继承的构造析构

    构造规则

        子类对象在创建时会首先调用父类的构造函数
        先执行父类构造函数再执行子类的构造函数
        父类构造函数可以被隐式调用或者显式调用

    对象创建时构造函数的调用顺序

        调用父类的构造函数（父类从左到右依次）
        调用成员变量的构造函数
        调用类自身的构造函数

    子类对象的析构

        执行自身的析构函数（父类从右到左依次）
        执行成员变量的析构函数
        执行父类的析构函数

4.
dogzone.push_back(move(*dynamic_cast<Dog*>(tmp)));

    dynamic_cast<P*>(p),
        参数p不是*p
        得到的返回值是地址，在前面加*解引用
    
    push_back 使用 赋值操作符"="，如果要用移动赋值，move一下
*/

#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{

    return 0;
}
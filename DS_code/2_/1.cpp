#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;
// 从顺序表中删除具有最小值的元素（假设唯一）并返回被删除元素的值，
// 空出的元素位置由最后一个元素填补，若表为空返回出错信息

int del_min(int *a)
{
    int min = a[0];
    if (!min)
        cout << "error" << endl;
    else
    {
        }
}

int main()
{
    int a[10] = {2, 3, 4, 5, 6, 1, 8, 9};
    int *p = a;
    int return_index = del_min(p);

    return 0;
}

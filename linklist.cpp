#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

// 链表结构体定义
typedef struct linklist
{
    int data;
    linklist *pre, *next;
} linklist;

// 初始化头节点
linklist *init_linklist()
{
    linklist *node;
    node = (linklist *)malloc(sizeof(linklist));
    // cout << "success" << endl;
    return node;
}

// 在链表中添加元素
void add_linklist(linklist *L, int data)
{
    linklist *node = (linklist *)malloc(sizeof(linklist));
    node->data = data;
    while (L->next != NULL)
        L = L->next;
    L = node;
    // cout << "add success" << endl;
    // cout << L->data << endl;
}

// 在链表的第i个位置插入新的节点
void insert_linklist(linklist *L, int i, int data)
{
    int count = 0;
    linklist *node = (linklist *)malloc(sizeof(linklist));
    node->data = data;
    while (count++ != i - 1)
        L = L->next;
    node->next = L->next;
    L->next = node;
    // cout << "insert success" << endl;
}

// 删除链表第i个位置的节点
void delete_linklist(linklist *L, int i)
{
    int count = 0;
    linklist *temp = L;
    while (count++ != i - 1)
        temp = temp->next;
}

int main()
{
    // cout << "success test" << endl;
    linklist *L;
    L = init_linklist();
    // add_linklist(L, 4);
    // insert_linklist(L, 1, 5);

    return 0;
}

#include <iostream>
// 定义链表的结点结构体
struct Node
{
    int data;
    Node *next;
};
/**
 * @brief 遍历链表
 *
 * @param head 链表头结点
 */
void traverseLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr) // 当前结点非空
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
/**
 * @brief 计算链表的长度
 *
 * @param head 链表头结点
 * @return int 链表长度
 */
int calculateLinkedListLength(Node *head)
{
    int length = 0;
    Node *current = head;
    while (current != nullptr)
    {
        length++;                // 长度自增
        current = current->next; // 指针指向下一个结点
    }
    return length;
}
/**
 * @brief 删除链表的所有结点
 *
 * @param head 链表头结点
 */
void deleteLinkedList(Node *&head)
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next; // 指针指向下一个结点
        delete temp;
    }
    head = nullptr;
}

int main()
{
    Node *head = nullptr;

    // 建立一个单链表
    Node *node1 = new Node;
    node1->data = 1;
    node1->next = nullptr;
    head = node1;

    Node *node2 = new Node;
    node2->data = 2;
    node2->next = nullptr;
    node1->next = node2;

    Node *node3 = new Node;
    node3->data = 3;
    node3->next = nullptr;
    node2->next = node3;

    // 遍历链表
    std::cout << "Traverse the linked list:" << std::endl; // 第一次遍历
    traverseLinkedList(head);

    // 计算链表的长度
    int length = calculateLinkedListLength(head);
    std::cout << "Length of the linked list: " << length << std::endl;

    // 删除链表的所有结点
    deleteLinkedList(head);

    std::cout << "Traverse the linked list:" << std::endl; // 删除所有结点后遍历
    traverseLinkedList(head);

    // 计算链表的长度
    int length1 = calculateLinkedListLength(head);
    std::cout << "Length of the linked list: " << length1 << std::endl;
    return 0;
}

#include <iostream>
// 单链表的节点结构体,即一个节点包含数据和指向下一个节点的指针
struct Node
{
    int data;
    Node *next;
};
/**
 * @brief 遍历单链表
 *
 * @param head 单链表的头指针
 */
void traverseLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " "; // 输出当前节点的数据,并换行
        current = current->next;           // 将current指向下一个节点
    }
    std::cout << std::endl; // 借助std::endl换行
}
/**
 * @brief 向单链表的表头添加一个元素
 *
 * @param head 单链表的头指针
 * @param value 要添加的元素
 */
void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value; // 将新节点的数据域赋值为value
    newNode->next = head;  // 将新节点的next指针指向原来的头节点
    head = newNode;
}
/**
 * @brief 向单链表的表尾添加一个元素
 *
 * @param head 单链表的头指针
 * @param value 要添加的元素
 */
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;   // 将新节点的数据域赋值为value
    newNode->next = nullptr; // 将新节点的next指针置空

    if (head == nullptr) // 如果为空链表，直接将新节点作为头节点
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode; // 将新节点添加到最后一个节点的后面
    }
}

/**
 * @brief 删除单链表的表头元素
 *
 * @param head 单链表的头指针
 */
void deleteAtHead(Node *&head)
{
    if (head == nullptr) // 如果为空链表，直接返回
    {
        return;
    }

    Node *temp = head; // 保存要删除的节点的地址
    head = head->next; // 头指针指向下一个节点
    delete temp;       // release原来的头节点
}

/**
 * @brief 删除单链表的表尾元素
 *
 * @param head 单链表的头指针
 */
void deleteAtTail(Node *&head)
{
    if (head == nullptr) // 如果为空链表，直接返回
    {
        return;
    }

    if (head->next == nullptr) // 如果只有一个节点，直接删除
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *current = head;
    while (current->next->next != nullptr) // 找到倒数第二个节点
    {
        current = current->next;
    }
    delete current->next;    // 删除最后一个节点
    current->next = nullptr; // 将倒数第二个节点的next指针置空
}

/**
 * @brief 删除单链表中指定元素
 *
 * @param head 单链表的头指针
 * @param value 要删除的元素
 */
void deleteElement(Node *&head, int value)
{
    if (head == nullptr) // 如果为空链表，直接返回
    {
        return;
    }

    // 如果要删除的元素是头节点
    if (head->data == value)
    {
        deleteAtHead(head);//直接删除头结点并返回
        return;
    }

    Node *current = head;//临时结点,用于保存当前结点的地址
    Node *previous = nullptr;//临时结点，用于保存当前结点的前驱结点地址

    // 遍历链表查找要删除的元素
    while (current != nullptr && current->data != value)//当链表不为空且当前结点的数据域不等于value,继续向后遍历
    {
        previous = current;
        current = current->next;
    }

    // 如果找到要删除的元素
    if (current != nullptr)
    {
        previous->next = current->next;//将当前结点的前驱结点的next指针指向当前结点的后继结点
        delete current;//删除当前结点,即删除指定元素
    }
}

int main()
{
    Node *head = nullptr; // 单链表的头指针,先初始化为nullptr

    // 从键盘上读取六个整数，并依次保存到单链表中
    printf("plese enter six number:\n");
    for (int i = 0; i < 6; i++)
    {
        int num;
        std::cin >> num;
        insertAtTail(head, num); // 在单链表的表尾添加元素
    }

    // 输出遍历单链表
    printf("Traverse the linked list::\n");
    traverseLinkedList(head);

    printf("Add an element 75 to the header of the list:\n");
    // 删除表头的一个元素
    insertAtHead(head,75);
    // 输出遍历单链表
    traverseLinkedList(head);



    printf("Add an element 41 to the footer of the list:\n");
    // 删除单链表表尾的一个元素
    insertAtTail(head,41);
    // 输出遍历单链表
    traverseLinkedList(head);

    return 0;
}

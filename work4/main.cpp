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
        std::cout << current->data << " ";//输出当前节点的数据,并换行
        current = current->next;//将current指向下一个节点
    }
    std::cout << std::endl;//借助std::endl换行
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
    newNode->data = value;//将新节点的数据域赋值为value
    newNode->next = head;//将新节点的next指针指向原来的头节点
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
    newNode->data = value;//将新节点的数据域赋值为value
    newNode->next = nullptr;//将新节点的next指针置空

    if (head == nullptr)//如果为空链表，直接将新节点作为头节点
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
        current->next = newNode;//将新节点添加到最后一个节点的后面
    }
}

 /**
  * @brief 删除单链表的表头元素
  *
  * @param head 单链表的头指针
  */
 void deleteAtHead(Node *&head)
 {
     if (head == nullptr)//如果为空链表，直接返回
     {
         return;
     }

     Node *temp = head;//保存要删除的节点的地址
     head = head->next;//头指针指向下一个节点
     delete temp;//release原来的头节点
 }

 /**
  * @brief 删除单链表的表尾元素
  *
  * @param head 单链表的头指针
  */
 void deleteAtTail(Node *&head)
 {
     if (head == nullptr)//如果为空链表，直接返回
     {
         return;
     }

     if (head->next == nullptr)//如果只有一个节点，直接删除
     {
         delete head;
         head = nullptr;
         return;
     }

     Node *current = head;
     while (current->next->next != nullptr)//找到倒数第二个节点
     {
         current = current->next;
     }
     delete current->next;//删除最后一个节点
     current->next = nullptr;//将倒数第二个节点的next指针置空
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
        deleteAtHead(head);
        return;
    }

    Node *current = head;
    Node *previous = nullptr;

    // 遍历链表查找要删除的元素
    while (current != nullptr && current->data != value)
    {
        previous = current;
        current = current->next;
    }

    // 如果找到要删除的元素
    if (current != nullptr)
    {
        previous->next = current->next;
        delete current;
    }
}

/**
 * @brief 从单链表中查找出所有元素的最大值
 *
 * @param head 单链表的头指针
 * @return int 单链表中所有元素的最大值
 */
int findMaxValue(Node *head)
{
    if (head == nullptr) // 如果为空链表，显示出错信息并停止运行
    {
        printf("Error: 链表为空\n");
        exit(1);
    }

    int maxValue = head->data;  // 假设第一个元素为最大值
    Node *current = head->next; // 指针指向第二个元素开始遍历

    while (current != nullptr) // 冒泡法遍历链表
    {
        if (current->data > maxValue)
        {
            maxValue = current->data;
        }
        current = current->next;
    }
    return maxValue;
}


/**
 * @brief 统计单链表中值等于给定值的结点个数
 *
 * @param head 单链表的头指针
 * @param value 给定值
 * @return int 值等于给定值的结点个数
 */
int countNodesWithValue(Node *head, int value)
{
    int count = 0;
    Node *current = head;

    while (current != nullptr)
    {
        if (current->data == value)
        {
            count++;
        }
        current = current->next;
    }
    return count;
}


int main()
{
    Node *head = nullptr; // 单链表的头指针,先初始化为nullptr

    // 从键盘上读取六个整数，并依次保存到单链表中
    printf("please enter seven number:\n");
    for (int i = 0; i < 7; i++)
    {
        int num;
        std::cin >> num;
        insertAtTail(head, num);//在单链表的表尾添加元素
    }
    // 输出遍历单链表
    traverseLinkedList(head);

    //查找单链表中所有元素的最大值
    printf("The maximum value of all elements in the is:%d\n", findMaxValue(head));
    printf("The number of 55 in thelist whose value is equal to the given value is:%d\n", countNodesWithValue(head, 55));
    return 0;
}

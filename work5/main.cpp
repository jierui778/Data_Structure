#include <iostream>
#include <vector>
// ���Ľṹ��
struct TreeNode
{
    int data;        // ����
    TreeNode *left;  // ���ӽڵ�
    TreeNode *right; // ���ӽڵ�
};

/**
 * @brief ����һ���������ڵ�
 * @param data �ڵ�����
 * @return �´����Ľڵ�ָ��
 */
TreeNode *createNode(int data)
{
    TreeNode *newNode = new TreeNode();
    if (newNode)
    {
        newNode->data = data;
        newNode->left = newNode->right = nullptr;
    }
    return newNode;
}

/**
 * @brief �����ڵ�֮�������
 * @param parent ���ڵ�
 * @param leftChild ���ӽڵ�
 * @param rightChild ���ӽڵ�
 */
void createLink(TreeNode *parent, TreeNode *leftChild, TreeNode *rightChild)
{
    parent->left = leftChild;
    parent->right = rightChild;
}

/**
 * @brief ǰ�����������
 * @param root ���ڵ�
 * @param result �洢�������������
 */
void preorderTraversal(TreeNode *root, std::vector<int> &result)
{
    if (root)
    {
        result.push_back(root->data);
        preorderTraversal(root->left, result);
        preorderTraversal(root->right, result);
    }
}

/**
 * @brief �������������
 * @param root ���ڵ�
 * @param result �洢�������������
 */
void inorderTraversal(TreeNode *root, std::vector<int> &result)
{
    if (root)
    {
        inorderTraversal(root->left, result);
        result.push_back(root->data);
        inorderTraversal(root->right, result);
    }
}

/**
 * @brief �������������
 * @param root ���ڵ�
 * @param result �洢�������������
 */
void postorderTraversal(TreeNode *root, std::vector<int> &result)
{
    if (root)
    {
        postorderTraversal(root->left, result);
        postorderTraversal(root->right, result);
        result.push_back(root->data);
    }
}

int main()
{
    // �����������Ľ�����ݼ���Ӧ��ϵ
    TreeNode *root = createNode(89);
    TreeNode *node2 = createNode(45);
    TreeNode *node3 = createNode(97);
    TreeNode *node4 = createNode(71);
    TreeNode *node5 = createNode(60);
    TreeNode *node6 = createNode(75);
    TreeNode *node7 = createNode(47);
    TreeNode *node8 = createNode(83);

    createLink(root, node2, node3);
    createLink(node2, node4, node5);
    createLink(node3, nullptr, node6);
    createLink(node5, node7, node8);

    // ǰ�����
    std::vector<int> preorderResult;
    preorderTraversal(root, preorderResult);
    std::cout << "ǰ����������";
    for (int num : preorderResult)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;



    // �������
    std::vector<int> inorderResult;
    inorderTraversal(root, inorderResult);
    std::cout << "������������";
    for (int num : inorderResult)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    // �������
    std::vector<int> postorderResult;
    postorderTraversal(root, postorderResult);
    std::cout << "������������";
    for (int num : postorderResult)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

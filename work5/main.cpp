#include <iostream>
#include <vector>
// 树的结构体
struct TreeNode
{
    int data;        // 数据
    TreeNode *left;  // 左子节点
    TreeNode *right; // 右子节点
};

/**
 * @brief 创建一个二叉树节点
 * @param data 节点数据
 * @return 新创建的节点指针
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
 * @brief 创建节点之间的链接
 * @param parent 父节点
 * @param leftChild 左子节点
 * @param rightChild 右子节点
 */
void createLink(TreeNode *parent, TreeNode *leftChild, TreeNode *rightChild)
{
    parent->left = leftChild;
    parent->right = rightChild;
}

/**
 * @brief 前序遍历二叉树
 * @param root 根节点
 * @param result 存储遍历结果的向量
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
 * @brief 中序遍历二叉树
 * @param root 根节点
 * @param result 存储遍历结果的向量
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
 * @brief 后序遍历二叉树
 * @param root 根节点
 * @param result 存储遍历结果的向量
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
    // 创建二叉树的结点数据及对应关系
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

    // 前序遍历
    std::vector<int> preorderResult;
    preorderTraversal(root, preorderResult);
    std::cout << "前序遍历结果：";
    for (int num : preorderResult)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;



    // 中序遍历
    std::vector<int> inorderResult;
    inorderTraversal(root, inorderResult);
    std::cout << "中序遍历结果：";
    for (int num : inorderResult)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    // 后序遍历
    std::vector<int> postorderResult;
    postorderTraversal(root, postorderResult);
    std::cout << "后序遍历结果：";
    for (int num : postorderResult)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

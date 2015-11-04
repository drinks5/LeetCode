#include <iostream>
using namespace std;

struct tree
{
    int data;
    tree *left,*right;
};

class Btree
{
    static int n;
    static int m;
    public:
    tree *root;
    Btree()
    {
        root=NULL;
    }
    void create_Btree(int);
    void Preorder(tree *);                  //先序遍历
    void inorder(tree *);                   //中序遍历
    void Postorder(tree *);                 //后序遍历
    void display1() {Preorder(root); cout<<endl;}
    void display2() {inorder(root);cout<<endl;}
    void display3() {Postorder(root); cout<<endl;}
    int count(tree *);                      //计算二叉树的个数
    int findleaf(tree *);                   //求二叉树叶子的个数
    int findnode(tree *);                   //求二叉树中度数为1的结点数量,这是当初考数据结构时候的最后一道题目
};

int Btree::n=0;
int Btree::m=0;

void Btree::create_Btree(int x)
{
    tree *newnode=new tree;
    newnode->data=x;
    newnode->right=newnode->left=NULL;
    if(root==NULL)
        root=newnode;
    else
    {
        tree *back;
        tree *current=root;
        while(current!=NULL)
        {
            back=current;
            if(current->data>x)
                current=current->left;
            else
                current=current->right;
        }
        if(back->data>x)
            back->left=newnode;
        else
            back->right=newnode;
        delete current;
        //delete back;
    }

}
int Btree::count(tree *p)
{
    if(p==NULL)
        return 0;
    else
        return count(p->left)+count(p->right)+1;      //这是运用了函数嵌套即递归的方法。
}

void Btree::Preorder(tree *temp)    //这是先序遍历二叉树，采用了递归的方法。
{
    if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        Preorder(temp->left);
        Preorder(temp->right);
    }
}

void Btree::inorder(tree *temp)      //这是中序遍历二叉树，采用了递归的方法。
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
}

void Btree::Postorder(tree *temp)     //这是后序遍历二叉树，采用了递归的方法。
{
    if(temp!=NULL)
    {
        Postorder(temp->left);
        Postorder(temp->right);
        cout<<temp->data<<" ";
    }
}

int Btree::findleaf(tree *temp)
{
    if(temp==NULL)
        return 0;
    else
    {
        if(temp->left==NULL&&temp->right==NULL)
            return n+=1;
        else
        {
            findleaf(temp->left);
            findleaf(temp->right);
        }
        return n;
     }
}

int Btree::findnode(tree *temp)
{
    if(temp==NULL)
        return 0;
    else
    {
        if(temp->left!=NULL&&temp->right!=NULL)
        {
            findnode(temp->left);
            findnode(temp->right);
        }
        if(temp->left!=NULL&&temp->right==NULL)
        {
            m+=1;
            findnode(temp->left);
        }
        if(temp->left==NULL&&temp->right!=NULL)
        {
            m+=1;
            findnode(temp->right);
        }
     }
     return m;
}

int main()
 {
     Btree A;
     int array[]={7,4,2,3,15,35,6,45,55,20,1,14,56,57,58};
     int k;
     k=sizeof(array)/sizeof(array[0]);
     cout<<"建立排序二叉树顺序: "<<endl;
     for(int i=0;i<k;i++)
     {
         cout<<array[i]<<" ";
         A.create_Btree(array[i]);
     }
     cout<<endl;
     cout<<"二叉树节点个数： "<<A.count(A.root)<<endl;
     cout<<"二叉树叶子个数："<<A.findleaf(A.root)<<endl;
     cout<<"二叉树中度数为1的结点的数量为："<<A.findnode(A.root)<<endl;
     cout<<endl<<"先序遍历序列: "<<endl;
     A.display1();
     cout<<endl<<"中序遍历序列: "<<endl;
     A.display2();
     cout<<endl<<"后序遍历序列: "<<endl;
     A.display3();
     return 0;
 }
/*#include <iostream>

using namespace std;
struct BinaryTreeNode
{
    int root;
    BinaryTreeNode* m_Left;
    BinaryTreeNode* m_Right;
};

BinaryTreeNode* CreateTree();
//BinaryTreeNode* InitTree();
int GetNodeNum(BinaryTreeNode * pRoot);
int GetDepthOfTree(BinaryTreeNode* pRoot);
void ShowNodeData(BinaryTreeNode *treeNode);

int main()
{
    BinaryTreeNode* tree = CreateTree();
    std::cout<<"the number of node is "<<GetNodeNum(tree)<<endl;
    std::cout<<"the depth of the tree is "<<GetDepthOfTree(tree)<<endl;
    //ShowNodeData(tree);
}

void ShowNodeData(BinaryTreeNode *treeNode)
{
    std::cout<<treeNode->root<<"\t"<<endl;     //直接输出结点数据
}

BinaryTreeNode* CreateTree()
{
	BinaryTreeNode* node;
	if(node = new BinaryTreeNode)
	{
		std::cout<<"please input a data for root"<<endl;
		std::cin>>node->root;
		node->m_Left = NULL;
		node->m_Right = NULL;
		return node;
	}
	else
		return NULL;

	return NULL;
}

int GetNodeNum(BinaryTreeNode* pRoot)
{
    if(pRoot == NULL)
        return 0;
    else
        return GetNodeNum(pRoot->m_Left)+GetNodeNum(pRoot->m_Right)+1;
}

int GetDepthOfTree(BinaryTreeNode* pRoot)
{
    if(pRoot == NULL)
        return 0;
    int depth_left  = GetDepthOfTree(pRoot->m_Left);
    int depth_right = GetDepthOfTree(pRoot->m_Right);
    return depth_left>depth_right? (depth_left+1) : (depth_right+1);
}
*/

#include<iostream>
using namespace std;
class tree
{
    class node
    {
    public:
        int data;
        node *left,*right;
        node(int val)
        {
            data=val;
            right=NULL;
            left=NULL;
        }
    };
public:
    node *root;
    tree(int val)
    {
        root=new node(val);
    }
    void insert_left(node *root, int val)
    {
        node *new_node=new node(val);
        root->left=new_node;
    }
    void insert_right(node *root, int val)
    {
        node *new_node=new node(val);
        root->right=new_node;
    }
    void preorder(node *root)
    {
        if(root!=NULL){
        cout<<root->data << " ";
        preorder(root->left);
        preorder(root->right);
        }
    }

    void postorder(node *root)
    {
        if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
        cout<<root->data << " ";
        }
    }

    void inorder(node *root)
    {
        if(root!=NULL){
        preorder(root->left);
        cout<<root->data << " ";
        preorder(root->right);
        }
    }

};
int main()
{
    tree t1(10);
    t1.insert_left(t1.root,5);
    t1.insert_right(t1.root,15);
    t1.insert_left(t1.root->left,3);
    t1.insert_right(t1.root->left,8);
    t1.insert_right(t1.root->right,12);
    t1.preorder(t1.root);
    cout<<endl;
    t1.inorder(t1.root);
    cout<<endl;
    t1.postorder(t1.root);
    cout<<endl;
    return 0;
}

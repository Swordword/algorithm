#include <iostream>
using namespace std;

typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode
{
  int Data;
  BinTree Left;
  BinTree Right;
};
// 递归遍历
void PreOrderTraversal(BinTree BT)
{
  if (BT)
  {
    printf("%d", BT->Data);
    PreOrderTraversal(BT->Left);
    PreOrderTraversal(BT->Right);
  }
};

// 非递归遍历
void PreOrderTraversalWithStack(BinTree BT)
{
  BinTree T = BT;
  
  Stack S = CreateStack(MaxSize);
  while (T|| !IsEmpty(S))
  {
    While(T){
      printf('%5d', T->Data);
      Push(S,T);
      T = T-> Left;
    }
    if(!IsEmpty(S)){
      T = Pop(S);
      T = T->Right;
    }
  }
  
}

int main()
{
  return 0;
}
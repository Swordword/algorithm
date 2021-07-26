#include <iostream>

#define MaxSize ;
typedef struct SNode *Stack;
struct SNode
{
  ElementType Data[MaxSize];
  int Top;
}

void Push(Stack PtrS, ElementType item)
{
  if (PtrS->Top == MaxSize - 1)
  {
    printf("堆栈满");
    return;
  }else{
    PtrS->Data[++(PtrS->Top)] item;
    return;
  }
}

ElementType Pop(Stack PtrS){
  if(PtrS->Top == -1){
    printf("堆栈空");
    return Error;
  }else{
    return (PtrS->Data[(PtrS->Top)--]);
  }
}


int main()
{
}
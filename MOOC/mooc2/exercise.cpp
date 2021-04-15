// FEAT: 一元多项式的加法与乘法
#include <iostream>

using namespace std;

typedef struct PolyNode *Polynomial;

struct PolyNode
{
  int coef;  //  系数
  int expon; //  指数
  Polynomial link;
};

void Attach(int c, int e, Polynomial *pRear)
{
  Polynomial P;
  P = (Polynomial)malloc(sizeof(struct PolyNode));
  P->coef = c;
  P->expon = e;
  P->link = nullptr;
  (*pRear)->link = P;
  *pRear = P;
}

Polynomial ReadPoly()
{
  Polynomial P, Rear, t;
  int c, e, N;
  cin >> N;
  P = (Polynomial)malloc(sizeof(struct PolyNode));
  P->link = nullptr;
  Rear = P;
  while (N--)
  {
    cin >> c >> e;
    Attach(c, e, &Rear); // 传入指针Rear的指针
  }
  t = P; // 删除链表头的空节点
  P = P->link;
  free(t);
  return P;
}

Polynomial Add(Polynomial P1, Polynomial P2)
{
  Polynomial t1 = P1;
  Polynomial t2 = P2;
  Polynomial P = (Polynomial)malloc(sizeof(struct PolyNode));
  P->link = nullptr;
  Polynomial Rear = P;
  while (t1 && t2)
  {
    if (t1->expon == t2->expon)
    {
      if (t1->coef + t2->coef != 0)
      {
        Attach(t1->coef + t2->coef, t1->expon, &Rear);
      }
      t1 = t1->link;
      t2 = t2->link;
    }
    else if (t1->expon > t2->expon)
    {
      Attach(t1->coef, t1->expon, &Rear);
      t1 = t1->link;
    }
    else
    {
      // t1->expon < t2->expon
      Attach(t2->coef, t2->expon, &Rear);
      t2 = t2->link;
    }
  }
  while (t1)
  {
    Attach(t1->coef, t1->expon, &Rear);
    t1 = t1->link;
  }
  while (t2)
  {
    Attach(t2->coef, t2->expon, &Rear);
    t2 = t2->link;
  }
  auto t = P; // 删除链表头的空节点
  P = P->link;
  free(t);
  return P;
}

Polynomial Mult(Polynomial P1, Polynomial P2)
{
  if (!P1 || !P2)
    return nullptr;
  Polynomial P, Rear, t1, t2, t;
  int c, e;
  t1 = P1;
  t2 = P2;
  P = (Polynomial)malloc(sizeof(struct PolyNode));
  P->link = nullptr;
  Rear = P;
  while (t2)
  {
    // P1 第一项乘以 P2 得到P
    Attach(t1->coef * t2->coef, t1->expon + t2->expon, &Rear);
    t2 = t2->link;
  }
  t1 = t1->link;
  while (t1)
  {
    t2 = P2;
    Rear = P;
    while (t2)
    {
      e = t1->expon + t2->expon;
      c = t1->coef * t2->coef;
      while (Rear->link && Rear->link->expon > e)
      {
        Rear = Rear->link;
      }
      if (Rear->link && Rear->link->expon == e)
      {
        if (Rear->link->coef + c)
        {
          Rear->link->coef += c;
        }
        else
        {
          t = Rear->link;
          Rear->link = t->link;
          free(t);
        }
      }
      else
      {
        t = (Polynomial)malloc(sizeof(struct PolyNode));
        t->coef = c;
        t->expon = e;
        t->link = Rear->link;
        Rear->link = t;
        Rear = Rear->link; // ?
      }
      t2 = t2->link;
    }
    t1 = t1->link;
  }
  t = P; // 删除链表头的空节点
  P = P->link;
  free(t);
  return P;
}

void PrintPoly(Polynomial P)
{
  int flag = 0;
  if (!P)
  {
    cout << "0 0" << endl;
    return;
  }
  while (P)
  {
    if (!flag)
      flag = 1;
    else
      cout << " ";
    cout << P->coef << " " << P->expon;
    P = P->link;
  }
  cout << endl;
}

int main()
{

  Polynomial P1, P2, PP, PS;
  // TODO:读入多项式
  P1 = ReadPoly();
  P2 = ReadPoly();

  // TODO:乘法运算
  PP = Mult(P1, P2);
  PrintPoly(PP);
  // TODO:加法运算
  PS = Add(P1, P2);
  // TODO:多项式输入
  PrintPoly(PS);
  return 0;
}
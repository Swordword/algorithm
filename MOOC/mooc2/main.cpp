// FEAT: 一元多项式的加法与乘法
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

typedef struct PolyNode *Polynomial;
struct PolyNode
{
  int coef;        // 参数
  int expon;       //  指数
  Polynomial link; // 指向下一个 PolyNode 的指针
};

void Attach(int c, int e, Polynomial *pRear)
{
  Polynomial P;
  P = (Polynomial)malloc(sizeof(struct PolyNode));
  P->expon = e;
  P->coef = c;
  P->link = nullptr;
  (*pRear)->link = P;
  *pRear = P;
}

// FEAT: 读取多项式
Polynomial ReadPoly()
{
  Polynomial P, Rear, t;
  int N = 0;
  // c 参数 e 指数
  int c = 0, e = 0;
  cin >> N;
  P = (Polynomial)malloc(sizeof(struct PolyNode));
  P->link = nullptr;
  Rear = P;
  while (N--)
  {
    cin >> c >> e;
    Attach(c, e, &Rear);
  }
  t = P;
  P = P->link;
  free(t);
  return P;
}

// FEAT: 多项式相加
Polynomial Add(Polynomial P1, Polynomial P2)
{
  auto t1 = P1, t2 = P2;
  auto P = (Polynomial)malloc(sizeof(struct PolyNode));
  P->link = nullptr;
  auto Rear = P;
  while (t1 && t2)
  {
    if (t1->expon == t2->expon)
    {
      if (t1->coef + t2->coef != 0)
      {
        Attach((t1->coef + t2->coef), t1->expon, &P);
        // pp->coef = (t1->coef + t2->coef);
        // pp->expon = t1->expon;
        P = P->link;
        t1 = t1->link;
        t2 = t2->link;
      }
    }
    else if (t1->expon > t2->expon)
    {
      Attach(t1->coef, t1->expon, &P);
      // pp->coef = t1->coef;
      // pp->expon = t1->expon;
      P = P->link;
      t1 = t1->link;
    }
    else
    {
      Attach(t2->coef, t2->expon, &P);
      // pp->coef = t2->coef;
      // pp->expon = t2->expon;
      P = P->link;
      t2 = t2->link;
    }
  }
  while (t1)
  {
    cout << "t1 more" << endl;
    (P->link)->coef = t1->coef;
    (P->link)->expon = t1->expon;
    P = P->link;
    t1 = t1->link;
  }
  while (t2)
  {
    (P->link)->coef = t2->coef;
    (P->link)->expon = t2->expon;
    P = P->link;
    t2 = t2->link;
  }
  P = P->link;
  free(Rear);
  return P;
}

// FEAT: 打印多项式
void PrintPoly(Polynomial P)
{
  while (P)
  {
    cout << P->coef << " " << P->expon << endl;
    P = P->link;
  }
}

int main()
{
  Polynomial P1, P2, PP, PS;
  P1 = ReadPoly();
  P2 = ReadPoly();

  // TODO: 多项式相乘
  // PP = Mult(P1, P2);
  // PrintPoly(PP);

  PS = Add(P1, P2);
  PrintPoly(PS);
  return 0;
}

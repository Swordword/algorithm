// Reversing Linked List
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct LinkedNode *LinkedPointer;

struct LinkedNode
{
  // 当前地址
  string address;
  int data;
  // next地址
  string next;
  LinkedPointer link;
};

LinkedPointer create()
{
  LinkedPointer P, t, Rear;
  P = (LinkedPointer)malloc(sizeof(struct LinkedNode));
  Rear = P;
  string start;
  int N, K;
  cin >> start >> N >> K;
  vector<LinkedPointer> lvec(N);
  int data;
  string address, next;
  int M = N;
  while (N--)
  {
    t = (LinkedPointer)malloc(sizeof(struct LinkedNode));
    t->link = nullptr;
    cin >> address >> data >> next;
    t->address = address;
    t->data = data;
    t->next = next;
    lvec.push_back(t);
  }
  while (M--)
  {
    auto it = find(lvec.begin(), lvec.end(), [start](LinkedPointer node) {
      return (*node).address == start;
    });
    Rear->link = *it;
    Rear = Rear->link;
    start = Rear->next;
  }
  // for (auto &node : lvec)
  // {
  //   if (node->address == start)
  //   {
  //     Rear->link = node;
  //     Rear = Rear->link;
  //     start = Rear->next;
  //   }
  // }

  t = P;
  P = P->link;
  free(t);
  return P;
}

void LinkedListPrint(LinkedPointer P)
{
  while (P)
  {
    cout << P->data << endl;
    P = P->link;
  }
}

int main()
{
  auto P = create();
  LinkedListPrint(P);
  return 0;
}
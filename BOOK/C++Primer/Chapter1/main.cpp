#include <iostream>
#include <vector>
#include "IntCell.h"
using namespace std;

class Square
{
public:
  explicit Square(double s = 0.0) : side{s} {}
  double getSide() const
  {
    return side;
  }
  double getArea() const
  {
    return side * side;
  }
  double getPerimeter() const
  {
    return 4 * side;
  }
  void print(ostream &out = cout) const
  {
    cout << "(square " << getSide() << ")";
  }
  bool operator<(const Square &rhs) const
  {
    return getSide() < rhs.getSide();
  }
private:
  double side;
};

ostream & operator<<(ostream & out, const Square & rhs){
  rhs.print(out);
  return out;
}

template <typename Comparable>
const Comparable &findMax(const vector<Comparable> &a)
{
  int maxIndex = 0;
  for (int i = 1; i < a.size(); ++i)
    if (a[maxIndex] < a[i])
      maxIndex = i;
  return a[maxIndex];
}
int main()
{
  vector<int> v1(37);
  vector<double> v2(40);
  vector<string> v3(80);
  vector<IntCell> v4(75);
  cout << findMax(v1) << endl;
  cout << findMax(v2) << endl;
  cout << findMax(v4) << endl;

  return 0;
}
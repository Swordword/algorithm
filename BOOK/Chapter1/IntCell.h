#ifndef IntCell_H
#define IntCell_H

class IntCell
{

public:
  explicit IntCell(int initialValue = 0)
  {
    storedValue = new int{initialValue};
  };
  // 析构函数
  ~IntCell()
  {
    delete storedValue;
  }
  // 拷贝构造函数
  IntCell(const IntCell &rhs)
  {
    storedValue = new int{*rhs.storedValue};
  }
  // 移动构造函数
  IntCell(IntCell &&rhs) : storedValue{rhs.storedValue}
  {
    rhs.storedValue = nullptr;
  }
  // 拷贝赋值
  IntCell &operator=(const IntCell &rhs)
  {
    if (this != &rhs)
      *storedValue = *rhs.storedValue;
    return *this;
  }
  // 移动赋值
  IntCell &operator=(IntCell &&rhs)
  {
    std::swap(storedValue, rhs.storedValue);
    return *this;
  }
  int read() const
  {
    return *storedValue;
  };
  void write(int x)
  {
    *storedValue = x;
  };

private:
  /* data */
  int *storedValue;
};

#endif
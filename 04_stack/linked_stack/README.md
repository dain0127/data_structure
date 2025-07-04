# 연결 리스트 기반 스택(Linked Stack)

## 개념
- 연결 리스트를 사용하여 구현한 스택 자료구조
- 동적으로 크기가 조절되며, 메모리 효율적
- head 노드를 top으로 사용

## 구조
```cpp
struct Node {
    int data;
    Node* next;
};

class LinkedStack {
private:
    Node* top;
};
```

## C++ 구현 예제
```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedStack {
private:
    Node* top;
    
public:
    LinkedStack() : top(nullptr) {}
    
    bool isEmpty() {
        return top == nullptr;
    }
    
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
    
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        Node* temp = top;
        int val = temp->data;
        top = top->next;
        delete temp;
        return val;
    }
    
    int peek() {
        if (isEmpty()) return -1;
        return top->data;
    }
    
    ~LinkedStack() {
        while (!isEmpty()) {
            pop();
        }
    }
};
```

## 장점
- 크기 제한 없음
- 메모리 효율적
- 동적 할당 
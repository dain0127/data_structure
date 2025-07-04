# 덱(Deque - Double Ended Queue)

## 개념
- 양쪽 끝에서 삽입과 삭제가 가능한 큐
- 스택과 큐의 기능을 모두 제공
- Double Ended Queue의 약자

## 구조
```cpp
class Deque {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;
};
```

## C++ 구현 예제
```cpp
#include <iostream>
using namespace std;

class Deque {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;
    
public:
    Deque(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = 0;
        size = 0;
    }
    
    ~Deque() {
        delete[] arr;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
    
    void insertFront(int val) {
        if (isFull()) {
            cout << "Deque is Full!" << endl;
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }
        arr[front] = val;
        size++;
    }
    
    void insertRear(int val) {
        if (isFull()) {
            cout << "Deque is Full!" << endl;
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        arr[rear] = val;
        size++;
    }
    
    int deleteFront() {
        if (isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return -1;
        }
        int val = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
        return val;
    }
    
    int deleteRear() {
        if (isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return -1;
        }
        int val = arr[rear];
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }
        size--;
        return val;
    }
};
```

## 활용
- 슬라이딩 윈도우 알고리즘
- 양방향 데이터 처리 
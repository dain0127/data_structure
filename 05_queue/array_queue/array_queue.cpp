#include <iostream>
using namespace std;

class ArrayQueue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;
    
public:
    // 생성자
    ArrayQueue(int cap) {
        // TODO: 배열과 변수들 초기화
    }
    
    // 소멸자
    ~ArrayQueue() {
        // TODO: 메모리 해제
    }
    
    // Enqueue 연산
    void enqueue(int value) {
        // TODO: 큐에 값 삽입, 오버플로우 체크
    }
    
    // Dequeue 연산
    int dequeue() {
        // TODO: 큐에서 값 삭제하고 반환, 언더플로우 체크
        return -1;
    }
    
    // Peek 연산
    int peek() {
        // TODO: front 값 반환 (삭제하지 않음)
        return -1;
    }
    
    // 큐가 비어있는지 확인
    bool isEmpty() {
        // TODO: 큐가 비어있으면 true 반환
        return false;
    }
    
    // 큐가 가득 찬지 확인
    bool isFull() {
        // TODO: 큐가 가득 찬지 확인
        return false;
    }
    
    // 큐 크기 반환
    int getSize() {
        return size;
    }
    
    // 큐 용량 반환
    int getCapacity() {
        return capacity;
    }
    
    // 큐 출력
    void display() {
        // TODO: 큐의 모든 요소 출력 (front부터 rear까지)
    }
    
    // 큐 초기화
    void clear() {
        // TODO: 큐를 비우기 (front, rear, size 초기화)
    }
    
    // front 인덱스 반환
    int getFront() {
        return front;
    }
    
    // rear 인덱스 반환
    int getRear() {
        return rear;
    }
};

// 테스트 함수
void testArrayQueue() {
    ArrayQueue queue(5);
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Array Queue Test" << endl;
}

int main() {
    testArrayQueue();
    return 0;
} 
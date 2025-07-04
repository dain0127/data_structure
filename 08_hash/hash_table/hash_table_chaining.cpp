#include <iostream>
#include <list>
#include <string>
using namespace std;

struct HashNode {
    string key;
    int value;
    
    HashNode(string k, int v) : key(k), value(v) {}
};

class HashTableChaining {
private:
    list<HashNode>* table;
    int capacity;
    int size;
    
    // 해시 함수
    int hashFunction(string key) {
        // TODO: 문자열 키를 정수 인덱스로 변환하는 해시 함수 구현
        return 0;
    }
    
public:
    // 생성자
    HashTableChaining(int cap = 10) {
        // TODO: 해시 테이블 초기화
    }
    
    // 소멸자
    ~HashTableChaining() {
        // TODO: 메모리 해제
    }
    
    // 삽입 연산
    void insert(string key, int value) {
        // TODO: 키-값 쌍을 해시 테이블에 삽입
    }
    
    // 검색 연산
    int search(string key) {
        // TODO: 키에 해당하는 값 반환, 없으면 -1
        return -1;
    }
    
    // 삭제 연산
    bool remove(string key) {
        // TODO: 키에 해당하는 항목 삭제, 성공하면 true 반환
        return false;
    }
    
    // 업데이트 연산
    bool update(string key, int newValue) {
        // TODO: 키에 해당하는 값을 새 값으로 업데이트
        return false;
    }
    
    // 키 존재 여부 확인
    bool contains(string key) {
        // TODO: 키가 테이블에 존재하면 true 반환
        return false;
    }
    
    // 테이블 크기 반환
    int getSize() {
        return size;
    }
    
    // 테이블 용량 반환
    int getCapacity() {
        return capacity;
    }
    
    // 테이블이 비어있는지 확인
    bool isEmpty() {
        // TODO: 테이블이 비어있으면 true 반환
        return false;
    }
    
    // 테이블 출력
    void display() {
        // TODO: 해시 테이블의 모든 키-값 쌍 출력
    }
    
    // 테이블 초기화
    void clear() {
        // TODO: 테이블의 모든 항목 삭제
    }
    
    // 로드 팩터 계산
    double getLoadFactor() {
        // TODO: 현재 로드 팩터 반환 (size / capacity)
        return 0.0;
    }
    
    // 리사이징
    void resize(int newCapacity) {
        // TODO: 테이블 크기를 newCapacity로 변경
    }
};

// 테스트 함수
void testHashTableChaining() {
    HashTableChaining ht(5);
    
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Hash Table (Chaining) Test" << endl;
}

int main() {
    testHashTableChaining();
    return 0;
} 
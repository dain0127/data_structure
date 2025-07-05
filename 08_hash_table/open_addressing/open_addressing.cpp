#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 해시 테이블의 각 슬롯 상태
enum SlotStatus {
    EMPTY,    // 빈 슬롯
    OCCUPIED, // 사용 중인 슬롯
    DELETED   // 삭제된 슬롯
};

// 해시 테이블의 각 슬롯
struct HashSlot {
    string key;
    int value;
    SlotStatus status;
    
    HashSlot() : key(""), value(0), status(EMPTY) {}
    HashSlot(string k, int v) : key(k), value(v), status(OCCUPIED) {}
};

class HashTable {
private:
    HashSlot* table; // 해시 테이블 배열
    int capacity; // 해시 테이블의 크기
    int size; // 현재 저장된 요소의 개수
    float loadFactor; // 적재율 임계값
    
    // 해시 함수
    int hashFunction(string key) {
        // TODO: 문자열 키를 해시값으로 변환
        // 1. 각 문자의 ASCII 값을 사용
        // 2. 모듈로 연산으로 capacity 범위 내로 조정
        return 0;
    }
    
    // 선형 탐사
    int linearProbe(int hash, int i) {
        // TODO: 선형 탐사 구현
        // (hash + i) % capacity
        return 0;
    }
    
    // 적재율 계산
    float getLoadFactor() {
        // TODO: 현재 적재율 반환
        return 0.0f;
    }
    
    // 해시 테이블 재구성
    void rehash() {
        // TODO: 해시 테이블 크기를 늘리고 모든 요소를 재배치
        // 1. 새로운 크기 계산 (보통 2배)
        // 2. 새로운 해시 테이블 생성
        // 3. 기존 모든 요소를 새로운 해시 테이블에 삽입
        // 4. 기존 테이블 메모리 해제
    }
    
public:
    // 생성자
    HashTable(int initialCapacity = 10, float maxLoadFactor = 0.75f) {
        // TODO: 해시 테이블 초기화
        // 1. capacity 설정
        // 2. table 배열 동적 할당
        // 3. size 초기화
        // 4. loadFactor 설정
    }
    
    // 소멸자
    ~HashTable() {
        // TODO: 메모리 해제
        // 1. table 배열 해제
    }
    
    // ADT 핵심 연산
    void insert(string key, int value) {
        // TODO: 선형 탐사를 사용한 삽입
        // 1. 키의 해시값 계산
        // 2. 충돌 시 선형 탐사로 빈 슬롯 찾기
        // 3. 적재율 확인 후 필요시 재구성
    }
    
    int get(string key) {
        // TODO: 선형 탐사를 사용한 검색
        // 1. 키의 해시값 계산
        // 2. 선형 탐사로 키 검색
        // 3. 찾으면 값 반환, 없으면 -1
        return -1;
    }
    
    void remove(string key) {
        // TODO: 선형 탐사를 사용한 삭제
        // 1. 키의 해시값 계산
        // 2. 선형 탐사로 키 검색
        // 3. 찾으면 DELETED로 표시
    }
    
    void print() {
        // TODO: 해시 테이블의 모든 내용을 시각적으로 출력
    }
};

// 테스트 함수
void testOpenAddressing() {
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Open Addressing Hash Table Test" << endl;
    
    // 예시: 해시 테이블 생성 및 테스트
    HashTable ht(10);
    
    // 선형 탐사 테스트
    // ht.insert("apple", 1);
    // ht.insert("banana", 2);
    // ht.insert("cherry", 3);
    
    // 검색 테스트
    // cout << "apple: " << ht.get("apple") << endl;
    
    // 출력 테스트
    // ht.print();
}

int main() {
    testOpenAddressing();
    return 0;
} 
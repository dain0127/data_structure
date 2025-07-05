#include <iostream>
#include <list>
#include <string>
using namespace std;

// 해시 테이블의 각 슬롯에 저장될 키-값 쌍
struct HashNode {
    string key;
    int value;
    
    HashNode(string k, int v) : key(k), value(v) {}
};

class HashTable {
private:
    list<HashNode>* table; // 체이닝을 위한 리스트 배열
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
        // 1. table 배열의 각 리스트 해제
        // 2. table 배열 자체 해제
    }
    
    // ADT 핵심 연산
    void insert(string key, int value) {
        // TODO: 키-값 쌍을 해시 테이블에 삽입
        // 1. 키의 해시값 계산
        // 2. 해당 슬롯의 리스트에서 키가 이미 존재하는지 확인
        // 3. 존재하면 값 업데이트, 없으면 새 노드 추가
        // 4. 적재율 확인 후 필요시 재구성
    }
    
    int get(string key) {
        // TODO: 키에 해당하는 값을 반환
        // 1. 키의 해시값 계산
        // 2. 해당 슬롯의 리스트에서 키 검색
        // 3. 찾으면 값 반환, 없으면 -1 또는 예외 처리
        return -1;
    }
    
    void remove(string key) {
        // TODO: 키에 해당하는 요소 삭제
        // 1. 키의 해시값 계산
        // 2. 해당 슬롯의 리스트에서 키 검색
        // 3. 찾으면 삭제
    }
    
    void print() {
        // TODO: 해시 테이블의 모든 내용을 시각적으로 출력
    }
};

// 테스트 함수
void testSeparateChaining() {
    // TODO: 각 연산들을 테스트하는 코드 작성
    cout << "Separate Chaining Hash Table Test" << endl;
    
    // 예시: 해시 테이블 생성 및 테스트
    HashTable ht(10);
    
    // 삽입 테스트
    // ht.insert("apple", 1);
    // ht.insert("banana", 2);
    // ht.insert("cherry", 3);
    
    // 검색 테스트
    // cout << "apple: " << ht.get("apple") << endl;
    
    // 출력 테스트
    // ht.print();
}

int main() {
    testSeparateChaining();
    return 0;
} 
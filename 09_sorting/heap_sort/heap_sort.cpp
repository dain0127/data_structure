#include <iostream>
#include <vector>
using namespace std;

class HeapSort {
private:
    // 힙의 크기
    int heapSize;
    
    // 부모 인덱스 반환
    int parent(int i) {
        // TODO: 인덱스 i의 부모 인덱스 반환
        return 0;
    }
    
    // 왼쪽 자식 인덱스 반환
    int leftChild(int i) {
        // TODO: 인덱스 i의 왼쪽 자식 인덱스 반환
        return 0;
    }
    
    // 오른쪽 자식 인덱스 반환
    int rightChild(int i) {
        // TODO: 인덱스 i의 오른쪽 자식 인덱스 반환
        return 0;
    }
    
    // 힙 속성 유지 (최대 힙)
    void maxHeapify(vector<int>& arr, int i) {
        // TODO: 최대 힙 속성을 유지하도록 노드 i를 아래로 이동
        // 1. 왼쪽 자식과 오른쪽 자식 중 더 큰 값 찾기
        // 2. 현재 노드와 비교하여 필요시 교환
        // 3. 재귀적으로 힙 속성 유지
    }
    
    // 최대 힙 구성
    void buildMaxHeap(vector<int>& arr) {
        // TODO: 배열을 최대 힙으로 구성
        // 1. heapSize 설정
        // 2. 리프 노드가 아닌 마지막 노드부터 시작
        // 3. 각 노드에 대해 maxHeapify 호출
    }
    
public:
    // 기본 힙 정렬 (오름차순)
    void sort(vector<int>& arr) {
        // TODO: 힙 정렬 수행 (오름차순)
        // 1. 최대 힙 구성
        // 2. 루트(최대값)를 배열 끝으로 이동
        // 3. 힙 크기 감소
        // 4. 힙 속성 복원
        // 5. 모든 요소가 정렬될 때까지 반복
    }
    
    // 배열 출력
    void print(const vector<int>& arr) {
        // TODO: 배열의 모든 요소 출력
    }
};

// 테스트 함수
void testHeapSort() {
    // TODO: 각 정렬 방법들을 테스트하는 코드 작성
    cout << "Heap Sort Test" << endl;
    
    HeapSort hs;
    
    // 테스트 데이터 생성
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    // 기본 힙 정렬 테스트
    // hs.sort(arr);
    // hs.print(arr);
}

int main() {
    testHeapSort();
    return 0;
} 
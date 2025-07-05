#include <iostream>
#include <vector>
using namespace std;

class MergeSort {
private:
    // 병합 함수
    void merge(vector<int>& arr, int left, int mid, int right) {
        // TODO: 두 정렬된 서브배열을 병합
        // 1. 임시 배열 생성
        // 2. 두 서브배열을 순서대로 비교하며 병합
        // 3. 남은 요소들을 임시 배열에 복사
        // 4. 임시 배열의 내용을 원본 배열에 복사
    }
    
    // 재귀적 병합 정렬
    void mergeSortHelper(vector<int>& arr, int left, int right) {
        // TODO: 재귀적으로 배열을 분할하고 병합
        // 1. left < right 조건 확인
        // 2. 중간점 계산
        // 3. 왼쪽 서브배열 정렬
        // 4. 오른쪽 서브배열 정렬
        // 5. 두 서브배열 병합
    }
    
public:
    // 기본 병합 정렬
    void sort(vector<int>& arr) {
        // TODO: 병합 정렬 수행
        // 1. 빈 배열이나 단일 요소 배열 확인
        // 2. mergeSortHelper 호출
    }
    
    // 배열 출력
    void print(const vector<int>& arr) {
        // TODO: 배열의 모든 요소 출력
    }
};

// 테스트 함수
void testMergeSort() {
    // TODO: 각 정렬 방법들을 테스트하는 코드 작성
    cout << "Merge Sort Test" << endl;
    
    MergeSort ms;
    
    // 테스트 데이터 생성
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    // 기본 병합 정렬 테스트
    // ms.sort(arr);
    // ms.print(arr);
}

int main() {
    testMergeSort();
    return 0;
} 
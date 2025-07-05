#include <iostream>
#include <vector>
using namespace std;

class BinarySearch {
public:
    // 기본 이진 탐색 (반복문)
    int search(vector<int>& arr, int target) {
        // TODO: 정렬된 배열에서 target을 찾는 이진 탐색
        // 1. left = 0, right = arr.size() - 1로 초기화
        // 2. left <= right 동안 반복
        // 3. mid = (left + right) / 2 계산
        // 4. arr[mid]와 target 비교
        // 5. 찾으면 mid 반환, 없으면 -1 반환
        return -1;
    }
    
    // 재귀적 이진 탐색
    int searchRecursive(vector<int>& arr, int target) {
        // TODO: 재귀를 사용한 이진 탐색
        // 1. 재귀 헬퍼 함수 호출
        return searchRecursiveHelper(arr, target, 0, arr.size() - 1);
    }
    
    // 배열 출력
    void print(const vector<int>& arr) {
        // TODO: 배열의 모든 요소 출력
    }
    
private:
    // 재귀적 이진 탐색 헬퍼 함수
    int searchRecursiveHelper(vector<int>& arr, int target, int left, int right) {
        // TODO: 재귀적 이진 탐색 구현
        // 1. 기본 케이스: left > right
        // 2. mid 계산
        // 3. target과 비교하여 재귀 호출
        return -1;
    }
};

// 테스트 함수
void testBinarySearch() {
    // TODO: 각 탐색 방법들을 테스트하는 코드 작성
    cout << "Binary Search Test" << endl;
    
    BinarySearch bs;
    
    // 테스트 데이터 생성
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    
    // 기본 이진 탐색 테스트
    // int result = bs.search(arr, 7);
    // cout << "Found 7 at index: " << result << endl;
    
    // 재귀적 이진 탐색 테스트
    // int result2 = bs.searchRecursive(arr, 11);
    // cout << "Found 11 at index: " << result2 << endl;
}

int main() {
    testBinarySearch();
    return 0;
} 
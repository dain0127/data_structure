#include <iostream>
#include <vector>
using namespace std;

class LinearSearch {
public:
    // 기본 선형 탐색
    int search(vector<int>& arr, int target) {
        // TODO: 배열에서 target을 찾는 선형 탐색
        // 1. 배열의 처음부터 끝까지 순회
        // 2. 각 요소를 target과 비교
        // 3. 찾으면 인덱스 반환, 없으면 -1 반환
        return -1;
    }
    
    // 배열 출력
    void print(const vector<int>& arr) {
        // TODO: 배열의 모든 요소 출력
    }
};

// 테스트 함수
void testLinearSearch() {
    // TODO: 각 탐색 방법들을 테스트하는 코드 작성
    cout << "Linear Search Test" << endl;
    
    LinearSearch ls;
    
    // 테스트 데이터 생성
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 25, 34};
    
    // 기본 선형 탐색 테스트
    // int result = ls.search(arr, 25);
    // cout << "Found 25 at index: " << result << endl;
}

int main() {
    testLinearSearch();
    return 0;
} 
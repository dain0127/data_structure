# 배열 기반 스택(Array Stack)

## 개념
- 배열을 사용하여 구현한 스택 자료구조
- 고정된 크기를 가지며, top 포인터로 현재 위치를 추적
- LIFO(Last-In, First-Out) 원리로 동작

## 주요 특징
- **메모리**: 연속된 메모리 공간에 저장
- **크기**: 고정 크기 (선언 시 결정)
- **접근**: top 위치만 접근 가능

## 지원하는 연산 (Operations)

### 1. Push (삽입)
- **조건**: 스택이 가득 차지 않아야 함
- **시간 복잡도**: O(1)
- **설명**: top을 증가시키고 해당 위치에 값 저장

### 2. Pop (삭제)
- **조건**: 스택이 비어있지 않아야 함
- **시간 복잡도**: O(1)
- **설명**: top 위치의 값을 반환하고 top 감소

### 3. Peek/Top (조회)
- **조건**: 스택이 비어있지 않아야 함
- **시간 복잡도**: O(1)
- **설명**: top 위치의 값을 반환 (삭제하지 않음)

### 4. isEmpty (비어있는지 확인)
- **조건**: 없음
- **시간 복잡도**: O(1)
- **설명**: top이 -1인지 확인

### 5. isFull (가득 찬지 확인)
- **조건**: 없음
- **시간 복잡도**: O(1)
- **설명**: top이 capacity-1인지 확인

## 시간 복잡도 요약
| 연산 | 시간 복잡도 |
|------|-------------|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| isEmpty | O(1) |
| isFull | O(1) |

## 공간 복잡도
- **배열**: O(n) - 선언된 크기만큼
- **추가 공간**: O(1) - top 변수만

## 실무 활용 사례

### 1. 함수 호출 스택
- **용도**: 함수 호출 정보 저장
- **이유**: LIFO 구조로 함수 반환 순서 관리

### 2. 괄호 검사
- **용도**: 수식의 괄호 짝 맞추기
- **이유**: 여는 괄호는 push, 닫는 괄호는 pop

### 3. 되돌리기(Undo) 기능
- **용도**: 사용자 작업 기록
- **이유**: 최근 작업부터 되돌리기

### 4. 깊이 우선 탐색(DFS)
- **용도**: 그래프/트리 탐색
- **이유**: 재귀 대신 반복문으로 구현

### 5. 후위 표기법 계산
- **용도**: 수식 계산
- **이유**: 연산자 우선순위 처리

### 6. 웹 브라우저 뒤로가기
- **용도**: 방문 페이지 기록
- **이유**: 최근 방문 페이지부터 뒤로가기

## 장단점

### 장점
- ✅ 구현이 간단
- ✅ 빠른 연산 (O(1))
- ✅ 메모리 효율적 (연속 저장)
- ✅ 캐시 지역성 우수

### 단점
- ❌ 크기 고정 (오버플로우 가능)
- ❌ 메모리 낭비 (사용하지 않는 공간)
- ❌ 동적 크기 조절 불가

## 구현 파일
- `array_stack.cpp`: 배열 기반 스택 구현 
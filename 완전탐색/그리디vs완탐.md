

완전탐색은 선택에 따른 이익 증가 여부에 상관 없이 모든 케이스르 전부 탐색하고요

그리디는 현재 상태에서 가능한 선택중 이익이 되는 방향으로만 탐색합니다

그래서 보통 그리디 알고리즘으로는 현재는 잠시 손해보지만 이게 빅픽쳐로 나중에 개이득됨!하는 경우를 탐색하지 못하죠

완전탐색은 손해 보든말든 신경 안쓰니 일단 다 찾고 찾은것중 최대 이익 찾으니 느리지만 확실하구요


재호 정리

그리디는 지금 상황에서 내가 1260원을 가지고 있는데 내가 원하는 최적해를 구할떄 사용된다 즉

500원 짜리로 2개를 받고 100원짜리로 2개를 받고 10원짜리로 6개를 받아서 최소한으로 동전을 줄수 있지만

내가 원하는 최적해는 10원짜리를 126개를 주는것이 최적해이다 그러면 그렇게 구하는 것이 그리디 알고리즘이다.

현재 상태에서 내가 찾고 싶은 최적의 해를 방향으로 구하는 것이다.

하지만 완전탐색을 10원짜리 126개를 주는것부터 시작해서 500원짜리로 2개를 줄수 있는 방법까지 다 ~찾은다음에 

그중에서 내가 원하는 방법을 꺼내서 답을 도출해 내는 것이다.
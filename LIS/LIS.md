

# Alogrithm


오늘 다루는 문제는 유명한 LIS다. 특정 플랫폼의 문제가 아닌, 유명한 예제가 될 수 있는 문제가 생각보다 없다는 것은 내 잘못된 생각이었다. 종만북을 다시 공부하면서 LIS가 꽤나 유명한 문제라는 것을 알게 됐고 그에 대한 풀이를 준비했다. 이번에는 세 가지 방법을 준비했는데: 완전탐색과 동적 계획법, 이진 탐색을 통한 최적화 알고리즘이 있다. 가끔 우리의 익숙한 생각 패러다임 자체를 변화시키면 문제를 더 쉽게 해결할 수 있는 순간들이 있는데 세 번째 풀이가 딱 그런 것 같다. 알고리즘이 어렵지도 않고 꽤나 우아하다.

간만에 문제다운 문제를 다루게 됐는데 얼마나 걸릴지 모르겠다. 있을지도 모르는 익명의 독자들을 위해 도움이 될 수 있도록 해보겠다.

여기서 다룬 두 풀이는 종만북의 풀이를 많이 참고했고 마지막 풀이는 핵심 아이디어를 통해 직접 구현했다.


## LIS : LIS는 Longest Increasing Subsequence 의 약자로 한글로는 ‘최장 증가수열’, 또는 ‘최대 증가 부분수열’로 불린다. LIS는 어떤 수열에서 특정 부분을 지워서 만들어낼 수 있는 증가 부분수열(increasing subsequence) 중 가장 긴 수열을 말하는데 이때 부분수열의 숫자들은 원 배열에서 위치가 이어져 있지 않아도 된다는 주요한 특징이 있다.





[참고] https://shoark7.github.io/programming/algorithm/3-LIS-algorithms
[참고] https://source-sc.tistory.com/15



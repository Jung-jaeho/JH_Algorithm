#include <stdio.h>


int d[100];  //이렇게 초기화를 해주면 배열에 있는 값들은 0으로 초기화가 된다.


int dp(int x){
    if(x == 1)return 1;
    if(x == 2)return 1;
    if(d[x] != 0) return d[x];   //만약에 이미 구한 값이라 이미 구한 값 자체를 반환한다.

 //왜냐하면 피보나치 수열은 첫 시작이 1과 1로 시작하기 때문이다. 그리고 재귀 종료 조건입니다.
    return d[x]=dp(x - 1) + dp ( x - 2);
}

int main(void){

    printf("%d",dp(30));
    return 0;
}
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int number = 7; //예로 노드 7개로 설정
int c[7];    // 방문처리를 위한 c라는 이름의 배열 설정 checked 의 약자
vector<int> a[8];  //각 노드의 인덱스가 1부터 들어갈 수 있도록 8개로 설정

void dfs(int start){

    if(c[start]) return;    //그 노드를 방문했다면 바로 함수를 끝낸
    c[start] = true;        //노드를 처음 방문했다면 방문처리를 한다.
    cout << start << ' ';   // 그 노드를 출력할수 있도록 해준다.

    for(int i = 0; i<a[start].size(); i++){  //인접노드를 하나씩 방문 하면서
       int y = a[start][i]; //그 인접노드를 대상으로 해서 dfs를 계속해서 해주면 된다.
        dfs(y);  // 계속해서 자기와 인접한 dfs를 안정적으로 이루어 진다.
    }



}
int main(void){
    a[1].push_back(2);  //1과 2가 연결되어 있다.
    a[2].push_back(1);  //2과 1이 연결되어 있다.

    a[1].push_back(3); //1과 3이 연결되어 있다.
    a[3].push_back(1);

    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    a[4].push_back(5);
    a[5].push_back(4);

    a[6].push_back(7);
    a[7].push_back(6);

    dfs(1);
    return 0;
}
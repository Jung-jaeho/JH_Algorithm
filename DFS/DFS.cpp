#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int number = 7; //예로 노드 7개로 설정
int c[7];    // 방문처리를 위한 c라는 이름의 배열 설정 checked 의 약자
vector<int> a[8];  //각 노드의 인덱스가 1부터 들어갈 수 있도록 8개로 설정

void bfs(int start){
    queue<int> q; //하나의 큐를 만들어주고
    q.push(start); // 맨처음에 큐에 시작점을 넣어준다.

    c[start] = true; //방문처리를 해준다.
    while(!q.empty())  //반복적으로 특정한 알고리즘을 수행해주면 된다.
    {
        //큐가 비어있을때까지 반복적으로 처리를 해준다.
        int x = q.front(); //큐에서 하나를 꺼내서 변수 x에 담아준다.
        q.pop();
        printf("%d ", x);

        for(int i=0 ; i < a[x].size(); i++)  //i 는 0부터 현재 큐에서 꺼낸 인접 노드들을 방문 하면서
        { //인접 노드들을 방문을 한 상태이면 무시하고 방문을 한 상태가 아니라면 큐에 담아준다.
          //그리고 방문 처리를 해준다.
          int y = a[x][i];
          if(!c[y]){ //방문을 하지 않았다면
            q.push(y);
            c[y] = true;  //방문 처리를 해준다.

          }
        }

    }

}

int main(void){
    a[1].push_back(2);  //1과 2가 연결되어 있다.
    a[2].push_back(1);  //2과 1이 연결되어 있다.

    a[1].push_back(3); //1과 3이 연결되어 있다.
    a[3].push_back(1);

    a[2].push_back(3);
    a[3].push_back(2);
    
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

    bfs(1);
    return 0;
}

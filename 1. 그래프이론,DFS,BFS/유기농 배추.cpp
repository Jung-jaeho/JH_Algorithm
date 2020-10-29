#include <iostream>
#include <list>
#include <vector>

using namespace std;

int cnt=0;
int T,M,N,K; // 테케, 가로,세로,위치 개수
int x,y;
int result=0;
int ny,nx;  //현재 가리키고 있는 위치
int arr[51][51]={0};
bool visited[51][51];
int dy[4]={-1,0,1,0};    // 4방향 아래로 , 오른쪾으로, 위로,왼쪽으로
int dx[4]={0,1,0,-1};

void DFS(int y, int x)
{
    visited[y][x]=1;
    for(int i = 0 ; i < 4 ; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
        if(arr[ny][nx]== 1 && !visited[ny][nx]) DFS(ny,nx);
    }
    return ;
}
int main()
{
    cin >> T;

    while(T--){
        fill(&arr[0][0],&arr[0][0] + 51 * 51 , 0);
        fill(&visited[0][0],&visited[0][0] + 51 * 51 , 0);
        result=0;
        cin >> M >> N >> K;
        for(int i = 0 ; i < K ; i++)
        {
            cin>>x>>y;
            arr[y][x]=1;
        }

        for(int i = 0 ; i < N ; i++)  //세로
        {
            for(int j = 0 ; j < M ;j++)  //가로
            {
                if(arr[i][j]== 1 && !visited[i][j])
                {
                    DFS(i,j);
                    result++;
                }
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}
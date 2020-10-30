#include <stdio.h>
#include <queue>
#include <iostream>

using namespace std;

int N,M;
int a[101][101];
int visit[101][101];

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int x, y;
//방문을 걸고 queue  push를 해준다.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &N,&M);

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            scanf("%1d",&a[i][j]);
        }
    }

    queue<pair<int,int>> q;
    visit[0][0]=1;
    q.push({0,0});
    while(q.size()){
        tie(y,x)= q.front();
        q.pop();
        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= N || nx < 0 || nx >= M || a[ny][nx]==0)continue;
            if(visit[ny][nx])continue;

            visit[ny][nx] = visit[y][x] + 1;
            q.push({ny,nx});
        }
    }

    cout<< visit[N-1][M-1] << "\n";



   return 0;
}
/*
4 6
101111
101010
101011
111011
 */
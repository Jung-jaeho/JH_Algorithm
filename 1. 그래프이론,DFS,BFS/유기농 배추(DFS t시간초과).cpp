#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
int arr[101][101]={0};
bool visited[101][101]={0};
int cnt=1;
int N,M;
int minimum=10001;


void DFS(int x, int y)
{
    if(x==(M-1) && y == (N-1))
    {
        if (minimum > cnt){
            minimum = cnt;
            return;
        }
    }

     for(int i = 0 ; i < 4 ; i++) {
         int nowx = x + dx[i];
         int nowy = y + dy[i];

         if (nowx > M || nowy > N || nowy < 0 || nowx < 0)
             continue;
         if (!visited[nowy][nowx] && arr[nowy][nowx] == 1) {
             visited[nowy][nowx] = 1;
             cnt++;
             DFS(nowx, nowy);
             cnt--;
             visited[nowy][nowx] = 0;
         }
     }
}
int main(){

    cin>>N>>M; // 깊이와 가로

    for(int i = 0 ; i < N ; i++)
        for(int j = 0 ; j < M ; j++)
            scanf("%1d",&arr[i][j]);

    visited[0][0]=1;
    DFS(0,0);





    printf("%d",minimum);




    return 0;
}


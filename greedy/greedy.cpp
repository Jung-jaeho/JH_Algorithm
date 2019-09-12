#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100001];

int main() {

    int i=0;
    int N;
    int max;
    int num=0;


    scanf("%d",&N);

    scanf("%d",&arr[0]);

    max=arr[0];

    for(i=1 ; i < N ; i++)
    {
        scanf("%d",&arr[i]);
        if(max>arr[i])
        {
            max=arr[i];
        }
    }

    sort(arr,arr+N);

    i=0;

    for( num=N ; num >= 1;num--)
    {
        if( max < arr[i] * num)
        {
            max= arr[i] * num;
        }
        i++;
    }

    printf("%d",max);
    return 0;
}
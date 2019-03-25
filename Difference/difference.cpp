#include <bits/stdc++.h>
#define MAXIN 10002
#define LIMI 200000002

using namespace std;

int A[MAXIN];
int used[LIMI];


int main(){
    int m,start;
    while(scanf("%d %d",&start,&m) == 2){
        //memset( used,0,sizeof used);
        
        int res = 0, d = 1;
        for(int i = 1; i < MAXIN; i++){
            A[i] = start;
            if(start < LIMI){
                used[start] = 1;
            }
            for(int j = 1; j <= i; j++ ){
                if(start - A[j] < LIMI){
                    used[start-A[j]] = 1;
                }
            }
            if(used[m]){
                res = i;
                break;
            }
            while(used[d]){
                d++;
            }
            start += d;
            
        }
        printf("%d\n",res);
    }

    return 0;
}
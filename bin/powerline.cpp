/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, i, days=0;
int H[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    for(i=0; i < N; i++)
        assert(1 == scanf("%d", &H[i]));

    for(int i=0; i < N; i++){
        if(H[i]<H[(i+1)]){
            days++;
        }
    }

    printf("%d\n", days); // print the result

    return 0;
}

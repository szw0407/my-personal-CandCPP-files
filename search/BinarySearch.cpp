#include <time.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, i;
    int a[500];
    n = 500;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        a[i] = rand();
    }
    int x;

    sort(&a[0], &a[500]);
    int j;

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 10; j++) {
            printf("%8d", a[i * 10 + j]);
        }
        printf("\n");
    }
    printf("input a number to search from the list of numbers above:");
    scanf("%d", &x);
    int BinarySearch(int, int, int, int[]);
    n = BinarySearch(x, 0, 499, a);
    if (n == -1) {
        printf("not found");
    }
    else {
        printf("found %d : %d", n, a[n]);
    }
    return 0;
}

int BinarySearch(int x, int frm, int end, int a[]) {
    int s = (int)(frm + end) / 2;
    if (frm == end) {
        if (x != a[frm]) {
            return -1;
        }
        else {
            return frm;
        }
    }
    else if (s == frm) {
        if (x == a[s]) {
            return s;
        }
        else if (x == a[++s]) {
            return s;
        }
        else {
            return -1;
        }
    }

    else {

        if (x == a[s]) {
            return s;
        }
        else if (x < a[s]) {
            BinarySearch(x, frm, s - 1, a);
        }
        else {
            BinarySearch(x, s + 1, end, a);
        }
    }
}

// 0-499
// 50.3
// s=50
// 51-499
// 499-51+1
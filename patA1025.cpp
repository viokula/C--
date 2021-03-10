//
// Created by LU on 2021/3/8.
//

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct Student{
    char id[15];
    int score;
    int location_number;//考场号
    int local_rank;
}stu[30010];
bool cmp(Student a,Student b){
    if(a.score!=b.score)
        return a.score>b.score;
    else
        return strcmp(a.id,b.id) < 0;//按照准考证号从小到大排序
}

int main() {
    int n,k,
    return 0;
}

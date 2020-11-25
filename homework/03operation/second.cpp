#include <stdio.h>
/**
Description
给定一个正整数数组（元素的值都大于零），输出数组中第二个重复出现的正整数，如果没有，则输出字符串"NOT EXIST"。
Input
第一行为整数m，表示有m组数据。
其后每组数据分两行：
第一行为正整数n（3<n<500），表示数组的长度；
第二行是n个正整数，正整数间用空格分开。
Output
有m行输出，每行输出对于数组中第二个重复出现的正整数，如果没有，则输出字符串"NOT EXIST"。
Sample Input
5
10
1 3 5 7 9 7 8 5 2 6
10
1 3 5 5 7 9 7 8 2 6
10
1 3 5 5 7 9 4 8 2 6
10
1 3 5 7 2 9 9 8 7 5
10
1 3 5 2 7 9 9 8 7 5
Sample Output
7
7
NOT EXIST
7
7
 */
int main()
{
    int n;
    printf("请输入数据\n");
    scanf("%d",&n);
    int arr [100];
    int m;
    for (int i = 0; i < n; ++i) {
        //count 不能定义为全局变量
        int count =0;
        scanf("%d",&m);
        //输入数组
        for (int j = 0; j < m; ++j) {
            scanf("%d",&arr[j]);
        }
        for (int k = 0; k < m; ++k) {
            for (int j = k+1; j < m; ++j) {
                if(arr[k] == arr[j]){
                    count++;
                    break;
                }
            }
            if(count==2){
                printf("\n%d\n",arr[k]);
                break;
            }

        }
        if(count!=2) printf("NOT EXIST\n");

    }

    return 0;
}
///**
//Description
//输入n个分数并对他们求和，用约分之后的最简形式表示。
//比如：
//q/p = x1/y1 + x2/y2 +....+ xn/yn，
//q/p要求是归约之后的形式。
//如：5/6已经是最简形式，3/6需要规约为1/2, 3/1需要规约成3，10/3就是最简形式。
//
//PS:分子和分母都没有为0的情况，也没有出现负数的情况
//Input
//第一行的输入n,代表一共有几个分数需要求和
//接下来的n行是分数
//Output
//输出只有一行，即归约后的结果
//Sample Input
//2
//1/2
//1/3
//Sample Output
//5/6
//
// 2  1/6 2/6
// 辗转相除法
//用于求两个数的最大公约数
//具体操作：拿较大的数a对较小的数b取模，b取代a的位置，取模的值取代b的位置，重复操作知道b=0，这时a的值就是最大公约数。
//迭代公式：gcd(a,b)=gcd(b,a%b)
// */
//#include <stdio.h>
//#include <iostream>
//using namespace std;
////辗转相除法,求出做大公约数
//int gcd(int a, int b)
//{
//    if(b==0)
//        return a;
//    else return gcd(b,a%b);
//}
//int main()
//{
//    int n =0;
//    printf("请输入数据\n");
//    scanf("%d",&n);
//    int m[100];//分子数组
//    int d[100];//分母数组
//
//    int sum1 = 0;
//    int sum2 = 1;
//    //输入数据
//    for (int i = 0; i < n; ++i) {
//        scanf("%d/%d",&m[i],&d[i]);
//    }
//    //分母
//    for (int j = 0; j < n; ++j) {
//        sum2 *= d[j];
//    }
//    //分子
//    for (int k = 0; k < n; ++k) {
//        sum1 += (sum2 / d[k])*m[k];
//    }
//    //分数化简
//    int  c = gcd(sum1, sum2);
//    sum1 /= c;
//    sum2 /= c;
//    if (sum2 == 1)cout << sum1;
//    else cout << sum1 << "/" << sum2;
//
//    return 0;
//}
////
//// Created by 沙龙腾 on 2020-03-05.
////
//
//#include <stdio.h>
///**
// * 计算非负整数 m 到 n（包括m 和 n ）之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。例如 m=3, n=12,
// * 其和则为：3+5+7+9+11=35
// */
//int main()
//{
//    int m,n,sum=0;
//    printf("请输入非负整数m和n");
//    scanf("%d,%d",&m,&n);
//
//    //如果m是偶数，那么给m变成计数
//    if(m % 2 == 0)
//        ++m;
//    for (int i = m; i < n; i+=2)
//    {
//        sum += i;
//
//    }
//    printf("%d\n",sum);
//    return 0;
//}
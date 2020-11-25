//#include <stdio.h>
///**
//Description
//给定k（1
//Input
//输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
//Output
//输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
//Sample Input
//5
//1 5 8 10 5
//Sample Output
//1
//2
//1
// */
//int main()
//{
//    int n;
//    int a[100];
//    int oneCount = 0;
//    int fiveCount = 0;
//    int tenCount = 0;
//    scanf("%d",&n);
//
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d",&a[i]);
//    }
//
//    for (int j = 0; j < n; ++j)
//    {
//        if(a[j] == 1)
//        {
//            oneCount++;
//        }
//        if(a[j] == 5)
//        {
//            fiveCount++;
//        }
//        if(a[j] ==10)
//        {
//            tenCount++;
//        }
//    }
//    printf("%d\n%d\n%d",oneCount,fiveCount,tenCount);
//    return 0;
//}
//

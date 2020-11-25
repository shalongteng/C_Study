//#include <stdio.h>
///**
//Description
//给定一个十进制正整数n，写下从1开始到n的所有整数，然后数一下其中所有出现的“1”的个数。例如当n=2时，写下1,2。这样只出现了1个“1”；
//当n=12时，写下1，2，3，4，5，6，7，8，9，10，11，12。这样出现了5个“1”。
//Input
//正整数n
//Output
//“1”的个数
//Sample Input
//12
//Sample Output
//Number of one in 12 is 5.
// */
// /**
//  * 把这个求解 分解成两步
//  * 第一：循环n次
//  * 第二：对一个整数求1有几个
//  */
//int main()
//{
//    int n;
//
//    int sum = 0;
//    scanf("%d",&n);
//    //第一：循环n次
//    for (int i = 1; i <= n; ++i) {
//        //第二：对一个整数求1有几个
//        int tmp = i;
//        int count = 0;
//        do
//        {
//            if(tmp%10==1)
//            {
//                count++;
//            }
//        }while (tmp/=10);
//        sum += count;
//    }
//    printf("number of one in %d is %d",n,sum);
//    return 0;
//}
//#include <iostream>
///**
//Description
//将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。
//Input
//输入为两行：第一行数组中元素的个数n（1 < n < 100)，第二行是n个整数，每两个整数之间用空格分隔。
//Output
//输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。
//Sample Input
//5
//8 6 5 4 1
//Sample Output
//1 4 5 6 8
// */
//int main()
//{
//    int n;
//    // 数组不要用变量初始化，在clion中变量定义数组大小不报错，但是在vs中是报错的。
//    int a[5];
//    int b[5];
//    scanf("%d",&n);
//
//    //数组赋值
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d",&a[i]);
//    }
//    //打印输出
//    for (int k = n-1; k >= 0; --k)
//    {
//        printf("%d ",a[k]);
//    }
//    return 0;
//}

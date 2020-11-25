//#include <iostream>
//#include <math.h>
///**
//Description
//给定三角形的三边长度，根据海伦公式求出三角形面积。
//              _____________________
//海伦公式：S = √(p*(p-a)*(p-b)*(p-c))
//
//其中a b c分别表示三角形的三条边的长度，p = (a+b+c)/2
//Input
//第一行是一个整数n，表示的是输入数据有n行（n < 100）。
//接下来的n行，每行有3个数，表示三角形的三条边的长度。
//Output
//对每一个三角形，输出其面积，结果保留2位小数。
//Sample Input
//1
//3 4 5
//Sample Output
//6.00
//Hint
//开方运算可以使用sqrt函数
// */
//using namespace std;
//int main()
//{
//    int a,b,c;
//    printf("第一行是一个整数n，表示的是输入数据有n行（n < 100）。\n"
//           "接下来的n行，每行有3个数，表示三角形的三条边的长度。\n");
//
//    for (int i = 0; i < 3; ++i) {
//        scanf("%d",&a);
//        scanf("%d",&b);
//        scanf("%d",&c);
//        int p = (a+b+c)/2;
//        double tmp = (p*(p-a)*(p-b)*(p-c));
//
//        printf("三角形面积是%.2lf\n",sqrt(tmp));
//    }
//
//    return 0;
//}

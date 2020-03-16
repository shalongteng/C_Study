///**
// * 给定三角形的三边长度，根据海伦公式求出三角形面积。
//                 _____________________
//    海伦公式：S = √(p*(p-a)*(p-b)*(p-c))
//
//    其中a b c分别表示三角形的三条边的长度，p = (a+b+c)/2
//
//    2
//    3 4 5
//    3 4 5
// */
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n,a,b,c;
//    printf("第一行是一个整数n，表示的是输入数据有n行（n < 100）。\n"
//           "接下来的n行，每行有3个数，表示三角形的三条边的长度。\n");
//    scanf("%d",&n);
//
//
//    for (int i = 0; i < n; ++i) {
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

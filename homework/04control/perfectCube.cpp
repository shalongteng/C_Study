//#include <iostream>
//using namespace std;
///**
//Description
//a的立方 = b的立方 + c的立方 + d的立方为完美立方等式。例如12的立方 = 6的立方 + 8的立方 + 10的立方 。
//编写一个程序，对任给的正整数N (N≤100)，寻找所有的四元组(a, b, c, d)，使得a的立方 = b的立方 + c的立方 + d的立方，其中a,b,c,d 大于 1, 小于等于N。
//Input
//正整数N (N≤100)
//Output
//每行输出一个完美立方，按照a的值，从小到大依次输出。当两个完美立方等式中a的值相同，
//则依次按照b、c、d进行非降升序排列输出，即b值小的先输出、然后c值小的先输出、然后d值小的先输出。
//Sample Input
//24
//Sample Output
//Cube = 6, Triple = (3,4,5)
//Cube = 12, Triple = (6,8,10)
//Cube = 18, Triple = (2,12,16)
//Cube = 18, Triple = (9,12,15)
//Cube = 19, Triple = (3,10,18)
//Cube = 20, Triple = (7,14,17)
//Cube = 24, Triple = (12,16,20)
//Hint
//注意输出的格式应和例子输出一致
// */
//int main() {
//    int n;
//    cin >> n;
//
//    for (int a = 0; a < n; ++a) {
//        for (int b = 2; b <= a - 1; b++) {
//            for (int c = b; c <= a - 1; c++) {
//                for (int d = c; d <= a - 1; d++) {
//                    if (a * a * a == b * b * b + c * c * c + d * d * d) {
//                        printf("Cube = %d, Triple = (%d, %d, %d)\n", a, b, c, d);
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}
///**
//Description
//赵、钱、孙、李四个人中既有大人也有小孩，给他们称体重时发现，他们每个人的体重都不一样，且体重（单位：公斤）恰好是10的整数倍，
// 且他们的体重都不高于50公斤，已知赵、钱两人的体重之和恰好等于孙、李两人的体重之和; 赵、李两人的体重之和大于孙、钱两人的体重之和，
// 并且赵、孙俩人的体重之和还小于钱的体重。请编写一个程序，按照由大到小的顺序，打印出四人的姓氏的首字母和体重数（中间用空格隔开，每人一行）。
//Input
//无
//Output
//打印出四人的姓氏的首字母和体重数（中间用空格隔开，每人一行）。
//Sample Input
//无
//Sample Output
//z 10
//q 20
//s 30
//l 40
//（以上输出仅用于说明格式）
// */
//#include <iostream>
//using namespace std;
//int main() {
//    for (int i = 10; i <= 50; i+=10) {
//        for (int j = 10; j <= 50; j+=10) {
//            for (int k = 10; k <= 50; k+=10) {
//                for (int l = 10; l <= 50; l+=10) {
//                    if(i+j==k+l && i+l>j+k && i+k < j)
//                        printf("%d\t%d\t%d\t%d",i,j,k,l);
//                }
//            }
//        }
//    }
//
//    return 0;
//}
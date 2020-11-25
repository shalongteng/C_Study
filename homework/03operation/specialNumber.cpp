//#include <iostream>
///**
//Description
//一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示.
//
//输入为1时，输出此自然数的十进制表达式；输入为2时，输出此自然数的七进制表达式；输入为3时，输出此自然数的九进制表达式。
//Input
//输入为1，2，3中的一个数。
//Output
//输出一行。
//输出为十进制或七进制或九进制数
//Sample Input
//1
// */
//
//using namespace std;
//int main()
//{
//    int n = 0;
//    int seven[3];
//    int nine[3];
//
//    for (int i = 49; i < 730; ++i) {
//        //十进制转化为七进制
//        for (int j = 0,k =i ; j < 3; j++)
//        {
//            seven[j] = k % 7;
//            k /= 7;
//        }
//        //十进制转化为9进制
//        for (int j = 0,k =i; j < 3; j++)
//        {
//            nine[j] = k % 9;
//            k /= 9;
//        }
//        if (seven[0] == nine[2] && seven[1] == nine[1] && seven[2] == nine[0])
//        {
//            cout << "十进制 ："<< i << endl;
//            cout << "七进制 ：" << seven[2] << seven[1] << seven[0] << endl;
//            cout << "九进制 ："<< nine[2] << nine[1] << nine[0] << endl;
//            break;
//        }
//    }
//    return 0;
//}
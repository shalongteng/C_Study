//#include <stdio.h>
///**
//Description
//一个笼子里面关了鸡和兔子。已经知道了笼子里面鸡和兔子的总数a和脚的总数b，问笼子里面有多少只鸡，有多少只兔子
//Input
//输入仅一行，包括两个整数a和b，我们保证输入的合法性
//Output
//输出也是一行，输出鸡的个数和兔子的个数，中间用空格隔开
//Sample Input
//5 14
//Sample Output
//3 2
// */
//#include <iostream>
//
//using namespace std;
///**
// * 不需用循环
// */
//int main() {
//    int x;//鸡的数量
//    int a;//鸡和兔子的总数a
//    int b;//脚的总数b
//    cout << "请输入鸡的个数和脚丫子的个数" << endl;
//    cin >> a >> b;
//
//    x=(b-2*a)/2;
//    cout << "鸡有" << a-x << endl;
//    cout << "兔子有" << x << endl;
//    return 0;
//}
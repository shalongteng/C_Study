///**
//Description
//已知一个数组，这个数组的一个平台（Plateau）就是连续的一串值相同的元素，并且这一串元素不能再延伸。例如，
// 在1，2，2，3，3，3，4，5，5，6中1，2-2，3-3-3，4，5-5，6都是平台。
// 试编写一个程序，接收一个数组，把这个数组最长的平台找出来。在上面的例子中3-3-3就是最长的平台。
//
//Input
//输入数据有多组，每组两行。
//第一行有一个整数n，为数组元素的个数，n<10000。
//接下来一行为n个整数。（n个整数从小到大排列）
//最后会出现一个n=0，表示测试数据结尾。
//Output
//输出最长平台的长度。
//Sample Input
//10
//1 2 2 3 3 3 4 5 5 6
//5
//1 1 1 2 7
//0
// Sample Output
//3
//3
// */
//#include <iostream>
//using namespace std;
//int main() {
//    int n,a[100];
//    while (true)
//    {
//        cin >> n;
//        if(!n)
//            break;
//        for (int i=0; i<n; i++) {
//            cin >> a[i];
//        }
//
//        //使用count1 代表当前平台的长度
//        int count1 = 1;
//        //使用count2 保留最大长度
//        int count2 = 1;
//        //1 2 2 3 3 3 4 5 5 6
//        for (int j = 0; j < n; ++j) {
//            if(a[j] ==a[j+1]){
//                if(++count1 > count2)
//                    count2 = count1;
//            } else{
//                count1 = 1;
//            }
//
//        }
//        cout << count2 << endl;
//    }
//    return 0;
//}
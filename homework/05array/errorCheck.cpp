///**
// * Description
//给出由0和1组成的矩阵，如果矩阵的每一行和每一列的1的数量都是偶数，则认为符合条件。
//你的任务就是检测矩阵是否符合条件，或者在仅改变一个矩阵元素的情况下能否符合条件。
//"改变矩阵元素"的操作定义为0变成1，1变成0。
//Input
//包含多个测试数据。每个测试数据有多行，第一行为矩阵的大小n(n<100)，以下n行为矩阵的值。
//输入以0结束。
//Output
//如果矩阵符合条件，则输出OK
//如果矩阵仅改变一个矩阵元素就能符合条件，则输出Change bit (x,y)，其中x和y为该元素的坐标
//如果不符合以上两条，输出Corrupt
//Sample Input
//4
//1 0 1 0
//0 0 0 0
//1 1 1 1
//0 1 0 1
//4
//1 0 1 0
//0 0 1 0
//1 1 1 1
//0 1 0 1
//4
//1 0 1 0
//0 1 1 0
//1 1 1 1
//0 1 0 1
//0
//Sample Output
//OK
//Change bit (2,3)
//Corrupt
//Hint
//OK
//Change bit (2,3)
//Corrupt
// */
////解题思路：难点——如果矩阵仅改变一个矩阵元素就能符合条件，则输出需要改变的元素所在的行号和列号，
////解决方法：只要记录奇数行奇数列判断是否只有一个，则可解决
//#include<iostream>
//using namespace std;
//int main(){
//    int n, arr[105][105], x[105], y[105], row = 0, column = 0;
//    while (true)
//    {
//        cin >> n;
//        if(!n)
//            break;
//        //循环输入矩阵
//        for(int i = 1; i <= n; i++){
//            for(int j = 1; j <= n; j++){
//                cin >> arr[i][j];
//            }
//        }
//        int k = 0;
//        //记录每一行
//        for(int i = 1; i <= n; i++){
//            for(int j = 1; j <= n; j++){
//                row += arr[i][j];
//            }
//            if(row % 2 != 0){
//                x[k] = i;
//                k++;
//            }
//            row = 0;
//        }
//        //记录每一列
//        int l = 0;
//        for(int i = 1; i <= n; i++){
//            for(int j = 1; j <= n; j++){
//                column += arr[j][i];
//            }
//            if(column % 2 != 0){
//                y[l] = i;
//                l++;
//            }
//            column = 0;
//        }
//        //如果为1则证明可以经过一次修改使其正常
//        if(l == 1 && k == 1){
//            printf("Change bit (%d,%d)\n",x[0], y[0]);
//        }else if(l == 0 && k == 0){
//            cout << "OK" <<endl;
//        }else{
//            cout << "Corrupt" <<endl;
//        }
//    }
//
//
//    return 0;
//}

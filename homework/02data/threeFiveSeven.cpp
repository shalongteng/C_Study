//#include <stdio.h>
//#include <iostream>
///**
//Description
//输入一个整数，判断它能否被3，5，7整除，并输出以下信息：
//（1）能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；
//（2）能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者 3 7或者5 7,中间用空格分隔）
//（3）能被其中一个数整除（输出这个除数）
//（4）不能被任何数整除；（输出小写字符n)
//Input
//一个整数
//Output
//实现题目的要求
//Sample Input
//21
//Sample Output
//3 7
// */
//using namespace std;
//int main()
//{
//    int n,a=0;
//    cin>>n;
//    if(n%3==0) a=a+1;
//    if(n%5==0) a=a+2;
//    if(n%7==0) a=a+4;
//    if(a==0) cout<<"n";
//    if(a==1) cout<<"3";
//    if(a==2) cout<<"5";
//    if(a==4) cout<<"7";
//    if(a==7) cout<<"3 5 7";
//    if(a==3) cout<<"3 5";
//    if(a==5) cout<<"3 7";
//    if(a==6) cout<<"5 7";
//    return 0;
//}
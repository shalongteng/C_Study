///**
//Description
//在一次考试中，每个学生的成绩都不相同，现知道了每个学生的学号和成绩，求[考]第k名学生的学号和成绩。
//Input
//第一行有两个整数，学生的人数n（1≤n≤100），和求第k名学生的k（1≤k≤n）。
//其后有n行数据，每行包括一个学号（整数）和一个成绩（浮点数），中间用一个空格分隔。
//Output
//输出第k名学生的学号和成绩，中间用空格分隔。（注：请用%g输出成绩）
// %g是C语言printf()函数的一个输出格式类型，它表示以%f%e中较短的输出宽度输出单、双精度实数，在指数小于-4或者大于等于精度时使用%e格式。
//Sample Input
//5 3
//90788001 67.8
//90788002 90.3
//90788003 61
//90788004 68.4
//90788005 73.9
//Sample Output
//90788004 68.4
// */
//#include <stdio.h>
//#include <iostream>
//struct stu
//{
//    int num;
//    double score;
//}a[1001];
//
////int compare(const stu &a,const stu &b)
////{
////    return a.score > b.score;
////}
//using namespace std;
//int main()
//{
//    int n,k;
//    stu student[100],t;
//    cout << "请输入数据" << endl;
//    scanf("%d%d",&n,&k);
//    //输入学生 原始数据
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> student[i].num >> student[i].score;
//    }
//    //求出第k名 选择排序 降序
//    for(int i=0;i<n;i++)
//        for(int j= i+1;j<n;j++)
//        {
//            t = student[i];
//            if (student[i].score < student[j].score)
//            {
//                student[i]=student[j];
//                student[j]= t;
//            }
//        }
//
//    cout << student[k-1].num << " " << student[k-1].score << endl;
//    return 0;
//}
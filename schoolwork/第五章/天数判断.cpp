///**
//题目内容：编写程序，从键盘上输入年份和月份，计算并输出这一年的这一月共有多少天。
//
//输入样例：2019-3
//
//输出样例：31
// */
//#include <stdio.h>
//int main()
//{
//    int year=0,month=0,day =0;
//    printf("输入年份和月份\n");
//
//    scanf("%d-%d",&year,&month);
//
//    //闰年
//    if(year%4==0&&year%100!=0||year%400==0)
//    {
//        if(month == 1||
//        month== 3||
//        month== 5||
//        month== 7||
//        month== 8||
//        month== 10||
//        month== 12
//        )
//            day= 31;
//        else if(month ==2)
//            day = 29;
//        else
//            day=30;
//    } else//平年
//    {
//
//        if(month == 1||
//           month== 3||
//           month== 5||
//           month== 7||
//           month== 8||
//           month== 10||
//           month== 12
//                )
//            day= 31;
//        else if(month ==2)
//            day = 28;
//        else
//            day=30;
//    }
//    printf("%d年%d月共有%d天",year,month,day);
//    return 0;
//}
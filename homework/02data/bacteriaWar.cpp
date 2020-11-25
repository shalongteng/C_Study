//#include <stdio.h>
///**
//Description
//有两种细菌，一种是有害菌，繁殖能力很强，每小时会繁殖一倍；另一种是有益菌，繁殖能力较弱，每小时能繁殖百分之五。但在单位体积内，
// 当有害菌数量超过一百万时，多出的细菌会因为密度太大而迅速死亡，直到细菌数量下降到一百万。已知每个有益菌每小时能消灭一个有害菌。
// 给定单位体积内有害菌和有益菌的初始数量，请问多少小时后，有害菌将被有益菌消灭干净？
//Input
//输入的第一行为一个整数n，表示后边有n组数据。
//每组数据占一行，有两个整数，依次为有害菌和有益菌单位体积中的初始数量。整数之间用一个空格分隔。
//Output
//输出有n行，每行一个整数，为每组数据对应的有害菌将被有益菌消灭干净所用的小时数。
//Sample Input
//4
//364 78
//289 48
//952 40
//966 23
//Sample Output
//187
//199
//203
//220
//Hint
//1. 被消灭的有害菌不能繁殖；
//2. 有害菌的总数最大为一百万。
// */
//int main()
//{
//    int n,bad,good;
//    scanf("%d",&n);
//    while(n--) {
//        scanf("%d %d",&bad,&good);
//        int hour = 0;
//        while(bad > 0) {
//            bad -= good;
//            bad <<= 1;
//            good *= 1.05;
//            hour++;
//            if(bad > 1000000)
//                bad = 1000000;
//        }
//
//        printf("%d\n",hour);
//    }
//    return 0;
//}
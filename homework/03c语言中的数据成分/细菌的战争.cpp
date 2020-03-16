///**
// * 有两种细菌，一种是有害菌，繁殖能力很强，每小时会繁殖一倍；另一种是有益菌，繁殖能力较弱，每小时能繁殖百分之五。
// * 但在单位体积内，当有害菌数量超过一百万时，多出的细菌会因为密度太大而迅速死亡，直到细菌数量下降到一百万。
// * 已知每个有益菌每小时能消灭一个有害菌。给定单位体积内有害菌和有益菌的初始数量，请问多少小时后，
// * 有害菌将被有益菌消灭干净？
// */
//#include <iostream>
//using namespace std;
//int main()
//{
//    cout << "输入的第一行为一个整数n，表示后边有n组数据。\n"
//            "\n"
//            "每组数据占一行，有两个整数，依次为有害菌和有益菌单位体积中的初始数量。整数之间用一个空格分隔。" << endl;
//
//
//    int n,bad,good;
//    scanf("%d",&n);
//    while(n--) {
//        scanf("%d %d",&bad,&good);
//        int hour = 0;
//        while(bad > 0) {
//            bad -= good;
//            bad = bad << 1;
//            good *= 1.05;
//            hour++;
//            if(bad > 1000000)
//                bad = 1000000;
//        }
//
//        printf("%d\n",hour);
//    }
//    return 0;
//
//}

//#include<stdio.h>
//#include <iostream>
//using namespace std;
//int main()
//
//{
//
////    int x=10,y=3,z;
////
////    printf("%d\n",z=(x%y,x/y));
////    printf("%d\n",y%x);
//
//
//
////    int x;
////
////    float y = 8e2;
////
////    y=-6.2e4;
////
////    x=(int)y+10;
////
////    printf("x=%d,y=%f\n",x,y);
////    printf("%x",-1);
//
//    int x=8,y=5,z;
//    cout << (z=x/y+0.4) << endl;
//    return 0;
//
//}
///**
//问题描述
//    一个笼子里面关了鸡和兔子（鸡有2只脚，兔子有4只脚）。已经知道了笼子里面脚
//    的总数a，问笼子里面至少有多少只动物，至多有多少只动物？
//样例
//    2    0 0
//    3
//    20   5 10
// */
//
//#include <stdio.h>
//int main(){
//    int nCase,nFeet;
//    scanf("%d",&nCase);
//
//    for (int i = 0; i < nCase; ++i) {
//        scanf("%d",&nFeet);
//        if(nFeet % 2 != 0){
//            printf("至少有0只动物，至多有0只动物");
//        } else if (nFeet % 4 == 0){
//            printf("至少有%d只动物，至多有%d只动物",nFeet/4,nFeet/2);
//        } else{
//            printf("至少有%d只动物，至多有%d只动物",nFeet/4+1,nFeet/2);
//        }
//    }
//    return 0;
//}
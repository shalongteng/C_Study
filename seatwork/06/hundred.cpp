///**
// * 问题描述
//假定小鸡每只5角，公鸡每只2元，母鸡每只3元。现在有100元钱要求买100只鸡，编程列出
//所有可能的购鸡方案。
// */
// /**
//  * 不是一种组合，有多种。
//  * 计算机可以穷举遍历。循环尝试不同的x y z
//  */
//#include <stdio.h>
//int main(){
//    //int k = 100-i-j; 这样可以减少一层for循环
//    for (int i = 0; i < 33; ++i) {
//        for (int j = 0; j < 50; ++j) {
//            int k = 100-i-j;
//            if(3*i + 2*j + k/2 == 100){
//                printf("小鸡买%d只，公鸡买%d只，母鸡买%d只\n",k,j,i);
//            }
//        }
//    }
//    return 0;
//}

///**
// *Description
//3���˱ȷ�����ÿ��˵�����仰��
//A˵��B���ҳԵĶ࣬C���ҳԵ�һ����
//B˵��A���ҳԵĶ࣬AҲ��C�ԵĶ�
//C˵���ұ�B�Եö࣬B��A�ԵĶࡣ
//��ʵ�ϣ���������ȷ���Եĸ����Ƿ���Ĺ�ϵ��
//���̰������Ĵ�С���3���˵�˳��
//Input
//������
//Output
//���շ�����С���3��˳�򣬱��磺
//ABC
//Sample Input
//��
//Sample Output
//��
// */
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main()
//{
//    int A,B,C;//����  1 2 3 ��ʾ
//    int a,b,c;//��ȷ��
//
//    cout<<"�����˵ķ�����С�����ǣ�"<<endl;
//    for(A=0;A<3;A++)
//        for(B=0;B<3;B++)
//            for(C=0;C<3;C++)
//            {
//                a=(A<B)+(A==C);//a�Ķ���
//                b=(A>B)+(A>C);
//                c=(C>B)+(B>A);
//
//                if(a>b&&b>c    &&    A<B&&B<C)
//                    cout<<"ABC"<<endl;
//
//                if(a>c&&c>b    &&    A<C&&C<B)
//                    cout<<"ACB"<<endl;
//
//                if(b>a&&a>c    &&    B<A&&A<C)
//                    cout<<"BAC"<<endl;
//
//                if(b>c&&c>a    &&    B<C&&C<A)
//                    cout<<"BCA"<<endl;
//
//                if(c>a&&a>b    &&    C<A&&A<B)
//                    cout<<"CAB"<<endl;
//
//                if(c>b&&b>a    &&    C<B&&B<A)
//                    cout<<"CBA"<<endl;
//            }
//    return 0;
//}
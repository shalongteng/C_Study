//#include <iostream>
///**
//Description
//����Ǹ����� m �� n������m �� n ��֮������������ĺͣ����У�m ������ n����n ������300������ m=3, n=12, �����Ϊ��3+5+7+9+11=35
//Input
//������ m �� n���������Կո��������� 0 <= m <= n <= 300 ��
//Output
//����֮��
//Sample Input
//7 15
//Sample Output
//55
// */
//using namespace std;
//int main(){
//    int m,n,sum=0;
//    cout<< "������Ǹ�����m��n" << endl;
//    scanf("%d%d",&m,&n);
//
//    //���m��ż������ô��m�������
//    if(m % 2 == 0)
//        ++m;
//    for (int i = m; i <= n; i+=2)
//    {
//        sum += i;
//    }
//    printf("%d\n",sum);
//    return 0;
//}
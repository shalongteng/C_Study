///**
//Description
//��һ�ο����У�ÿ��ѧ���ĳɼ�������ͬ����֪����ÿ��ѧ����ѧ�źͳɼ�����[��]��k��ѧ����ѧ�źͳɼ���
//Input
//��һ��������������ѧ��������n��1��n��100���������k��ѧ����k��1��k��n����
//�����n�����ݣ�ÿ�а���һ��ѧ�ţ���������һ���ɼ��������������м���һ���ո�ָ���
//Output
//�����k��ѧ����ѧ�źͳɼ����м��ÿո�ָ�����ע������%g����ɼ���
// %g��C����printf()������һ�������ʽ���ͣ�����ʾ��%f%e�н϶̵��������������˫����ʵ������ָ��С��-4���ߴ��ڵ��ھ���ʱʹ��%e��ʽ��
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
//    cout << "����������" << endl;
//    scanf("%d%d",&n,&k);
//    //����ѧ�� ԭʼ����
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> student[i].num >> student[i].score;
//    }
//    //�����k�� ѡ������ ����
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 6

int main()
{
    //ʹ���ַ��������ʾ�ַ���
    int i;
    int count = 5;
    char temp[8];
    char emperorNsme[50];       //�ʵ۵�����
    int choice;                 //�ʵ۵�ѡ��1~4֮��
    char name[MAX][20] = {"����","����","����","��ʩ","�ײ�"};
    //������������
    char levelName[5][10] = {"����","����","����","�ʹ���","�ʺ�"};
    int levels[MAX] = {1,2,3,4,5,-1};  //���ڴ��ÿ�����ӵļ���
    //loves�����е�ÿһ��Ԫ�ض�Ӧÿ�����ӵĺøж�
    int loves[MAX] = {100,100,100,100,100,-1};
      printf("����\t\t����\t\t�øж�\n");
      for(i = 0;i < count;i++)
    {
      printf("%s\t\t%s\t\t%d\n",name[i],levelName[levels[i]],loves[i]);
    }
    printf("\n**************************************\n");
    printf("�����뵱ǰ�ǻ��ʵ۵�����\n");
    scanf("%s",emperorNsme);
    printf("��ʱ�Ļʵ���%s,�ʵ���������������\n");
    printf("1���ʵ���ּѡ����\t (���ӹ���)\n");
    printf("2�����Ƴ��ң�\t\t (�޸�״̬���� )\n");
    printf("3�������乬��\t\t (ɾ������)\n");
    printf("4�������ټ�����ȥС������������¡�\n");
    printf("������ѡ��");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(count < MAX)
        {
            printf("������Ҫ�����������䣺");
            scanf("%s",name[count]);
            levels[count] = 0;
            loves[count] = 100;
            printf("�����������������ӵĺøж�-10\n");
            for(i = 0; i < count; i++)
            {
                loves[i] -= 10;
            }
            count++;
        }
        else
        {
            printf("���£����Ѿ�����Ϊ���ˣ�");
            scanf("%S",temp);
        }
        break;
    case 2:
        printf("���£���������췭�����������:");
        scanf("%s",temp);
     /*   for(i = 0;i < count;i++)
        {
           if(strcmp(temp, names[i])==0)
           {
               loves[i] += 10;
               loves[i] = loves >= 4?4:loves + 1;
           }
           else
           {
               loves[i] -= 10;
           }
        }*/
        printf("111");
        break;
    case 3:
        printf("114");
        break;
    case 4:
        printf("141");
        break;
    default:
        printf("�ʵ���ã�������1~4�����֡�");
        break;
    }
         printf("����\t\t����\t\t�øж�\n");
      for(i = 0;i < count;i++)
    {
      printf("%s\t\t%s\t\t%d\n",name[i],levelName[levels[i]],loves[i]);
    }





    return 0;
}

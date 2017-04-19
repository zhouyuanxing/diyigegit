
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 6

int main()
{
    //使用字符型数组表示字符串
    int i;
    int count = 5;
    char temp[8];
    char emperorNsme[50];       //皇帝的名号
    int choice;                 //皇帝的选择1~4之间
    char name[MAX][20] = {"貂蝉","杨玉环","火舞","西施","白菜"};
    //嫔妃级别数组
    char levelName[5][10] = {"贵人","嫔妃","贵妃","皇贵妃","皇后"};
    int levels[MAX] = {1,2,3,4,5,-1};  //用于存放每个妃子的级别
    //loves数组中的每一个元素对应每个妃子的好感度
    int loves[MAX] = {100,100,100,100,100,-1};
      printf("姓名\t\t级别\t\t好感度\n");
      for(i = 0;i < count;i++)
    {
      printf("%s\t\t%s\t\t%d\n",name[i],levelName[levels[i]],loves[i]);
    }
    printf("\n**************************************\n");
    printf("请输入当前登基皇帝的名号\n");
    scanf("%s",emperorNsme);
    printf("当时的皇帝是%s,皇帝万岁万岁万岁岁\n");
    printf("1、皇帝下旨选妃：\t (增加功能)\n");
    printf("2、翻牌宠幸：\t\t (修改状态功能 )\n");
    printf("3、打入冷宫！\t\t (删除功能)\n");
    printf("4、单独召见爱妃去小树林做纯洁的事。\n");
    printf("陛下请选择：");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(count < MAX)
        {
            printf("请输入要添加娘娘的名讳：");
            scanf("%s",name[count]);
            levels[count] = 0;
            loves[count] = 100;
            printf("新增加妃子其他妃子的好感度-10\n");
            for(i = 0; i < count; i++)
            {
                loves[i] -= 10;
            }
            count++;
        }
        else
        {
            printf("陛下，后宫已经人满为患了：");
            scanf("%S",temp);
        }
        break;
    case 2:
        printf("陛下，请输入今天翻牌娘娘的名讳:");
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
        printf("皇帝你好，请输入1~4的数字。");
        break;
    }
         printf("姓名\t\t级别\t\t好感度\n");
      for(i = 0;i < count;i++)
    {
      printf("%s\t\t%s\t\t%d\n",name[i],levelName[levels[i]],loves[i]);
    }





    return 0;
}

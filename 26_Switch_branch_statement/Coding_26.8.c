#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char memu;

    scanf("%c", &memu);

    switch (memu)
    {
         case 'f':
            printf("ȯŸ\n");
            break;
         case 'c':
            printf("�ݶ�\n");
            break;
         case 'p':
            printf("��ī������Ʈ\n");
            break;
         default:
            printf("�Ǹ����� �ʴ� �޴�\n");
            break;
    }

    return 0;
}
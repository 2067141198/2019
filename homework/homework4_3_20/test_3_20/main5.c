#define _CRT_SECURE_NO_WARNINGS 1


//��Sn=n+nn+nnn+nnnn+nnnnn��ǰm��֮�ͣ�����n��һ�����֣� 
//���磺2 + 22 + 222 + 2222 + 22222


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int m, n, tmp = 0, sum = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		tmp = tmp * 10 + n;//������
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
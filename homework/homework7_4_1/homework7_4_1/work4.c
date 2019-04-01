#define _CRT_SECURE_NO_WARNINGS 1


void reverse_string(char ch, int sz)
{

}
int main()
{
	char *ch = "abcdef";
	int sz = sizeof(ch) / sizeof('0');
	/*scanf("%s", &ch);*/
	reverse_string(ch, sz);
	return 0;
}
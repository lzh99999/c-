int my_strlen(const char* str)
{
	assert(str);

	const char* end = str;
	while (*end)
		++end;

	return end - str;
}
int main()
{
	printf("%d\n", my_strlen(p));
	return 0;
}
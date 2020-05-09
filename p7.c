main()
{
	char s1[10],s2[10];
	int i;
	printf("enter the string");
	gets(s1); 
	strcpy(s2,s1);
	strrev(s2);
	i=strcmp(s1,s2);
	if(i==0)
	{
		printf("string is polindrome");
	}
	else
	{
	    printf("string is not polindrome");	
	}
	
}

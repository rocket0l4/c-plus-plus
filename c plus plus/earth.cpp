 #include <stdio.h>
        #include <string.h>
         
        int main()
        {
        	int T,i;
        	int flag=0;
        	char s[100001];
        	char val[]="AEIOUaeiou";
        	scanf("%d", &T);
        	for(i=0;i<T;i++)
        	{
        		scanf("%s", s);
        		int len = strlen(s);
        		int a=0,b=0;
        		for(int y=0;y<5;y++)
        		{
            			for(int i=0; i<len; i++)
           				{
           					if(val[y]==s[i])
           					{
        						a++;
        						break;
        					}
           				}
        		}
           		for(int y=5;y<10;y++)
        		{
            			for(int i=0; i<len; i++)
           				{
           					if(val[y]==s[i])
           					{
        						b++;
        						break;
        					}
           				}
        		}
        		if(a==5 || b==5)
                {
                    printf("lovely string\n");
        			
                }
                else
                {
                    printf("ugly string\n");
        			
        		}
            }
            
        	return 0;
        }
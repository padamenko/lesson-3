#include <stdio.h>

main()
{
	long long int pin1,pin2;
	printf("pin1=");
	scanf("%lli",&pin1);
	printf("pin2=");
	scanf("%lli",&pin2);
	
	if(((pin1==9223372036854775000)&&(pin2==9223372036854775001))||((pin1==9223372036854775002)&&(pin2==9223372036854775003)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}

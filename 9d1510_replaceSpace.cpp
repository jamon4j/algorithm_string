/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:�Ŷ�OJ1510,��ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20����
 	���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy
 *  Method:���ݿո����滻�ַ��ĳ������ԭ�����´��ĳ��ȣ��Ӻ���ǰ�滻���� 
 */

#include<stdio.h>
#include<string.h>
#define MAX 1000000

void replaceSpace(char *str) {
	int strLen;
	int newStrLen;
	char *p=NULL;
	char *q=NULL;
	
	strLen = 0;
	newStrLen = 0;
	p = str;
	strLen = strlen(str);
	while(*p) {
		if(*p==' ') newStrLen += 3;
		else {
			newStrLen++;
		}
		p++;
	}
	
	p=q=str;
	p = p + strLen - 1;
	q = q + newStrLen - 1;
	*(q+1) = '\0';
	while(true) {
		if(*p != ' ') {
			*q-- = *p; 
		}else {
			*q-- = '0';
			*q-- = '2';
			*q-- = '%'; 
		}
		p--;
		if(p==q) break;
	}
	printf("%s\n",str);
}

int main() {
	char str[MAX];
	
	while(gets(str)){
		replaceSpace(str); 
	}
	 	
	return 0;
}

/*
We Are Happy
*/

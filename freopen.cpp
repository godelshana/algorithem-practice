#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    freopen("in.txt","r",stdin);     //��in.txt �ж������� 
    freopen("out.txt","w",stdout);  // ���������д��out.txt�� 
    //�����Ǵ�in.txt������� 
    //д��out.txt�� 
    int N;
    scanf("%d", &N);
    
    int a, b;
    for( int i = 0; i < N; i++ ){
    	scanf("%d %d", &a, &b);
    	printf("%d %d", a, b);
    }
    
    fclose(stdin); 
    fclose(stdout); 
    return 0; 
} 

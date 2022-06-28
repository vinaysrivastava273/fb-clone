#include <stdio.h>
int main(){
	freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    char str[11];
    scanf("%s", &str);
    printf("%s", str);
    return 0;
}
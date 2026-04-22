#include <stdio.h>

int main() {
    int a, b, c;
    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;
    

    scanf("%d", p_a);
    scanf("%d", p_b);
    scanf("%d", p_c);
    
   
    int sum = *p_a + *p_b + *p_c;
    

    int max = *p_a;
    if (*p_b > max) max = *p_b;
    if (*p_c > max) max = *p_c;
    
    
    int is_even = (sum % 2 == 0);
 
    printf("Soucet: %d\n", sum);
    printf("Maximum: %d\n", max);
    if (is_even) {
        printf("Soucet je sudy\n");
    } else {
        printf("Soucet je lichy\n");
    }
    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, m;
    float x, y;
    
    // Read two integers and two float values from standard input
    scanf("%d %d", &n, &m);
    scanf("%f %f", &x, &y);
    
    // Print sum and difference of integers
    printf("%d %d\n", n + m, n - m);
    
    // Print sum and difference of floats rounded to 1 decimal place
    printf("%.1f %.1f\n", x + y, x - y);
    
    return 0;
}
	

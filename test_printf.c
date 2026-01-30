#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_ret, std_ret;
    
    // Test basic string
    printf("\n=== Testing ft_printf ===\n");
    
    ft_ret = ft_printf("Hello, World!\n");
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with character
    ft_ret = ft_printf("Char: %c\n", 'A');
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with string
    ft_ret = ft_printf("String: %s\n", "test");
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with NULL string
    ft_ret = ft_printf("NULL string: %s\n", NULL);
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with integer
    ft_ret = ft_printf("Int: %d\n", 42);
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with negative integer
    ft_ret = ft_printf("Negative: %d\n", -42);
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with hex
    ft_ret = ft_printf("Hex: %x\n", 255);
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with pointer
    int x = 42;
    ft_ret = ft_printf("Pointer: %p\n", &x);
    printf("ft_printf returned: %d\n", ft_ret);
    
    // Test with percent
    ft_ret = ft_printf("Percent: %%\n");
    printf("ft_printf returned: %d\n", ft_ret);
    
    return 0;
}

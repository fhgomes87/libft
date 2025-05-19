/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiogom <fabiogom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 08:31:37 by fabiogom          #+#    #+#             */
/*   Updated: 2025/04/10 08:34:10 by fabiogom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h" 


void test_isalpha(void) {
    printf("== ft_isalpha ==\n");
    printf("Test 1 (a): %s\n", ft_isalpha('a') ? "[OK]" : "[ERROR]");
    printf("Test 2 (1): %s\n", !ft_isalpha('1') ? "[OK]" : "[ERROR]");
}

void test_isdigit(void) {
    printf("== ft_isdigit ==\n");
    printf("Test 1 (9): %s\n", ft_isdigit('9') ? "[OK]" : "[ERROR]");
    printf("Test 2 (A): %s\n", !ft_isdigit('A') ? "[OK]" : "[ERROR]");
}

void test_isalnum(void) {
    printf("== ft_isalnum ==\n");
    printf("Test 1 (b): %s\n", ft_isalnum('b') ? "[OK]" : "[ERROR]");
    printf("Test 2 (!): %s\n", !ft_isalnum('!') ? "[OK]" : "[ERROR]");
}

void test_isascii(void) {
    printf("== ft_isascii ==\n");
    printf("Test 1 (127): %s\n", ft_isascii(127) ? "[OK]" : "[ERROR]");
    printf("Test 2 (200): %s\n", !ft_isascii(200) ? "[OK]" : "[ERROR]");
}

void test_isprint(void) {
    printf("== ft_isprint ==\n");
    printf("Test 1 (32): %s\n", ft_isprint(32) ? "[OK]" : "[ERROR]");
    printf("Test 2 (127): %s\n", !ft_isprint(127) ? "[OK]" : "[ERROR]");
}
void test_strlen(void) {
    printf("== ft_strlen ==\n");
    printf("Test 1 (\"abc\"): %s\n", ft_strlen("abc") == 3 ? "[OK]" : "[ERROR]");
    printf("Test 2 (\"\"): %s\n", ft_strlen("") == 0 ? "[OK]" : "[ERROR]");
}

void test_memset(void) {
    printf("== ft_memset ==\n");
    char s1[5] = "abcd";
    ft_memset(s1, 'x', 2);
    printf("Test: %s\n", (s1[0] == 'x' && s1[1] == 'x') ? "[OK]" : "[ERROR]");
}

void test_bzero(void) {
    printf("== ft_bzero ==\n");
    char s[4] = "abc";
    ft_bzero(s, 2);
    printf("Test: %s\n", (s[0] == 0 && s[1] == 0) ? "[OK]" : "[ERROR]");
}

void test_memcpy(void) {
    printf("== ft_memcpy ==\n");
    char src[] = "1234", dst[5];
    ft_memcpy(dst, src, 5);
    printf("Test: %s\n", strcmp(dst, src) == 0 ? "[OK]" : "[ERROR]");
}

void test_memmove(void) {
    printf("== ft_memmove ==\n");
    char str[] = "12345";
    ft_memmove(str + 2, str, 3);
    printf("Test: %s\n", str[2] == '1' ? "[OK]" : "[ERROR]");
}

void test_strlcpy(void) {
    printf("== ft_strlcpy ==\n");
    char dst[10];
    size_t len = ft_strlcpy(dst, "12345", sizeof(dst));
    printf("Test 1: %s\n", (strcmp(dst, "12345") == 0 && len == 5) ? "[OK]" : "[ERROR]");
}

void test_strlcat(void) {
    printf("== ft_strlcat ==\n");
    char dst[20] = "Hello ";
    size_t len = ft_strlcat(dst, "World", 20);
    printf("Test 1: %s\n", (strcmp(dst, "Hello World") == 0 && len == strlen("Hello World")) ? "[OK]" : "[ERROR]");
}

void test_toupper(void) {
    printf("== ft_toupper ==\n");
    printf("Test 1 (a): %s\n", ft_toupper('a') == 'A' ? "[OK]" : "[ERROR]");
    printf("Test 2 (Z): %s\n", ft_toupper('Z') == 'Z' ? "[OK]" : "[ERROR]");
}

void test_tolower(void) {
    printf("== ft_tolower ==\n");
    printf("Test 1 (A): %s\n", ft_tolower('A') == 'a' ? "[OK]" : "[ERROR]");
    printf("Test 2 (z): %s\n", ft_tolower('z') == 'z' ? "[OK]" : "[ERROR]");
}

void test_strchr(void) {
    printf("== ft_strchr ==\n");
    const char *str = "banana";
    printf("Test 1: %s\n", ft_strchr(str, 'n') == &str[2] ? "[OK]" : "[ERROR]");
}

void test_strrchr(void) {
    printf("== ft_strrchr ==\n");
    const char *str = "banana";
    printf("Test 1: %s\n", ft_strrchr(str, 'n') == &str[4] ? "[OK]" : "[ERROR]");
}

void test_strncmp(void) {
    printf("== ft_strncmp ==\n");
    printf("Test 1: %s\n", ft_strncmp("abc", "abc", 3) == 0 ? "[OK]" : "[ERROR]");
    printf("Test 2: %s\n", ft_strncmp("abc", "abd", 3) < 0 ? "[OK]" : "[ERROR]");
}

void test_memchr(void) {
    printf("== ft_memchr ==\n");
    char data[] = "abcdef";
    printf("Test 1: %s\n", ft_memchr(data, 'c', 6) == &data[2] ? "[OK]" : "[ERROR]");
}

void test_memcmp(void) {
    printf("== ft_memcmp ==\n");
    printf("Test 1: %s\n", ft_memcmp("abc", "abc", 3) == 0 ? "[OK]" : "[ERROR]");
    printf("Test 2: %s\n", ft_memcmp("abc", "abd", 3) < 0 ? "[OK]" : "[ERROR]");
}

void test_strnstr(void) {
    printf("== ft_strnstr ==\n");
    const char *haystack = "hello world";
    const char *needle = "world";
    char *res = ft_strnstr(haystack, needle, 11);
    printf("Test 1: %s\n", (res != NULL && strcmp(res, "world") == 0) ? "[OK]" : "[ERROR]");
}

void test_atoi(void) {
    printf("== ft_atoi ==\n");
    printf("Test 1: %s\n", ft_atoi("42") == 42 ? "[OK]" : "[ERROR]");
    printf("Test 2: %s\n", ft_atoi("  -123abc") == -123 ? "[OK]" : "[ERROR]");
}

void test_calloc(void) {
    printf("== ft_calloc ==\n");
    int *arr = (int *)ft_calloc(5, sizeof(int));
    printf("Test 1: %s\n", (arr && arr[0] == 0 && arr[4] == 0) ? "[OK]" : "[ERROR]");
    free(arr);
}

void test_strdup(void) {
    printf("== ft_strdup ==\n");
    char *original = "banana";
    char *copy = ft_strdup(original);
    printf("Test 1: %s\n", (copy && strcmp(copy, original) == 0) ? "[OK]" : "[ERROR]");
    free(copy);
}
void test_substr(void) {
    printf("== ft_substr ==\n");
    char *s = "Hello, World!";
    char *substr = ft_substr(s, 7, 5);
    printf("Test 1: %s\n", (substr && strcmp(substr, "World") == 0) ? "[OK]" : "[ERROR]");
    free(substr);
}

void test_strjoin(void) {
    printf("== ft_strjoin ==\n");
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result = ft_strjoin(s1, s2);
    printf("Test 1: %s\n", (result && strcmp(result, "Hello, World!") == 0) ? "[OK]" : "[ERROR]");
    free(result);
}

void test_strtrim(void) {
    printf("== ft_strtrim ==\n");
    char *s1 = "  \tHello, World!  \n";
    char *set = " \t\n";
    char *result = ft_strtrim(s1, set);
    printf("Test 1: %s\n", (result && strcmp(result, "Hello, World!") == 0) ? "[OK]" : "[ERROR]");
    free(result);
}

void test_split(void) {
    printf("== ft_split ==\n");
    char *s = "Hello, World!";
    char **result = ft_split(s, ' ');
    printf("Test 1: %s\n", (result && strcmp(result[0], "Hello,") == 0 && strcmp(result[1], "World!") == 0) ? "[OK]" : "[ERROR]");
    free(result[0]);
    free(result[1]);
    free(result);
}

void test_itoa(void) {
    printf("== ft_itoa ==\n");
    int n = -42;
    char *result = ft_itoa(n);
    printf("Test 1: %s\n", (result && strcmp(result, "-42") == 0) ? "[OK]" : "[ERROR]");
    free(result);
}

char my_toupper(unsigned int i, char c)
{
    (void)i;
    return ft_toupper(c);  
}

void my_toupper_iteri(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c); 
}

void test_strmapi(void) {
    printf("== ft_strmapi ==\n");
    char *s = "banana";
    char *result = ft_strmapi(s, my_toupper);
    printf("Resultado: %s\n", result);
    free(result);
}

void test_striteri(void) {
    printf("== ft_striteri ==\n");
    char s[] = "banana";
    ft_striteri(s, my_toupper_iteri);
    printf("Resultado: %s\n", s);
}

void test_putchar_fd(void) {
    printf("== ft_putchar_fd ==\n");
}

void test_putstr_fd(void) {
    printf("== ft_putstr_fd ==\n");
}

void test_putendl_fd(void) {
    printf("== ft_putendl_fd ==\n");
}

void test_putnbr_fd(void) {
    printf("== ft_putnbr_fd ==\n");
}

void testar_todas(void) {
    test_isalpha();
    test_isdigit();
    test_isalnum();
    test_isascii();
    test_isprint();
    test_strlen();
    test_memset();
    test_bzero();
    test_memcpy();
    test_memmove();
    test_strlcpy();
    test_strlcat();
    test_toupper();
    test_tolower();
    test_strchr();
    test_strrchr();
    test_strncmp();
    test_memchr();
    test_memcmp();
    test_strnstr();
    test_atoi();
    test_calloc();
    test_strdup();
    test_substr();
    test_strjoin();
    test_strtrim();
    test_split();
    test_itoa();
    test_strmapi();
    test_striteri();
    test_putchar_fd();
    test_putstr_fd();
    test_putendl_fd();
    test_putnbr_fd();
}

int main(void) {
    int opcao;
    do {
        printf("\n====== MENU DE TESTES LIBFT ======\n");
        printf("1. Testar ft_isalpha\n");
        printf("2. Testar ft_isdigit\n");
        printf("3. Testar ft_isalnum\n");
        printf("4. Testar ft_isascii\n");
        printf("5. Testar ft_isprint\n");
        printf("6. Testar ft_strlen\n");
        printf("7. Testar ft_memset\n");
        printf("8. Testar ft_bzero\n");
        printf("9. Testar ft_memcpy\n");
        printf("10. Testar ft_memmove\n");
        printf("11. Testar ft_strlcpy\n");
        printf("12. Testar ft_strlcat\n");
        printf("13. Testar ft_toupper\n");
        printf("14. Testar ft_tolower\n");
        printf("15. Testar ft_strchr\n");
        printf("16. Testar ft_strrchr\n");
        printf("17. Testar ft_strncmp\n");
        printf("18. Testar ft_memchr\n");
        printf("19. Testar ft_memcmp\n");
        printf("20. Testar ft_strnstr\n");
        printf("21. Testar ft_atoi\n");
        printf("22. Testar ft_calloc\n");
        printf("23. Testar ft_strdup\n");
        printf("24. Testar ft_substr\n");
        printf("25. Testar ft_strjoin\n");
        printf("26. Testar ft_strtrim\n");
        printf("27. Testar ft_split\n");
        printf("28. Testar ft_itoa\n");
        printf("29. Testar ft_strmapi\n");
        printf("30. Testar ft_striteri\n");
        printf("31. Testar ft_putchar_fd\n");
        printf("32. Testar ft_putstr_fd\n");
        printf("33. Testar ft_putendl_fd\n");
        printf("34. Testar ft_putnbr_fd\n");
        printf("35. Testar todas as funções\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                test_isalpha();
                break;
            case 2:
                test_isdigit();
                break;
            case 3:
                test_isalnum();
                break;
            case 4:
                test_isascii();
                break;
            case 5:
                test_isprint();
                break;
            case 6:
                test_strlen();
                break;
            case 7:
                test_memset();
                break;
            case 8:
                test_bzero();
                break;
            case 9:
                test_memcpy();
                break;
            case 10:
                test_memmove();
                break;
            case 11:
                test_strlcpy();
                break;
            case 12:
                test_strlcat();
                break;
            case 13:
                test_toupper();
                break;
            case 14:
                test_tolower();
                break;
            case 15:
                test_strchr();
                break;
            case 16:
                test_strrchr();
                break;
            case 17:
                test_strncmp();
                break;
            case 18:
                test_memchr();
                break;
            case 19:
                test_memcmp();
                break;
            case 20:
                test_strnstr();
                break;
            case 21:
                test_atoi();
                break;
            case 22:
                test_calloc();
                break;
            case 23:
                test_strdup();
                break;
            case 24:
                test_substr();
                break;
            case 25:
                test_strjoin();
                break;
            case 26:
                test_strtrim();
                break;
            case 27:
                test_split();
                break;
            case 28:
                test_itoa();
                break;
            case 29:
                test_strmapi();
                break;
            case 30:
                test_striteri();
                break;
            case 31:
                test_putchar_fd();
                break;
            case 32:
                test_putstr_fd();
                break;
            case 33:
                test_putendl_fd();
                break;
            case 34:
                test_putnbr_fd();
                break;
            case 35:
                testar_todas();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);
    return 0;
}


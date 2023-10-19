/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimus_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:10:46 by adenord           #+#    #+#             */
/*   Updated: 2023/10/19 13:59:49 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#############################################################
//															  #
//		This is a simple tester for the libft functions       #
//		It tests all functions except bonuses and *_fd        #
//		functions. It performs multiples tests for every      #
//		functions and cmp the output with the real one        #
//		or the behaviour which is expected.                   #
//		Just compile the optimus_tester.c with your           #
//		libft.a.											  #
//		It is just a simple tester.                           #
//		if ✅ the fct is ok                                   # 
//		if 🙅 the fct might be wrong						  #
//															  #
//#############################################################							  


#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>

	// MANDATORY PART 1

int	isalpha_tester(void)
{
	//test1
	printf("*************\n");
    char str[128]; int i = 0;
	while (i < 128)
	{
		str[i] = i;
		i++;
	}
	i = 0;
	while (i < 128)
	{
		if (ft_isalpha(str[i]) < 0 && isalpha(str[i]) > 0)
			return (0);
		if (ft_isalpha(str[i]) > 0 && isalpha(str[i]) < 0)
			return (0);
		i++;
	}
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return 1;
}

int	isdigit_tester(void)
{
	//test1
	printf("*************\n");
    char str[128]; int i = 0;
	while (i < 128)
	{
		str[i] = i;
		i++;
	}
	i = 0;
	while (i < 128)
	{
		if (ft_isdigit(str[i]) < 0 && isdigit(str[i]) > 0)
			return (0);
		if (ft_isdigit(str[i]) > 0 && isdigit(str[i]) < 0)
			return (0);
		i++;
	}
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return 1;
}

int	isalnum_tester(void)
{
	//test1
	printf("*************\n");
    char str[128]; int i = 0;
	while (i < 128)
	{
		str[i] = i;
		i++;
	}
	i = 0;
	while (i < 128)
	{
		if (ft_isalnum(str[i]) > 0 && isalnum(str[i]) < 0)
			return (0);
		if (ft_isalnum(str[i]) < 0 && isalnum(str[i]) > 0)
			return (0);
		i++;
	}
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return 1;
}

int	isascii_tester(void)
{
	//test1
	printf("*************\n");
    char str[257]; int i = 0;
	while (i < 256)
	{
		str[i] = i;
		i++;
	}
	str[i] = 0;
	i = 0;
	while (i < 256)
	{
		if (ft_isascii(str[i]) > 0 && isascii(str[i]) < 0)
			return (0);
		if (ft_isascii(str[i]) < 0 && isascii(str[i]) > 0)
			return (0);
		i++;
	}
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return 1;
}

int	isprint_tester(void)
{
	//test1
	printf("*************\n");
    char str[128]; int i = 0;
	while (i < 128)
	{
		str[i] = i;
		i++;
	}
	i = 0;
	while (i < 128)
	{
		if (ft_isprint(str[i]) > 0 && isprint(str[i]) < 0)
			return (0);
		if (ft_isprint(str[i]) < 0 && isprint(str[i]) > 0)
			return (0);
		i++;
	}
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return 1;
}

int	strlen_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	if (ft_strlen("Zidane n10") != strlen("Zidane n10"))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	
	if (ft_strlen("") != strlen(""))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	if (ft_strlen("\v\f\r\t\n  seafhlasehflulj") != strlen("\v\f\r\t\n  seafhlasehflulj"))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	memset_tester(void)
{
	int ret;
	int i = 0;
	//test1
	printf("*************\n");
	char str[] = "Zidane n10";
	char str2[] = "Zidane n10";
	char *ts = (char *)memset(str, '.', sizeof(char) * 4);
	char *ts2 = (char *)ft_memset(str2, '.', sizeof(char) * 4);
	if (strcmp(ts, ts2))
		return 0;
	if (strcmp(str, str2))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	memset(tab, -1, sizeof(int) * 4);
	ft_memset(tab2, -1, sizeof(int) * 4);
	while (i < 10)
	{
		if (tab[i] != tab2[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	i = 0;
	int tab3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	memset(tab3, 0, sizeof(int) * 4);
	ft_memset(tab4, 0, sizeof(int) * 4);
	while (i < 10)
	{
		if (tab3[i] != tab4[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	i = 0;
	memset(tab3, 1, sizeof(int) * 4);
	ft_memset(tab4, 1, sizeof(int) * 4);
	while (i < 10)
	{
		if (tab3[i] != tab4[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	i = 0;
	memset(tab3, -2147483648, sizeof(int) * 4);
	ft_memset(tab4, -2147483648, sizeof(int) * 4);
	while (i < 10)
	{
		if (tab3[i] != tab4[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 5 : ✅*\n");

	//test6
	i = 0;
	memset(tab3, 2147483647, sizeof(int) * 4);
	ft_memset(tab4, 2147483647, sizeof(int) * 4);
	while (i < 10)
	{
		if (tab3[i] != tab4[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 6 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	bzero_tester(void)
{
	int ret;
	int i = 0;
	//test1
	printf("*************\n");
	char str[] = "Zidane n10";
	char str2[] = "Zidane n10";
	bzero(str, sizeof(char) * 4);
	ft_bzero(str2, sizeof(char) * 4);
	if (strcmp(str, str2))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	bzero(tab, sizeof(int) * 4);
	ft_bzero(tab2, sizeof(int) * 4);
	while (i < 10)
	{
		if (tab[i] != tab2[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	i = 0;
	int tab3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int tab4[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	bzero(tab3, sizeof(int) * 4);
	ft_bzero(tab4, sizeof(int) * 4);
	while (i < 10)
	{
		if (tab3[i] != tab4[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 3 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

int	memcpy_tester(void)
{
	int ret;
	int i = 0;
	//test1
	printf("*************\n");
	char str[] = "ZADINE N10";
	char str2[] = "ZADINE N10";
	char str3[] = "Zidane n10";
	if (strcmp((char *)memcpy(str, str3, sizeof(char) * 10), (char *)ft_memcpy(str2, str3, sizeof(char) * 10)))
		return (0);
	else if(strcmp(str, str2))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	i = 0;
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab3[] = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	memcpy(tab, tab3, sizeof(int) * 10);
	ft_memcpy(tab2, tab3, sizeof(int) * 10);
	while (i < 10)
	{
		if (tab[i] != tab2[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	i = 0;
	int tab4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab5[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab6[] = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	memcpy(tab4, tab6, sizeof(int) * 5);
	ft_memcpy(tab5, tab6, sizeof(int) * 5);
	while (i < 10)
	{
		if (tab4[i] != tab5[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test 4
	char string[11] = "Zidane n10";
	char string2[11] = "Zidane n10";
	char *ts = (char *)memcpy(string, "ZADINE N11", sizeof(char) * 10);
	char *ts2 = (char *)ft_memcpy(string2, "ZADINE N11", sizeof(char) * 10);
	if (strcmp(ts, ts2))
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");

	//test 5
	char *test = (char *)ft_memcpy((void *)0, (void *)0, 3);
	if (test != NULL)
		return (0);
	ret = 1;
	printf("*test 5 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	memmove_tester(void)
{
	int ret;
	int i = 0;
	//test1
	printf("*************\n");
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int tab2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	void *source = (void *)tab;
	void *dest = (void *)(tab + 1);
	void *source2 = (void *)tab2;
	void *dest2 = (void *)(tab2 + 1);
	ft_memmove(dest, source, sizeof(int) * 9);
	memmove(dest2, source2, sizeof(int) * 9);
	while (i < 10)
	{
		if (tab[i] != tab2[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	int tab3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int tab4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	void *source3 = (void *)(tab3 + 1);
	void *dest3 = (void *)(tab3);
	void *source4 = (void *)(tab4 + 1);
	void *dest4 = (void *)(tab4);
	ft_memmove(dest3, source3, sizeof(int) * 9);
	memmove(dest4, source4, sizeof(int) * 9);
	while (i < 10)
	{
		if (tab3[i] != tab4[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 2 : ✅*\n");

	// //test3
	int tab5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int tab6[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	void *source5 = (void *)tab5;
	void *dest5 = (void *)(tab5 + 4);
	void *source6 = (void *)tab6;
	void *dest6 = (void *)(tab6 + 4);
	ft_memmove(dest5, source5, sizeof(int) * 9);
	memmove(dest6, source6, sizeof(int) * 9);
	while (i < 10)
	{
		if (tab5[i] != tab6[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 3 : ✅*\n");

	int tab7[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int tab8[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	void *source7 = (void *)(tab7 + 1);
	void *dest7 = (void *)(tab7);
	void *source8 = (void *)(tab8 + 1);
	void *dest8 = (void *)(tab8);
	ft_memmove(dest7, source7, sizeof(int) * 9);
	memmove(dest8, source8, sizeof(int) * 9);
	while (i < 10)
	{
		if (tab7[i] != tab8[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 4 : ✅*\n");

	int tab9[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int tab10[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int tab11[] = {0, 2, 8, 4, 8, 3, 7, 8, 9, 8};
	ft_memmove(tab9, tab11, sizeof(int) * 9);
	memmove(tab10, tab11, sizeof(int) * 9);
	while (i < 10)
	{
		if (tab9[i] != tab10[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 5 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	strlcpy_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[15] , str3[15];
	char str2[] = "Zidane n10";
	ft_strlcpy(str, str2, 11); strlcpy(str3, str2, 11);
	if (strcmp(str, str3))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str4[15] , str5[15];
	char str6[] = "";
	ft_strlcpy(str4, str6, 11); strlcpy(str5, str6, 11);
	if (strcmp(str4, str5))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	char str7[15] , str8[15];
	char str9[] = "Zinedine n 10";
	ft_strlcpy(str7, str9, 3); strlcpy(str8, str9, 3);
	if (strcmp(str7, str8))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char str10[10] , str11[10];
	char str12[] = "Zidane n10";
	ft_strlcpy(str10, str12, 10); strlcpy(str11, str12, 10);
	if (strcmp(str10, str11))
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char str13[10] = "" , str14[10] = "";
	ft_strlcpy(str13, "Zinedine", 0); strlcpy(str14, "Zinedine", 0);
	if (strcmp(str13, str14))
		return (0);
	else 
		ret = 1;
	printf("*test 5 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	strlcat_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[21] = "Zidane n10", str2[21] = "Zidane n10";
	if (ft_strlcat(str, "Zidane n10", 21) != strlcat(str2, "Zidane n10", 21))
		return (0);
	else if (strcmp(str, str2))
		return (0);
	else if (str[20] != 0 || str2[20] != 0)
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str3[17] = "Zidane n10", str4[17] = "Zidane n10";
	if (ft_strlcat(str3, "Zidane n10", 17) != strlcat(str4, "Zidane n10", 17))
		return (0);
	else if (strcmp(str3, str4))
		return (0);
	else if (str3[16] != 0 || str4[16] != 0)
		return (0);
	else 
		ret = 1;
	
	printf("*test 2 : ✅*\n");
	
	//test3
	char str5[45] = "Zidane n10", str6[45] = "Zidane n10";
	if (ft_strlcat(str5, "Zidane n10", 45) != strlcat(str6, "Zidane n10", 45))
		return (0);
	else if (strcmp(str5, str6))
		return (0);
	else if (str5[20] != 0 || str6[20] != 0)
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char str7[11] = "Zidane n10", str8[11] = "Zidane n10";
	if (ft_strlcat(str7, "Zidane n10", 11) != strlcat(str8, "Zidane n10", 11))
		return (0);
	else if (strcmp(str7, str8))
		return (0);
	else if (str7[10] != 0 || str8[10] != 0)
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");
	
	//test5
	char str9[] = "", str10[] = "";
	if (ft_strlcat(str9, "Zidane n10", 0) != strlcat(str10, "Zidane n10", 0))
		return (0);
	else if (strcmp(str9, str10))
		return (0);
	else 
		ret = 1;
	printf("*test 5 : ✅*\n");

	//test6
	char str11[5] = "", str12[5] = "";
	if (ft_strlcat(str11, "Zidane n10", 5) != strlcat(str12, "Zidane n10", 5))
		return (0);
	else if (strcmp(str11, str12))
		return (0);
	else 
		ret = 1;
	printf("*test 6 : ✅*\n");
	
	//test7
	
	char str13[10] = "";
	char str14[10] = "";
	if (ft_strlcat(str13,"Zidane n10", 10) != strlcat(str14,"Zidane n10", 10))
	{
		printf("%s\n%s\n", str13, str14);
		return (0);
	}
	if (strcmp(str13, str14))
	{
		printf("%s\n%s\n", str13, str14);
		return (0);
	}
	ret = 1;
	printf("*test 7 : ✅*\n");

	//test8
	char str15[11] = "Zidane n10", str16[11] = "Zidane n10";
	if (ft_strlcat(str15, "Zidane n10", 6) != strlcat(str16, "Zidane n10", 6))
		return (0);
	else if (strcmp(str15, str16))
		return (0);
	else 
		ret = 1;
	printf("*test 8 : ✅*\n");
	
	//test9
	char str17[11] = "Zidane n10", str18[11] = "Zidane n10";
	if (ft_strlcat(str17, "Zidane n10", 11) != strlcat(str18, "Zidane n10", 11))
		return (0);
	else if (strcmp(str17, str18))
		return (0);
	else 
		ret = 1;
	printf("*test 9 : ✅*\n");

	//test10
	char *str19 = (char *)malloc(sizeof(*str19) * 15);
	char *str20 = (char *)malloc(sizeof(*str20) * 15);
	memset(str19, 'r', 15);
	memset(str20, 'r', 15);
	if (ft_strlcat(str19, "lorem ipsum dolor sit amet", 5) != strlcat(str20, "lorem ipsum dolor sit amet", 5))
		return (0);
	else if (strcmp(str19, str20))
		return (0);
	else 
		ret = 1;
	printf("*test 10 : ✅*\n");
	printf("*************\n\n");

	return (ret);
}

int	toupper_tester(void)
{
	char str[] = "abcdefhijklmnopqrstuvwxyzOIFJSJAJDONFAEOIJPQAZNBZOIJDP123456789!@#$%^&*";
	char str2[] = "abcdefhijklmnopqrstuvwxyzOIFJSJAJDONFAEOIJPQAZNBZOIJDP123456789!@#$%^&*";
	int i = 0, y = 0;
	printf("*************\n");
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	while (str2[y])
	{
		str2[y] = toupper(str2[y]);
		y++;
	}
	if (strcmp(str, str2))
		return (0);
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return (1);
}

int	tolower_tester(void)
{
	char str[] = "abcdefhijklmnopqrstuvwxyzOIFJSJAJDONFAEOIJPQAZNBZOIJDP123456789!@#$%^&*";
	char str2[] = "abcdefhijklmnopqrstuvwxyzOIFJSJAJDONFAEOIJPQAZNBZOIJDP123456789!@#$%^&*";
	int i = 0, y = 0;
	printf("*************\n");
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	while (str2[y])
	{
		str2[y] = tolower(str2[y]);
		y++;
	}
	if (strcmp(str, str2))
		return (0);
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return (1);
}

int	strchr_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[] = "Zidane n10";
	if (strcmp(str, ft_strchr(str, 90)))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str2[] = "Zidane n10ameno";
	if (strcmp("ane n10ameno", ft_strchr(str2, 97)))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	char str3[] = "Zidane n10";
	if (ft_strchr(str3, 65) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char str4[] = "Zidane n10";
	if (strcmp(ft_strchr(str4, '\0'), strchr(str4, '\0')))
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char str5[] = "";
	if (strcmp(ft_strchr(str5, '\0'), strchr(str5, '\0')))
		return (0);
	else 
		ret = 1;
	printf("*test 5 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	strrchr_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[] = "Zidane n10";
	if (strcmp(str, ft_strrchr(str, 90)))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str2[] = "Zidane n10ameno";
	if (strcmp("ameno", ft_strrchr(str2, 97)))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	char str3[] = "Zidane n10";
	if (ft_strrchr(str3, 65) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	strncmp_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	if (ft_strncmp("Zidane n10", "Zidane n10", 10) != strncmp("Zidane n10", "Zidane n10", 10))
		return (0);
	else
		ret = 1;
	printf("*test 1 : ✅*\n");
	//test2
	if (ft_strncmp("Zidane n10", "Zidane n11", 9) != strncmp("Zidane n10", "Zidane n11", 9))
		return (0);
	else
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	if (ft_strncmp("Zidane n10", "Zidane n10", 30) != strncmp("Zidane n10", "Zidane n10", 30))
		return (0);
	else
		ret = 1;
	
	printf("*test 3 : ✅*\n");

	//test4
	if (ft_strncmp("Zidane n10", "Zidane n10", 0) != strncmp("Zidane n10", "Zidane n10", 0))
		return (0);
	else
		ret = 1;
	
	printf("*test 4 : ✅*\n");
	
	//test5
	if (ft_strncmp("Zidane n10", "Zidane n1", 10) <= 0 || strncmp("Zidane n10", "Zidane n1", 10) <= 0)
		return (0);
	else
		ret = 1;
	
	printf("*test 5 : ✅*\n");

	//test6
	if (ft_strncmp("Zidane n1", "Zidane n10", 10) >= 0 || strncmp("Zidane n1", "Zidane n10", 10) >= 0)
		return (0);
	else
		ret = 1;
	
	printf("*test 6 : ✅*\n");
	
	//test7
	if (ft_strncmp("", "Zidane n1", 10) >= 0 || strncmp("", "Zidane n1", 10) >= 0)
		return (0);
	else
		ret = 1;
	
	printf("*test 7 : ✅*\n");

	//test8
	if (ft_strncmp("Zidane n10", "", 10) <= 0 || strncmp("Zidane n10", "", 10) <= 0)
		return (0);
	else
		ret = 1;
	
	printf("*test 8 : ✅*\n");

	//test9
	if (ft_strncmp("Zidane n1\200", "Zidane n1\0", 10) <= 0 || strncmp("Zidane n1\200", "Zidane n1\0", 10) <= 0)
		return (0);
	else
		ret = 1;
	
	printf("*test 9 : ✅*\n");
	printf("*************\n\n");

	return (ret);
}

int	memchr_tester(void)
{
	int ret;
	//test1
	printf("*************\n");
	char str[] = "Zidane n10";
	if (strcmp((char *)memchr(str, 'a', 10), (char *)ft_memchr(str, 'a', 10)))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str2[] = "Zidane n10";
	if (memchr(str2, 'q', 10) != NULL || ft_memchr(str2, 'q', 10) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	int tab2[7] = {-49, 49, 1, -1, 0, -2, 2};
	if (strcmp((char *)memchr(tab, -1, 7), (char *)ft_memchr(tab2, -1, 7)))
		return (0);
	ret = 1;
	printf("*test 3 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	memcmp_tester(void)
{
	int ret;
	//test1
	printf("*************\n");
	char str[] = "Zidane n10";
	char str2[] = "Zidane n10";
	if (memcmp(str, str2, 10) != ft_memcmp(str, str2, 10))
		return (0);
	else
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str3[] = "Zidane n10";
	char str4[] = "Zidane n11";
	if (memcmp(str3, str4, 10) != ft_memcmp(str3, str4, 10))
		return (0);
	else
		ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	char str5[] = "Zidane n10";
	char str6[] = "Zidane n1";
	if (memcmp(str5, str6, 10) != ft_memcmp(str5, str6, 10))
		return (0);
	else
		ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char str7[] = "Zidane n1";
	char str8[] = "Zidane n10";
	if (memcmp(str7, str8, 10) != ft_memcmp(str7, str8, 10))
		return (0);
	else
		ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char str9[] = "ZidAne n10";
	char str10[] = "Zidane n10";
	if (memcmp(str9, str10, 10) != ft_memcmp(str9, str10, 10))
		return (0);
	else
		ret = 1;
	printf("*test 5 : ✅*\n");

	//test6
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tab2[] = {0, 1, 2, 3, 5, 5, 6, 7, 8, 9};
	if (memcmp(tab, tab2, sizeof(int) * 10) != ft_memcmp(tab, tab2, sizeof(int) * 10))
		return (0);
	else
		ret = 1;
	printf("*test 6 : ✅*\n");

	//test7
	char str11[] = "Zidane.n10";
	char str12[] = "Zidane n10";
	if (memcmp(str11, str12, 6) != ft_memcmp(str11, str12, 6))
		return (0);
	else
		ret = 1;
	printf("*test 7 : ✅*\n");

	//test8
	if (memcmp("t\200", "t\0", 2) <= 0 || ft_memcmp("t\200", "t\0", 2) <= 0)
		return (0);
	else
		ret = 1;
	printf("*test 8 : ✅*\n");

	//test9
	if (ft_memcmp("t", "a", 0) != 0)
		return (0);
	else
		ret = 1;
	printf("*test 9 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

int	strnstr_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[] = "Zidane n10", str2[] = "";
	if (strcmp(str, ft_strnstr(str, str2, strlen(str))))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str3[] = "Zidane n10", str4[] = "e ";
	if (ft_strnstr(str3, str4, 5) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	char str5[] = "Zidane n10", str6[] = "zsh";
	if (ft_strnstr(str5, str6, 10) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	
	//test4
	char str7[] = "ZidanezShseh merci", str8[] = "zShs";
	if (ft_strnstr(str7, str8, 9) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char str9[] = "ZidanezShseh merci", str10[] = "zShs";
	if (strcmp(ft_strnstr(str9, str10, 18), "zShseh merci"))
		return (0);
	else 
		ret = 1;
	printf("*test 5 : ✅*\n");

	//test6
	char str11[] = "ZidanezShseh merci", str12[] = "zShs";
	if (ft_strnstr(str11, str12, 0) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 6 : ✅*\n");

	//test7
	if (ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30) != strnstr("lorem ipsum dolor sit amet", "ipsumm", 30))
		return (0);
	ret = 1;
	printf("*test 7 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

int	atoi_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	if (ft_atoi("45") != atoi("45"))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	
	if (ft_atoi("-45") != atoi("-45"))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	if (ft_atoi("    /v/f/t/r/n+++--++45") != atoi("    /v/f/t/r/n+++--++45"))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	
	//test4
	
	if (ft_atoi("    /v/f/t/r/n+45") != atoi("    /v/f/t/r/n+45"))
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");
	
	//test5
	
	if (ft_atoi("    /v/f/t/r/n-45") != atoi("    /v/f/t/r/n-45"))
		return (0);
	else 
		ret = 1;
	printf("*test 5 : ✅*\n");
	
	//test6
	
	if (ft_atoi("    /v/f/t/r/n-45Zidane n10") != atoi("    /v/f/t/r/n-45Zidane n10"))
		return (0);
	else 
		ret = 1;
	printf("*test 6 : ✅*\n");

	//test7
	if (ft_atoi("546:5") != atoi("546:5"))
		return (0);
	else 
		ret = 1;
	printf("*test 7 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	calloc_tester(void)
{
	int ret;
	printf("*************\n");

	//test1
	int *tab;
	tab = (int *)ft_calloc(5, sizeof(int));
	int i = 0;
	while (i < 5)
	{
		if (tab[i] != 0)
			return 0;
		i++;
	}
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	int *tab1;
	tab1 = (int *)ft_calloc(0, 0);
	if (tab1 == NULL)
		return 0;
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	int *tab2;
	tab2 = (int *)ft_calloc(-5, 0);
	if (tab2 == NULL)
		return 0;
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	int *tab3;
	tab3 = (int *)ft_calloc(0, -5);
	if (tab3 == NULL)
		return 0;
	ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	int *tab5;
	tab5 = (int *)ft_calloc(-5, -5);
	if (tab5 != NULL)
		return 0;
	ret = 1;
	printf("*test 5 : ✅*\n");

	//test6
	int *tab6;
	tab6 = (int *)ft_calloc(INT_MAX, INT_MAX);
	if (tab6 != NULL)
		return 0;
	ret = 1;
	printf("*test 6 : ✅*\n");

	//test7
	int *tab7;
	tab7 = (int *)ft_calloc(INT_MIN, INT_MIN);
	if (tab7 != NULL)
		return 0;
	ret = 1;
	printf("*test 7 : ✅*\n");

	//test8
	int *tab8;
	tab8 = (int *)ft_calloc(-5, 3);
	if (tab8 != NULL)
		return 0;
	ret = 1;
	printf("*test 8 : ✅*\n");

	//test9
	int *tab4;
	tab4 = (int *)ft_calloc(3, -5);
	if (tab4 != NULL)
		return 0;
	ret = 1;
	printf("*test 9 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

int	strdup_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char *str = ft_strdup("Zidane n10"), *str2 = strdup("Zidane n10");
	if (strcmp(str, str2))
		return (0);
	else if (str[10] != 0 || str2[10] != 0) 
		return (0);
	else
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	
	if (strcmp(ft_strdup(""), strdup("")))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	if (strcmp(ft_strdup("\n\n\v\f\r\t"), strdup("\n\n\v\f\r\t")))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

	// MANDATORY PART 2

int	substr_tester(void)
{
	int ret;
	printf("*************\n");

	//test1

	char *str = ft_substr("Zidane n10", 7, 3);
	if (strcmp(str, "n10"))
		return (0);
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char *str2 = ft_substr("Zidane n10", 0, 3);
	if (strcmp(str2, "Zid"))
		return (0);
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	char *str3 = ft_substr("Zidane n10", 0, 10);
	if (strcmp(str3, "Zidane n10"))
		return (0);
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char *str4 = ft_substr("Zidane n10", 0, 0);
	if (strcmp(str4, ""))
		return (0);
	ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char *str5 = ft_substr(NULL, 0, 0);
	if (str5 != NULL)
		return (0);
	ret = 1;
	printf("*test 5 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	strjoin_tester(void)
{
	int ret;
	printf("*************\n");

	//test1

	if (strcmp(ft_strjoin("", ""), ""))
		return 0;
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	if (strcmp(ft_strjoin("salut", ""), "salut"))
		return 0;
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	if (strcmp(ft_strjoin("salut", " "), "salut "))
		return 0;
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	if (strcmp(ft_strjoin("salut", " Zidane"), "salut Zidane"))
		return 0;
	ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	void *crash = malloc(10000000000);
	memset(crash, 'A', 10000000000);
	free(crash);
	if (strcmp(ft_strjoin("salut", " Zidane"), "salut Zidane"))
		return 0;
	ret = 1;
	printf("*test 5 : ✅*\n");

	//test6
	if (ft_strjoin(NULL, NULL) != NULL)
		return 0;
	ret = 1;
	printf("*test 6 : ✅*\n");

	//test7
	char string[] = "Zidane n10";
	if (strcmp(ft_strjoin(string, string + 6), "Zidane n10 n10"))
		return 0;
	ret = 1;
	printf("*test 7 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

int	strtrim_tester(void)
{
	int ret;
	printf("*************\n");

	//test1

	char *str = ft_strtrim("Zidane n10", " iae");
	if (strcmp(str, "Zidane n10"))
		return (0);
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char *str2 = ft_strtrim("Zidane \n\tn10", " \t\n");
	if (strcmp(str2, "Zidane \n\tn10"))
		return (0);
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	char *str3 = ft_strtrim("\t\nZidane \t\nn10\n\t", " \t\n");
	if (strcmp(str3, "Zidane \t\nn10"))
		return (0);
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char *str4 = ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " ");
	if (strcmp(str4, "lorem \n ipsum \t dolor \n sit \t amet"))
		return (0);
	ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char *str5 = ft_strtrim("             ", " ");
	if (strcmp(str5, ""))
		return (0);
	ret = 1;
	printf("*test 5 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

int	split_tester(void)
{
	int ret = 1;
	printf("*************\n");

	//test1

	char **tab = ft_split("\0aa\0bbb", '\0');
	for (int i = 0; tab[i]; i++)
	{
		if (tab[i] != NULL)
			return (0);
	}
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char **tab2 = ft_split("salut les aminches", ' ');
	if (strcmp(tab2[0], "salut"))
		return (0);
	if (strcmp(tab2[1], "les"))
		return (0);
	if (strcmp(tab2[2], "aminches"))
		return (0);
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	char **tab3 = ft_split("", ' ');
	if (tab3[0] != NULL)
		return (0);
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char **tab4 = ft_split(NULL, ' ');
	if (tab4 != NULL)
		return (0);
	ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char **tab5 = ft_split("Zidane", 0);
	if (strcmp(tab5[0], "Zidane"))
		return (0);
	if (tab5[1] != NULL)
		return (0);
	ret = 1;
	printf("*test 5 : ✅*\n");

	// test6
	char **tab6 = ft_split("          ", ' ');
	if (tab6[0] != 0)
		return (0);
	printf("*************\n\n");
	return (ret);
}

int	itoa_tester(void)
{
	int ret;
	printf("*************\n");

	//test1

	char *str = ft_itoa(546);
	if (strcmp(str, "546"))
		return (0);
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char *str2 = ft_itoa(100);
	if (strcmp(str2, "100"))
		return (0);
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	char *str3 = ft_itoa(-100);
	if (strcmp(str3, "-100"))
		return (0);
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	char *str4 = ft_itoa(2147483647);
	if (strcmp(str4, "2147483647"))
		return (0);
	ret = 1;
	printf("*test 4 : ✅*\n");

	//test5
	char *str5 = ft_itoa(-2147483648);
	if (strcmp(str5, "-2147483648"))
		return (0);
	ret = 1;
	printf("*test 5 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

char	let_s_go(unsigned int x, char c){(void)x; return(1+c);}

int	strmapi_tester()
{
	int ret = 1;
	printf("*************\n");

	//test1
	char str[10] = "012345678";
	char *str2 = ft_strmapi(str, (*let_s_go));
	if (strcmp("123456789", str2))
		return (0);
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	free(str2);
	str2 = ft_strmapi(str, (*let_s_go));
	if (strlen(str) != strlen(str2))
		return (0);
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	free(str2);
	if (str2[10] != 0)
		return (0);
	ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	str2 = ft_strmapi(NULL, NULL);
	if (str2 != NULL)
		return (0);
	ret = 1;
	printf("*test 4 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

void iter(unsigned int i, char * s) {
	*s += i;
}

int	striteri_tester(void)
{
	int ret;
	printf("*************\n");

	// test1

	char str[] = "";
	ft_striteri(str, &iter);
	if (strcmp(str, ""))
		return (0);
	ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str2[] = "0000000000";
	ft_striteri(str2, &iter);
	if (strcmp(str2, "0123456789"))
		return (0);
	ret = 1;
	printf("*test 2 : ✅*\n");

	//test3
	char *str3 = NULL;
	ft_striteri(str3, &iter);
	if (str3 != NULL)
		return (0);
	ret = 1;
	printf("*test 3 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

	// ADDITIONAL PART
// int	strcat_tester(void)
// {
// 	int ret;
//
// 	//test1
// 	printf("*************\n");
// 	char str[21] = "Zidane n10", str3[21] = "Zidane n10";
// 	char str2[] = "Zidane n10", str4[] = "Zidane n10";
// 	ft_strcat(str, str2); strcat(str3, str4);
// 	if (strcmp(str, str3))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 1 : ✅*\n");
//
// 	//test2
// 	
// 	char str5[21] = "Zidane n10", str6[21] = "Zidane n10";
// 	ft_strcat(str5, ""); strcat(str6, "");
// 	if (strcmp(str5, str6))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 2 : ✅*\n");
// 	
// 	//test3
// 	
// 	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
// 	ft_strcat(str7, " Zidane"); strcat(str8, " Zidane");
// 	if (strcmp(str7, str8))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 3 : ✅*\n");
// 	printf("*************\n\n");
// 	return (ret);
// }
//
// int	strncat_tester(void)
// {
// 	int ret;
//
// 	//test1
// 	printf("*************\n");
// 	char str[21] = "Zidane n10", str3[21] = "Zidane n10";
// 	char str2[] = "Zidane n10", str4[] = "Zidane n10";
// 	ft_strncat(str, str2, strlen(str2)); strncat(str3, str4, strlen(str4));
// 	if (strcmp(str, str3))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 1 : ✅*\n");
//
// 	//test2
// 	
// 	char str5[21] = "Zidane n10", str6[21] = "Zidane n10";
// 	ft_strncat(str5, "", 5); strncat(str6, "", 5);
// 	if (strcmp(str5, str6))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 2 : ✅*\n");
// 	
// 	//test3
// 	
// 	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
// 	ft_strncat(str7, " Zidane n10", 6); strncat(str8, " Zidane n10", 6);
// 	if (strcmp(str7, str8))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 3 : ✅*\n");
//
// 	//test4
// 	
// 	char str9[21] = "Zidane n10", str10[21] = "Zidane n10";
// 	ft_strncat(str9, " Zidane n10", 0); strncat(str10, " Zidane n10", 0);
// 	if (strcmp(str9, str10))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 4 : ✅*\n");
// 	printf("*************\n\n");
//
// 	return (ret);
// }
//
// int	strcmp_tester(void)
// {
// 	int ret;
//
// 	//test1
// 	printf("*************\n");
// 	if (ft_strcmp("Zidane n10", "Zidane n10") != strcmp("Zidane n10", "Zidane n10"))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 1 : ✅*\n");
// 	//test2
// 	
// 	if (ft_strcmp("Zidane n1", "Zidane n10") >= 0  || strcmp("Zidane n1", "Zidane n10") >= 0)
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 2 : ✅*\n");
// 	
// 	//test3
// 	
// 	if (ft_strcmp("Zidane n10", "Zidane n1") <= 0 || strcmp("Zidane n10", "Zidane n1") <= 0)
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 3 : ✅*\n");
//
// 	//test4
// 	
// 	if (ft_strcmp("ZidAne n10", "Zidane n10") >= 0 || strcmp("ZidAne n10", "Zidane n10") >= 0)
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 4 : ✅*\n");
// 	
// 	//test5
// 	
// 	if (ft_strcmp("Zidane n10", "ZidaNe n10") <= 0 || strcmp("Zidane n10", "ZidaNe n10") <= 0)
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 5 : ✅*\n");
//
// 	//test6
// 	
// 	if (ft_strcmp("Zidane n1", "") <= 0 || strcmp("Zidane n1", "") <= 0)
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 6 : ✅*\n");
// 	
// 	//test7
// 	
// 	if (ft_strcmp("", "Zidane n1") >=0 || strcmp("", "Zidane n1") >= 0)
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 7 : ✅*\n");
//
// 	//test8
// 	
// 	if (ft_strcmp("Zidane \nn10", "Zidane \nn10") != strcmp("Zidane \nn10", "Zidane \nn10"))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 8 : ✅*\n");
// 	printf("*************\n\n");
//
// 	return (ret);
// }
//
// int	strcpy_tester(void)
// {
// 	int ret;
//
// 	//test1
// 	printf("*************\n");
// 	char str[21] , str3[21];
// 	char str2[] = "Zidane n10", str4[] = "Zidane n10";
// 	ft_strcpy(str, str2); strcpy(str3, str4);
// 	if (strcmp(str, str3))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 1 : ✅*\n");
//
// 	//test2
// 	
// 	char str5[21] , str6[21];
// 	ft_strcpy(str5, ""); strcpy(str6, "");
// 	if (strcmp(str5, str6))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 2 : ✅*\n");
// 	
// 	//test3
// 	
// 	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
// 	ft_strcpy(str7, " Zidane"); strcpy(str8, " Zidane");
// 	if (strcmp(str7, str8))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 3 : ✅*\n");
// 	printf("*************\n\n");
// 	return (ret);
// }
//
// int	strncpy_tester(void)
// {
// 	int ret;
//
// 	//test1
// 	printf("*************\n");
// 	char str[21] , str3[21];
// 	char str2[] = "Zidane n10", str4[] = "Zidane n10";
// 	ft_strncpy(str, str2, 11); strncpy(str3, str4, 11);
// 	if (strcmp(str, str3))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 1 : ✅*\n");
//
// 	//test2
// 	
// 	int i = 0; char str5[21] , str6[21];
// 	ft_strncpy(str5, "", 10); strncpy(str6, "", 10);
// 	if (strcmp(str5, str6))
// 		return (0);
// 	while (i < 10)
// 	{
// 		if (str5[i] != 0 || str6[i] != 0)
// 			return (0);
// 		i++;
// 	}
// 	ret = 1;
// 	printf("*test 2 : ✅*\n");
// 	
// 	//test3
// 	
// 	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
// 	ft_strncpy(str7, " Zidane", 3); strncpy(str8, " Zidane", 3);
// 	if (strcmp(str7, str8))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 3 : ✅*\n");
// 	printf("*************\n\n");
// 	return (ret);
// }
//
// int	strstr_tester(void)
// {
// 	int ret;
//
// 	//test1
// 	printf("*************\n");
// 	char str[] = "Zidane n10", str2[] = "";
// 	if (strcmp(str, ft_strstr(str, str2)))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 1 : ✅*\n");
//
// 	//test2
// 	char str3[] = "Zidane n10", str4[] = "e ";
// 	if (strcmp("e n10", ft_strstr(str3, str4)))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 2 : ✅*\n");
// 	
// 	//test3
// 	char str5[] = "Zidane n10", str6[] = "zsh";
// 	if (ft_strstr(str5, str6) != NULL)
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 3 : ✅*\n");
// 	
// 	//test4
// 	char str7[] = "ZidanezShzShseh merci", str8[] = "zShs";
// 	if (strcmp("zShseh merci", ft_strstr(str7, str8)))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 4 : ✅*\n");
// 	printf("*************\n\n");
// 	return (ret);
// }
//
// int	memccpy_tester(void)
// {
// 	int ret;
// 	int i = 0;
// 	//test1
// 	printf("*************\n");
// 	char str[] = "ZADINE N10";
// 	char str2[] = "ZADINE N10";
// 	char str3[] = "Zidane n10";
// 	if (strcmp((char *)memccpy(str,str3, ' ', 10), (char *)ft_memccpy(str2,str3, ' ', 10)))
// 		return (0);
// 	else if (strcmp(str, str2))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 1 : ✅*\n");
//
// 	//test2
// 	char str4[] = "ZADINE N10";
// 	char str5[] = "ZADINE N10";
// 	char str6[] = "Zidane n10";
// 	 if (!((char *)memccpy(str4,str6, -4, 10) == NULL && (char *)ft_memccpy(str5,str6, -4, 10) == NULL))
// 		return (0);
// 	else if (strcmp(str4, str5))
// 		return (0);
// 	else 
// 		ret = 1;
// 	printf("*test 2 : ✅*\n");
// 	
// 	//test3
// 	i = 0;
// 	int tab4[] = {1, 1, 2, 0, 4, 5, 6, 7, 8, 9};
// 	int tab5[] = {1, 1, 2, 0, 4, 5, 6, 7, 8, 9};
// 	int tab6[] = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
// 	int *tst = (int *)memccpy(tab4, tab6, 0, sizeof(int) * 10);
// 	int *tst2 = (int *)ft_memccpy(tab5, tab6, 0, sizeof(int) * 10);
// 	if (tst[0] != tst2[0])
// 		return (0);
// 	while (i < 10)
// 	{
// 		if (tab4[i] != tab5[i])
// 			return (0);
// 		i++;
// 	}
// 	ret = 1;
// 	printf("*test 3 : ✅*\n");
//
// 	//test 4
// 	char str10[30];
// 	char str11[30];
// 	memccpy(str10, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
// 	ft_memccpy(str11, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
// 	if (strcmp(str10, str11))
// 		return (0);
// 	else
// 	ret = 1;
// 	printf("*test 4 : ✅*\n");
// 	printf("*************\n\n");
// 	return (ret);
// }

int	main(void)
{
	//MANDATORY PART 1

	//test for isalpha
	if (isalpha_tester())
		printf("ft_isalpha = ✅\n\n");
	else
		printf("ft_isalpha = 🙅\n\n");

	//test for isdigit
	if (isdigit_tester())
		printf("ft_isdigit = ✅\n\n");
	else
		printf("ft_isdigit = 🙅\n\n");

	//test for isalnum
	if (isalnum_tester())
		printf("ft_isalnum = ✅\n\n");
	else
		printf("ft_isalnum = 🙅\n\n");

	//test for isascii
	if (isascii_tester())
		printf("ft_isascii = ✅\n\n");
	else
		printf("ft_isascii = 🙅\n\n");

	//test for isprint
	if (isprint_tester())
		printf("ft_isprint = ✅\n\n");
	else
		printf("ft_isprint = 🙅\n\n");

	//test for strlen	
	if (strlen_tester())
		printf("ft_strlen = ✅\n\n");
	else
		printf("ft_strlen = 🙅\n\n");

	//test for memset
	if (memset_tester())
		printf("ft_memset = ✅\n\n");
	else
		printf("ft_memset = 🙅\n\n");
	
	//test for bzero
	if (bzero_tester())
		printf("ft_bzero = ✅\n\n");
	else
		printf("ft_bzero = 🙅\n\n");

	//test for memcpy
	if (memcpy_tester())
		printf("ft_memcpy = ✅\n\n");
	else
		printf("ft_memcpy = 🙅\n\n");

	//test for memmove
	if (memmove_tester())
		printf("ft_memmove = ✅\n\n");
	else
		printf("ft_memmove = 🙅\n\n");

	//test for strlcpy
	if (strlcpy_tester())
		printf("ft_strlcpy = ✅\n\n");
	else
		printf("ft_strlcpy = 🙅\n\n");

	//test for strlcat
	if (strlcat_tester())
		printf("ft_strlcat = ✅\n\n");
	else
		printf("ft_strlcat = 🙅\n\n");
	
	//test for toupper
	if (toupper_tester())
		printf("ft_toupper = ✅\n\n");
	else
		printf("ft_toupper = 🙅\n\n");

	//test for tolower
	if (tolower_tester())
		printf("ft_tolower = ✅\n\n");
	else
		printf("ft_tolower = 🙅\n\n");
	
	//test for strchr
	if (strchr_tester())
		printf("ft_strchr = ✅\n\n");
	else
		printf("ft_strchr = 🙅\n\n");

	//test for strrchr
	if (strrchr_tester())
		printf("ft_strrchr = ✅\n\n");
	else
		printf("ft_strrchr = 🙅\n\n");

	//test for strncmp
	if (strncmp_tester())
		printf("ft_strncmp = ✅\n\n");
	else
		printf("ft_strncmp = 🙅\n\n");

	//test for memchr
	if (memchr_tester())
		printf("ft_memchr = ✅\n\n");
	else
		printf("ft_memchr = 🙅\n\n");

	//test for memcmp
	if (memcmp_tester())
		printf("ft_memcmp = ✅\n\n");
	else
		printf("ft_memcmp = 🙅\n\n");

	//test for strnstr
	if (strnstr_tester())
		printf("ft_strnstr = ✅\n\n");
	else
		printf("ft_strnstr = 🙅\n\n");

	//test for atoi
	if (atoi_tester())
		printf("ft_atoi = ✅\n\n");
	else
		printf("ft_atoi = 🙅\n\n");

	//test for calloc
	if (calloc_tester())
		printf("ft_calloc = ✅\n\n");
	else
		printf("ft_calloc = 🙅\n\n");

	//test for strdup
	if (strdup_tester())
		printf("ft_strdup = ✅\n\n");
	else
		printf("ft_strdup = 🙅\n\n");

	// MANDATORY PART 2
	
	//test for substr
	if (substr_tester())
		printf("ft_substr = ✅\n\n");
	else
		printf("ft_substr = 🙅\n\n");

	//test for strjoin
	if (strjoin_tester())
		printf("ft_strjoin = ✅\n\n");
	else
		printf("ft_strjoin = 🙅\n\n");

	//test for strtrim
	if (strtrim_tester())
		printf("ft_strtrim = ✅\n\n");
	else
		printf("ft_strtrim = 🙅\n\n");

	//test for split
	if (split_tester())
		printf("ft_split = ✅\n\n");
	else
		printf("ft_split = 🙅\n\n");

	//test for itoa
	if (itoa_tester())
		printf("ft_itoa = ✅\n\n");
	else
		printf("ft_itoa = 🙅\n\n");

	//test for strmapi
	if (strmapi_tester())
		printf("ft_strmapi = ✅\n\n");
	else
		printf("ft_strmapi = 🙅\n\n");

	//test for striteri
	if (striteri_tester())
		printf("ft_striteri = ✅\n\n");
	else
		printf("ft_striteri = 🙅\n\n");

	//test for putchar_fd  --|
	//test for putendl_fd    |---> manual test ;)
	//test for putnbr_fd   --|
	
	// BONUS PART

	//ADDITIONAL PART

	// //test for strcat
	// if (strcat_tester())
	// 	printf("ft_strcat = ✅\n\n");
	// else
	// 	printf("ft_strcat = 🙅\n\n");
	//
	// //test for strncat
	// if (strncat_tester())
	// 	printf("ft_strncat = ✅\n\n");
	// else
	// 	printf("ft_strncat = 🙅\n\n");
	//
	// //test for strcmp
	// if (strcmp_tester())
	// 	printf("ft_strcmp = ✅\n\n");
	// else
	// 	printf("ft_strcmp = 🙅\n\n");
	//
	// //test for strcpy
	// if (strcpy_tester())
	// 	printf("ft_strcpy = ✅\n\n");
	// else
	// 	printf("ft_strcpy = 🙅\n\n");
	//
	// //test for strncpy
	// if (strncpy_tester())
	// 	printf("ft_strncpy = ✅\n\n");
	// else
	// 	printf("ft_strncpy = 🙅\n\n");
	//
	// //test for strstr
	// if (strstr_tester())
	// 	printf("ft_strstr = ✅\n\n");
	// else
	// 	printf("ft_strstr = 🙅\n\n");
	//
	// //test for memccpy
	// if (memccpy_tester())
	// 	printf("ft_memccpy = ✅\n\n");
	// else
	// 	printf("ft_memccpy = 🙅\n\n");

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimus_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:10:46 by adenord           #+#    #+#             */
/*   Updated: 2023/07/17 13:03:05 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	strcat_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[21] = "Zidane n10", str3[21] = "Zidane n10";
	char str2[] = "Zidane n10", str4[] = "Zidane n10";
	ft_strcat(str, str2); strcat(str3, str4);
	if (strcmp(str, str3))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	
	char str5[21] = "Zidane n10", str6[21] = "Zidane n10";
	ft_strcat(str5, ""); strcat(str6, "");
	if (strcmp(str5, str6))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
	ft_strcat(str7, " Zidane"); strcat(str8, " Zidane");
	if (strcmp(str7, str8))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	strncat_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[21] = "Zidane n10", str3[21] = "Zidane n10";
	char str2[] = "Zidane n10", str4[] = "Zidane n10";
	ft_strncat(str, str2, strlen(str2)); strncat(str3, str4, strlen(str4));
	if (strcmp(str, str3))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	
	char str5[21] = "Zidane n10", str6[21] = "Zidane n10";
	ft_strncat(str5, "", 5); strncat(str6, "", 5);
	if (strcmp(str5, str6))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
	ft_strncat(str7, " Zidane n10", 6); strncat(str8, " Zidane n10", 6);
	if (strcmp(str7, str8))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	
	char str9[21] = "Zidane n10", str10[21] = "Zidane n10";
	ft_strncat(str9, " Zidane n10", 0); strncat(str10, " Zidane n10", 0);
	if (strcmp(str9, str10))
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");
	printf("*************\n\n");

	return (ret);
}

int	strcmp_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	if (ft_strcmp("Zidane n10", "Zidane n10") != strcmp("Zidane n10", "Zidane n10"))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");
	//test2
	
	if (ft_strcmp("Zidane n1", "Zidane n10") >= 0  || strcmp("Zidane n1", "Zidane n10") >= 0)
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	if (ft_strcmp("Zidane n10", "Zidane n1") <= 0 || strcmp("Zidane n10", "Zidane n1") <= 0)
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");

	//test4
	
	if (ft_strcmp("ZidAne n10", "Zidane n10") >= 0 || strcmp("ZidAne n10", "Zidane n10") >= 0)
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");
	
	//test5
	
	if (ft_strcmp("Zidane n10", "ZidaNe n10") <= 0 || strcmp("Zidane n10", "ZidaNe n10") <= 0)
		return (0);
	else 
		ret = 1;
	printf("*test 5 : ✅*\n");

	//test6
	
	if (ft_strcmp("Zidane n1", "") <= 0 || strcmp("Zidane n1", "") <= 0)
		return (0);
	else 
		ret = 1;
	printf("*test 6 : ✅*\n");
	
	//test7
	
	if (ft_strcmp("", "Zidane n1") >=0 || strcmp("", "Zidane n1") >= 0)
		return (0);
	else 
		ret = 1;
	printf("*test 7 : ✅*\n");

	//test8
	
	if (ft_strcmp("Zidane \nn10", "Zidane \nn10") != strcmp("Zidane \nn10", "Zidane \nn10"))
		return (0);
	else 
		ret = 1;
	printf("*test 8 : ✅*\n");
	printf("*************\n\n");

	return (ret);
}

int	strcpy_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[21] , str3[21];
	char str2[] = "Zidane n10", str4[] = "Zidane n10";
	ft_strcpy(str, str2); strcpy(str3, str4);
	if (strcmp(str, str3))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	
	char str5[21] , str6[21];
	ft_strcpy(str5, ""); strcpy(str6, "");
	if (strcmp(str5, str6))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
	ft_strcpy(str7, " Zidane"); strcpy(str8, " Zidane");
	if (strcmp(str7, str8))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
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
	
	char str13[10] = "", str14[10] = "";
	if (ft_strlcat(str13, "Zidane n10", 10) != strlcat(str14, "Zidane n10", 10))
		return (0);
	else if (strcmp(str13, str14))
		return (0);
	else 
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
	printf("*************\n\n");

	return (ret);
}

int	strncpy_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[21] , str3[21];
	char str2[] = "Zidane n10", str4[] = "Zidane n10";
	ft_strncpy(str, str2, 11); strncpy(str3, str4, 11);
	if (strcmp(str, str3))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	
	int i = 0; char str5[21] , str6[21];
	ft_strncpy(str5, "", 10); strncpy(str6, "", 10);
	if (strcmp(str5, str6))
		return (0);
	while (i < 10)
	{
		if (str5[i] != 0 || str6[i] != 0)
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	
	char str7[21] = "Zidane n10", str8[21] = "Zidane n10";
	ft_strncpy(str7, " Zidane", 3); strncpy(str8, " Zidane", 3);
	if (strcmp(str7, str8))
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	printf("*************\n\n");
	return (ret);
}

int	strstr_tester(void)
{
	int ret;

	//test1
	printf("*************\n");
	char str[] = "Zidane n10", str2[] = "";
	if (strcmp(str, ft_strstr(str, str2)))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str3[] = "Zidane n10", str4[] = "e ";
	if (strcmp("e n10", ft_strstr(str3, str4)))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	char str5[] = "Zidane n10", str6[] = "zsh";
	if (ft_strstr(str5, str6) != NULL)
		return (0);
	else 
		ret = 1;
	printf("*test 3 : ✅*\n");
	
	//test4
	char str7[] = "ZidanezShzShseh merci", str8[] = "zShs";
	if (strcmp("zShseh merci", ft_strstr(str7, str8)))
		return (0);
	else 
		ret = 1;
	printf("*test 4 : ✅*\n");
	printf("*************\n\n");
	return (ret);
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
	printf("*************\n\n");
	return (ret);
}

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
		if (ft_isalpha(str[i]) != isalpha(str[i]))
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
		if (ft_isdigit(str[i]) != isdigit(str[i]))
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
		if (ft_isalnum(str[i]) != isalnum(str[i]))
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
		if (ft_isascii(str[i]) != isascii(str[i]))
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
		if (ft_isprint(str[i]) != isprint(str[i]))
			return (0);
		i++;
	}
	printf("*test 1 : ✅*\n");
	printf("*************\n\n");
	return 1;
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
	printf("*************\n\n");
	return (ret);
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

int	memset_tester(void)
{
	int ret;
	int i = 0;
	//test1
	printf("*************\n");
	char str[] = "Zidane n10";
	char str2[] = "Zidane n10";
	memset(str, '.', sizeof(char) * 4);
	ft_memset(str2, '.', sizeof(char) * 4);
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

	printf("*************\n\n");
	return (ret);
}

int	memccpy_tester(void)
{
	int ret;
	int i = 0;
	//test1
	printf("*************\n");
	char str[] = "ZADINE N10";
	char str2[] = "ZADINE N10";
	char str3[] = "Zidane n10";
	if (strcmp((char *)memccpy(str,str3, ' ', 10), (char *)ft_memccpy(str2,str3, ' ', 10)))
		return (0);
	else if (strcmp(str, str2))
		return (0);
	else 
		ret = 1;
	printf("*test 1 : ✅*\n");

	//test2
	char str4[] = "ZADINE N10";
	char str5[] = "ZADINE N10";
	char str6[] = "Zidane n10";
	 if (!((char *)memccpy(str4,str6, -4, 10) == NULL && (char *)ft_memccpy(str5,str6, -4, 10) == NULL))
		return (0);
	else if (strcmp(str4, str5))
		return (0);
	else 
		ret = 1;
	printf("*test 2 : ✅*\n");
	
	//test3
	i = 0;
	int tab4[] = {1, 1, 2, 0, 4, 5, 6, 7, 8, 9};
	int tab5[] = {1, 1, 2, 0, 4, 5, 6, 7, 8, 9};
	int tab6[] = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	int *tst = (int *)memccpy(tab4, tab6, 0, sizeof(int) * 10);
	int *tst2 = (int *)ft_memccpy(tab5, tab6, 0, sizeof(int) * 10);
	if (tst[0] != tst2[0])
		return (0);
	while (i < 10)
	{
		if (tab4[i] != tab5[i])
			return (0);
		i++;
	}
	ret = 1;
	printf("*test 3 : ✅*\n");

	printf("*************\n\n");
	return (ret);
}

int	main(void)
{
	//test for strcat
	if (strcat_tester())
		printf("ft_strcat = ✅\n\n");
	else
		printf("ft_strcat = 🙅\n\n");

	//test for strncat
	if (strncat_tester())
		printf("ft_strncat = ✅\n\n");
	else
		printf("ft_strncat = 🙅\n\n");

	//test for strcmp
	if (strcmp_tester())
		printf("ft_strcmp = ✅\n\n");
	else
		printf("ft_strcmp = 🙅\n\n");

	//test for strcpy
	if (strcpy_tester())
		printf("ft_strcpy = ✅\n\n");
	else
		printf("ft_strcpy = 🙅\n\n");

	//test for strdup
	if (strdup_tester())
		printf("ft_strdup = ✅\n\n");
	else
		printf("ft_strdup = 🙅\n\n");

	//test for strlcat
	if (strlcat_tester())
		printf("ft_strlcat = ✅\n\n");
	else
		printf("ft_strlcat = 🙅\n\n");

	//test for strncmp
	if (strncmp_tester())
		printf("ft_strncmp = ✅\n\n");
	else
		printf("ft_strncmp = 🙅\n\n");

	//test for strncpy
	if (strncpy_tester())
		printf("ft_strncpy = ✅\n\n");
	else
		printf("ft_strncpy = 🙅\n\n");

	//test for strstr
	if (strstr_tester())
		printf("ft_strstr = ✅\n\n");
	else
		printf("ft_strstr = 🙅\n\n");

	//test for strlen	
	if (strlen_tester())
		printf("ft_strlen = ✅\n\n");
	else
		printf("ft_strlen = 🙅\n\n");

	//test for atoi
	if (atoi_tester())
		printf("ft_atoi = ✅\n\n");
	else
		printf("ft_atoi = 🙅\n\n");

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
	
	//test for strnstr
	if (strnstr_tester())
		printf("ft_strnstr = ✅\n\n");
	else
		printf("ft_strnstr = 🙅\n\n");

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

	//test for memccpy
	if (memccpy_tester())
		printf("ft_memccpy = ✅\n\n");
	else
		printf("ft_memccpy = 🙅\n\n");
	return (0);
}

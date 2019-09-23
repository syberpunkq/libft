int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

int ft_isspace(int c)
{
    if (c == ' ' || c == '\f' || c == '\n'
        || c == '\r' || c == '\t' || c == '\v')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int len;
    int sign;
    int result;

    i = 0;
    len = 0;
    sign = 1;
    result = 0;
    while (str[i++])
        len++;
    i = 0;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str [i] == '+')
        i++;
    while (i < len && ft_isdigit(str[i]))
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (result * sign);
}

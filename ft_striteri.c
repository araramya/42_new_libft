void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    unsigned int i;

    if (!s || !f) // Check if the string or function is NULL
        return;

    i = 0;
    while (s[i]) { // Iterate through the string
        f(i, &s[i]); // Apply the function to the current character
        i++;
    }
}

void ft_putchar(char c);

void rush(int x, int y)
{
    int x_c;
    int y_c;
    if (x < 1 || y < 1)
        return;
    y_c = 1;
    while (y_c<=y) 
    {
        x_c = 1;
        while (x_c<=x)
        {
            if ((x_c == 1 && y_c == 1) || (x_c == x && y_c ==y && x != 1 && y != 1))
                ft_putchar('A');
            else if (( x_c == 1 && y_c ==y ) || ( x_c ==x && y_c == 1))
                ft_putchar('C');
            else if (( y_c ==1 && x_c > 1 && x_c < x ) || ( y_c == y && x_c > 1 && x_c < x ) ||
             ( x_c == 1 && y_c > 1 && y_c < y ) || (x_c == x && y_c > 1 && y_c < y ))
                ft_putchar('B');
            else
                ft_putchar(' ');
            x_c++;
        }
        ft_putchar('\n');
          y_c++;
    }
}



    

   

    
    


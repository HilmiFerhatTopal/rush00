void	ft_putchar(char c);

void	ac_putter(int x, int y, int column, int row)
{
	while (column <= x)
	{
		if (column == 1 || column == x)
		{
			if ((column == 1 && row == 1) || (column == x && row == y))
			{
				ft_putchar('A');
			}
			else 
			{
				ft_putchar('C');
			}
		}//ahanda bura 	
		else //buradaki else ilk if in else i ollmasi lazimdi 
		{
			ft_putchar('B');
		}	
		
		column++;
	}
}

void	b_putter(int x, int y, int column, int row)
{
	while(column <= x)
	{
		if ( column == 1 || column == x)
		{
			ft_putchar('B');
		}
		else 
		{
			ft_putchar(' ');
		}
		column++;
	}
}

void	rush(int x ,int y)
{
	int column;
	int row;

	column = 1;
	row = 1;
	while(row <= y)
	{
		if(row == 1 || row == y)
		{
			ac_putter(x, y, column, row);
			row++;
			ft_putchar('\n');
		}
		else
		{
			b_putter(x, y, column, row);
			row++;
			ft_putchar('\n');
		}
	}
}


/*
** conduct.c for scroller in /home/arthur/delivery/scroller/src/unit_test/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 11:54:38 2017 Arthur Philippe
** Last update Sat Apr  1 11:55:39 2017 Arthur Philippe
*/

#include <stdio.h>
#include "scroller.h"

void		test_conduct_line(void)
{
  sfVector2i	start;
  sfVector2i	end;
  sfVector2i	result;
  int		fat;

  fat = 0;
  start.x = 10;
  start.y = 10;
  end.x = 100;
  end.y = 50;
  while (fat <= 1000)
    {
      result = get_point_conduct(start, end, fat);
      printf("%d result %d - %d\n\n", fat, result.x, result.y);
      fat += 100;
    }
}

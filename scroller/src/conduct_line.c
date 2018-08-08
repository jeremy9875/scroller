/*
** conduct_line.c for scroller in /home/arthur/delivery/scroller/src/window/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 11:05:59 2017 Arthur Philippe
** Last update Sat Apr  1 17:07:21 2017 Arthur Philippe
*/

#include <stdio.h>
#include "scroller.h"

sfVector2f	get_point_conduct(sfVector2i start,
				  sfVector2i end,
				  int placement)
{
  sfVector2f	out;
  float		coef;

  coef = (float) placement / 1000;
  if (coef >= 1)
    {
      out.x = (float) end.x;
      out.y = (float) end.y;
      return (out);
    }
  out.x = (float) start.x + ((end.x - start.x) * coef);
  out.y = (float) start.y + ((end.y - start.y) * coef);
  return (out);
}

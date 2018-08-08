/*
** w_loop.c for scroller in /home/arthur/delivery/scroller/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 10:17:59 2017 Arthur Philippe
** Last update Sat Apr  1 16:53:32 2017 Arthur Philippe
*/

#include "scroller.h"

int	window_loop(sfRenderWindow *w)
{
  sfEvent	event;

  while (sfRenderWindow_pollEvent(w, &event))
    {
      if (event.type == sfEvtClosed
	  || (event.type == sfEvtKeyPressed
	      && event.key.code == sfKeyEscape))
	{
	  sfRenderWindow_close(w);
	  return (0);
	}
    }
  return (1);
}

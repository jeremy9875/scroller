/*
** sfml_basic_functions.c for sfml_basic_functions in /home/VSridhar78/rush_scroller1/src
**
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
**
** Started on  Sat Apr  1 14:16:24 2017 Sridhar Vengadesan
** Last update Sun Apr  2 19:43:54 2017 Arthur Philippe
*/

#include "my.h"

sfUint8		*create_pixel_buffer(int x, int y)
{
  int           a;
  sfUint8*      pixels;

  pixels = malloc(x * y * 4 * sizeof(*pixels));
  if (pixels == NULL)
    exit(EXIT_FAILURE);
  a = 0;
  while (a < x * y * 4)
    {
      pixels[a] = 0;
      a = a + 1;
    }
  return (pixels);
}

sfRenderWindow*		create_window(char* name, int width, int height)
{
  sfRenderWindow*       window;
  sfVideoMode           mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  if (window == NULL)
    {
      exit(EXIT_FAILURE);
    }
  return (window);
}

void	my_put_pixel(t_my_framebuffer* framebuffer, int x, int y, sfColor color)
{
  framebuffer->pixels[(SCREEN_WIDTH * y + x) * 4] = color.r;
  framebuffer->pixels[(SCREEN_WIDTH * y + x) * 4 + 1] = color.g;
  framebuffer->pixels[(SCREEN_WIDTH * y + x) * 4 + 2] = color.b;
  framebuffer->pixels[(SCREEN_WIDTH * y + x) * 4 + 3] = color.a;
}

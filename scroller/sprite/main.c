/*
** main.c for main in /home/VSridhar78/rush_scroller1/src
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Fri Mar 31 21:15:17 2017 Sridhar Vengadesan
** Last update Sun Apr  2 11:05:50 2017 Sridhar Vengadesan
*/

#include "my.h"

t_calc		take_value(t_calc s)
{
  s.r1 = malloc(sizeof(sfIntRect));
  s.position.x = 20;
  s.position.y = 395;
  s.position2.x = 0;
  s.position2.y = 456;
  s.position3.x = 0;
  s.position3.y = 168;
  s.position4.x = 0;
  s.position4.y = 0;
  s.r1->left = 0;
  s.r1->top = 200;
  s.r1->width = 100;
  s.r1->height = 100;
  s.framebuffer = malloc(sizeof(t_my_framebuffer *));
  s.framebuffer->width = SCREEN_WIDTH;
  s.framebuffer->height = SCREEN_HEIGHT;
  s.window = create_window("Demo", SCREEN_WIDTH, SCREEN_HEIGHT);
  s.sprite = sfSprite_create();
  s.sprite2 = sfSprite_create();
  s.sprite3 = sfSprite_create();
  s.sprite4 = sfSprite_create();
  return (s);
}

t_calc		mvt_sprite(t_calc s)
{
  if (s.r1->left != 300 && s.position.x != 452)
    s.r1->left = s.r1->left + 100;
  else if (s.r1->left == 300)
    s.r1->left = 0;
  usleep(90000);
  if (s.position.x != 452)
    {
      s.position.x += 9;
      s.position3.x -= 1;
    }
  if (s.position3.x == -600)
    s.position3.x = 0;
  s.position4.x -= 0.01;
  return (s);
}

int		main()
{
  t_calc	s;

  s = take_value(s);
  s.sol = sfTexture_createFromFile("texture/herbe4.png", NULL);
  s.montagnes = sfTexture_createFromFile("texture/montagnes.png", NULL);
  s.nuages = sfTexture_createFromFile("texture/nuages1.png", NULL);
  while (sfRenderWindow_isOpen(s.window))
    {
      s.texture = sfTexture_createFromFile("texture/wolf.png", s.r1);
      s.framebuffer->pixels = create_pixel_buffer(SCREEN_WIDTH, SCREEN_HEIGHT);
      s = set_texture(s);
      s = mvt_sprite(s);
      if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
	return (0);
      sfRenderWindow_clear(s.window, sfCyan);
      s = draw_sprite(s);
      sfRenderWindow_display(s.window);
      s = destroy_sprite(s);
      s.position4.x -= 0.1;
    }
  sfRenderWindow_destroy(s.window);
  return (EXIT_SUCCESS);
}

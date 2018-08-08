/*
** my.h for my.h in /home/VSridhar78/rush_scroller1/src
**
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
**
** Started on  Sat Apr  1 12:33:12 2017 Sridhar Vengadesan
** Last update Sun Apr  2 19:45:52 2017 Arthur Philippe
*/

#ifndef MY_H_
# define MY_H_

# define SCREEN_WIDTH 800
# define SCREEN_HEIGHT 500

# include <SFML/Graphics/RenderWindow.h>
# include <SFML/Graphics/Sprite.h>
# include <SFML/Graphics/Texture.h>
# include <SFML/Graphics/Rect.h>
# include <math.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_my_framebuffer
{
  sfUint8*	pixels;
  int		width ;
  int		height;
}		t_my_framebuffer ;

typedef struct		s_my_calc
{
  t_my_framebuffer*	framebuffer;
  sfTexture*		texture;
  sfTexture*		wolf;
  sfTexture*		megaman;
  sfTexture*		sol;
  sfTexture*		montagnes;
  sfTexture*		nuages;
  sfSprite*		sprite;
  sfSprite*		sprite2;
  sfSprite*		sprite3;
  sfSprite*		sprite4;
  sfSprite*		sprite5;
  sfRenderWindow*	window;
  sfVector2f		position;
  sfVector2f		position2;
  sfVector2f		position3;
  sfVector2f		position4;
  sfVector2f		position5;
  sfIntRect*		r1;
}			t_calc;

sfUint8*		create_pixel_buffer(int x, int y);
sfRenderWindow*         create_window(char* name, int width, int height);
void			my_put_pixel(t_my_framebuffer* framebuffer,
				     int x,
				     int y,
				     sfColor color);

t_calc			set_texture(t_calc s);
t_calc			draw_sprite(t_calc s);
t_calc			destroy_sprite(t_calc s);

#endif /* !MY_H_ */

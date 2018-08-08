/*
** scroller.h for scroller in /home/arthur/delivery/scroller/include/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 09:39:27 2017 Arthur Philippe
** Last update Sun Apr  2 10:42:01 2017 Arthur Philippe
*/

#ifndef SCROLLER_H_
# define SCROLLER_H_

# include <SFML/Graphics.h>

# define ID_SUCCESS	0
# define ID_FAILURE	84
# define ID_ERR		1
# define SC_W		1280
# define SC_H		720
# define W_NAME		"Scroller"
# define NB_MUSIC_LIMIT	20
/*
** F.A.T. means For A Thousand
*/
typedef struct		s_directors
{
  sfVector2i		start;
  sfVector2i		end;
  int			coef_fat;
}			t_directors;

typedef struct		s_sprt_list
{
  sfSprite		*s;
  int			rot;
  t_directors		line_dir;
  int			time_limit;
  sfColor		bck;
}			t_sprt_list;

typedef struct		s_env
{
  sfRenderWindow	*w;
  t_sprt_list		*next;
  sfVector2i		sc_size;
}			t_env;

int		open_window(t_env *env, char *window_name);
int		window_loop(sfRenderWindow *w);
sfVector2f	get_point_conduct(sfVector2i start,
				  sfVector2i end,
				  int placement);
char		**get_music_files(char *conf_file);
void		play_next_track(char **);
void		launch_1();
void		launch_2();
void		scene_manager(t_sprt_list *, sfRenderWindow *);

#endif /* !SCROLLER_H_ */

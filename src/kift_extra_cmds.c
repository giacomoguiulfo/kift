/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kift_extra_cmds.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:27:08 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/06/18 22:26:23 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <kift.h>

int				control_misc(char *cmd, t_server *server)
{
	int		ret;

	ret = 0;
	if (!strcmp(cmd, "WEATHER"))
	{
		ft_putbuf("Its very hot in here, I'm close to the CPU", server);
	}
	else if (!strcmp(cmd, "EMAIL"))
	{
		ret = system("python scripts/email.py");
		ft_putbuf("sending email", server);
	}
	else if (!strncmp(cmd, "SET ALARM", 9))
	{
		ft_putbuf("Alarm set. In five. Four. Three. Two. Juan. Beep Beep Bi",
					server);
	}
	return (ret);
}

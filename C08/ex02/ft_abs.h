/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:11:47 by shashemi          #+#    #+#             */
/*   Updated: 2024/08/21 09:11:49 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(n) ({ int _temp = (n); if (_temp < 0) _temp = -_temp; _temp; })

#endif
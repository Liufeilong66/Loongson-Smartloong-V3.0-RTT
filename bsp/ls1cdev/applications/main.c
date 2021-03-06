/*
 * File      : main.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2008 - 2017, RT-Thread Development Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-05-10     zhuangwei    first version
 */

#include <rtthread.h>

int main(int argc, char** argv)
{   

#ifdef XPT2046_USING_TOUCH
	/*触摸屏使用SPI总线SPI1 CS0  初始化*/
		rtgui_touch_hw_init("spi10");
#endif
	rt_kprintf("Loongson系统初始化完成！\n");
#if (defined RT_USING_RTGUI) && (defined RTGUI_USING_DEMO)
#ifdef USING_DEMO
extern int test_guidemo(void);
	test_guidemo();
#endif
#ifdef USING_UI_BUTTON
	ui_button();
#endif
#endif	
    return 0;
}

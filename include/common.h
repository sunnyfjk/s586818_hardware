/**
 * @Author: fjk
 * @Date:   2018-05-24T22:57:03+08:00
 * @Email:  sunnyfjk@mail.com
 * @Filename: common.h
 * @Last modified by:   fjk
 * @Last modified time: 2018-05-25T20:07:23+08:00
 * @License: GPLV3
 */

#ifndef __COMMON_H__
#define __COMMON_H__
#define NULL ((void *)0)
#define printf(...) (((int (*)(const char *, ...))0x43c1c5e0)(__VA_ARGS__))
#define mdelay(time) (((int (*)(int))0x43c30488)(time))
#endif

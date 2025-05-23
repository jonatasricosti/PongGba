
#ifndef _FONT_H
#define _FONT_H

#define W 1

unsigned short font[] =
{
// (space) 32
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
// ! 33
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
// " 34
    0,0,0,0,0,0,0,0,
    0,W,W,0,W,W,0,0,
    0,W,W,0,W,W,0,0,
    0,0,W,0,0,W,0,0,
    0,0,W,0,0,W,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
// # 35
    0,0,0,0,0,0,0,0,
    0,0,W,0,0,W,0,0,
    0,W,W,W,W,W,W,0,
    0,0,W,0,0,W,0,0,
    0,0,W,0,0,W,0,0,
    0,W,W,W,W,W,W,0,
    0,0,W,0,0,W,0,0,
    0,0,0,0,0,0,0,0,
// $ 36
    0,0,0,W,0,0,0,0,
    0,0,W,W,W,W,0,0,
    0,W,0,W,0,0,0,0,
    0,0,W,W,W,0,0,0,
    0,0,0,W,0,W,0,0,
    0,W,W,W,W,0,0,0,
    0,0,0,W,0,0,0,0,
    0,0,0,0,0,0,0,0,
// % 37
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,W,W,0,0,W,0,0,
    0,W,W,0,W,0,0,0,
    0,0,0,W,0,0,0,0,
    0,0,W,0,W,W,0,0,
    0,W,0,0,W,W,0,0,
    0,0,0,0,0,0,0,0,
// & 38
    0,0,0,0,0,0,0,0,
    0,0,W,W,W,0,0,0,
    0,W,0,0,0,W,0,0,
    0,0,W,W,W,0,0,0,
    0,W,0,W,0,0,0,0,
    0,W,0,0,W,0,W,0,
    0,0,W,W,W,W,0,0,
    0,0,0,0,0,0,W,0,
// ' 39
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,0,W,0,0,0,
    0,0,0,0,W,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
// ( 40
    0,0,0,0,0,0,W,0,
    0,0,0,0,0,W,0,0,
    0,0,0,0,0,W,0,0,
    0,0,0,0,0,W,0,0,
    0,0,0,0,0,W,0,0,
    0,0,0,0,0,W,0,0,
    0,0,0,0,0,W,0,0,
    0,0,0,0,0,0,W,0,
// ) 41
    0,W,0,0,0,0,0,0,
    0,0,W,0,0,0,0,0,
    0,0,W,0,0,0,0,0,
    0,0,W,0,0,0,0,0,
    0,0,W,0,0,0,0,0,
    0,0,W,0,0,0,0,0,
    0,0,W,0,0,0,0,0,
    0,W,0,0,0,0,0,0,
// *
    0,0,0,0,0,0,0,0,
    0,0,0,W,0,0,0,0,
    0,W,0,W,0,W,0,0,
    0,0,W,W,W,0,0,0,
    0,0,W,W,W,0,0,0,
    0,0,W,W,W,0,0,0,
    0,W,0,0,0,W,0,0,
    0,0,0,0,0,0,0,0,
// +
    0,0,0,0,0,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,0,0,0,0,0,
// ,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,0,0,0,0,0,
// -
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
// .
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,0,0,0,0,0,
// /
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,W,0,
    0,0,0,0,0,W,W,0,
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,0,0,0,0,0,0,
// 0
    0,0,W,W,W,W,0,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,W,W,0,
    0,W,W,0,W,0,W,0,
    0,W,W,W,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// 1
    0,0,0,0,W,0,0,0,
    0,0,W,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,W,W,0,0,
// 2
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,0,0,0,0,W,0,
    0,0,0,0,0,W,W,0,
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,0,0,0,0,
    0,W,W,W,W,W,W,0,
// 3
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,0,0,0,0,W,0,
    0,0,0,0,0,0,W,0,
    0,0,0,W,W,W,0,0,
    0,0,0,0,0,0,W,0,
    0,W,0,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// 4
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,W,0,0,
    0,0,W,W,0,W,0,0,
    0,W,W,0,0,W,0,0,
    0,W,W,W,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
// 5
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,0,W,W,W,W,0,0,
    0,0,0,0,0,0,W,0,
    0,W,0,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// 6
    0,0,0,W,W,W,W,0,
    0,0,W,W,W,W,W,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,W,W,W,0,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// 7
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,W,0,0,0,W,W,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,0,0,0,0,
// 8
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// 9
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,W,0,
    0,0,0,0,0,W,W,0,
    0,0,0,0,0,W,W,0,
    0,0,0,0,0,W,W,0,
// :
    0,0,0,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,0,0,0,0,0,
// ;
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
// <
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,0,W,W,0,0,
// =
    0,0,0,0,0,0,0,0,
    0,W,W,W,W,W,0,0,
    0,W,W,W,W,W,0,0,
    0,0,0,0,0,0,0,0,
    0,W,W,W,W,W,0,0,
    0,W,W,W,W,W,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
// >
    0,W,W,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,0,0,0,0,
    0,W,W,0,0,0,0,0,
// ?
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,0,0,0,W,W,0,
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
// @
    0,0,0,0,0,0,0,0,
    0,0,W,W,W,0,0,0,
    0,W,0,0,0,W,0,0,
    0,W,0,W,W,0,0,0,
    0,W,0,W,W,0,0,0,
    0,W,0,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
    0,0,0,0,0,0,0,0,
// A 65
    0,0,W,W,W,0,0,0,
    0,W,W,W,W,W,0,0,
    0,W,W,0,0,W,0,0,
    0,W,W,0,0,W,0,0,
    0,W,W,W,W,W,0,0,
    0,W,W,W,W,W,0,0,
    0,W,W,0,0,W,0,0,
    0,W,W,0,0,W,0,0,
// B 66
    0,W,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,W,W,0,
    0,W,W,0,0,W,0,0,
    0,W,W,W,W,W,0,0,
    0,W,W,0,0,W,W,0,
    0,W,W,0,0,W,W,0,
    0,W,W,W,W,W,0,0,
// C 67
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// D 68
    0,W,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,W,W,W,0,0,
// E 69
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,W,W,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,W,W,W,W,0,
// F 70
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,W,W,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
// G 71
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// H 72
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
// I 73
    0,0,W,W,W,W,0,0,
    0,0,W,W,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,W,W,0,0,
// J 74
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,W,0,0,W,W,0,0,
    0,W,W,W,W,W,0,0,
    0,0,W,W,W,0,0,0,
// K 75
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,W,W,0,
    0,W,W,0,W,W,0,0,
    0,W,W,W,W,0,0,0,
    0,W,W,W,W,0,0,0,
    0,W,W,0,W,W,0,0,
    0,W,W,0,0,W,W,0,
    0,W,W,0,0,0,W,0,
// L 76
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,W,W,W,W,0,
// M 77
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,W,0,W,W,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,W,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
// N 78
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,W,0,0,W,0,
    0,W,W,W,W,0,W,0,
    0,W,W,0,W,W,W,0,
    0,W,W,0,0,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
// O 79
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// P 80
    0,W,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,W,W,W,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
// Q 81
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,W,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,W,
// R 82
    0,W,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,W,0,0,
    0,W,W,W,W,0,0,0,
    0,W,W,0,W,W,0,0,
    0,W,W,0,0,W,W,0,
// S 83
    0,0,W,W,W,W,0,0,
    0,W,W,W,W,W,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,0,0,
    0,0,W,W,W,W,0,0,
    0,0,0,0,0,0,W,0,
    0,W,0,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// T 84
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
// U 85
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
// V 86
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,0,W,0,0,
    0,0,W,W,0,W,0,0,
    0,0,W,W,0,W,0,0,
    0,0,0,W,W,0,0,0,
// W 87
    0,W,W,0,0,0,0,W,
    0,W,W,0,0,0,0,W,
    0,W,W,0,0,0,0,W,
    0,W,W,0,0,0,0,W,
    0,W,W,0,W,W,0,W,
    0,0,W,W,0,0,W,0,
    0,0,W,W,0,0,W,0,
    0,0,W,W,0,0,W,0,
// X 88
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,0,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,0,W,0,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
// Y 89
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,W,W,0,0,0,W,0,
    0,0,W,W,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
// Z 90
    0,W,W,W,W,W,W,0,
    0,W,W,W,W,W,W,0,
    0,0,0,0,0,W,W,0,
    0,0,0,0,W,W,0,0,
    0,0,0,W,W,0,0,0,
    0,0,W,W,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,W,W,W,W,W,W,0,
// [ 91
    0,0,0,0,W,W,W,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,W,0,
// \ 92
    0,W,W,0,0,0,0,0,
    0,W,W,0,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,W,W,0,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,W,W,0,0,0,
    0,0,0,0,W,W,0,0,
    0,0,0,0,W,W,0,0,
// ] 93
    0,W,W,W,0,0,0,0,
    0,W,W,W,0,0,0,0,
    0,0,0,W,0,0,0,0,
    0,0,0,W,0,0,0,0,
    0,0,0,W,0,0,0,0,
    0,0,0,W,0,0,0,0,
    0,0,0,W,0,0,0,0,
    0,W,W,W,0,0,0,0,
};

#endif


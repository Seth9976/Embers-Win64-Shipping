// 函数: sub_140ae3330
// 地址: 0x140ae3330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float i = *arg1

if (not(i <= 180f))
    do
        i = i + -360f
    while (i > 180f)

if (not(i >= -180f))
    do
        i = i + 360f
    while (i < -180f)

float i_1 = arg1[1]
*arg1 = i

if (not(i_1 <= 180f))
    do
        i_1 = i_1 + -360f
    while (i_1 > 180f)

if (not(i_1 >= -180f))
    do
        i_1 = i_1 + 360f
    while (i_1 < -180f)

i = arg1[2]
arg1[1] = i_1

if (not(i <= 180f))
    do
        i = i + -360f
    while (i > 180f)

if (not(i >= -180f))
    do
        i = i + 360f
    while (i < -180f)

arg1[2] = i
return i

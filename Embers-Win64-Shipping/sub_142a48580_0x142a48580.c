// 函数: sub_142a48580
// 地址: 0x142a48580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_10

if (arg2 u<= 0xffff)
    arg_10 = arg2.w
    return sub_142a48d70(arg1, &arg_10, 0, 1)

if (arg2 u> 0x10ffff)
    return arg1

arg_10 = (arg2 s>> 0xa).w - 0x2840
arg2.w &= 0x3ff
arg2.w |= 0xdc00
int16_t arg_12 = arg2.w
return sub_142a48d70(arg1, &arg_10, 0, 2)

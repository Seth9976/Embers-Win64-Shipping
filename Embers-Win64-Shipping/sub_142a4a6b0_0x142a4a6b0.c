// 函数: sub_142a4a6b0
// 地址: 0x142a4a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = 0
int32_t rax = 0
int16_t arg_20

if (arg4 u<= 0xffff)
    arg_20 = arg4.w
    rax = 1
else if (arg4 u> 0x10ffff)
    r10 = 1
else
    arg_20 = (arg4 s>> 0xa).w - 0x2840
    arg4.w &= 0x3ff
    arg4.w |= 0xdc00
    rax = 2
    int16_t arg_22 = arg4.w

if (r10 != 0)
    rax = 0

return sub_142a49390(arg1, arg2, arg3, &arg_20, 0, rax)

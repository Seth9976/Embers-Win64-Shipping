// 函数: sub_142a22a80
// 地址: 0x142a22a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = sx.d(*(arg2 + 0x30))
int64_t r8 = sx.q(*(arg2 + 0x32))

if ((r11.b & 7) == 0 && (r8.b & 7) == 0)
    return sub_1403addff(sx.q(*(arg2 + 0x20)) + (r8 s>> 3) + arg5 + sx.q((r11 s>> 3) * arg6), arg6, 
        arg3, arg4) __tailcall

arg6 = arg4
arg5 = arg3
jump(*(arg1 + 0xfa0))

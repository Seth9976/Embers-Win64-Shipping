// 函数: sub_141f72560
// 地址: 0x141f72560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11_1 = sx.q(arg2)

if (arg2 s< 0 || r11_1.d s>= *(arg1 + 0x410))
    return 

if (arg3 == 0)
    arg2.b = 0
else if (arg3 == 1)
    arg2.b = 1
else if (arg3 == 2)
    arg2.b = 2
else if (arg3 == 3)
    arg2.b = 5
else if (arg3 == 4)
    arg2.b = 3
else
    arg2.b = 6

*(r11_1 * 0x2c + *(arg1 + 0x408) + 0x28) = arg2.b

if (arg4 != 0)
    return sub_141f77550(arg1) __tailcall

// 函数: sub_141ee8470
// 地址: 0x141ee8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = arg1[0x11].b
char result = rdx & 3

if (result != 3)
    return result

arg1[0x11].b = rdx | 0x80
return sub_141ee83c0(arg1) __tailcall

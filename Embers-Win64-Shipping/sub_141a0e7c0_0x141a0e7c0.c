// 函数: sub_141a0e7c0
// 地址: 0x141a0e7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
__builtin_memset(&arg2[6], 0, 0x14)
void* rcx = arg2 + 0x21

for (int32_t i = 0; i u< 4; )
    i += 4
    *(rcx - 1) = 0
    rcx += 4

arg2[8].d = 0
return arg2

// 函数: sub_140f12740
// 地址: 0x140f12740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char temp0 = *(arg1 + 0x398)
*(arg1 + 0x398) = 1
int64_t rax
rax.b = temp0
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2

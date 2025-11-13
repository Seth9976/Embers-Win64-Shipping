// 函数: sub_141c28340
// 地址: 0x141c28340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = 0
*arg1 = 0xffffffff
arg1[1] = 0
__builtin_memset(&arg1[4], 0, 0x14)
int64_t arg_8 = 0

if (arg1[9] s<= 0xffffffff)
    sub_1405947f0(&arg1[6], 0)

int16_t* rax = *(arg1 + 0x18)

if (rax != 0)
    *rax = 0

arg1[2] = 0
*(arg1 + 0x28) = 0
arg1[0xc] = 0
arg1[0xd].b &= 0xfe
return arg1

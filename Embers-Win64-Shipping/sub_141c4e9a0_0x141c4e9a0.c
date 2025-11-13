// 函数: sub_141c4e9a0
// 地址: 0x141c4e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = data_14399f720
*(arg1 + 0x20) = data_14399f720
__builtin_memset(&arg1[0xc], 0, 0x18)
int32_t rax_2 = (arg2 * arg3) << 2
arg1[0x94] = rax_2
memset(&arg1[0x14], 0, sx.q(rax_2))
*(arg1 + 0x260) = 0
int32_t rax_4 = arg3 * arg4
arg1[0x9b] = 0
arg1[0x9a] = rax_4

if (rax_4 s> arg1[0x9b])
    sub_140775270(&arg1[0x98])

void* rcx_2 = &arg1[0xa2]
arg1[0x9c].b = 0
*(arg1 + 0x278) = 0
*(arg1 + 0x280) = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_5 = *(rcx_2 + 0x10)

if (rax_5 != 0)
    rcx_2 = rax_5

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0xaa] = 0xffffffff
arg1[0xab] = 0
*(arg1 + 0x2b8) = 0
arg1[0xb0] = 0
*(arg1 + 0x2c8) = 0
*(arg1 + 0x2d0) = 0
arg1[0xb9].b |= 1
arg1[0xb7] = arg4
arg1[0xb8] = arg3
arg1[0xb6] = arg2
*(arg1 + 0x2e8) = 0
return arg1

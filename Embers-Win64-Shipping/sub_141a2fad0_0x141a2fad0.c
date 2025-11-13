// 函数: sub_141a2fad0
// 地址: 0x141a2fad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].w = arg2[1].w
*(arg1 + 0x12) = *(arg2 + 0x12)
*(arg1 + 0x18) = 0
*(arg1 + 0x18) = *(arg2 + 0x18)
__builtin_memset(arg2 + 0x18, 0, 0x20)
arg1[2].d = arg2[2].d
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x28) = 0
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[3].d = arg2[3].d
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = *(arg2 + 0x38)
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6].q = 0
arg1[6].q = arg2[6].q
__builtin_memset(&arg2[6], 0, 0x50)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[7].q = 0
arg1[7].q = arg2[7].q
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
arg1[8].q = 0
arg1[8].q = arg2[8].q
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x8c) = *(arg2 + 0x8c)
arg1[9].q = 0
arg1[9].q = arg2[9].q
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0x9c) = *(arg2 + 0x9c)
arg1[0xa].q = 0
arg1[0xa].q = arg2[0xa].q
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xac) = *(arg2 + 0xac)
char rax_24 = (arg1[0xe].b & 0xfe) | 2
arg1[0xe].b = rax_24

if ((arg2[0xe].b & 1) != 0)
    arg1[0xe].b = rax_24 | 1
    arg2[0xe].b &= 0xfe
    arg1[0xe].b &= 0xfd
    arg1[0xe].b |= arg2[0xe].b & 2
    arg1[0xb] = arg2[0xb]
    arg1[0xc] = arg2[0xc]
    arg1[0xd] = arg2[0xd]

*(arg1 + 0xe8) = *(arg2 + 0xe8)
arg1[0xf].d ^= (arg1[0xf].d ^ arg2[0xf].d) & 1
int32_t rax_30 = arg1[0xf].d
int32_t rcx_3 = ((rax_30 ^ arg2[0xf].d) & 2) ^ rax_30
arg1[0xf].d = rcx_3
arg1[0xf].d = ((arg2[0xf].d ^ rcx_3) & 4) ^ rcx_3
return arg1

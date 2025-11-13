// 函数: sub_141350850
// 地址: 0x141350850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 1
__builtin_memset(&arg2[1], 0, 0x18)
*(arg2 + 0x2c) = 0
*(arg2 + 0x34) = 0
arg2[7].w = 0
arg2[8] = u"UnknownTexture"
arg2[4] = 1
arg2[5].w = 1
arg2[9].w = 1
*(arg2 + 0x4a) = 0
int128_t* rax_2 = sub_14139d290((*(*arg1 + 8))(arg1, 0))
*arg2 = *rax_2
arg2[2].d = rax_2[1].d
*(arg2 + 0x14) = *(rax_2 + 0x14)
arg2[3].d = *(rax_2 + 0x18)
*(arg2 + 0x1c) = *(rax_2 + 0x1c)
arg2[4].d = rax_2[2].d
*(arg2 + 0x24) = *(rax_2 + 0x24)
*(arg2 + 0x25) = *(rax_2 + 0x25)
*(arg2 + 0x26) = *(rax_2 + 0x26)
arg2[5].w = *(rax_2 + 0x28)
*(arg2 + 0x2c) = *(rax_2 + 0x2c)
int32_t rdx = rax_2[3].d
arg2[6].d = rdx
int32_t rcx_5 = *(rax_2 + 0x34)
*(arg2 + 0x34) = rcx_5
arg2[7].b = *(rax_2 + 0x38)
*(arg2 + 0x39) = *(rax_2 + 0x39)
arg2[8] = rax_2[4].q
arg2[9].b = *(rax_2 + 0x48)
*(arg2 + 0x49) = *(rax_2 + 0x49)
*(arg2 + 0x4a) = *(rax_2 + 0x4a)
*(arg2 + 0x34) = (rcx_5 & 0xfffeffff) | 1
arg2[5].w = 1
arg2[7].w = 0
arg2[9].b = 1
*(arg2 + 0x2c) = 0x1c
*arg2 = data_1439c7ad8
arg2[2].d = data_1439c7ae8
*(arg2 + 0x34) = 0x10008
int32_t rdx_1 = rdx | data_143ed339c
arg2[8] = u"AverageLuminance"
arg2[6].d = rdx_1
*(arg2 + 0x14) = 2
arg2[3].d = 1
return arg2

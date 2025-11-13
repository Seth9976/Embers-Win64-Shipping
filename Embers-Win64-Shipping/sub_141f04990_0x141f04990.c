// 函数: sub_141f04990
// 地址: 0x141f04990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_143266e70
arg1[5] = &data_14301fe40
arg1[0x3e] = &data_14301fe70
*(arg1 + 0x212) = (*(arg1 + 0x212) & 0xf9) | 1
__builtin_memset(&arg1[0x43], 0, 0x20)
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4a] = 0x1000000
*(arg1 + 0x25c) = 0
__builtin_memset(&arg1[0x4f], 0, 0x30)
sub_14220ad50(&arg1[0x55])
arg1[0x7b] = 0
arg1[0x7c].d = 0
*(arg1 + 0x3e4) = 0
arg1[0x7e] = 0
*(arg1 + 0x20a) &= 0x77
*(arg1 + 0x20b) &= 6
*(arg1 + 0x20e) &= 0xfe
*(arg1 + 0x20a) |= 8
*(arg1 + 0x20b) |= 0xf1
*(arg1 + 0x20e) |= 6
*(arg1 + 0x209) |= 0x20
*(arg1 + 0x20c) &= 0xfe
*(arg1 + 0x26c) = 0xc47a0000
arg1[0x4e].d = 0xc47a0000
*(arg1 + 0x264) = 0x3f800000
arg1[0x3f].d = 0
*(arg1 + 0x204) = 0
arg1[0x4b].d = 0x3f800000
*(arg1 + 0x206) = 1
sub_1422ac390(arg1, data_143f3a598, 1)
arg1[0x41].b &= 0x7f
*(arg1 + 0x209) |= 0x80
*(arg1 + 0x20a) |= 7
*(arg1 + 0x23c) = 0xffffffff
*(arg1 + 0x211) = 1
int32_t rax_1 = data_143f3b070
data_143f3b070 += 1
*(arg1 + 0x20e) &= 0xf7
char rcx_2 = *(arg1 + 0x209)
char rdx_1 = *(arg1 + 0x20e)
*(arg1 + 0x254) = rax_1 + 1
char rax_3 = arg1[0x41].b & 0xf8
*(arg1 + 0x214) = 0
*(arg1 + 0x213) = 0
*(arg1 + 0x1fc) = 0
arg1[0x41].b = rax_3

if ((rcx_2 & 1) == 0)
    *(arg1 + 0x209) = rcx_2 | 1
    sub_141f36700(arg1)
    rcx_2 = *(arg1 + 0x209)
    rdx_1 = *(arg1 + 0x20e)
    rax_3 = arg1[0x41].b

*(arg1 + 0x8a) &= 0xf3
*(arg1 + 0x14d) |= 0x40
arg1[0x41].b = rax_3 & 0x87
*(arg1 + 0x20d) |= 0xc4
*(arg1 + 0x209) = rcx_2 & 0xf5
*(arg1 + 0x20e) = rdx_1 & 0xdf
arg1[0x4c].d = 0
return arg1

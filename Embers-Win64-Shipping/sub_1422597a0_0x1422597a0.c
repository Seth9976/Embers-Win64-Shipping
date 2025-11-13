// 函数: sub_1422597a0
// 地址: 0x1422597a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f792b0(arg1)
*arg1 = &data_14330e3a0
arg1[0x44] = &data_14330f150
arg1[0x58] = 0
__builtin_memset(&arg1[0x5e], 0, 0x20)
arg1[0x68] = 0
__builtin_memset(&arg1[0x6a], 0, 0x80)
__builtin_memset(&arg1[0x7b], 0, 0x31)
*(arg1 + 0x40c) = 0
arg1[0x88] = 0
arg1[0x89] = 0
*(arg1 + 0x45c) = 0xffffffff
arg1[0x8c].d = 0
*(arg1 + 0x464) = 0xffffffff
arg1[0x8d].d = 0
*(arg1 + 0x46c) = 0xffffffff
arg1[0x8e].d = 0
*(arg1 + 0x474) = 0xffffffff
arg1[0x8f].d = 0
*(arg1 + 0x47c) = 0xffffffff
arg1[0x90].d = 0
*(arg1 + 0x484) = 0xffffffff
arg1[0x91].d = 0
*(arg1 + 0x48c) = 0xffffffff
arg1[0x92].d = 0
*(arg1 + 0x494) = 0xffffffff
arg1[0x93].d = 0
*(arg1 + 0x49c) = 0xffffffff
arg1[0x94].d = 0
*(arg1 + 0x4a4) = 0xffffffff
arg1[0x95].d = 0
*(arg1 + 0x4ac) = 0xffffffff
arg1[0x96].d = 0
*(arg1 + 0x4b4) = 0xffffffff
arg1[0x97].d = 0
arg1[0x98] = 0
arg1[0x99] = 0
arg1[0x9c] = 0
arg1[0x9d] = 0
__builtin_memset(&arg1[0x9f], 0, 0x18)
*(arg1 + 0x514) = 0xffffffff
arg1[0xa3].d = 0
*(arg1 + 0x51c) = 0xffffffff
arg1[0xa4].d = 0
arg1[0x22].d = 0x40400000
arg1[0x68] = sub_142492810()
arg1[0x66].d = 0
arg1[0x5d].d = 0x3f800000
arg1[6].b = 0
arg1[0x9b].d &= 0xfffffff8
int32_t rax_1 = arg1[0x7a].d
*(arg1 + 0x32) |= 1
*(arg1 + 0x59) |= 0x20
arg1[0x9b].d |= 8
arg1[0x87].d |= 0x24
*(arg1 + 0x294) |= 2
*(arg1 + 0x56c) &= 0xfe
arg1[0x7a].d = (rax_1 & 0xfffffffb) | 8
arg1[0xaa].d = 0xc2c80000
arg1[0x8a].b = 1
*(arg1 + 0x452) = 3
*(arg1 + 0x454) = 0x47c35000
*(arg1 + 0x564) = 0
*(arg1 + 0x43c) = 0x3f800000
arg1[0x59].b = 1
arg1[0x62].b = 1
*(arg1 + 0x2e4) = 0x41a00000
*(arg1 + 0x554) = 0
int64_t rsi = sx.q(arg1[0x89].d)
int32_t rax_4 = (rsi + 1).d
arg1[0x89].d = rax_4

if (rax_4 s> *(arg1 + 0x44c))
    sub_1405a4df0(&arg1[0x88])

int64_t rdx_2 = rsi * 3
int64_t rcx_1 = arg1[0x88]
*(rcx_1 + (rdx_2 << 3)) = data_143e1e008
*(rcx_1 + (rdx_2 << 3) + 8) = data_143e1e010
void* rax_7 = data_143e1e018
*(rcx_1 + (rdx_2 << 3) + 0x10) = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

void* rcx_2 = arg1[0x26]

if (rcx_2 != 0)
    rdx_2.b = 1
    sub_141f49980(rcx_2, rdx_2.b)

return arg1

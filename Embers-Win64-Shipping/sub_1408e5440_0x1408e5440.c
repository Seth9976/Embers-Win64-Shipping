// 函数: sub_1408e5440
// 地址: 0x1408e5440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
*(arg2 + 8) += sx.q(arg1[7].d) << 6
*(arg2 + 8) += sx.q(arg1[9].d) << 2
*(arg2 + 0x28) += sx.q(arg1[0xc].d) * 0xc
int64_t rdx = *(arg2 + 0x28) + (sx.q(arg1[0xe].d) << 3)
*(arg2 + 0x28) = rdx
int64_t rcx_3 = rdx + (sx.q(arg1[0x10].d) << 2)
*(arg2 + 0x28) = rcx_3
int64_t rdx_1 = rcx_3 + (sx.q(arg1[0x12].d) << 2)
*(arg2 + 0x28) = rdx_1
int64_t r8_2 = rdx_1 + (sx.q(arg1[0x14].d) << 2)
*(arg2 + 0x28) = r8_2
int64_t rdx_2 = r8_2 + sx.q(arg1[0x16].d) * 0xc
*(arg2 + 0x28) = rdx_2
int64_t rcx_7 = rdx_2 + ((sx.q(arg1[0x18].d) * 3 + 0x1f) << 2)
*(arg2 + 0x28) = rcx_7
int64_t result = sx.q(arg1[0x1e].d)
*(arg2 + 0x28) = rcx_7 + (result << 2) + 0x18
return result

// 函数: sub_1418f6760
// 地址: 0x1418f6760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(*(arg1 + 8) + (sx.q(*(arg4 + 0x3c)) << 2))
int32_t r14 = *(arg6 + 0x18)
int32_t rbp_2 = *(arg6 + 0x1c) * r14 * r15
int64_t rsi_1 = zx.q(arg6[2].d) * sx.q(rbp_2)
int64_t rax_2 = sub_140a82f30(rsi_1, 0)
int128_t zmm0 = *arg6
int128_t zmm1 = arg6[1]
arg2[7] = rax_2
int32_t rax_3 = data_14399fa54
*(arg2 + 0xc) = zmm0
arg2[1].d = arg5
int32_t rcx_2 = arg6[2].d
*(arg2 + 0x1c) = zmm1
*arg2 = arg4
*(arg2 + 0x34) = rbp_2
arg2[8].d = rsi_1.d
*(arg2 + 0x44) = rax_3
*(arg2 + 0x2c) = rcx_2
arg2[6].d = r14 * r15
return arg2

// 函数: sub_142ad3e70
// 地址: 0x142ad3e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(sub_142accb50(sx.q(arg2 - 0x1dbaa0) * 0x21 + 3, 0x2f15) + 1)
int32_t rdi_3 = arg2 - 0x1dbaa0 - rsi.d * 0x16d - sub_142acca40(((rsi << 3) + 0x15).d, 0x21) + 0x16d
int32_t rdx_1

if (rdi_3 s>= 0xd8)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x88888889, rdi_3 - 6)
    rdx_1 = temp0_1 + rdi_3 - 6
else
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = muls.dp.d(0x84210843, rdi_3)
    rdx_1 = temp2_1 + rdi_3

*(arg1 + 0xc) = 0
*(arg1 + 0x80) = 1
*(arg1 + 0x68) = 0x101
*(arg1 + 0x10) = rsi.d
*(arg1 + 0x58) = rsi.d
*(arg1 + 0x84) = 1
*(arg1 + 0xcc) = 1
*(arg1 + 0x7b) = 1
int32_t rdx_3 = rdx_1 s>> 4
*(arg1 + 0x88) = 1
int32_t rdx_4 = rdx_3 + (rdx_3 u>> 0x1f)
*(arg1 + 0x14) = rdx_4
*(arg1 + 0x6a) = 1
*(arg1 + 0x94) = 1
*(arg1 + 0x20) = rdi_3 - sx.d(*(&data_143658240 + (sx.q(rdx_4) << 1))) + 1
*(arg1 + 0x6d) = 0x101
*(arg1 + 0x24) = rdi_3 + 1
*(arg1 + 0x98) = 1
return rdi_3 + 1

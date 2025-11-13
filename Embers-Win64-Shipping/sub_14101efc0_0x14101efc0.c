// 函数: sub_14101efc0
// 地址: 0x14101efc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) != 0)
    *(arg3 + 0x4c) &= 0xfc
    *(arg3 + 0x44) = 0xffffffff
    *(arg3 + 0x44) = sub_141012d90(arg1, arg2)

*(arg2 + 0x3b94) += 1
int64_t* rcx = *(*(arg2 + 0x1c8) + 0x30)
(*(*rcx + 0x1a8))(rcx, arg1[0xc], zx.q(*(arg1 + 0x54)), zx.q(*(arg3 + 0x44)))

if (data_1439b4ad4 != 0 && arg1 != -0x68 && arg1[0xe] != 0)
    sub_141026da0(*(*(arg2 + 0x1c8) + 0x118), &arg1[0xd])

int64_t rsi_1 = sx.q(arg1[6].d)
int32_t rax_4 = (rsi_1 + 1).d
arg1[6].d = rax_4

if (rax_4 s> *(arg1 + 0x34))
    sub_1405a4d70(&arg1[5])

int64_t result = arg1[5]
*(result + (rsi_1 << 3)) = arg3
return result

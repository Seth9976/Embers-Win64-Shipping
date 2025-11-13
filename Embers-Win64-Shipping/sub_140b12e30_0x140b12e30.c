// 函数: sub_140b12e30
// 地址: 0x140b12e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x10))
int32_t rax = (rsi + 1).d
*(arg1 + 0x10) = rax

if (rax s> *(arg1 + 0x14))
    sub_1405c4fe0(arg1 + 8)

int64_t* rcx_3 = (rsi << 6) + *(arg1 + 8)
*rcx_3 = *arg2
rcx_3[2] = arg2[2]
arg2[2] = 0
*(rcx_3 + 0x20) = *(arg2 + 0x20)
*(rcx_3 + 0x30) = *(arg2 + 0x30)

if (*rcx_3 != 0)
    *arg2 = 0

return 0

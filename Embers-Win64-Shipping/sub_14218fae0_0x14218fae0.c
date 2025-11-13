// 函数: sub_14218fae0
// 地址: 0x14218fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x548))
int32_t rax = (rsi + 1).d
*(arg1 + 0x548) = rax

if (rax s> *(arg1 + 0x54c))
    sub_1407c3b60(arg1 + 0x540)

int64_t rcx_1 = rsi * 0x38
int32_t* rcx_2 = rcx_1 + *(arg1 + 0x540)

if (rcx_1 == neg.q(*(arg1 + 0x540)))
    rcx_2 = nullptr
else
    rcx_2[2] = 0
    *(rcx_2 + 0x28) = 0
    *(rcx_2 + 0x30) = 0

int32_t rax_1 = arg4[1].d
*(rcx_2 + 0x10) = *arg4
rcx_2[6] = rax_1
rcx_2[3] = arg3.d
*(rcx_2 + 4) = arg2
int32_t result = arg5[1].d
*(rcx_2 + 0x1c) = *arg5
rcx_2[9] = result
*rcx_2 = 5
return result

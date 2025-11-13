// 函数: sub_1412957f0
// 地址: 0x1412957f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x28)
int64_t rsi = sx.q(*(arg1 + 0x20))
int32_t rax = (rsi + 1).d
*(arg1 + 0x20) = rax

if (rax s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

int32_t* rdx_3 = (rsi << 4) + *(arg1 + 0x18)
*rdx_3 = *arg2
rdx_3[1] = arg2[1]
*(rdx_3 + 8) = *(arg2 + 8)
*(arg2 + 8) = 0

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)

return sub_1405d1550(&arg2[2]) __tailcall

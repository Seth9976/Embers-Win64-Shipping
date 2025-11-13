// 函数: sub_141de1190
// 地址: 0x141de1190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x18)
int64_t rsi = sx.q(*(arg1 + 0x10))
int64_t r15 = sx.q(*(arg1 + 0x10))
int32_t rax = (rsi + 1).d
*(arg1 + 0x10) = rax

if (rax s> *(arg1 + 0x14))
    sub_1405c4e40(arg1 + 8)

int64_t* rax_3 = (rsi << 5) + *(arg1 + 8)
*rax_3 = 0
rax_3[2] = -0x4010000000000000
rax_3[1] = 0
rax_3[3].d = 0
*(rax_3 + 0x1c) = 0
int64_t rax_4 = *(arg1 + 8)
int64_t rcx_3 = r15 << 5
*(rcx_3 + rax_4)
*(rcx_3 + rax_4) = arg3
*(rcx_3 + *(arg1 + 8) + 0x1c) = 0
*(rcx_3 + *(arg1 + 8) + 0x18) = arg2
int64_t result = *(arg1 + 8) + rcx_3

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return result

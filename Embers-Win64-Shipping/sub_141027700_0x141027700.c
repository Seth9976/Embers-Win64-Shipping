// 函数: sub_141027700
// 地址: 0x141027700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x6f8)
int64_t r8 = sx.q(*(arg1 + 0x6f0))
int64_t result = *(*(arg1 + 0x6e8) + (r8 << 3) - 8)
*(arg1 + 0x6f0) = (r8 - 1).d
sub_1405c53d0(arg1 + 0x6e8)

if (arg1 != -0x6f8)
    LeaveCriticalSection(arg1 + 0x6f8)

return result

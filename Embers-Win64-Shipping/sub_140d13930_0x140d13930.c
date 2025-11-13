// 函数: sub_140d13930
// 地址: 0x140d13930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
AcquireSRWLockExclusive(arg1 + 0x18)

if (rsi.d s< *(arg1 + 0x10))
    *(*(arg1 + 8) + (rsi << 2)) = 0xffffffff

return ReleaseSRWLockExclusive(arg1 + 0x18) __tailcall

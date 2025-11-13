// 函数: sub_140d2aa90
// 地址: 0x140d2aa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0x18)
bool cond:0 = *(arg1 + 0x14) == 0
int32_t rsi = *(arg1 + 0x10)
*(arg1 + 0x10) = 0

if (not(cond:0))
    sub_1405dadb0(arg1 + 8, 0)

if (rsi s> 0)
    sub_140d2af80(&data_143e1d990, arg1)

return ReleaseSRWLockExclusive(arg1 + 0x18) __tailcall

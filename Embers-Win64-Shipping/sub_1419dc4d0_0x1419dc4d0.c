// 函数: sub_1419dc4d0
// 地址: 0x1419dc4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x40)
AcquireSRWLockExclusive(rsi + 0x128)

if (*(arg1 + 0x3c) != 0)
    ReleaseSRWLockExclusive(rsi + 0x128)
    int64_t rax_2
    rax_2.b = 0
    return rax_2

*(*(rsi + 0x18) + (sx.q(*(arg1 + 0x48)) << 3)) = 0
ReleaseSRWLockExclusive(rsi + 0x128)
int64_t rax_1
rax_1.b = 1
return rax_1

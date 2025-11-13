// 函数: sub_140d2ab00
// 地址: 0x140d2ab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0x18)
int32_t i_2 = *(arg1 + 0x10)
int32_t i_1 = i_2
int64_t* rbx = *(arg1 + 8)

if (i_2 != 0)
    int32_t i
    
    do
        sub_1405ae080(rbx)
        rbx = &rbx[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x14) == 0
*(arg1 + 0x10) = 0

if (not(cond:0))
    sub_1405a5310(arg1 + 8, 0)

if (i_2 s> 0)
    sub_140d2af80(&data_143e1d990, arg1)

return ReleaseSRWLockExclusive(arg1 + 0x18) __tailcall

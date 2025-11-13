// 函数: sub_140bc7eb0
// 地址: 0x140bc7eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x1a) & 1) != 0)
    return 0

int64_t rbx = sx.q(*(arg1 + 8))

if (rbx.d == 0xffffffff)
    return 0

AcquireSRWLockShared(&data_143e1a888)
int64_t result = *(data_1439a9a50 + rbx * 0x10 + 8)
ReleaseSRWLockShared(&data_143e1a888)
return result

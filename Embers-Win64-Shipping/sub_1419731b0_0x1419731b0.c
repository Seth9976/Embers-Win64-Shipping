// 函数: sub_1419731b0
// 地址: 0x1419731b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141976740()

if (result == 0)
    return result

AcquireSRWLockExclusive(&data_143f01fc8)
void* rcx = data_143f0f148
data_1439c79f0 = arg2

if (rcx != 0)
    sub_141972dc0(rcx, arg1, arg2, arg3, arg4)

return ReleaseSRWLockExclusive(&data_143f01fc8)

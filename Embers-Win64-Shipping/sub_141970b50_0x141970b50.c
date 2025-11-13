// 函数: sub_141970b50
// 地址: 0x141970b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141976740()

if (result == 0)
    return result

AcquireSRWLockShared(&data_143f01fc8)
void* rcx = data_143f0f148

if (rcx != 0)
    sub_141970540(rcx, arg1)

return ReleaseSRWLockShared(&data_143f01fc8) __tailcall

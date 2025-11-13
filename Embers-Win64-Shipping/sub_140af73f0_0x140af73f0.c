// 函数: sub_140af73f0
// 地址: 0x140af73f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x11])
sub_14065da90(&arg1[2], arg2)
sub_14065da90(&arg1[5], &arg2[3])
arg1[0x10] = arg2[0x12]
int64_t result = (*(*arg1 + 0x68))(arg1)

if (arg1 == -0x88)
    return result

return LeaveCriticalSection(&arg1[0x11])

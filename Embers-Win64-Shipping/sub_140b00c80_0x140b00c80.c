// 函数: sub_140b00c80
// 地址: 0x140b00c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x11])
sub_14065da90(&arg1[8], arg2)
int64_t result = (*(*arg1 + 0x68))(arg1)

if (arg1 == -0x88)
    return result

return LeaveCriticalSection(&arg1[0x11])

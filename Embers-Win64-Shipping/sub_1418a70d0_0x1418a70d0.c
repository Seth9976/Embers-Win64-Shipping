// 函数: sub_1418a70d0
// 地址: 0x1418a70d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xd0) = 0
EnterCriticalSection(arg1 + 0x78)
int64_t* result = sub_140597df0(arg1 + 0xb0, arg2)
*(arg1 + 0xc0) = arg3

if (arg1 == -0x78)
    return result

return LeaveCriticalSection(arg1 + 0x78)

// 函数: sub_1418a6fa0
// 地址: 0x1418a6fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int64_t var_18 = *(arg1 + 0xd0)
var_18.o = var_18.o
(*(*rcx + 0x48))(rcx, arg4, &var_18, 0xa, var_18, arg3)
*(arg1 + 0xd0) = arg3
EnterCriticalSection(arg1 + 0x78)
int64_t* result = sub_140597df0(arg1 + 0xb0, arg2)
*(arg1 + 0xc8) = arg3

if (arg1 == -0x78)
    return result

return LeaveCriticalSection(arg1 + 0x78)

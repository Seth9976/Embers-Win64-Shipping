// 函数: sub_1405f7a30
// 地址: 0x1405f7a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg3 == 0)
    return 0x80004003

if (arg2 != 0)
    return 0xc00d36b3

CRITICAL_SECTION* arg_18 = &arg1[2]
EnterCriticalSection(&arg1[2])
int32_t rcx_2
rcx_2.b = (*(*arg1 + 0x100))(arg1) != 0
*arg3 = rcx_2

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return 0

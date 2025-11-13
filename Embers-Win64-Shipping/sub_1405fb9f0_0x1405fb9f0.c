// 函数: sub_1405fb9f0
// 地址: 0x1405fb9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg2 == 0)
    return 0x80070057

CRITICAL_SECTION* arg_10 = arg1 + 0x20
EnterCriticalSection(arg1 + 0x20)
int64_t* rcx_1 = *(arg1 + 0x10)
int32_t rcx_2
rcx_2.b = (*(*rcx_1 + 0x30))(rcx_1) != 0
*arg2 = rcx_2

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return 0

// 函数: sub_1405f86a0
// 地址: 0x1405f86a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg3 == 0)
    return 0x80004003

if (arg2 != 0)
    return 0xc00d36b3

CRITICAL_SECTION* arg_18 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
int32_t rdi_1 = 0
int64_t* rcx_1 = *(arg1 + 0x40)

if (rcx_1 != 0)
    *arg3 = rcx_1
    int64_t rdx = *rcx_1
    (*(rdx + 8))(rcx_1, rdx)
else
    rdi_1 = -0x3ff292a0

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rdi_1)

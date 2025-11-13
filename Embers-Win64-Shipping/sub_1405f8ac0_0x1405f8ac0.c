// 函数: sub_1405f8ac0
// 地址: 0x1405f8ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 0x80004003

EnterCriticalSection(arg1 + 8)
int32_t rdi_1

if (*(arg1 + 0x40) != 0)
    rdi_1 = 0
    *arg4 = 0
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi_1)

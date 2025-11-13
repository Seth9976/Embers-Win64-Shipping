// 函数: sub_1405f7810
// 地址: 0x1405f7810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 0x80004003

EnterCriticalSection(arg1 + 8)
int32_t rdi_1

if (*(arg1 + 0x40) != 0)
    int32_t zmm0
    
    zmm0 = arg2 != 0 ? 0x800000 : 0x7f7fffff
    
    *arg4 = zmm0
    rdi_1 = 0
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi_1)

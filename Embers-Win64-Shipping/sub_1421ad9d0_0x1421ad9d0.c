// 函数: sub_1421ad9d0
// 地址: 0x1421ad9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int64_t rcx_1 = sx.q(*(arg1 + 0xc8))

if (rcx_1.d s<= 0)
    if (arg1 != -0xd0)
        LeaveCriticalSection(arg1 + 0xd0)
    
    return 0xffffffff

*(arg1 + 0xc8) = (rcx_1 - 1).d
int32_t rdi_1 = *(*(arg1 + 0xb8) + (rcx_1 << 2) - 4)

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

return zx.q(rdi_1)

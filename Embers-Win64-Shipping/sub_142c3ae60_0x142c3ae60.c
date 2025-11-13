// 函数: sub_142c3ae60
// 地址: 0x142c3ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
uint64_t rdi_1

if (*(arg1 + 0x20) != 0)
    rcx = *(arg1 + 0x18)
    rdi_1 = zx.q(arg2.d - *(arg1 + 0x18) + arg3)

if (*(arg1 + 0x20) == 0 || *(arg1 + 0x10) - rcx s< rdi_1)
    *(arg1 + 0x20) = 0
else
    memset(rcx, 0, zx.q(rdi_1.d))
    int64_t rcx_1 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rdi_1 + rcx_1
    
    if (rcx_1 != 0)
        return arg2

return 0

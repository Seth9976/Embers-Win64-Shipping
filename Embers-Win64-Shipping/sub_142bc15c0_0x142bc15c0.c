// 函数: sub_142bc15c0
// 地址: 0x142bc15c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x3e8)
uint32_t rcx_1 = zx.d(*(*(r8 + 0x4d8) + (zx.q(arg2) << 1)))

if (rcx_1 != 0xffff)
    if (rcx_1 u<= 0x186)
        int64_t rax_4 = *(r8 + 0x10e0)
        
        if (rax_4 != 0)
            jump(*(rax_4 + 0x28))
    else
        uint64_t rcx_2 = zx.q(rcx_1 - 0x187)
        
        if (rcx_2.d u< *(r8 + 0x5c0))
            return *(*(r8 + 0x5c8) + (rcx_2 << 3))

return 0

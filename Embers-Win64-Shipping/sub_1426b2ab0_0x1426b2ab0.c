// 函数: sub_1426b2ab0
// 地址: 0x1426b2ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_2 = zx.d((*(*arg1 + 0x298))())

if (rax_2 != 0)
    int64_t rcx_1 = zx.q(rax_2 + 3) & 0xfffffffffffffffc
    
    if (arg3 != rcx_1)
        int64_t rax_3 = sx.q(*(arg3 - rcx_1))
        
        if (rax_3.d s>= 0 && rax_3.d s< *(arg2 + 0x138))
            return *(*(arg2 + 0x130) + (rax_3 << 3))

return 0

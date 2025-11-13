// 函数: sub_142701fb0
// 地址: 0x142701fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* rax = sub_1426fbdd0(arg2)

if (rax != 0)
    uint64_t rcx_1 = zx.q(*(arg3 + 0x2c))
    
    if (rcx_1.d s< *(rax + 0x90))
        void* rax_2 = *(*(rax + 0x88) + (rcx_1 << 3))
        
        if (rax_2 != 0)
            *arg1 = *(rax_2 + 0x10)

return arg1

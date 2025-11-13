// 函数: sub_142689ba0
// 地址: 0x142689ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x1f) u< 0x40)
    int64_t result
    result.b = 0
    return result

int32_t i = *arg3
char r10 = 0

if (i != 0xffffffff)
    int32_t rbx_1 = *(*(arg2 + 8) + 0x20)
    
    do
        void* rax_3
        
        if (i u>= rbx_1)
            rax_3 = (sx.q(i - rbx_1) << 4) + *(arg2 + 0x80)
        else
            rax_3 = (zx.q(i) << 4) + *(arg2 + 0x20)
        
        char r8 = *(rax_3 + 0xc)
        i = *(rax_3 + 8)
        char rcx = r10 | 1
        
        if (r8 != 0)
            rcx = r10
        
        r10 = rcx | 2
        
        if (r8 != 1)
            r10 = rcx
    while (i != 0xffffffff)

return zx.q(r10)

// 函数: sub_141f23670
// 地址: 0x141f23670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_141f23700(arg1, arg2)

if (arg2[8].d s< 0x10a && *(arg1 + 0x20) != 0)
    void* rax_1 = sub_14249b070()
    void* rdx = *(*(arg1 + 0x20) + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38))
        rax = *(rdx + 0x30)
    
    if (rax_2.d s> *(rdx + 0x38) || *(rax + (rax_2 << 3)) != rax_1 + 0x30)
        rax = zx.q(*(arg1 + 0x14f))
        
        if (rax.b == 2)
            int32_t rax_3 = *(arg1 + 0x33c)
            *(arg1 + 0x340) = rax_3
            return rax_3
        
        if (rax.b == 1)
            rax = zx.q(*(arg1 + 0x33c))
            *(arg1 + 0x344) = rax.d

return rax

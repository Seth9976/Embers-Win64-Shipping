// 函数: sub_142bbd850
// 地址: 0x142bbd850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_4 = *arg2
*arg2 = 0

if (rax_4 u< 0xff)
    uint64_t rax = zx.q(rax_4 + 1)
    
    if (rax.d u< 0x100)
        uint32_t rdx
        
        do
            rdx = zx.d(*(*(arg1 + 0x18) + (rax << 1)))
            
            if (rdx != 0)
                *arg2 = rax.d
                return zx.q(rdx)
            
            rax = zx.q(rax.d + 1)
        while (rax.d u< 0x100)
        
        return zx.q(rdx)

return 0

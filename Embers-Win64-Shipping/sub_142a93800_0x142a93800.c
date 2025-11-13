// 函数: sub_142a93800
// 地址: 0x142a93800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*arg1)
int32_t rdx = 0

if (rax.b != 0)
    do
        if (rax.b != 0x2d)
            rax.b -= 0x30
            
            if (rax.b u> 0x36)
                rax.b = 0
                return rax
            
            if (not(test_bit(0x7e0000007e03ff, sx.q(rax.b))))
                rax.b = 0
                return rax
            
            rdx += 1
        else
            if (rdx - 4 u> 2)
                rax.b = 0
                return rax
            
            rdx = 0
        
        rax = zx.q(arg1[1])
        arg1 = &arg1[1]
    while (rax.b != 0)
    
    if (rdx - 4 u<= 2)
        int32_t rax_1
        rax_1.b = 1
        return rax_1

return 0

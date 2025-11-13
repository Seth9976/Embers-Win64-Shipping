// 函数: sub_14288fc80
// 地址: 0x14288fc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    if (arg2 == 0)
        return 0xffffffff
    
    int32_t rax_1 = arg1[2].d
    
    if (rax_1 != arg2[2].d)
        if (rax_1 == 0)
            return 1
        
        return 0xffffffff
    
    int32_t rax_3 = arg1[1].d
    int32_t r10_1 = 1
    int32_t r11_1 = -1
    
    if (rax_1 != 0)
        r11_1 = 1
    
    if (rax_1 != 0)
        r10_1 = -1
    
    int32_t temp1_1 = arg2[1].d
    
    if (rax_3 s> temp1_1)
        return zx.q(r10_1)
    
    if (rax_3 s< temp1_1)
        return zx.q(r11_1)
    
    if (rax_3 - 1 s>= 0)
        int64_t rax_4 = *arg2
        int64_t rdx = sx.q(rax_3 - 1)
        int64_t* rcx_1 = rax_4 + (rdx << 3)
        
        while (true)
            int64_t rax_5 = *(*arg1 - rax_4 + rcx_1)
            int64_t temp2_1 = *rcx_1
            
            if (rax_5 u> temp2_1)
                return zx.q(r10_1)
            
            if (rax_5 u< temp2_1)
                return zx.q(r11_1)
            
            rcx_1 -= 8
            int64_t temp3_1 = rdx
            rdx -= 1
            
            if (temp3_1 - 1 s< 0)
                return 0
else if (arg2 != 0)
    return 1

return 0

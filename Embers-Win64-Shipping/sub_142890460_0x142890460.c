// 函数: sub_142890460
// 地址: 0x142890460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t rdx_1 = temp0_1 & 0x3f
    int32_t rax_3 = temp1_1 + rdx_1
    int32_t rax_5 = (rax_3 & 0x3f) - rdx_1
    int32_t i = rax_3 s>> 6
    
    if (i s< arg1[1].d)
        if (rax_5 != 0)
            arg1[1].d = i + 1
            int64_t* r8_2 = *arg1 + (sx.q(i) << 3)
            *r8_2 &= not.q(-1 << rax_5.b)
            i = arg1[1].d
        else
            arg1[1].d = i
        
        bool cond:0 = i != 0
        
        if (i s> 0)
            int64_t rdx_3 = *arg1 + (sx.q(i) << 3)
            
            do
                bool cond:1_1 = *(rdx_3 - 8) != 0
                rdx_3 -= 8
                
                if (cond:1_1)
                    break
                
                i -= 1
            while (i s> 0)
            
            arg1[1].d = i
            cond:0 = i != 0
        
        if (not(cond:0))
            arg1[2].d = 0
        
        return 1

return 0

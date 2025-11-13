// 函数: sub_142612a00
// 地址: 0x142612a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_7 = sx.q(*(arg1 + 0xc))
int32_t i = 0

if (rax_7.d s> 0)
    int64_t r9_1 = 0
    int64_t* rax = *arg1
    
    while (*rax != arg2)
        i += 1
        r9_1 += 1
        rax = &rax[1]
        
        if (r9_1 s>= rax_7)
            return rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i - 1)
    int32_t i_1 = (temp1_1 - temp0_1) s>> 1
    
    if (i s> 0)
        int32_t zmm0 = *(arg2 + 0x10)
        
        do
            int64_t rdx_1 = *arg1
            void* r9_2 = *(rdx_1 + (sx.q(i_1) << 3))
            
            if (zmm0 f>= *(r9_2 + 0x10))
                break
            
            int64_t i_2 = sx.q(i)
            i = i_1
            *(rdx_1 + (i_2 << 3)) = r9_2
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i_1 - 1)
            i_1 = (temp3_1 - temp2_1) s>> 1
        while (i s> 0)
    
    rax_7 = *arg1
    *(rax_7 + (sx.q(i) << 3)) = arg2

return rax_7

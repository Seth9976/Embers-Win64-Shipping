// 函数: sub_141184690
// 地址: 0x141184690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1411a4ac0(data_143f0f1a0, *(arg1 + 8))

if (result.b != 0)
    int32_t rcx_1 = *(arg1 + 0x1730)
    
    if (arg2 + 1 s> rcx_1)
        int32_t rsi_3 = ((arg2 + 0x40) & 0xffffffc0) - rcx_1
        
        if (rsi_3 s> 0)
            int32_t rbx_1 = *(arg1 + 0x1730)
            int32_t r15_1 = rbx_1 + rsi_3
            sub_1405a4980(arg1 + 0x1718, r15_1)
            *(arg1 + 0x1730) += rsi_3
            
            while (rbx_1 != r15_1)
                void* rax_1 = *(arg1 + 0x1728)
                void* rcx_3 = arg1 + 0x1718
                
                if (rax_1 != 0)
                    rcx_3 = rax_1
                
                int32_t rax_2 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_2 = rbx_1 + 0x1f
                
                void* r8_1 = rcx_3 + (sx.q(rax_2 s>> 5) << 2)
                char rcx_5 = rbx_1.b & 0x1f
                rbx_1 += 1
                *r8_1 &= not.d(1 << rcx_5)
    
    int64_t result_1 = arg1 + 0x1718
    int64_t result_2 = *(result_1 + 0x10)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t r14_1 = 1 << (arg2.b & 0x1f)
    result = result_1
    int64_t r15_2 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2
    
    if (result_2 != 0)
        result = result_2
    
    if ((*(result + r15_2) & r14_1) == 0)
        int64_t rsi_4 = sx.q(*(arg1 + 0x1710))
        int32_t rax_9 = (rsi_4 + 1).d
        *(arg1 + 0x1710) = rax_9
        
        if (rax_9 s> *(arg1 + 0x1714))
            sub_1405a4cf0(arg1 + 0x1708)
        
        *(*(arg1 + 0x1708) + (rsi_4 << 2)) = arg2
        result = *(result_1 + 0x10)
        
        if (result != 0)
            result_1 = result
        
        *(result_1 + r15_2) |= r14_1

return result

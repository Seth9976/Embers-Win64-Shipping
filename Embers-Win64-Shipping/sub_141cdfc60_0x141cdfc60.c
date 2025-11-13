// 函数: sub_141cdfc60
// 地址: 0x141cdfc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)
uint64_t result

if (arg2 s>= 0 && r9.d s< *(arg1 + 0xa0))
    void* r10_1 = arg1 + 0xa8
    void* rax = *(r10_1 + 0x10)
    
    if (rax != 0)
        r10_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9.d)
    
    if (test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9.d & 0x1f)
            && arg3 s>= 0 && arg3 s< *(arg1 + 0x110))
        void* r10_2 = arg1 + 0x118
        void* rax_5 = *(r10_2 + 0x10)
        
        if (rax_5 != 0)
            r10_2 = rax_5
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(arg3)
        
        if (test_bit(*(r10_2 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f))
            result = *(arg1 + 0x98)
            int64_t rcx_4 = r9 * 3
            
            if (*(result + (rcx_4 << 3) + 0x10) == 2)
                int32_t* rcx_5 = *(result + (rcx_4 << 3) + 8)
                int64_t rdx_6 = *(arg1 + 0xd0)
                
                if (*((sx.q(*rcx_5) << 4) + rdx_6 + 0xc) == arg3
                        && *((sx.q(rcx_5[1]) << 4) + rdx_6 + 0xc) == arg3)
                    result.b = 1
                    return result

result.b = 0
return result

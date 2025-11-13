// 函数: sub_141cdfbe0
// 地址: 0x141cdfbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sx.q(arg2)
uint64_t result

if (arg2 s>= 0 && r8_1.d s< *(arg1 + 0xa0))
    void* r9_1 = arg1 + 0xa8
    void* rax = *(r9_1 + 0x10)
    
    if (rax != 0)
        r9_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8_1.d)
    
    if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r8_1.d & 0x1f))
        result = *(arg1 + 0x98)
        int64_t rcx_2 = r8_1 * 3
        
        if (*(result + (rcx_2 << 3) + 0x10) == 2)
            int32_t* rax_5 = *(result + (rcx_2 << 3) + 8)
            int64_t r8 = *(arg1 + 0xd0)
            
            if (*(r8 + sx.q(*rax_5) * 0x10 + 0xc) == *(r8 + sx.q(rax_5[1]) * 0x10 + 0xc))
                result.b = 1
                return result

result.b = 0
return result

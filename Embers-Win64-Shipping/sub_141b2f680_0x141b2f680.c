// 函数: sub_141b2f680
// 地址: 0x141b2f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* arg_8 = arg1
int64_t r8 = sx.q(*(arg1 + 0x20))
void* r9 = arg1

if (r8.d != 0)
    int32_t* rdx = *(arg1 + 0x18)
    int32_t r12_1 = 0
    int32_t rsi_1 = 0
    
    if (*rdx == arg2.d)
        result = arg2 u>> 0x20
    
    int64_t rbp
    
    if (*rdx != arg2.d || rdx[1] != result.d)
        rbp.b = 1
    else
        rbp.b = 0
    
    int64_t rdi_1 = 0
    
    do
        int64_t rdx_1 = sx.q(rsi_1)
        rdi_1 += 1
        rsi_1 += 1
        
        if (rdi_1 s< r8)
            result = (rdi_1 << 6) + *(r9 + 0x18)
            
            do
                if (*result != arg2.d || *(result + 4) != arg2:4.d)
                    arg1.b = 1
                else
                    arg1.b = 0
                
                if (rbp.b != arg1.b)
                    break
                
                rsi_1 += 1
                rdi_1 += 1
                result = &result[8]
            while (rdi_1 s< r8)
        
        int32_t r14_2 = rsi_1 - rdx_1.d
        
        if (rbp.b != 0)
            if (r12_1 != rdx_1.d)
                result, arg1 = memmove((sx.q(r12_1) << 6) + *(r9 + 0x18), 
                    (rdx_1 << 6) + *(r9 + 0x18), r14_2 << 6)
                r9 = arg_8
            
            r12_1 += r14_2
        
        rbp.b ^= 1
    while (rdi_1 s< r8)
    
    *(r9 + 0x20) = r12_1

return result

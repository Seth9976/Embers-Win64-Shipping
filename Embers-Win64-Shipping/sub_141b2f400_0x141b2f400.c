// 函数: sub_141b2f400
// 地址: 0x141b2f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* arg_8 = arg1
int64_t r8 = sx.q(*(arg1 + 0x20))

if (r8.d != 0)
    int32_t* rdx = *(arg1 + 0x18)
    int32_t r12_1 = 0
    int32_t rbp_1 = 0
    
    if (*rdx == arg2.d)
        result = arg2 u>> 0x20
    
    int64_t r14
    
    if (*rdx != arg2.d || rdx[1] != result.d)
        r14.b = 1
    else
        r14.b = 0
    
    int64_t rdi_1 = 0
    
    do
        int64_t rdx_1 = sx.q(rbp_1)
        rdi_1 += 1
        rbp_1 += 1
        
        if (rdi_1 s< r8)
            result = rdi_1 * 0x58 + *(arg1 + 0x18)
            
            do
                if (*result != arg2.d || *(result + 4) != arg2:4.d)
                    arg1.b = 1
                else
                    arg1.b = 0
                
                if (r14.b != arg1.b)
                    break
                
                rbp_1 += 1
                rdi_1 += 1
                result = &result[0xb]
            while (rdi_1 s< r8)
            
            arg1 = arg_8
        
        int32_t i_1 = rbp_1 - rdx_1.d
        
        if (r14.b == 0)
            result = rdx_1 * 0x58 + 0x29
            
            if (i_1 != 0)
                result += *(arg1 + 0x18)
                int32_t i
                
                do
                    if (result[1].b != 0)
                        result[1].b = 0
                    
                    if (*result != 0)
                        *result = nullptr
                    
                    result = &result[0xb]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        else
            if (r12_1 != rdx_1.d)
                int64_t r9_1 = *(arg1 + 0x18)
                result = memmove(sx.q(r12_1) * 0x58 + r9_1, rdx_1 * 0x58 + r9_1, i_1 * 0x58)
            
            arg1 = arg_8
            r12_1 += i_1
        
        r14.b ^= 1
    while (rdi_1 s< r8)
    
    *(arg1 + 0x20) = r12_1

return result

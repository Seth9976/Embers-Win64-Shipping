// 函数: sub_141bf3660
// 地址: 0x141bf3660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t rsi = sx.q(*(arg1 + 0x1d8))
void* r14 = arg1

if (rsi.d != 0)
    int64_t* rdi_1 = *(arg1 + 0x1d0)
    result = nullptr
    uint64_t arg_20 = 0
    int32_t rbp_1 = 0
    int64_t r12
    
    if (*rdi_1 != arg2)
        r12.b = 1
    else if (rdi_1[1].d != *arg3 || *(rdi_1 + 0xc) != arg3[1])
        result = sub_140d3e110(&rdi_1[1])
        
        if (result.b != 0)
            r12.b = 1
        else
            result = sub_140d3e110(arg3)
            
            if (result.b == 0)
                goto label_141bf36df
            
            r12.b = 1
    else
    label_141bf36df:
        result = *(arg3 + 8)
        
        if (rdi_1[2] != result || rdi_1[3].b != 1)
            r12.b = 1
        else
            r12.b = 0
    
    uint64_t rsi_1 = 0
    int64_t rdi_2 = 0
    
    do
        int32_t rcx_4 = rbp_1
        rdi_2 += 1
        rbp_1 += 1
        
        if (rdi_2 s< rsi)
            int64_t r14_2 = rdi_2 * 0x28
            
            do
                int64_t* rsi_3 = *(arg1 + 0x1d0) + r14_2
                
                if (*rsi_3 != arg2)
                    result.b = 1
                else if (rsi_3[1].d != *arg3 || *(rsi_3 + 0xc) != arg3[1])
                    if (sub_140d3e110(&rsi_3[1]).b != 0)
                        result.b = 1
                    else if (sub_140d3e110(arg3).b != 0 || rsi_3[2] != *(arg3 + 8)
                            || rsi_3[3].b != 1)
                        result.b = 1
                    else
                        result.b = 0
                else if (rsi_3[2] != *(arg3 + 8) || rsi_3[3].b != 1)
                    result.b = 1
                else
                    result.b = 0
                
                if (r12.b != result.b)
                    break
                
                rbp_1 += 1
                rdi_2 += 1
                r14_2 += 0x28
            while (rdi_2 s< rsi)
            
            r14 = arg1
            rsi_1 = arg_20
        
        int32_t rbx_2 = rbp_1 - rcx_4
        
        if (r12.b != 0)
            if (rsi_1.d != rcx_4)
                int64_t r9_1 = *(r14 + 0x1d0)
                result =
                    memmove(r9_1 + sx.q(rsi_1.d) * 0x28, r9_1 + sx.q(rcx_4) * 0x28, rbx_2 * 0x28)
            
            rsi_1 = zx.q(rsi_1.d + rbx_2)
            arg_20 = rsi_1
        
        r12.b ^= 1
    while (rdi_2 s< rsi)
    
    *(r14 + 0x1d8) = rsi_1.d

return result

// 函数: sub_1403d2020
// 地址: 0x1403d2020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x1f4) + 1
*(arg1 + 0x1f4) = result

if (result u>= *(arg1 + 0x1e0))
    if (*(arg1 + 0x25b) == 0)
    label_1403d21aa:
        
        while (true)
            int32_t rax_13 = sub_14036f750(arg1 + 0x160, 4)
            
            if (rax_13 == 1)
                int32_t r8_6 = *(arg1 + 0x1c0)
                
                if (r8_6 u> *(arg1 + 0x178))
                    sub_1403cfc20(arg1, *(arg1 + 0x1b8), zx.q(r8_6 - *(arg1 + 0x178)))
                
                result = sub_14036f070(arg1 + 0x160)
                *(arg1 + 0x1a8) = 0
                break
            
            if (rax_13 != 0)
                char const* const rdx_5 = *(arg1 + 0x180)
                
                if (rdx_5 == 0)
                    rdx_5 = "zlib error"
                
                png_error(arg1, rdx_5)
                noreturn
            
            if (*(arg1 + 0x178) == 0)
                sub_1403cfc20(arg1, *(arg1 + 0x1b8), zx.q(*(arg1 + 0x1c0)))
                *(arg1 + 0x170) = *(arg1 + 0x1b8)
                *(arg1 + 0x178) = *(arg1 + 0x1c0)
    else
        *(arg1 + 0x1f4) = 0
        
        if ((*(arg1 + 0x15c) & 2) != 0)
            result.b = *(arg1 + 0x25c)
            result.b += 1
            *(arg1 + 0x25c) = result.b
            
            if (result.b u> 6)
                goto label_1403d21aa
        else
            result.b = *(arg1 + 0x25c)
            
            while (true)
                int32_t result_1 = result + 1
                
                if (result_1.b u>= 7)
                    result.b += 1
                    *(arg1 + 0x25c) = result.b
                    goto label_1403d21aa
                
                uint64_t rcx = zx.q(result_1.b)
                int32_t rsi_1 = *(&data_1436ae910 + (rcx << 2))
                int32_t rdi_3 = not.d(*(&data_1436ae8f0 + (rcx << 2))) + *(arg1 + 0x1d8) + rsi_1
                *(arg1 + 0x1e4) = divu.dp.d(0:rdi_3, rsi_1)
                int32_t rbp_1 = *(&data_1436ae8d0 + (rcx << 2))
                int32_t rcx_3 = not.d(*(&data_1436ae8b0 + (rcx << 2))) + *(arg1 + 0x1dc) + rbp_1
                *(arg1 + 0x1e0) = divu.dp.d(0:rcx_3, rbp_1)
                result = result_1
                
                if (rsi_1 u<= rdi_3)
                    result = result_1
                    
                    if (rbp_1 u<= rcx_3)
                        *(arg1 + 0x25c) = result_1.b
                        break
        
        int64_t rcx_4 = *(arg1 + 0x1f8)
        
        if (rcx_4 != 0)
            int64_t r8_2 = zx.q(*(arg1 + 0x260)) * zx.q(*(arg1 + 0x263))
            uint64_t rax_10 = zx.q(*(arg1 + 0x1d8))
            uint64_t r8_4
            
            if (r8_2.d u< 8)
                r8_4 = (r8_2 * rax_10 + 7) u>> 3
            else
                r8_4 = (r8_2 u>> 3) * rax_10
            
            return memset(rcx_4, 0, r8_4 + 1) __tailcall

return result

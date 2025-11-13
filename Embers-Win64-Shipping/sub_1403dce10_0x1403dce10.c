// 函数: sub_1403dce10
// 地址: 0x1403dce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t result = *(arg1 + 0x1f4) + 1
*(arg1 + 0x1f4) = result

if (result u>= *(arg1 + 0x1e0))
    if (*(arg1 + 0x25b) == 0)
    label_1403dcf16:
        
        if ((*(arg1 + 0x158) & 0x20) == 0)
            void var_39
            *(arg1 + 0x170) = &var_39
            *(arg1 + 0x178) = 1
            
            while (true)
                char const* const rdx_5
                
                if (*(arg1 + 0x168) == 0)
                    int32_t i = *(arg1 + 0x240)
                    
                    while (i == 0)
                        sub_1403d8880(arg1, 0)
                        i = sub_1403d8740(arg1)
                        *(arg1 + 0x240) = i
                        
                        if (*(arg1 + 0x254) != 0x54414449)
                            rdx_5 = "Not enough image data"
                            goto label_1403dd0b2
                    
                    int32_t i_1 = *(arg1 + 0x1c0)
                    *(arg1 + 0x168) = i_1
                    void* rbx_5 = *(arg1 + 0x1b8)
                    *(arg1 + 0x160) = rbx_5
                    
                    if (i_1 u> i)
                        *(arg1 + 0x168) = i
                        i_1 = i
                    
                    uint64_t i_2 = zx.q(i_1)
                    sub_1403cc480(arg1, rbx_5, i_2)
                    sub_1403be770(arg1, rbx_5, i_2.d)
                    *(arg1 + 0x240) -= *(arg1 + 0x168)
                
                int32_t rax_11 = sub_140371df0(arg1 + 0x160, 1)
                
                if (rax_11 != 0)
                    if (rax_11 != 1)
                        char* rax_12 = *(arg1 + 0x180)
                        rdx_5 = "Decompression Error"
                        
                        if (rax_12 != 0)
                            rdx_5 = rax_12
                        
                    label_1403dd0b2:
                        png_error(arg1, rdx_5)
                        noreturn
                    
                    if (*(arg1 + 0x178) == 0 || *(arg1 + 0x168) != 0 || *(arg1 + 0x240) != 0)
                        png_warning(arg1, "Extra compressed data")
                else if (*(arg1 + 0x178) != 0)
                    continue
                else
                    png_warning(arg1, "Extra compressed data")
                
                *(arg1 + 0x154) |= 8
                *(arg1 + 0x158) |= 0x20
                *(arg1 + 0x178) = 0
                break
        
        if (*(arg1 + 0x240) != 0 || *(arg1 + 0x168) != 0)
            png_warning(arg1, "Extra compression data")
        
        result = sub_140371990(arg1 + 0x160)
        *(arg1 + 0x154) |= 8
    else
        *(arg1 + 0x1f4) = 0
        memset(*(arg1 + 0x1f8), 0, *(arg1 + 0x1e8) + 1)
        result.b = *(arg1 + 0x25c)
        result.b += 1
        
        while (true)
            uint32_t result_1 = result
            
            if (result.b u> 6)
                *(arg1 + 0x25c) = result_1.b
                goto label_1403dcf16
            
            uint64_t rbx_1 = zx.q(result_1.b)
            int32_t rbp_1 = *(&data_1436aff60 + (rbx_1 << 2))
            int32_t rcx_3 = not.d(*(&data_1436aff40 + (rbx_1 << 2))) + *(arg1 + 0x1d8) + rbp_1
            result = divu.dp.d(0:rcx_3, rbp_1)
            *(arg1 + 0x1f0) = result
            
            if ((*(arg1 + 0x15c) & 2) == 0)
                int32_t rsi_1 = *(&data_1436aff10 + (rbx_1 << 2))
                int32_t rbx_4 = not.d(*(&data_1436afef0 + (rbx_1 << 2))) + *(arg1 + 0x1dc) + rsi_1
                *(arg1 + 0x1e0) = divu.dp.d(0:rbx_4, rsi_1)
                result = result_1 + 1
                
                if (rbp_1 u> rcx_3)
                    continue
                else if (rsi_1 u> rbx_4)
                    continue
            
            *(arg1 + 0x25c) = result_1.b
            break

__security_check_cookie(rax_1 ^ &var_68)
return result

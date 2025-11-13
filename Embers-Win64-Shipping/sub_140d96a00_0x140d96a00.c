// 函数: sub_140d96a00
// 地址: 0x140d96a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result

if (**arg1 == 1)
label_140d96ca6:
    result.b = 1
else
    int64_t r8_1 = sx.q(*arg1[1])
    int32_t r9_2 = *arg1[2] + r8_1.d
    
    if (r8_1.d s< r9_2)
        int64_t rdx_1 = r8_1
        int64_t r8_2 = sx.q(r9_2)
        int32_t arg_8 = 0x5720
        int32_t arg_10 = 0x1cd0
        int64_t r10_1 = *arg1[3]
        int32_t arg_18 = 0xc00
        int32_t arg_20 = 0xe00
        int32_t var_78
        __builtin_memcpy(&var_78, 
            "\x00\x0f\x00\x00\xff\x00\x00\x00\x80\x17\x00\x00\xe0\x19\x00\x00\x80\x0d\x00\x00\x00\x19\x"
        "00\x00\x20\x1a\x00\x00\x8f\x00\x00\x00\x80\x55\x00\x00\xc0\x1b\x00\x00", 
            0x28)
        
        do
            result = zx.q(*(r10_1 + (rdx_1 << 1)))
            
            if (result.w u> 0x7f)
                if (result.w == 0x200d)
                    goto label_140d96ca6
                
                if (result.w - 0x300 u<= 0x6f)
                    goto label_140d96ca6
                
                if (result.w - 0x1ab0 u<= 0x4f)
                    goto label_140d96ca6
                
                if (result.w - 0x1dc0 u<= 0x3f)
                    goto label_140d96ca6
                
                if (result.w - 0x20d0 u<= 0x2f)
                    goto label_140d96ca6
                
                if (result.w - 0x3099 u<= 1)
                    goto label_140d96ca6
                
                if (result.w - 0x31c0 u<= 0x2f)
                    goto label_140d96ca6
                
                if ((&result[0x1e0]).w u<= 0xf)
                    goto label_140d96ca6
                
                if (result.w - 0x900 u<= 0x7f)
                    goto label_140d96ca6
                
                if (result.w + 0x5720 u<= 0x1f)
                    goto label_140d96ca6
                
                if (result.w - 0x1cd0 u<= 0x2f)
                    goto label_140d96ca6
                
                if (result.w - 0xc00 u<= 0x7f)
                    goto label_140d96ca6
                
                if (result.w - 0xe00 u<= 0x7f)
                    goto label_140d96ca6
                
                if (result.w - 0xf00 u<= 0xff)
                    goto label_140d96ca6
                
                if (result.w - 0x1780 u<= 0x7f)
                    goto label_140d96ca6
                
                if (result.w - 0x19e0 u<= 0x1f)
                    goto label_140d96ca6
                
                if (result.w - 0xd80 u<= 0x7f)
                    goto label_140d96ca6
                
                if (result.w - 0x1900 u<= 0x4f)
                    goto label_140d96ca6
                
                if (result.w - 0x1a20 u<= 0x8f)
                    goto label_140d96ca6
                
                if (result.w + 0x5580 u<= 0x5f)
                    goto label_140d96ca6
                
                if (result.w - 0x1bc0 u<= 0x3f)
                    goto label_140d96ca6
                
                if (rdx_1 + 1 s< r8_2)
                    result.w += 0x2800
                    
                    if (result.w u<= 0x3ff)
                        result.w = *(r10_1 + (rdx_1 << 1) + 2) + 0x2400
                        
                        if (result.w u<= 0x3ff)
                            goto label_140d96ca6
            
            rdx_1 += 1
        while (rdx_1 s< r8_2)
    
    result.b = 0

return result

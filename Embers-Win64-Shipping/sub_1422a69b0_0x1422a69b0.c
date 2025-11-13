// 函数: sub_1422a69b0
// 地址: 0x1422a69b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if ((*(arg1 + 0x39) & 0x12) != 0)
    if ((*(arg1 + 0x3a) & 1) != 0)
        result.b = 1
        return result
    
    if ((*(arg1 + 0x35) & 2) != 0)
        *(arg2 + 0xb74)
        
        if (*(arg2 + 0xb48) == *(arg2 + 0xb74))
        label_1422a6a3e:
            
            if (*(arg2 + 0xbe0) == 0)
            label_1422a6aaf:
                
                if ((*(arg1 + 0x35) & 0x10) == 0)
                label_1422a6ae1:
                    
                    if ((*(arg1 + 0x35) & 0x20) == 0)
                        result.b = 1
                        return result
                    
                    for (int64_t* i = *(arg1 + 0x70); i != &i[sx.q(*(arg1 + 0x78))]; i = &i[1])
                        if (*i == *(arg2 + 0x240))
                            goto label_1422a6aa7
                    
                    result.b = 1
                    return result
                
                int64_t* rcx_8 = *(arg1 + 0x70)
                void* rdx_4 = &rcx_8[sx.q(*(arg1 + 0x78))]
                
                if (rcx_8 != rdx_4)
                    while (*rcx_8 != *(arg2 + 0x240))
                        rcx_8 = &rcx_8[1]
                        
                        if (rcx_8 == rdx_4)
                            result.b = 0
                            return result
                    
                    goto label_1422a6ae1
            else
                *(arg2 + 0xbc4)
                
                if (*(arg2 + 0xb98) != *(arg2 + 0xbc4))
                    void* r8_3 = arg2 + 0xbc8
                    void* rdx_2 = *(r8_3 + 8)
                    int64_t r11_2 = sx.q(*(arg1 + 0x104))
                    
                    if (rdx_2 != 0)
                        r8_3 = rdx_2
                    
                    result = zx.q(*(r8_3 + (((sx.q(*(arg2 + 0xbd8)) - 1) & r11_2) << 2)))
                    
                    if (result.d != 0xffffffff)
                        int64_t r8_4 = *(arg2 + 0xb90)
                        
                        while (true)
                            int64_t rdx_3 = sx.q(result.d) * 3
                            
                            if (*(r8_4 + (rdx_3 << 2)) == r11_2.d)
                                break
                            
                            result = zx.q(*(r8_4 + (rdx_3 << 2) + 4))
                            
                            if (result.d == 0xffffffff)
                                goto label_1422a6aa7
                        
                        if (result.d != 0xffffffff)
                            goto label_1422a6aaf
        else
            int64_t r11_1 = sx.q(*(arg1 + 0x104))
            void* r8_1 = arg2 + 0xb78
            void* rdx = *(r8_1 + 8)
            
            if (rdx != 0)
                r8_1 = rdx
            
            result = zx.q(*(r8_1 + (((sx.q(*(arg2 + 0xb88)) - 1) & r11_1) << 2)))
            
            if (result.d == 0xffffffff)
                goto label_1422a6a3e
            
            int64_t r8_2 = *(arg2 + 0xb40)
            
            while (true)
                int64_t rdx_1 = sx.q(result.d) * 3
                
                if (*(r8_2 + (rdx_1 << 2)) == r11_1.d)
                    break
                
                result = zx.q(*(r8_2 + (rdx_1 << 2) + 4))
                
                if (result.d == 0xffffffff)
                    goto label_1422a6a3e
            
            if (result.d == 0xffffffff)
                goto label_1422a6a3e

label_1422a6aa7:
result.b = 0
return result

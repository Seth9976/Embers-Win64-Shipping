// 函数: sub_142b1e590
// 地址: 0x142b1e590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg3)
    uint32_t r8 = zx.d(*arg2)
    
    if (r8.b s< 0)
        if (&arg2[1] == arg3)
            r8 = *(*(arg1 + 0x20) + 0x14) - 1
        else if (r8 u< 0xe0)
            if (r8 u< 0xc2)
                r8 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                char rdx_5 = arg2[1] - 0x80
                
                if (rdx_5 u> 0x3f)
                    r8 = *(*(arg1 + 0x20) + 0x14) - 1
                else
                    r8 = zx.d(*(**(arg1 + 0x20) + ((zx.q(r8) & 0x1f) << 1))) + zx.d(rdx_5)
        else if (r8 u< 0xf0)
            uint32_t r11_2 = zx.d(arg2[1])
            uint64_t r8_1 = zx.q(r8) & 0xf
            
            if (not(test_bit(sx.d((*" 000000000000")[r8_1]), zx.d((r11_2 u>> 5).b)))
                    || &arg2[2] == arg3)
                r8 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                char r10_1 = arg2[2] - 0x80
                
                if (r10_1 u> 0x3f)
                    r8 = *(*(arg1 + 0x20) + 0x14) - 1
                else
                    r8 = zx.d(*(**(arg1 + 0x20) + (zx.q((r11_2 & 0x3f) + (r8_1.d << 6)) << 1)))
                        + zx.d(r10_1)
        else if (r8 - 0xf0 s> 4)
            r8 = *(*(arg1 + 0x20) + 0x14) - 1
        else
            uint32_t rcx_2 = zx.d(arg2[1])
            
            if (not(test_bit(sx.d(*((zx.q(rcx_2) u>> 4) + 0x14363c6e8)), r8 - 0xf0)))
                r8 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                int32_t rdx_4 = (zx.d(rcx_2.b) & 0x3f) | (r8 - 0xf0) << 6
                
                if (&arg2[2] == arg3)
                    r8 = *(*(arg1 + 0x20) + 0x14) - 1
                else
                    char r8_6 = arg2[2] - 0x80
                    
                    if (r8_6 u> 0x3f || &arg2[3] == arg3)
                        r8 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        char r9_5 = arg2[3] - 0x80
                        
                        if (r9_5 u> 0x3f)
                            r8 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            int64_t* rcx_3 = *(arg1 + 0x20)
                            
                            if (rdx_4 s< zx.d(*(rcx_3 + 0x1c)))
                                r8 = sub_142b6a810(rcx_3, rdx_4, r8_6, r9_5)
                            else
                                r8 = *(rcx_3 + 0x14) - 2
    
    int16_t rdx_6 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8) << 1))
    
    if (rdx_6 u>= *(arg1 + 0x16) && (*(arg1 + 0x1a) u> rdx_6 || rdx_6 u>= *(arg1 + 0x1e)))
        return 0

int64_t result
result.b = 1
return result

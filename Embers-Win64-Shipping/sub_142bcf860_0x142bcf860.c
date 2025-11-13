// 函数: sub_142bcf860
// 地址: 0x142bcf860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x650) = arg1 + 0x4b8
*(arg1 + 0x4b0) = arg1 + 0xb0
void* r11_1 = &arg2[zx.q(arg3)]
*(arg1 + 0x58) = 0
*(arg1 + 0x4c0) = arg2
*(arg1 + 0x4c8) = r11_1
*(arg1 + 0x4b8) = arg2

if (arg2 u< r11_1)
    void* r8 = &arg2[4]
    
    while (true)
        r8 += 1
        uint32_t* r9_1 = *(arg1 + 0x4b0)
        int32_t rax_2 = zx.d(*arg2) - 1
        arg2 = &arg2[1]
        uint32_t rax_11
        int32_t rcx_13
        
        switch (rax_2)
            case 0, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xd, 0xe, 0x14, 0x15, 0x1d, 0x1e
                break
            case 0xb
                if (arg2 u>= r11_1)
                    break
                
                if (*arg2 != 7)
                    break
                
                rcx_13 = 4
                goto label_142bcf9d1
            case 0xc
                rcx_13 = 2
            label_142bcf9d1:
                int64_t rdx = sx.q(*((zx.q(rcx_13) << 2) + 0x143688730))
                
                if ((r9_1 - arg1 - 0xb0) s>> 2 s< rdx)
                    return 0xa1
                
                int64_t rdx_1 = neg.q(rdx)
                
                if (rcx_13 == 2)
                    *(arg1 + 0x58) = 1
                    *(arg1 + 0x38) += r9_1[rdx_1]
                    *(arg1 + 0x40) = r9_1[rdx_1 + 1]
                    *(arg1 + 0x44) = 0
                    return 0
                
                if (rcx_13 != 4)
                    break
                    break
                
                *(arg1 + 0x58) = 1
                *(arg1 + 0x38) += r9_1[rdx_1]
                *(arg1 + 0x3c) += r9_1[rdx_1 + 1]
                *(arg1 + 0x40) = r9_1[rdx_1 + 2]
                *(arg1 + 0x44) = r9_1[rdx_1 + 3]
                return 0
            case 0xfe
                if (r8 u> r11_1)
                    break
                
                r8 += 4
                uint32_t rcx_4 = zx.d(arg2[3])
                uint32_t rax_10 = ((zx.d(*arg2) << 8 | zx.d(arg2[1])) << 8 | zx.d(arg2[2])) << 8
                arg2 = &arg2[4]
                rax_11 = rax_10 | rcx_4
                
                if (rax_11 + 0x7d00 u> 0xfa00)
                    break
            default
                char rax_13 = arg2[-1]
                
                if (rax_13 u< 0x20)
                    break
                
                if (rax_13 u>= 0xf7)
                    arg2 = &arg2[1]
                    r8 += 1
                    
                    if (arg2 u> r11_1)
                        break
                    
                    char rax_15 = arg2[-2]
                    
                    if (rax_15 u>= 0xfb)
                        rax_11 = (neg.d(zx.d(rax_15)) << 8) - zx.d(arg2[-1]) + 0xfa94
                    else
                        rax_11 = zx.d(arg2[-1]) - 0xf694 + (zx.d(rax_15) << 8)
                else
                    rax_11 = zx.d(rax_13) - 0x8b
        
        if (rax_2 == 0 || rax_2 == 2 || rax_2 == 3 || rax_2 == 4 || rax_2 == 5 || rax_2 == 6
                || rax_2 == 7 || rax_2 == 8 || rax_2 == 9 || rax_2 == 0xa || rax_2 == 0xd
                || rax_2 == 0xe || rax_2 == 0x14 || rax_2 == 0x15 || rax_2 == 0x1d
                || rax_2 == 0x1e)
            break
        
        if (((r9_1 - arg1 - 0xb0) & 0xfffffffffffffffc) s>= 0x400)
            break
        
        *r9_1 = rax_11 << 0x10
        *(arg1 + 0x4b0) = &r9_1[1]
        
        if (arg2 u>= r11_1)
            return 0xa0

return 0xa0

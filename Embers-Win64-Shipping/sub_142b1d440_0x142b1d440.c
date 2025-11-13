// 函数: sub_142b1d440
// 地址: 0x142b1d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r11 = *(arg1 + 0x10)
int32_t rsi_1 = arg3 - arg2.d
int32_t r9_2 = ((*(arg1 + 0x20) - r11) s>> 1).d
uint32_t result

if (rsi_1 s>= r9_2 && rsi_1 s/ 3 s<= r9_2)
    int32_t r10 = 0
    
    if (r9_2 s<= 0)
    label_142b1d593:
        result.b = r10 s>= rsi_1
    else
        void* r8 = nullptr
        int64_t rbx_1 = 0
        
        while (true)
            if (r8 s< sx.q(rsi_1))
                uint32_t r9_3 = zx.d(*r11)
                rbx_1 += 1
                r11 = &r11[1]
                
                if ((r9_3 & 0xfffffc00) == 0xd800)
                    rbx_1 += 1
                    r9_3 = ((r9_3 - 0xd7f7) << 0xa) + zx.d(*r11)
                    r11 = &r11[1]
                
                result = zx.d(*(r8 + arg2))
                r10 += 1
                r8 += 1
                
                if (result.b s< 0)
                    if (result s< 0xe0)
                        result = (zx.d(*(r8 + arg2)) & 0x3f) | (result & 0x1f) << 6
                        r10 += 1
                        r8 += 1
                    else if (result s>= 0xf0)
                        r10 += 3
                        result = (((zx.d(*(r8 + arg2)) & 0x3f) | (result & 7) << 6) << 6
                            | (zx.d(*(r8 + arg2 + 1)) & 0x3f)) << 6 | (zx.d(*(r8 + arg2 + 2)) & 0x3f)
                        r8 += 3
                    else
                        r10 += 2
                        result.w <<= 6
                        result = zx.d(((zx.w(*(r8 + arg2)) & 0x3f) | result.w) << 6)
                            | (zx.d(*(r8 + arg2 + 1)) & 0x3f)
                        r8 += 2
                
                if (r9_3 == result)
                    if (rbx_1 s>= sx.q(r9_2))
                        goto label_142b1d593
                    
                    continue
            
            result.b = 0
            break
    
    return result

result.b = 0
return result

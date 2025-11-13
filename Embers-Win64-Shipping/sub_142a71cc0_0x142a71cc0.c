// 函数: sub_142a71cc0
// 地址: 0x142a71cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2

if (arg3 == 0)
    *(arg1 + 0xc) = *(arg1 + 0x10)
    
    if (i s> 0)
        int32_t r10_5 = *(arg1 + 0x14)
        
        do
            int64_t r8_7 = sx.q(*(arg1 + 0xc))
            
            if (r8_7.d s>= r10_5)
                if (r10_5 s>= 0)
                    break
                
                if (*(*(arg1 + 0x18) + (r8_7 << 1)) == 0)
                    break
            
            int64_t r11_4 = *(arg1 + 0x18)
            int32_t rdx_13 = zx.d(*(r11_4 + (r8_7 << 1))) & 0xfffffc00
            *(arg1 + 0xc) = r8_7.d + 1
            
            if (rdx_13 == 0xd800 && r8_7.d + 1 != r10_5
                    && (zx.d(*(r11_4 + (sx.q(r8_7.d + 1) << 1))) & 0xfffffc00) == 0xdc00)
                *(arg1 + 0xc) = r8_7.d + 2
            
            i -= 1
        while (i s> 0)
else if (arg3 == 1)
    if (i s<= 0)
        int32_t r9_1 = neg.d(i)
        
        if (r9_1 s> 0)
            int32_t r11_3 = *(arg1 + 0x10)
            
            while (true)
                int32_t r8_4 = *(arg1 + 0xc)
                
                if (r8_4 s<= r11_3)
                    break
                
                int64_t r10_4 = *(arg1 + 0x18)
                *(arg1 + 0xc) = r8_4 - 1
                
                if ((zx.d(*(r10_4 + (sx.q(r8_4 - 1) << 1))) & 0xfffffc00) == 0xdc00
                        && r8_4 - 1 s> r11_3
                        && (zx.d(*(r10_4 + (sx.q(r8_4 - 2) << 1))) & 0xfffffc00) == 0xd800)
                    *(arg1 + 0xc) = r8_4 - 2
                
                r9_1 -= 1
                
                if (r9_1 s<= 0)
                    return zx.q(*(arg1 + 0xc))
    else
        int32_t r10_3 = *(arg1 + 0x14)
        
        while (true)
            int64_t r8_2 = sx.q(*(arg1 + 0xc))
            
            if (r8_2.d s>= r10_3)
                if (r10_3 s>= 0)
                    break
                
                if (*(*(arg1 + 0x18) + (r8_2 << 1)) == 0)
                    break
            
            int64_t r11_2 = *(arg1 + 0x18)
            int32_t rdx_5 = zx.d(*(r11_2 + (r8_2 << 1))) & 0xfffffc00
            *(arg1 + 0xc) = r8_2.d + 1
            
            if (rdx_5 == 0xd800 && r8_2.d + 1 != r10_3
                    && (zx.d(*(r11_2 + (sx.q(r8_2.d + 1) << 1))) & 0xfffffc00) == 0xdc00)
                *(arg1 + 0xc) = r8_2.d + 2
            
            i -= 1
            
            if (i s<= 0)
                return zx.q(*(arg1 + 0xc))
else if (arg3 == 2)
    *(arg1 + 0xc) = *(arg1 + 0x14)
    
    if (arg2 s< 0)
        int32_t r9 = neg.d(i)
        
        if (r9 s> 0)
            int32_t r11_1 = *(arg1 + 0x10)
            
            while (true)
                int32_t r10_1 = *(arg1 + 0xc)
                
                if (r10_1 s<= r11_1)
                    break
                
                int64_t rbx_1 = *(arg1 + 0x18)
                int32_t r10_2 = r10_1 - 1
                *(arg1 + 0xc) = r10_2
                
                if ((zx.d(*(rbx_1 + (sx.q(r10_2) << 1))) & 0xfffffc00) == 0xdc00 && r10_2 s> r11_1)
                    if ((zx.d(*(rbx_1 + (sx.q(r10_2 - 1) << 1))) & 0xfffffc00) == 0xd800)
                        r10_2 -= 1
                    
                    *(arg1 + 0xc) = r10_2
                
                r9 -= 1
                
                if (r9 s<= 0)
                    return zx.q(*(arg1 + 0xc))

return zx.q(*(arg1 + 0xc))

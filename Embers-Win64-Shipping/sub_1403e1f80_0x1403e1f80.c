// 函数: sub_1403e1f80
// 地址: 0x1403e1f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x17fc) == 0
*(arg1 + 0x1800) = 0

if (not(cond:0))
    int32_t r9_1 = *(arg1 + 0x1220)
    
    if (r9_1 s> 0)
        int32_t rax_1 = *(arg1 + 0x11f8)
        int32_t r11_1
        
        if (rax_1 != 8)
            r11_1 = 0x3e80
            
            if (rax_1 == 0xc)
                r11_1 = 0x36b0
        else
            r11_1 = 0x2ee0
        
        int16_t rcx = 0x19
        int32_t r8_1 = 0x19
        
        if (r9_1 s< 0x19)
            rcx = r9_1.w
        
        if (r9_1 s< 0x19)
            r8_1 = r9_1
        
        if (arg2 s> ((zx.d((0x7d - rcx) * r11_1.w) * 0x28f) s>> 0x10)
                + (((0x7d - r8_1) * r11_1) s>> 0x10) * 0x28f)
            *(arg1 + 0x1800) = 1
            int32_t rax_7 = 2
            
            if ((r9_1 s>> 0x10) * 0xffff999a - ((zx.d(r9_1.w) * 0x6666) s>> 0x10) + 7 s> 2)
                rax_7 = (r9_1 s>> 0x10) * 0xffff999a - ((zx.d(r9_1.w) * 0x6666) s>> 0x10) + 7
            
            *(arg1 + 0x1804) = rax_7

return 0

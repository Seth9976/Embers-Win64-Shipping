// 函数: sub_140a2fdd0
// 地址: 0x140a2fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i = zx.q(arg1[1].d)
int32_t r11 = (i - 1).d

if (i.d == 0)
    r11 = 0

if (r11 != 0)
    int16_t* r10_1 = *arg1
    int32_t r8_1 = 0
    
    if (r11 s> 0)
        i = 0
        int16_t* rdx_1 = r10_1
        
        do
            int16_t rcx = r10_1[i]
            
            if (rcx != 0x20)
                r8_1 += 1
                *rdx_1 = rcx
                rdx_1 = &rdx_1[1]
            
            i += 1
        while (i s< sx.q(r11))
    
    if (r8_1 s<= r11)
        r10_1[sx.q(r8_1)] = 0
        i = zx.q(r8_1 + 1)
        int64_t rbx_1 = sx.q(arg1[1].d)
        
        if (i.d s> rbx_1.d)
            arg1[1].d = i.d
            
            if (i.d s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            return memset(*arg1 + (rbx_1 << 1), 0, sx.q(i.d - rbx_1.d) * 2) __tailcall
        
        if (i.d s< rbx_1.d && i.d != rbx_1.d)
            arg1[1].d = i.d

return i

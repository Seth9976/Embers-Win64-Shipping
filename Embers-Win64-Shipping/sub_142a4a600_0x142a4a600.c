// 函数: sub_142a4a600
// 地址: 0x142a4a600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = *(arg1 + 8)

if ((r9.b & 0x10) == 0 || arg2 s< 0xffffffff)
    return 

int32_t r11_1 = 0x1b
uint64_t rax
rax.w = r9 & 2

if (rax.w == 0)
    r11_1 = *(arg1 + 0x10)

int32_t rcx_2

if (arg2 != 0xffffffff)
    if (arg2 s> r11_1)
        arg2 = r11_1
    
    rcx_2 = arg2
else
    void* r10_1 = arg1 + 0xa
    
    if (rax.w == 0)
        r10_1 = *(arg1 + 0x18)
    
    void* rcx = r10_1
    void* rdx = r10_1 + (sx.q(r11_1) << 1)
    
    if (r10_1 u< rdx)
        while (*rcx != 0)
            rcx += 2
            
            if (rcx u>= rdx)
                break
    
    rcx_2 = ((rcx - r10_1) s>> 1).d

if (rcx_2 s<= 0x3ff)
    rcx_2.w <<= 5
    *(arg1 + 8) = (r9 & 0x1f) | rcx_2.w
    *(arg1 + 8) &= 0xffef
    return 

*(arg1 + 0xc) = rcx_2
*(arg1 + 8) = r9 | 0xffe0
*(arg1 + 8) &= 0xffef

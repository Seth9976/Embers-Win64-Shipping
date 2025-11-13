// 函数: sub_140378338
// 地址: 0x140378338
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r11 = zx.d(*(arg1 + 2))
int32_t r8 = 0
int32_t rcx = 1

if (zx.d(*(arg1 + 0xc)) != r11 * 2)
    rcx = 0

if (*(arg1 + 0xe) != 0x10)
    rcx = 0

if (*(arg1 + 0x10) == 0x22)
    if (*(arg1 + 0x31) u< 3)
        rcx = 0
    
    int32_t r9_1 = sbb.d(arg4, arg4, *(arg1 + 0x32) != 0) & rcx
    
    if (*(arg1 + 0x1c) == 0 || *(arg1 + 0x1c) u> 0x7ff800)
        r9_1 = 0
    
    int32_t i = *(arg1 + 0x14)
    
    if (i != 0)
        int16_t rdx_1 = 0
        
        do
            rdx_1 += 1
            i &= i - 1
        while (i != 0)
        
        if (rdx_1 != r11.w)
            r9_1 = 0
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 + 1)
    
    if (zx.d(*(arg1 + 0x12)) != (temp2_1 - temp1_1) s>> 1)
        r9_1 = 0
    
    if (*(arg1 + 0x24) + *(arg1 + 0x20) u> *(arg1 + 0x18))
        r9_1 = 0
    
    if (*(arg1 + 0x2c) + *(arg1 + 0x28) u> *(arg1 + 0x18))
        r9_1 = 0
    
    r8 = r9_1

return zx.q(r8)

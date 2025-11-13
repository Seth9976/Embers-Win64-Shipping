// 函数: sub_142b450e0
// 地址: 0x142b450e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdx = *(arg1 + 8)
int32_t rcx_1

if (rdx s< 0)
    rcx_1 = *(arg1 + 0xc)
else
    rcx_1 = sx.d(rdx) s>> 5

if (rcx_1 == 3)
    int32_t r8_8
    
    if (rdx s< 0)
        r8_8 = *(arg1 + 0xc)
    else
        r8_8 = sx.d(rdx) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_8, &(*u"zeroone")[4], 0, 3) == 0)
        return 1
    
    int16_t rax_10 = *(arg1 + 8)
    int32_t r8_10
    
    if (rax_10 s< 0)
        r8_10 = *(arg1 + 0xc)
    else
        r8_10 = sx.d(rax_10) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_10, &data_14366e990, 0, 3) == 0)
        return 2
    
    if (sub_142a6f4f0(arg1, &data_14366e998, 3) == 0)
        return 3
else if (rcx_1 == 4)
    int32_t r8_4
    
    if (rdx s< 0)
        r8_4 = *(arg1 + 0xc)
    else
        r8_4 = sx.d(rdx) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_4, u"manyother", 0, 4) == 0)
        return 4
    
    int16_t rax_5 = *(arg1 + 8)
    int32_t r8_6
    
    if (rax_5 s< 0)
        r8_6 = *(arg1 + 0xc)
    else
        r8_6 = sx.d(rax_5) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_6, u"zeroone", 0, 4) == 0)
        return 0
else if (rcx_1 == 5)
    int32_t r8_2
    
    if (rdx s< 0)
        r8_2 = *(arg1 + 0xc)
    else
        r8_2 = sx.d(rdx) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_2, &(*u"manyother")[4], 0, 5) == 0)
        return 5

return 0xffffffff

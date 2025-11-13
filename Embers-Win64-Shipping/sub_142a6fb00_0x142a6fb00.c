// 函数: sub_142a6fb00
// 地址: 0x142a6fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2

if (arg2 == 0xa)
    int16_t rax_1 = *(arg1 + 8)
    int32_t r8_2
    
    if (rax_1 s< 0)
        r8_2 = *(arg1 + 0xc)
    else
        r8_2 = sx.d(rax_1) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_2, &data_14363fbbc, 0, 1) == 0)
        return 0x15
    
    int16_t rax_4 = *(arg1 + 8)
    int32_t r8_4
    
    if (rax_4 s< 0)
        r8_4 = *(arg1 + 0xc)
    else
        r8_4 = sx.d(rax_4) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_4, &data_14363fbdc, 0, 1) == 0)
        return 0x16
    
    int16_t rax_7 = *(arg1 + 8)
    int32_t r8_6
    
    if (rax_7 s< 0)
        r8_6 = *(arg1 + 0xc)
    else
        r8_6 = sx.d(rax_7) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_6, &data_14363fc08, 0, 1) == 0)
        return 0x17
    
    if (sub_142a6f4f0(arg1, &data_14363fc0c, 1) == 0)
        return 0x19
    
    if (sub_142a6f4f0(arg1, &data_14363fc10, 1) == 0)
        return 0x18
    
    if (sub_142a6f4f0(arg1, &data_14363fbe8, 2) == 0)
        return 0x14
    
    if (sub_142a6f4f0(arg1, &data_14363fbf8, 3) == 0)
        return 0xb
    
    if (sub_142a6f4f0(arg1, &data_14363fbd4, 2) == 0)
        return 0xf
    
    if (sub_142a6f4f0(arg1, u"within", 6) == 0)
        return 0x13
    
    if (sub_142a6f4f0(arg1, &data_14363fbe0, 3) == 0)
        return 0xe
    
    if (sub_142a6f4f0(arg1, &data_14363fbf0, 3) == 0)
        return 0xd
    
    if (sub_142a6f4f0(arg1, &data_14363fc00, 2) == 0)
        return 0xc
    
    if (sub_142a6f4f0(arg1, u"decimal", 7) == 0)
        return 0x1a
    
    if (sub_142a6f4f0(arg1, u"integer", 7) == 0)
        rbx = 0x1b

return zx.q(rbx)

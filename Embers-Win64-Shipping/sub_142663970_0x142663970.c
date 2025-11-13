// 函数: sub_142663970
// 地址: 0x142663970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 0x210) == 0x10)
    int64_t* rdi_1 = *(arg1 + 0x10)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    int32_t var_18_1 = 0xffffffff
    sub_140d3cc80(sub_14269bba0(), &var_28, 1, 0x10, 0)
    int32_t rcx_1 = var_20_1
    int32_t i = var_18_1 + 1
    int64_t r8_2 = var_28
    int32_t i_1 = i
    
    if (i s< rcx_1)
        while (*(r8_2 + (sx.q(i) << 3)) == 0)
            int32_t i_2 = i + 1
            i_1 = i_2
            i = i_2
            
            if (i_2 s>= rcx_1)
                break
    
    while (i s>= 0)
        if (i s>= rcx_1)
            break
        
        sub_142663f50(*(r8_2 + (sx.q(i) << 3)), rdi_1)
        rcx_1 = var_20_1
        i = i_1 + 1
        r8_2 = var_28
        i_1 = i
        
        if (i s< rcx_1)
            while (*(r8_2 + (sx.q(i) << 3)) == 0)
                int32_t i_3 = i + 1
                i_1 = i_3
                i = i_3
                
                if (i_3 s>= rcx_1)
                    break
    
    if (r8_2 != 0)
        sub_140a74f90(r8_2)

int32_t rcx_5 = *(arg1 + 0x3c)
uint32_t result = rcx_5 u>> 0x1f

if (result.b == 0)
    result = zx.d(*(arg1 + 0x40)) | (rcx_5 & 0xffff0000) | 0x80000000
    *(arg1 + 0x3c) = result

return result

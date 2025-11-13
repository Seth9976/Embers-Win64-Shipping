// 函数: sub_142c3cad0
// 地址: 0x142c3cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142c3ae60(arg2, arg1, 2) != 0)
    int32_t r10_1 = *(arg3 + 0x10)
    uint64_t r11_1 = 1
    int32_t r9_1 = 1
    
    if (r10_1 u> 1)
        do
            int128_t* const rdx_1
            
            if (r9_1 - 1 u< r10_1)
                rdx_1 = *(arg3 + 8) + (zx.q(r9_1 - 1) << 1)
            else
                rdx_1 = &data_14369a5d0
            
            int128_t* const rax_2
            
            if (r9_1 u< r10_1)
                rax_2 = *(arg3 + 8) + (zx.q(r9_1) << 1)
            else
                rax_2 = &data_14369a5d0
            
            r9_1 += 1
            int32_t rax_5 = (r11_1 + 1).d
            
            if (zx.d(*(rdx_1 + 1)) + 1 + (zx.d(*rdx_1) << 8)
                    == (zx.d(*rax_2) << 8) + zx.d(*(rax_2 + 1)))
                rax_5 = r11_1.d
            
            r11_1 = zx.q(rax_5)
        while (r9_1 u< r10_1)
    
    int32_t rcx_5 = r10_1 * 2
    arg1[1] = ((sbb.d(rcx_5, rcx_5, rcx_5 u< (r11_1 * 3).d)).w + 2).b
    uint16_t rax_7 = ((sbb.d(rcx_5, rcx_5, rcx_5 u< (r11_1 * 3).d)).w + 2) u>> 8
    *arg1 = rax_7.b
    int32_t rdx_7 =
        (zx.d(rax_7.b) << 8) + zx.d(((sbb.d(rcx_5, rcx_5, rcx_5 u< (r11_1 * 3).d)).w + 2).b)
    void var_28
    
    if (rdx_7 == 1)
        int64_t var_20_1 = *(arg3 + 8)
        int32_t var_18_1 = *(arg3 + 0x10)
        return sub_142c3cc30(arg1, arg2, &var_28)
    
    if (rdx_7 == 2)
        int64_t var_20 = *(arg3 + 8)
        int32_t var_18 = *(arg3 + 0x10)
        return sub_142c3ccb0(arg1, arg2, &var_28)

uint64_t result
result.b = 0
return result

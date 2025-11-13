// 函数: sub_142c3d670
// 地址: 0x142c3d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142c3ae60(arg2, arg1, 2) != 0)
    int32_t r10_1 = *(arg3 + 0x10)
    uint32_t r11_1 = 0
    uint16_t rsi_1 = 2
    
    if (r10_1 != 0)
        rsi_1 = 1
        int32_t rbp_1 = *(arg4 + 0x10)
        int128_t* const rdx_1 = &data_14369a5d0
        
        if (rbp_1 != 0)
            rdx_1 = *(arg4 + 8)
        
        int128_t* const rcx_1 = &data_14369a5d0
        
        if (r10_1 != 0)
            rcx_1 = *(arg3 + 8)
        
        r11_1 = ((zx.d(*rdx_1) - zx.d(*rcx_1)) << 8) - zx.d(*(rcx_1 + 1)) + zx.d(*(rdx_1 + 1))
        int32_t rdx_2 = 1
        
        if (r10_1 u> 1)
            do
                int128_t* const r9
                
                if (rdx_2 u< rbp_1)
                    r9 = *(arg4 + 8) + (zx.q(rdx_2) << 1)
                else
                    r9 = &data_14369a5d0
                
                int128_t* const r8
                
                if (rdx_2 u< r10_1)
                    r8 = *(arg3 + 8) + (zx.q(rdx_2) << 1)
                else
                    r8 = &data_14369a5d0
                
                if (r11_1 != ((zx.d(*r9) - zx.d(*r8)) << 8) - zx.d(*(r8 + 1)) + zx.d(*(r9 + 1)))
                    rsi_1 = 2
                    break
                
                rdx_2 += 1
            while (rdx_2 u< r10_1)
    
    arg1[1] = rsi_1.b
    uint16_t rax_8 = rsi_1 u>> 8
    *arg1 = rax_8.b
    int32_t rcx_11 = (zx.d(rax_8.b) << 8) + zx.d(rsi_1.b)
    void var_30
    
    if (rcx_11 == 1)
        int64_t var_28_1 = *(arg3 + 8)
        int32_t var_20_1 = *(arg3 + 0x10)
        return sub_142c3d830(arg1, arg2, &var_30, r11_1.w)
    
    if (rcx_11 == 2)
        int64_t var_40 = *(arg4 + 8)
        int32_t var_38 = *(arg4 + 0x10)
        int64_t var_28 = *(arg3 + 8)
        int32_t var_20 = *(arg3 + 0x10)
        void var_48
        return sub_142c3d8d0(arg1, arg2, &var_30, &var_48)

uint64_t result
result.b = 0
return result

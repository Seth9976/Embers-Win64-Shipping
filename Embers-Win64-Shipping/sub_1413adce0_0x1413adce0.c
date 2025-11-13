// 函数: sub_1413adce0
// 地址: 0x1413adce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x120) & 4) == 0)
    return 

void* rcx = *(arg1 + 0x68)

if (rcx == 0)
label_1413add20:
    void* rcx_1 = *(arg1 + 0xf0)
    int64_t var_28
    
    if (*(rcx_1 + 8) s< 3 && sub_1413ebdc0(rcx_1 + 0x12c0) != 0)
        void* rcx_3 = *(arg1 + 8)
        
        if ((*(rcx_3 + 0x32) - 1 u<= 1 || (*(rcx_3 + 0x38) & 0x40) != 0 || *(rcx_3 + 0x33) == 2)
                && (*(rcx_3 + 0x39) & 1) != 0)
            int64_t* rcx_4 = *(arg1 + 0xf0)
            int32_t var_20_1 = *(rcx_3 + 0xc8)
            var_28 = *(rcx_3 + 0xc0)
            sub_1413adbd0(arg1, nullptr, nullptr, &var_28, (*(*rcx_4 + 0x2c8))(rcx_4), 
                &rcx_4[0x258])
            *(arg1 + 0x120) &= 0xfb
            return 
    
    int64_t* r8_1 = *(arg1 + 0x68)
    int64_t* r9_2 = &var_28
    int32_t var_10_1 = 0
    int32_t var_20_2 = 0
    var_28 = _mm_unpacklo_ps(zx.o(0), 0)
    
    if (r8_1 != 0)
        sub_1413adbd0(arg1, *(arg1 + 0xf0) + 0x1150, r8_1, r9_2, 0, nullptr)
        *(arg1 + 0x120) &= 0xfb
        return 
    
    sub_1413adbd0(arg1, nullptr, r8_1, r9_2, 0, nullptr)
    *(arg1 + 0x120) &= 0xfb
else if (*(*(arg1 + 0xf0) + 0x1158) != 0xffffffff && *(rcx + 0x180) != 0)
    goto label_1413add20

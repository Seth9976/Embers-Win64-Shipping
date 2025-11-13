// 函数: sub_141f558c0
// 地址: 0x141f558c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141f31af0(arg1, arg2, arg3)

if (arg1 != 0)
    char rcx = *(arg2 + 0x524)
    
    if ((rcx & 1) != 0)
        arg2[0x94] = *(arg1 + 0xa8)
        arg2[0x95].d = *(arg1 + 0xb0)
        *(arg2 + 0x4cc) = *(arg1 + 0xb4)
        *(arg2 + 0x4d4) = *(arg1 + 0xbc)
        *(arg2 + 0x4ac) = *(arg1 + 0xc0)
        *(arg2 + 0x4b4) = *(arg1 + 0xc8)
        int32_t rax_3 = *(arg1 + 0xd4)
        uint64_t var_18_1 = *(arg1 + 0xcc)
        uint128_t zmm0_1 = 0xca000000
        int32_t zmm2_1
        
        if (rax_3 f>= -2097152f)
            zmm2_1 = _mm_min_ss(rax_3, 0x4a000000)
        else
            zmm2_1 = -0x36000000
        
        int64_t zmm1_1 = var_18_1:4.d
        
        if (zmm1_1.d f>= -2097152f)
            zmm1_1 = _mm_min_ss(zmm1_1.d, 0x4a000000)
        else
            zmm1_1 = 0xca000000
        
        uint128_t zmm3_1 = var_18_1.d
        
        if (not(zmm3_1.d f< -2097152f))
            zmm0_1 = _mm_min_ss(zmm3_1.d, 0x4a000000)
        
        zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm1_1)
        *(arg2 + 0x524) = rcx | 4
        arg2[0x9c] = zmm0_1.q
        arg2[0x9d].d = zmm2_1
        return sub_141f76840(arg2, 0)

return result

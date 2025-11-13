// 函数: sub_14298a5f0
// 地址: 0x14298a5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s<= 0)
    return 

int64_t i = 0

do
    float zmm1 = *((zx.q(*(*arg2 + (i << 3))) << 2) + &data_1436bbc50) * 0.00212799991f
        - *((zx.q(*(arg2[2] + (i << 3))) << 2) + &data_1436bbc50) * 0.00754000014f
        + *((zx.q(*(arg2[4] + (i << 3))) << 2) + &data_1436bbc50) * 0.0195969995f
        - *((zx.q(*(arg2[6] + (i << 3))) << 2) + &data_1436bbc50) * 0.0431590006f
    zmm1 = zmm1 + *((zx.q(*(arg2[8] + (i << 3))) << 2) + &data_1436bbc50) * 0.0879290029f
        - *((zx.q(*(arg2[0xa] + (i << 3))) << 2) + &data_1436bbc50) * 0.186076999f
    zmm1 = zmm1 + *((zx.q(*(arg2[0xc] + (i << 3))) << 2) + &data_1436bbc50) * 0.627122998f
        + *((zx.q(*(arg2[0xe] + (i << 3))) << 2) + &data_1436bbc50) * 0.627122998f
    zmm1 = zmm1 - *((zx.q(*(arg2[0x10] + (i << 3))) << 2) + &data_1436bbc50) * 0.186076999f
        + *((zx.q(*(arg2[0x12] + (i << 3))) << 2) + &data_1436bbc50) * 0.0879290029f
    zmm1 = zmm1 - *((zx.q(*(arg2[0x14] + (i << 3))) << 2) + &data_1436bbc50) * 0.0431590006f
        + *((zx.q(*(arg2[0x16] + (i << 3))) << 2) + &data_1436bbc50) * 0.0195969995f
    zmm1 = zmm1 - *((zx.q(*(arg2[0x18] + (i << 3))) << 2) + &data_1436bbc50) * 0.00754000014f
        + *((zx.q(*(arg2[0x1a] + (i << 3))) << 2) + &data_1436bbc50) * 0.00212799991f
    zmm1 - 0f
    uint16_t rdx_1
    
    if (is_unordered.d(zmm1, 0f) || zmm1 != 0f)
        int16_t r8 = *((zx.q(zmm1) u>> 0x17 << 1) + &data_1436fbc50)
        
        if (r8 == 0)
            rdx_1 = sub_142c998f0(zmm1)
        else
            int32_t rcx_15 = zmm1 & 0x7fffff
            rdx_1 = ((rcx_15 + 0xfff + (rcx_15 u>> 0xd & 1)) u>> 0xd).w + r8
    else
        rdx_1 = (zmm1 u>> 0x10).w
    
    *(arg3 + (i << 3)) = rdx_1
    zmm1 = *((zx.q(*(*arg2 + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.00212799991f
        - *((zx.q(*(arg2[2] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.00754000014f
    zmm1 = zmm1 + *((zx.q(*(arg2[4] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.0195969995f
        - *((zx.q(*(arg2[6] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.0431590006f
    zmm1 = zmm1 + *((zx.q(*(arg2[8] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.0879290029f
        - *((zx.q(*(arg2[0xa] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.186076999f
    zmm1 = zmm1 + *((zx.q(*(arg2[0xc] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.627122998f
        + *((zx.q(*(arg2[0xe] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.627122998f
    zmm1 = zmm1 - *((zx.q(*(arg2[0x10] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.186076999f
        + *((zx.q(*(arg2[0x12] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.0879290029f
    zmm1 = zmm1 - *((zx.q(*(arg2[0x14] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.0431590006f
        + *((zx.q(*(arg2[0x16] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.0195969995f
    zmm1 = zmm1 - *((zx.q(*(arg2[0x18] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.00754000014f
        + *((zx.q(*(arg2[0x1a] + (i << 3) + 4)) << 2) + &data_1436bbc50) * 0.00212799991f
    zmm1 - 0f
    uint16_t rdx_5
    
    if (is_unordered.d(zmm1, 0f) || zmm1 != 0f)
        int16_t r8_1 = *((zx.q(zmm1) u>> 0x17 << 1) + &data_1436fbc50)
        
        if (r8_1 == 0)
            rdx_5 = sub_142c998f0(zmm1)
        else
            int32_t rcx_31 = zmm1 & 0x7fffff
            rdx_5 = ((rcx_31 + 0xfff + (rcx_31 u>> 0xd & 1)) u>> 0xd).w + r8_1
    else
        rdx_5 = (zmm1 u>> 0x10).w
    
    *(arg3 + (i << 3) + 4) = rdx_5
    *(arg3 + (i << 3) + 2) = *(arg2[0xd] + (i << 3) + 2)
    *(arg3 + (i << 3) + 6) = *(arg2[0xd] + (i << 3) + 6)
    i += 1
while (i s< sx.q(arg1))

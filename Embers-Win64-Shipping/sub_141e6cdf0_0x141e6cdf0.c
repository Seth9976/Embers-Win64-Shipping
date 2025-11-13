// 函数: sub_141e6cdf0
// 地址: 0x141e6cdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f3992c == 0)
    void* rax_1 = *(arg1 + 0x10)
    
    if (not(0f f>= *(rax_1 + 0x158)))
        void* rcx = *(rax_1 + 0xc0)
        int32_t rdx
        
        if (rcx == 0)
            rdx = 0
        else
            rdx = *(rcx + 0x6d0)
        
        int32_t var_58
        sub_141e7dd40(*(arg1 + 8), rdx, &var_58, 0)
        void* rcx_2 = *(arg1 + 0x10)
        float zmm6[0x4] = *(rcx_2 + 0x148)
        float zmm8[0x4] = *(rcx_2 + 0x14c)
        zmm6[0] = zmm6[0] f- var_58
        int32_t var_54
        zmm8[0] = zmm8[0] f- var_54
        float zmm7[0x4] = *(rcx_2 + 0x150)
        int32_t var_50
        zmm7[0] = zmm7[0] f- var_50
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] + zmm6[0]
        zmm8[0] = zmm8[0] + zmm7[0]
        float zmm2[0x4]
        
        if (not(zmm8[0] == 1f))
            if (zmm8[0] >= 9.99999994e-09f)
                float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                zmm2 = 0x3f000000
                zmm8[0] = zmm8[0] * 0.5f
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                zmm8[0] = zmm8[0] * temp0_1[0]
                zmm2[0] = 0.5f - zmm8[0]
                temp0_1[0] = temp0_1[0] * zmm2[0]
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                zmm8[0] = zmm8[0] * temp0_1[0]
                temp0_1[0] = temp0_1[0] * (0.5f - zmm8[0])
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                zmm6[0] = zmm6[0] * temp0_1[0]
                zmm8[0] = zmm8[0] * temp0_1[0]
                zmm7[0] = zmm7[0] * temp0_1[0]
            else
                zmm6 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm7 = data_143dbb200
        
        float zmm4_1 = *(rcx_2 + 0x158)
        zmm7[0] = zmm7[0] f* data_14399f678:4.d
        zmm7[0] = zmm7[0] f* data_14399f678.d
        zmm8[0] = zmm8[0] f* data_14399f680
        zmm8[0] = zmm8[0] f* data_14399f678.d
        zmm4_1 = zmm4_1 * 0.5f
        zmm8[0] = zmm8[0] - zmm7[0]
        zmm6[0] = zmm6[0] f* data_14399f678:4.d
        zmm6[0] = zmm6[0] f* data_14399f680
        zmm6[0] = zmm6[0] - zmm8[0]
        zmm8[0] = zmm8[0] * zmm4_1
        zmm7[0] = zmm7[0] - zmm6[0]
        zmm8[0] = zmm8[0] f+ *(rcx_2 + 0x148)
        zmm6[0] = zmm6[0] * zmm4_1
        zmm7[0] = zmm7[0] * zmm4_1
        zmm6[0] = zmm6[0] f+ *(rcx_2 + 0x150)
        zmm7[0] = zmm7[0] f+ *(rcx_2 + 0x14c)
        float var_40 = zmm6[0]
        *(arg1 + 0x48) = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
        *(arg1 + 0x50) = var_40
        float zmm1[0x4] = *(rcx_2 + 0x148)
        zmm2 = *(rcx_2 + 0x14c)
        zmm1[0] = zmm1[0] - zmm8[0]
        float zmm0_1[0x4] = *(rcx_2 + 0x150)
        zmm2[0] = zmm2[0] - zmm7[0]
        zmm0_1[0] = zmm0_1[0] - zmm6[0]
        float temp0_3[0x4] = _mm_unpacklo_ps(zmm1, zmm2[0].q)
        float var_40_1 = zmm0_1[0]
        *(arg1 + 0x54) = temp0_3.q
        *(arg1 + 0x5c) = var_40_1
        return var_40_1

void* rcx_3 = *(arg1 + 0x10)
*(arg1 + 0x48) = *(rcx_3 + 0x148)
*(arg1 + 0x50) = *(rcx_3 + 0x150)
*(arg1 + 0x54) = *(rcx_3 + 0x148)
int32_t rax_5 = *(rcx_3 + 0x150)
*(arg1 + 0x5c) = rax_5
return rax_5

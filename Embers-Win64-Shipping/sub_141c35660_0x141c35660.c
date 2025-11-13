// 函数: sub_141c35660
// 地址: 0x141c35660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg3 != 0)
    uint64_t rflags_1
    int32_t result_2
    result_2, rflags_1 = _bit_scan_forward(arg3)
    result = zx.q(result_2)
    
    if (result.d u>= 1)
        goto label_141c35695
else
    result = zx.q(arg3 + 0x20)
label_141c35695:
    int32_t rbp_1 = 2
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    float zmm12[0x4] = 0x40490fdb
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        float zmm0[0x4] = zx.o(0)
        uint32_t rsi_2 = rbp_1 u>> 1
        zmm0[0] = float.s(zx.q(rsi_2))
        zmm12[0] = zmm12[0] / zmm0[0]
        zmm0 = zx.o(0)
        zmm0[0] = zmm12[0]
        int128_t zmm10_1
        float zmm11[0x4]
        result, zmm0, zmm6, zmm7, zmm10_1, zmm11, zmm12 = __libm_sse2_sincosf_(zmm0)
        int32_t result_3 = 0
        float zmm8_1[0x4] = zmm0 ^ zmm10_1
        float zmm9_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
        
        if (rsi_2 != 0)
            do
                int32_t result_1 = result_3
                float zmm2_1[0x4]
                
                if (result_3 u< arg3)
                    do
                        uint64_t rax_1 = zx.q(result_1 + rsi_2)
                        float zmm1[0x4] = *(arg2 + (rax_1 << 2))
                        float zmm5_1 = *(arg1 + (rax_1 << 2))
                        zmm1[0] = zmm1[0] * zmm7[0]
                        uint64_t rcx = zx.q(rax_1.d)
                        result = zx.q(result_1)
                        result_1 += rbp_1
                        zmm1[0] = zmm1[0] * zmm6[0]
                        zmm2_1 = *(arg1 + (result << 2))
                        float zmm3_1[0x4] = *(arg2 + (result << 2))
                        float zmm4_1 = zmm5_1 * zmm6[0] - zmm1[0]
                        zmm5_1 = zmm5_1 * zmm7[0] + zmm1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm4_1
                        zmm2_1[0] = zmm2_1[0] - zmm4_1
                        zmm3_1[0] = zmm3_1[0] + zmm5_1
                        *(arg1 + (result << 2)) = zmm2_1[0]
                        zmm3_1[0] = zmm3_1[0] - zmm5_1
                        *(arg2 + (result << 2)) = zmm3_1[0]
                        *(arg1 + (rcx << 2)) = zmm2_1[0]
                        *(arg2 + (rcx << 2)) = zmm3_1[0]
                    while (result_1 u< arg3)
                
                zmm2_1 = zmm6
                zmm9_1[0] = zmm9_1[0] * zmm6[0]
                result_3 += 1
                zmm8_1[0] = zmm8_1[0] * zmm7[0]
                zmm2_1[0] = zmm2_1[0] * zmm8_1[0]
                zmm6 = zmm9_1
                zmm6[0] = zmm6[0] - zmm8_1[0]
                zmm9_1[0] = zmm9_1[0] * zmm7[0]
                zmm7 = zmm2_1
                zmm7[0] = zmm7[0] + zmm9_1[0]
            while (result_3 u< rsi_2)
        
        rbp_1 = rol.d(rbp_1, 1)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

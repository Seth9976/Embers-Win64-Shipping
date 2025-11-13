// 函数: sub_14231bfe0
// 地址: 0x14231bfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t result = sx.q(arg1[0xf4].d)

if (result.d != 0xffffffff && result.d s< arg1[0x101].d)
    int64_t (* rbx_1)(int64_t* arg1, int64_t* arg2) = *(arg1[0x100] + (result << 3))
    result = sub_14221b2f0(rbx_1)
    
    if (result.b != 0)
        void var_a8
        sub_142218ad0(rbx_1, &var_a8, 1, 0)
        float zmm3[0x4] = *(arg2 + 4)
        float zmm2[0x4] = *(arg2 + 8)
        float zmm4_1[0x4] = *arg2
        float var_98[0x4]
        float temp0_1[0x4] = _mm_shuffle_ps(var_98, var_98, 0x55)
        zmm4_1[0] = zmm4_1[0] - var_98[0]
        float temp0_2[0x4] = _mm_shuffle_ps(var_98, var_98, 0xaa)
        zmm3[0] = zmm3[0] - temp0_1[0]
        zmm2[0] = zmm2[0] - temp0_2[0]
        float temp0_3[0x4] = _mm_unpacklo_ps(zmm3, 0)
        float var_98_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm2[0].q), temp0_3[0].q)
        int32_t zmm6_1
        int32_t zmm7_1
        int32_t zmm8_1
        zmm6_1, zmm7_1, zmm8_1 = sub_1422214a0(rbx_1, &var_a8, 1)
        int32_t i = 0
        
        if (arg1[0x101].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                if (i != arg1[0xf4].d)
                    int64_t (* rbx_2)(int64_t* arg1, int64_t* arg2) = *(r14_1 + arg1[0x100])
                    void var_78
                    sub_142218ad0(rbx_2, &var_78, 1, 0)
                    float var_68[0x4]
                    float temp0_6[0x4] = _mm_shuffle_ps(var_68, var_68, 0x55)
                    var_68[0] = var_68[0] f+ zmm6_1
                    float temp0_7[0x4] = _mm_shuffle_ps(var_68, var_68, 0xaa)
                    temp0_6[0] = temp0_6[0] f+ zmm7_1
                    temp0_7[0] = temp0_7[0] f+ zmm8_1
                    float temp0_8[0x4] = _mm_unpacklo_ps(temp0_6, 0)
                    var_68 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_68, temp0_7[0].q), temp0_8[0].q)
                    zmm6_1, zmm7_1, zmm8_1 = sub_1422214a0(rbx_2, &var_78, 1)
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< arg1[0x101].d)
        
        result = sub_1422aeae0(arg1)

__security_check_cookie(rax_1 ^ &var_c8)
return result

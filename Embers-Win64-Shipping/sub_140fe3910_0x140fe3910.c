// 函数: sub_140fe3910
// 地址: 0x140fe3910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg6
void* r10 = arg3

if (*(result + 4) == 3)
    return memcpy(arg5, r10, (arg1 * arg2) << 4) __tailcall

int32_t r9_1 = 0
float zmm6[0x4] = zx.o(0)
float zmm7[0x4] = zx.o(0)
float zmm8[0x4] = zx.o(0)
float zmm9[0x4] = zx.o(0)
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm14[0x4]
float var_98[0x4] = zmm14
float zmm15[0x4] = 0x3f800000
float var_c8 = 0f
float zmm5[0x4] = 0x3f800000
float var_d8 = 1f
float zmm10[0x4] = 0x3f800000
float var_cc = 0f
float zmm13[0x4] = 0x3f800000
float var_d0 = 0f
float zmm11[0x4] = 0x3f800000
float var_d4 = 0f
arg6.d = 0x3f800000
float var_c0 = 1f
float var_c4 = 1f
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (arg2 != 0)
    do
        uint32_t rdx_2 = 0
        int128_t* rcx_4 = zx.q(r9_1 * arg4) + r10
        
        if (arg1 u>= 4)
            result = zx.q(((arg1 - 4) u>> 2) + 1)
            uint64_t i_6 = zx.q(result.d)
            rdx_2 = (result << 2).d
            uint64_t i
            
            do
                zmm7 = *rcx_4
                zmm10 = *(rcx_4 + 4)
                float temp0_1[0x4] = __minss_xmmss_memss(zmm7[0], var_c8)
                zmm13 = *(rcx_4 + 8)
                float temp0_2[0x4] = __maxss_xmmss_memss(zmm7[0], arg6.d)
                var_c8 = __minss_xmmss_memss(
                    __minss_xmmss_memss(__minss_xmmss_memss(temp0_1[0], rcx_4[1].d)[0], rcx_4[2].d)[
                        0], 
                    rcx_4[3].d)[0]
                float temp0_6[0x4] = __minss_xmmss_memss(zmm10[0], var_cc)
                float temp0_7[0x4] = __maxss_xmmss_memss(zmm10[0], var_d8)
                float temp0_8[0x4] = __minss_xmmss_memss(temp0_6[0], *(rcx_4 + 0x14))
                float temp0_9[0x4] = __maxss_xmmss_memss(temp0_7[0], *(rcx_4 + 0x14))
                float temp0_10[0x4] = __minss_xmmss_memss(temp0_8[0], *(rcx_4 + 0x24))
                float temp0_11[0x4] = __maxss_xmmss_memss(temp0_9[0], *(rcx_4 + 0x24))
                float temp0_12[0x4] = __minss_xmmss_memss(temp0_10[0], *(rcx_4 + 0x34))
                zmm5 = __maxss_xmmss_memss(temp0_11[0], *(rcx_4 + 0x34))
                var_cc = temp0_12[0]
                float temp0_14[0x4] = __minss_xmmss_memss(zmm13[0], var_d0)
                float temp0_15[0x4] = __maxss_xmmss_memss(zmm13[0], var_c0)
                var_d8 = zmm5[0]
                float temp0_16[0x4] = __minss_xmmss_memss(temp0_14[0], *(rcx_4 + 0x18))
                float temp0_17[0x4] = __maxss_xmmss_memss(temp0_15[0], *(rcx_4 + 0x18))
                float temp0_18[0x4] = __minss_xmmss_memss(temp0_16[0], *(rcx_4 + 0x28))
                float temp0_19[0x4] = __maxss_xmmss_memss(temp0_17[0], *(rcx_4 + 0x28))
                float temp0_20[0x4] = __minss_xmmss_memss(temp0_18[0], *(rcx_4 + 0x38))
                zmm13 = __maxss_xmmss_memss(temp0_19[0], *(rcx_4 + 0x38))
                var_d0 = temp0_20[0]
                float temp0_22[0x4] = __minss_xmmss_memss((*(rcx_4 + 0xc))[0], var_d4)
                var_c0 = zmm13[0]
                var_d4 = __minss_xmmss_memss(
                    __minss_xmmss_memss(__minss_xmmss_memss(temp0_22[0], *(rcx_4 + 0x1c))[0], 
                        *(rcx_4 + 0x2c))[0], 
                    *(rcx_4 + 0x3c))[0]
                arg6.d = __maxss_xmmss_memss(
                    __maxss_xmmss_memss(__maxss_xmmss_memss(temp0_2[0], rcx_4[1].d)[0], rcx_4[2].d)[
                        0], 
                    rcx_4[3].d)[0]
                zmm11 = __maxss_xmmss_memss(
                    __maxss_xmmss_memss(
                        __maxss_xmmss_memss(__maxss_xmmss_memss((*(rcx_4 + 0xc))[0], var_c4)[0], 
                            *(rcx_4 + 0x1c))[0], 
                        *(rcx_4 + 0x2c))[0], 
                    *(rcx_4 + 0x3c))
                rcx_4 = &rcx_4[4]
                var_c4 = zmm11[0]
                i = i_6
                i_6 -= 1
            while (i != 1)
            zmm6 = var_c8
            zmm7 = var_cc
            zmm8 = var_d0
            zmm9 = var_d4
            zmm10 = arg6.d
        
        if (rdx_2 u< arg1)
            void* rcx_5 = rcx_4 + 8
            result = zx.q(arg1 - rdx_2)
            uint64_t i_4 = zx.q(result.d)
            float temp0_37[0x4]
            float temp0_38[0x4]
            float temp0_39[0x4]
            float temp0_40[0x4]
            uint64_t i_1
            
            do
                zmm5 = *(rcx_5 - 8)
                zmm4 = *(rcx_5 - 4)
                zmm3 = *rcx_5
                zmm2 = *(rcx_5 + 4)
                float temp0_33[0x4] = _mm_min_ss(zmm5[0], zmm6[0])
                float temp0_34[0x4] = _mm_min_ss(zmm4[0], zmm7[0])
                float temp0_35[0x4] = _mm_max_ss(zmm5[0], zmm10[0])
                rcx_5 += 0x10
                float temp0_36[0x4] = __maxss_xmmss_memss(zmm4[0], var_d8)
                zmm6 = temp0_33
                temp0_37 = _mm_min_ss(zmm3[0], zmm8[0])
                zmm7 = temp0_34
                temp0_38 = _mm_max_ss(zmm3[0], zmm13[0])
                temp0_39 = _mm_min_ss(zmm2[0], zmm9[0])
                zmm10 = temp0_35
                var_d8 = temp0_36[0]
                temp0_40 = _mm_max_ss(zmm2[0], zmm11[0])
                zmm5 = temp0_36
                zmm8 = temp0_37
                zmm13 = temp0_38
                zmm9 = temp0_39
                zmm11 = temp0_40
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            var_c4 = temp0_40[0]
            var_c0 = temp0_38[0]
            arg6.d = zmm10[0]
            var_d4 = temp0_39[0]
            var_d0 = temp0_37[0]
            var_cc = zmm7[0]
            var_c8 = zmm6[0]
        
        r9_1 += 1
    while (r9_1 u< arg2)
    
    zmm15 = 0x3f800000

int32_t r9_2 = 0

if (arg2 != 0)
    do
        int32_t rdx_3 = 0
        float (* rcx_9)[0x4] = (zx.q(r9_2 * arg1) << 4) + arg5
        float zmm0[0x4]
        float zmm1[0x4]
        
        if (arg1 u>= 4)
            zmm10[0] = zmm10[0] - zmm6[0]
            result = zx.q(((arg1 - 4) u>> 2) + 1)
            zmm5[0] = zmm5[0] - zmm7[0]
            uint64_t i_7 = zx.q(result.d)
            float* rbx_1 = &rcx_9[2]
            rdx_3 = (result << 2).d
            zmm15[0] = zmm15[0] / zmm10[0]
            zmm15[0] = zmm15[0] / zmm5[0]
            zmm13[0] = zmm13[0] - zmm8[0]
            zmm11[0] = zmm11[0] - zmm9[0]
            zmm15[0] = zmm15[0] / zmm13[0]
            zmm15[0] = zmm15[0] / zmm11[0]
            uint64_t i_2
            
            do
                zmm3 = *r10
                zmm0 = *(r10 + 4)
                zmm3[0] = zmm3[0] - zmm6[0]
                zmm1 = *(r10 + 8)
                zmm0[0] = zmm0[0] - zmm7[0]
                zmm2 = *(r10 + 0xc)
                zmm1[0] = zmm1[0] - zmm8[0]
                zmm2[0] = zmm2[0] - zmm9[0]
                zmm3[0] = zmm3[0] * zmm15[0]
                zmm0[0] = zmm0[0] * zmm15[0]
                float temp0_41[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                zmm1[0] = zmm1[0] * zmm15[0]
                temp0_41[0] = zmm0[0]
                zmm2[0] = zmm2[0] * zmm15[0]
                float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xc6)
                temp0_42[0] = zmm1[0]
                float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x27)
                temp0_43[0] = zmm2[0]
                *rcx_9 = _mm_shuffle_ps(temp0_43, temp0_43, 0x39)
                rcx_9 = &rcx_9[4]
                zmm4 = *(r10 + 0x10)
                zmm0 = *(r10 + 0x14)
                zmm4[0] = zmm4[0] - zmm6[0]
                zmm1 = *(r10 + 0x18)
                zmm0[0] = zmm0[0] - zmm7[0]
                zmm2 = *(r10 + 0x1c)
                zmm1[0] = zmm1[0] - zmm8[0]
                zmm2[0] = zmm2[0] - zmm9[0]
                zmm4[0] = zmm4[0] * zmm15[0]
                zmm0[0] = zmm0[0] * zmm15[0]
                float temp0_45[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                zmm1[0] = zmm1[0] * zmm15[0]
                temp0_45[0] = zmm0[0]
                zmm2[0] = zmm2[0] * zmm15[0]
                float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc6)
                temp0_46[0] = zmm1[0]
                float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x27)
                temp0_47[0] = zmm2[0]
                *(rbx_1 - 0x10) = _mm_shuffle_ps(temp0_47, temp0_47, 0x39)
                zmm3 = *(r10 + 0x20)
                zmm0 = *(r10 + 0x24)
                zmm3[0] = zmm3[0] - zmm6[0]
                zmm1 = *(r10 + 0x28)
                zmm0[0] = zmm0[0] - zmm7[0]
                zmm2 = *(r10 + 0x2c)
                zmm1[0] = zmm1[0] - zmm8[0]
                zmm2[0] = zmm2[0] - zmm9[0]
                zmm3[0] = zmm3[0] * zmm15[0]
                zmm0[0] = zmm0[0] * zmm15[0]
                float temp0_49[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                zmm1[0] = zmm1[0] * zmm15[0]
                temp0_49[0] = zmm0[0]
                zmm2[0] = zmm2[0] * zmm15[0]
                float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc6)
                temp0_50[0] = zmm1[0]
                float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0x27)
                temp0_51[0] = zmm2[0]
                *rbx_1 = _mm_shuffle_ps(temp0_51, temp0_51, 0x39)
                zmm4 = *(r10 + 0x30)
                zmm0 = *(r10 + 0x34)
                zmm4[0] = zmm4[0] - zmm6[0]
                zmm1 = *(r10 + 0x38)
                zmm0[0] = zmm0[0] - zmm7[0]
                zmm2 = *(r10 + 0x3c)
                zmm1[0] = zmm1[0] - zmm8[0]
                zmm2[0] = zmm2[0] - zmm9[0]
                zmm4[0] = zmm4[0] * zmm15[0]
                zmm0[0] = zmm0[0] * zmm15[0]
                float temp0_53[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                zmm1[0] = zmm1[0] * zmm15[0]
                temp0_53[0] = zmm0[0]
                zmm2[0] = zmm2[0] * zmm15[0]
                float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc6)
                temp0_54[0] = zmm1[0]
                float temp0_55[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x27)
                temp0_55[0] = zmm2[0]
                *(rbx_1 + 0x10) = _mm_shuffle_ps(temp0_55, temp0_55, 0x39)
                rbx_1 = &rbx_1[0x10]
                r10 += 0x40
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
            zmm10 = arg6.d
            zmm5 = var_d8
        
        if (rdx_3 u< arg1)
            zmm10[0] = zmm10[0] - zmm6[0]
            zmm5[0] = zmm5[0] - zmm7[0]
            result = zx.q(arg1 - rdx_3)
            uint64_t i_5 = zx.q(result.d)
            zmm15[0] = zmm15[0] / zmm10[0]
            zmm15[0] = zmm15[0] / zmm5[0]
            zmm13[0] = zmm13[0] - zmm8[0]
            zmm11[0] = zmm11[0] - zmm9[0]
            zmm15[0] = zmm15[0] / zmm13[0]
            zmm15[0] = zmm15[0] / zmm11[0]
            uint64_t i_3
            
            do
                zmm3 = *r10
                zmm0 = *(r10 + 4)
                zmm3[0] = zmm3[0] - zmm6[0]
                zmm1 = *(r10 + 8)
                zmm0[0] = zmm0[0] - zmm7[0]
                zmm2 = *(r10 + 0xc)
                zmm1[0] = zmm1[0] - zmm8[0]
                zmm2[0] = zmm2[0] - zmm9[0]
                r10 += 0x10
                zmm3[0] = zmm3[0] * zmm15[0]
                zmm0[0] = zmm0[0] * zmm15[0]
                float temp0_57[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                zmm1[0] = zmm1[0] * zmm15[0]
                temp0_57[0] = zmm0[0]
                zmm2[0] = zmm2[0] * zmm15[0]
                float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc6)
                temp0_58[0] = zmm1[0]
                float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x27)
                temp0_59[0] = zmm2[0]
                *rcx_9 = _mm_shuffle_ps(temp0_59, temp0_59, 0x39)
                rcx_9 = &rcx_9[1]
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        zmm15 = 0x3f800000
        r9_2 += 1
    while (r9_2 u< arg2)

return result

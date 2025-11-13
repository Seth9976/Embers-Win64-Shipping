// 函数: sub_1416e16f0
// 地址: 0x1416e16f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int64_t* var_a0 = arg2
int32_t rdx = arg4[1].d
int64_t var_b8 = arg3
int64_t r9
int64_t var_b0 = r9
int64_t* var_a8 = arg1
arg4[1].d = rdx + 4

if (rdx + 4 s> *(arg4 + 0xc))
    sub_1407c3b60(arg4)

int128_t zmm12 = zx.o(0)
int32_t var_d0 = 0x3f800000
uint64_t rsi
rsi.b = 0
*arg5 = (_mm_unpacklo_ps(zx.o(0), 0)).q
arg5[1].d = 0x3f800000
uint32_t result

if (rdi == 1)
    result.b = 0
else
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    uint32_t zmm9[0x4]
    uint32_t var_68_1[0x4] = zmm9
    uint32_t zmm10[0x4]
    uint32_t var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    int64_t var_e8
    float var_d8
    float var_d4
    uint128_t zmm0_1
    float zmm2_1[0x4]
    
    if (rdi == 2)
        float (* rax_18)[0x4] = *arg1
        int32_t* rcx_24 = *arg2
        zmm7 = (*rax_18)[3]
        float zmm0[0x4] = *rax_18
        zmm0[0] = zmm0[0] f- *rcx_24
        zmm7[0] = zmm7[0] f- rcx_24[3]
        zmm8 = rax_18[1][0]
        zmm8[0] = zmm8[0] f- rcx_24[4]
        zmm9 = (*rax_18)[5]
        zmm9[0] = zmm9[0] f- rcx_24[5]
        zmm7[0] = zmm7[0] - zmm0[0]
        zmm0 = (*rax_18)[1]
        zmm0[0] = zmm0[0] f- rcx_24[1]
        var_d8 = zmm7[0]
        zmm8[0] = zmm8[0] - zmm0[0]
        zmm0 = (*rax_18)[2]
        zmm0[0] = zmm0[0] f- rcx_24[2]
        var_d4 = zmm8[0]
        zmm9[0] = zmm9[0] f- zmm0[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        uint32_t var_d0_5 = zmm9[0]
        zmm9[0] = zmm9[0] f* zmm9[0]
        zmm8[0] = zmm8[0] + zmm7[0]
        zmm8[0] = zmm8[0] f+ zmm9[0]
        rsi.b = _mm_cvtps_pd(zmm8[0].q)[0].q f> 0.0001
        
        if (rsi.b == 0)
            result = zx.d(rsi.b)
        else
            float zmm5 = 3.40282347e+38f
            float* r8_8 = &var_d4
            int32_t i_4 = 0
            uint32_t zmm1[0x4]
            
            for (int32_t i = 0; i s< 3; i += 3)
                int32_t i_3 = i + 1
                zmm1 = r8_8[1]
                float zmm2[0x4] = _mm_and_ps(r8_8[-1], 0x7fffffff)
                zmm0 = *r8_8
                r8_8 = &r8_8[3]
                bool cond:0_1 = zmm5 <= zmm2[0]
                int32_t i_2 = i
                zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                float temp0_6[0x4] = _mm_min_ss(zmm2[0], zmm5)
                uint32_t temp0_7[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
                
                if (cond:0_1)
                    i_2 = i_4
                
                zmm5 = temp0_7[0]
                i_4 = i + 2
                bool cond:1_1 = temp0_6[0] <= zmm0[0]
                float temp0_8 = _mm_min_ss(temp0_6[0], zmm0[0])
                
                if (cond:1_1)
                    i_3 = i_2
                
                bool cond:2_1 = temp0_8 f<= temp0_7[0]
                zmm5 = _mm_min_ss(zmm5, temp0_8)
                
                if (cond:2_1)
                    i_4 = i_3
            
            int64_t* rax_19 = &var_d8
            
            if (i_4 != 0)
                if (i_4 != 1)
                    var_d8.q = 0
                    var_d0_5 = 0x3f800000
                else
                    var_d8 = 0f
                    var_d4.q = 0x3f800000
                
                uint32_t var_e0_9 = var_d0_5
                rax_19 = &var_e8
                var_e8 = var_d8.q
            else
                var_d8.q = 0x3f800000
                int32_t var_d0_6 = 0
            
            zmm0 = zx.o(*rax_19)
            int32_t rax_21 = rax_19[1].d
            var_d8.q = zmm0.q
            float temp0_10[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm1 = rax_21
            temp0_10[0] = temp0_10[0] f* zmm9[0]
            zmm1[0] = zmm1[0] f* zmm7[0]
            zmm1[0] = zmm1[0] f* zmm8[0]
            temp0_10[0] = temp0_10[0] * zmm7[0]
            zmm1[0] = zmm1[0] f- temp0_10[0]
            zmm0 = var_d8
            zmm11 = zmm0
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm11[0] = zmm11[0] f* zmm9[0]
            temp0_10[0] = temp0_10[0] - zmm0[0]
            var_d8 = zmm1[0]
            zmm11[0] = zmm11[0] f- zmm1[0]
            zmm1[0] = zmm1[0] f* zmm8[0]
            float var_d0_8 = temp0_10[0]
            temp0_10[0] = temp0_10[0] * zmm8[0]
            temp0_10[0] = temp0_10[0] * zmm7[0]
            zmm11[0] = zmm11[0] f* zmm9[0]
            var_d4 = zmm11[0]
            zmm11[0] = zmm11[0] - temp0_10[0]
            zmm0 = zmm1
            zmm0[0] = zmm0[0] f* zmm9[0]
            temp0_10[0] = temp0_10[0] - zmm0[0]
            zmm11[0] = zmm11[0] * zmm7[0]
            zmm1[0] = zmm1[0] f- zmm11[0]
            var_e8 = (_mm_unpacklo_ps(zmm11, temp0_10[0].q)).q
            uint32_t var_e0_10 = zmm1[0]
            sub_141716d40(&var_b8, &var_d8)
            zmm12 = sub_141716d40(&var_b8, &var_e8)
            int64_t r8_9 = *arg2
            int64_t rdx_13 = *arg1
            int32_t* rcx_27 = *arg4
            var_d8 = 1.40129846e-45f
            var_d4 = 1.40129846e-45f
            int32_t var_d0_9 = 1
            var_e8.d = 3
            var_e8:4.d = 1
            int32_t var_e0_11 = 2
            char rax_23 = sub_141742d30(rcx_27, rdx_13, r8_9, 1, 2, 3, &var_e8, &var_d8)
            void* rcx_28 = *arg4
            var_d8 = 2.80259693e-45f
            var_d4.q = 1
            var_e8 = 2
            int32_t var_e0_12 = 3
            rsi.b = rax_23 & sub_141742d30(rcx_28 + 0x38, *arg1, *arg2, 0, 3, 2, &var_e8, &var_d8)
            int64_t r8_11 = *arg2
            int64_t rdx_15 = *arg1
            int32_t* rcx_31 = *arg4 + 0x70
            var_d8 = 2.80259693e-45f
            var_d4.q = 2
            var_e8 = 3
            int32_t var_e0_13 = 1
            rsi.b &= sub_141742d30(rcx_31, rdx_15, r8_11, 0, 1, 3, &var_e8, &var_d8)
            int64_t r8_12 = *arg2
            int64_t rdx_16 = *arg1
            int32_t* rcx_33 = *arg4 + 0xa8
            var_d8.q = 2
            int32_t var_d0_10 = 0
            var_e8 = 1
            int32_t var_e0_14 = 2
            char rax_26
            rax_26, zmm6, zmm10, zmm11 =
                sub_141742d30(rcx_33, rdx_16, r8_12, 0, 2, 1, &var_e8, &var_d8)
            rsi.b &= rax_26
            
            if (rsi.b != 0)
                goto label_1416e194b
            
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm0_1.d = zmm10.d f* zmm10[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm11[0] = zmm11[0] f+ zmm0_1.d
            zmm11[0] = zmm11[0] + zmm6[0]
            float temp0_12[0x4] = _mm_rsqrt_ss(zmm11[0], zmm11[0])
            zmm2_1 = 0x3f000000
            zmm11[0] = zmm11[0] * 0.5f
            zmm0_1.d = temp0_12.d f* temp0_12[0]
            zmm11[0] = zmm11[0] f* zmm0_1.d
            zmm2_1[0] = 0.5f - zmm11[0]
            zmm0_1.d = temp0_12.d f* zmm2_1[0]
            temp0_12[0] = temp0_12[0] f+ zmm0_1.d
            temp0_12[0] = temp0_12[0] * temp0_12[0]
            zmm11[0] = zmm11[0] * temp0_12[0]
            zmm0_1.d = temp0_12.d f* (0.5f - zmm11[0])
            temp0_12[0] = temp0_12[0] f+ zmm0_1.d
            zmm10[0] = zmm10[0] f* temp0_12[0]
            zmm11[0] = zmm11[0] * temp0_12[0]
            zmm6[0] = zmm6[0] * temp0_12[0]
            *arg5 = (_mm_unpacklo_ps(zmm10, zmm11[0].q)).q
            arg5[1].d = zmm6[0]
            result.b = 0
    else if (rdi == 3)
        int64_t r8_4 = *arg2
        int64_t rdx_6 = *arg1
        int32_t* rcx_17 = *arg4 + 0xa8
        var_d8.q = 2
        int32_t var_d0_3 = 0
        var_e8 = 1
        int32_t var_e0_5 = 2
        char result_1 = sub_141742d30(rcx_17, rdx_6, r8_4, 0, 2, 1, &var_e8, &var_d8)
        
        if (result_1 == 0)
            result = zx.d(result_1)
        else
            void* r12_1 = *arg4
            zmm12 = sub_141716d40(&var_b8, r12_1 + 0xb4)
            int64_t r8_5 = *arg2
            int64_t rdx_8 = *arg1
            int32_t* rcx_19 = *arg4
            var_d8 = 1.40129846e-45f
            var_d4 = 1.40129846e-45f
            int32_t var_d0_4 = 1
            var_e8.d = 3
            var_e8:4.d = 1
            int32_t var_e0_6 = 2
            char rax_15 = sub_141742d30(rcx_19, rdx_8, r8_5, 1, 2, 3, &var_e8, &var_d8)
            int64_t r8_6 = *arg2
            int64_t rdx_9 = *arg1
            int32_t* rcx_21 = *arg4 + 0x38
            var_d8 = 2.80259693e-45f
            var_d4.q = 1
            var_e8 = 2
            int32_t var_e0_7 = 3
            rsi.b = rax_15 & sub_141742d30(rcx_21, rdx_9, r8_6, 0, 3, 2, &var_e8, &var_d8)
            int64_t r8_7 = *arg2
            int64_t rdx_10 = *arg1
            int32_t* rcx_23 = *arg4 + 0x70
            var_d8 = 2.80259693e-45f
            var_d4.q = 2
            var_e8 = 3
            int32_t var_e0_8 = 1
            rsi.b &= sub_141742d30(rcx_23, rdx_10, r8_7, 0, 1, 3, &var_e8, &var_d8)
            
            if (rsi.b != 0)
            label_1416e194b:
                uint128_t* rax_5 = *arg1
                int32_t* rcx_8 = *arg2
                void* i_1 = *arg4
                zmm2_1 = *(rax_5 + 4)
                zmm2_1[0] = zmm2_1[0] f- rcx_8[1]
                zmm0_1.d = (*rax_5).d f- *rcx_8
                float zmm1_1[0x4] = *(rax_5 + 8)
                zmm1_1[0] = zmm1_1[0] f- rcx_8[2]
                zmm2_1[0] = zmm2_1[0] f* *(i_1 + 0x10)
                zmm0_1.d = zmm0_1.d f* *(i_1 + 0xc)
                zmm1_1[0] = zmm1_1[0] f* *(i_1 + 0x14)
                zmm2_1[0] = zmm2_1[0] f+ zmm0_1.d
                zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                
                if (not(zmm2_1[0] f<= zmm12.d))
                    for (void* r9_3 = sx.q(arg4[1].d) * 0x38 + i_1; i_1 != r9_3; i_1 += 0x38)
                        int32_t rcx_9 = *i_1
                        int64_t rdx_5 = *arg4
                        *i_1 = *(i_1 + 4)
                        *(i_1 + 4) = rcx_9
                        *(rdx_5 + ((sx.q(*(i_1 + 0x20)) * 0xe + sx.q(*(i_1 + 0x2c))) << 2)
                            + 0x28) = 2
                        *(rdx_5 + ((sx.q(*(i_1 + 0x24)) * 0xe + sx.q(*(i_1 + 0x30))) << 2)
                            + 0x28) = 1
                        int32_t rcx_14 = *(i_1 + 0x20)
                        *(i_1 + 0x20) = *(i_1 + 0x24)
                        *(i_1 + 0x24) = rcx_14
                        int32_t rcx_15 = *(i_1 + 0x2c)
                        *(i_1 + 0x2c) = *(i_1 + 0x30)
                        *(i_1 + 0x30) = rcx_15
                        int32_t var_c0_1 = (*(i_1 + 0x14) ^ 0x80000000).d
                        zmm0_1 = *(i_1 + 0x18) ^ 0x80000000
                        *(i_1 + 0xc) = (_mm_unpacklo_ps(*(i_1 + 0xc) ^ 0x80000000, 
                            (*(i_1 + 0x10) ^ 0x80000000)[0].q)).q
                        *(i_1 + 0x18) = zmm0_1.d
                        *(i_1 + 0x14) = var_c0_1
                
                result = zx.d(rsi.b)
            else
                *arg5 = *(r12_1 + 0xb4)
                arg5[1].d = *(r12_1 + 0xbc)
                result.b = 0
    else if (rdi != 4)
        result = zx.d(rsi.b)
    else
        int64_t r8 = *arg2
        int64_t rdx_1 = *arg1
        int32_t* rcx_1 = *arg4
        var_e8.d = rdi - 3
        var_e8:4.d = rdi - 3
        float var_e0_1 = rdi - 3
        var_d8 = 4.20389539e-45f
        var_d4 = rdi - 3
        int32_t var_d0_1 = 2
        char rax_1 = sub_141742d30(rcx_1, rdx_1, r8, rdi - 3, 2, 3, &var_d8, &var_e8)
        int64_t r8_1 = *arg2
        int64_t rdx_2 = *arg1
        int32_t* rcx_3 = *arg4 + 0x38
        var_d8 = 2.80259693e-45f
        var_d4.q = 1
        var_e8 = 2
        int32_t var_e0_2 = 3
        rsi.b = rax_1 & sub_141742d30(rcx_3, rdx_2, r8_1, 0, 3, 2, &var_e8, &var_d8)
        int64_t r8_2 = *arg2
        int64_t rdx_3 = *arg1
        int32_t* rcx_5 = *arg4 + 0x70
        var_d8 = 2.80259693e-45f
        var_d4.q = 2
        var_e8 = 3
        int32_t var_e0_3 = 1
        rsi.b &= sub_141742d30(rcx_5, rdx_3, r8_2, 0, 1, 3, &var_e8, &var_d8)
        int64_t r8_3 = *arg2
        int64_t rdx_4 = *arg1
        int32_t* rcx_7 = *arg4 + 0xa8
        var_d8.q = 2
        int32_t var_d0_2 = 0
        var_e8 = 1
        int32_t var_e0_4 = 2
        rsi.b &= sub_141742d30(rcx_7, rdx_4, r8_3, 0, 2, 1, &var_e8, &var_d8)
        
        if (rsi.b != 0)
            goto label_1416e194b
        
        result = zx.d(rsi.b)

return result

// 函数: sub_1421f16b0
// 地址: 0x1421f16b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t rbx = *(arg1 + 0x3c)
int64_t r12 = arg3
int64_t r13 = arg2
int32_t rax_4 = *(arg1 + 0x108)
int32_t rax_5 = *(arg1 + 0xbc)

if (rax_5 s>= 0 && rbx s> rax_5)
    rbx = rax_5

int32_t r15_1 = *(arg1 + 0x28) & 1
*(arg1 + 0x170) = 8
int32_t r15_2 = r15_1 << 4
float zmm2[0x4] = data_143a30388
uint128_t result_9 = data_143a30378
uint128_t var_258 = data_143a30368
uint128_t result = zx.o(data_143a30398)
int32_t rax_6 = data_143a303a0
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
uint64_t result_2 = result.q
result = 0x3f800000
uint128_t result_14 = result_9

if (not(temp0[0] == 0f))
    result.d = 1f / temp0[0]

result.d = result.d f* *(arg1 + 0x16c)
int64_t rcx = sx.q(rbx - 1)
int64_t var_270 = rcx
float var_288 = result.d

if (rbx - 1 s>= 0)
    float (* rbx_1)[0x4] = arg4 + 0x20
    uint64_t r14_1 = zx.q(arg7)
    float (* var_278_1)[0x4] = rbx_1
    bool cond:2_1
    
    do
        int96_t var_248 = data_14399f6f0.12
        result_2.o = data_14399f710
        uint128_t* var_2c8_1 = &var_258
        int32_t* rsi_2 =
            sx.q(zx.d(*(*(arg1 + 0x60) + (rcx << 1))) * *(arg1 + 0x40)) + *(arg1 + 0x58)
        uint128_t var_198_1 = *(rsi_2 + 0x60)
        var_258 = data_14399f6e0
        int96_t var_238_1 = data_14399f700.12
        float result_10[0x4]
        float result_7[0x4]
        result_10, result_7 = sub_1421f39e0(arg1, rsi_2, arg5, arg6, var_2c8_1)
        bool cond:3_1 = *(arg1 + 0x169) == 0
        float result_16[0x4] = var_238_1:8.d
        uint128_t result_5 = var_258.d
        float result_11[0x4] = var_258:4.d
        float zmm13_1 = var_248.d
        float result_6[0x4] = var_258:8.d
        float result_17[0x4] = var_248:4.d
        float zmm15_1 = var_238_1.d
        float zmm14_1 = var_248:8.d
        float result_12[0x4] = var_238_1:4.d
        _mm_shuffle_ps(result_5, result_5, 0xe1)
        float temp0_2[0x4] = _mm_shuffle_ps(result_11, result_11, 0xe1)
        uint128_t zmm8_1
        zmm8_1.d = zmm13_1
        float temp0_3[0x4] = _mm_shuffle_ps(result_6, result_6, 0xe1)
        temp0_2[0] = result_17[0]
        temp0_3[0] = zmm14_1
        _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc6)
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        zmm8_1.d = zmm15_1
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
        temp0_5[0] = result_12[0]
        temp0_6[0] = result_16[0]
        _mm_shuffle_ps(zmm8_1, zmm8_1, 0x27)
        zmm8_1.d = result_2.d.d
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
        temp0_8[0] = result_2:4.d.d
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
        temp0_9[0] = rax_6.d
        zmm8_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x39)
        float zmm9_1[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
        float zmm10_1[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
        uint128_t var_2b8_1 = zmm8_1
        float var_2b8_2[0x4] = zmm9_1
        float result_18 = result_16[0]
        uint128_t result_13
        
        if (cond:3_1)
            zmm14_1 = 9.99999994e-09f
            zmm13_1 = 0.5f
        else
            int32_t result_19 = rsi_2[6]
            uint64_t var_2a8_1 = *(rsi_2 + 0x10)
            float result_15[0x4]
            
            if (*(arg1 + 0xe0) == 0)
                result_10 = var_2a8_1.d
                result_13 = result_19
                result = var_2a8_1:4.d
            else
                int32_t var_20c_1 = 0x3f800000
                float var_218[0x4]
                var_218[0] = var_2a8_1.d.d
                zmm10_1[0].q = 0
                float temp0_13[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
                temp0_13[0] = var_2a8_1:4.d.d
                zmm10_1[2] = 0
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
                temp0_14[0] = result_19[0]
                float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc9)
                var_218 = temp0_15
                float temp0_17[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_15, temp0_15, 0xff), *(arg5 + 0xb0))
                result_9 =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_15, temp0_15, 0x55), *(arg5 + 0x90))
                result =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_15, temp0_15, 0xaa), *(arg5 + 0xa0))
                float temp0_23[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_15, temp0_15, 0), *(arg5 + 0x80))
                float result_20[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_17, result), _mm_add_ps(result_9, temp0_23))
                result_15 = result_20
                result_10 = result_15
                result_9 = _mm_shuffle_ps(result_20, result_20, 0xaa)
                result = _mm_shuffle_ps(result_20, result_20, 0x55)
                result_16 = result_18
                result_13 = result_9
            
            result_11[0] = result_11[0] * result_11[0]
            result_5.d = result_5.d f* result_5.d
            result_6[0] = result_6[0] * result_6[0]
            result_11[0] = result_11[0] f+ result_5.d
            uint128_t result_1 = result
            result_11[0] = result_11[0] + result_6[0]
            
            if (result_11[0] <= 9.99999994e-09f)
                result_6 = result_7
            else
                result_6 = _mm_sqrt_ss(0, result_11[0])
            
            result_17[0] = result_17[0] * result_17[0]
            result_17[0] = result_17[0] + zmm13_1 * zmm13_1
            result_17[0] = result_17[0] + zmm14_1 * zmm14_1
            zmm14_1 = 9.99999994e-09f
            
            if (result_17[0] <= 9.99999994e-09f)
                result_5 = result_7
                result = result_7
                zmm13_1 = result_7[0]
                result_9 = result_7
            else
                result_5 = _mm_sqrt_ss(0, result_17[0])
                result = result_5
                zmm13_1 = result_5.d
                result_9 = result_5
            
            result_12[0] = result_12[0] * result_12[0]
            result_16[0] = result_16[0] * result_16[0]
            result_12[0] = result_12[0] + zmm15_1 * zmm15_1
            result_12[0] = result_12[0] + result_16[0]
            
            if (not(result_12[0] > 9.99999994e-09f))
                result_5 = result
                zmm13_1 = result_9.d
                result_12 = result_7
            
            void* rcx_4 = *(arg1 + 0x138)
            float var_208 = result_10[0]
            int32_t var_204_1 = result_1.d
            int32_t var_200_1 = result_13.d
            int32_t var_1fc_1 = 0x3f800000
            void* rbx_2 = *(rcx_4 + 0x50)
            int128_t* rax_12 = sub_1423633d0(rcx_4, &result_15)
            result_5.d = result_5.d f* zmm13_1
            zmm13_1 = 0.5f
            result_6[0] = result_6[0] * result_6[0]
            var_2c8_1.d = 0
            result_5.d = result_5.d f+ result_6[0]
            result_5.d = result_5.d f+ result_12[0]
            float temp0_30[0x4] = _mm_sqrt_ss(0, result_5.d)
            temp0_30[0] = temp0_30[0] f* *(rax_12 + 0x18)
            temp0_30[0] = temp0_30[0] * 0.5f
            char rax_13
            rax_13, result_10 = sub_1422e0820(rbx_2, &var_208, temp0_30, arg6, var_2c8_1.b, var_288)
            int32_t rbx_3 = sx.d(rax_13)
            int32_t rax_14 = sub_1423660e0(*(arg1 + 0x138))
            int32_t rcx_7 = *(arg1 + 0x170)
            int32_t rax_15 = rax_14 - 1
            
            if (rbx_3 s<= rax_15)
                rax_15 = rbx_3
            
            rbx_1 = var_278_1
            
            if (rax_15 s>= rcx_7)
                rax_15 = rcx_7
            
            *(arg1 + 0x170) = rax_15
        
        if (arg4 != 0)
            if (*(arg1 + 0x118) == 0)
                rbx_1[-2] = zmm8_1
                rbx_1[-1] = zmm9_1
                *rbx_1 = zmm10_1
            else
                result_9 = data_14399f6f0
                uint128_t var_1e8 = data_14399f6e0
                int96_t var_1d8_1 = result_9.12
                int96_t var_1c8_1 = data_14399f700.12
                int96_t var_1b8_1 = data_14399f710.12
                zmm8_1, zmm9_1, zmm10_1, result_7, zmm13_1, zmm14_1 =
                    sub_1421f3670(arg1, rsi_2, arg5, arg6, result_10, &var_1e8)
                result_10 = var_1e8.d
                result_11 = var_1e8:4.d
                float temp0_31[0x4] = _mm_shuffle_ps(result_10, result_10, 0xe1)
                temp0_31[0] = var_1d8_1.d.d
                float temp0_32[0x4] = _mm_shuffle_ps(result_11, result_11, 0xe1)
                float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
                temp0_32[0] = var_1d8_1:4.d.d
                temp0_33[0] = var_1c8_1.d.d
                float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x27)
                temp0_34[0] = var_1b8_1.d[0]
                float temp0_35[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
                temp0_35[0] = var_1c8_1:4.d.d
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x39)
                float var_2b8_4[0x4] = temp0_36
                rbx_1[-2] = temp0_36
                result_10 = var_1e8:8.d
                float temp0_37[0x4] = _mm_shuffle_ps(result_10, result_10, 0xe1)
                temp0_37[0] = var_1d8_1:8.d.d
                float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x27)
                float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc6)
                temp0_38[0] = var_1b8_1:4.d[0]
                temp0_39[0] = var_1c8_1:8.d.d
                float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x27)
                float temp0_41[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x39)
                temp0_40[0] = var_1b8_1:8.d[0]
                float temp0_42[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
                float var_2b8_5[0x4] = temp0_41
                float var_2b8_6[0x4] = temp0_42
                *rbx_1 = temp0_42
                rbx_1[-1] = temp0_41
            
            rbx_1 = &rbx_1[3]
            var_278_1 = rbx_1
        
        result_5 = rsi_2[4]
        result_6 = rsi_2[5]
        result_10 = result_5
        result_12 = rsi_2[6]
        result_11 = result_6
        int64_t rax_16 = sx.q(*(arg1 + 0xc0))
        result_17 = result_12
        result = *rsi_2
        result_9 = rsi_2[1]
        result_10[0] = result_10[0] f- result.d
        result_16 = rsi_2[2]
        result_11[0] = result_11[0] f- result_9.d
        result_17[0] = result_17[0] - result_16[0]
        
        if (rax_16.d != 0)
            void* rax_17 = rax_16 + rsi_2
            result_10 = result_5
            result_11 = result_6
            result_17 = result_12
            result_10[0] = result_10[0] f+ *(rax_17 + 0xc)
            result.d = result.d f+ *(rax_17 + 0x3c)
            result_11[0] = result_11[0] f+ *(rax_17 + 0x10)
            result_9.d = result_9.d f+ *(rax_17 + 0x40)
            result_17[0] = result_17[0] f+ *(rax_17 + 0x14)
            result_16[0] = result_16[0] f+ *(rax_17 + 0x44)
            result_10[0] = result_10[0] f- result.d
            result_11[0] = result_11[0] f- result_9.d
            result_17[0] = result_17[0] - result_16[0]
        
        if (result_10[0] != result_7[0] || result_11[0] != result_7[0]
                || result_17[0] != result_7[0])
            if (*(arg1 + 0xe0) != 0)
                int32_t var_1ec_1 = 0
                float var_1f8[0x4]
                var_1f8[0] = result_10[0]
                result_13.q = 0
                float temp0_43[0x4] = _mm_shuffle_ps(var_1f8, var_1f8, 0xe1)
                temp0_43[0] = result_11[0]
                result_13:8.d = 0
                float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xc6)
                temp0_44[0] = result_17[0]
                float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xc9)
                var_1f8 = temp0_45
                float temp0_47[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_45, temp0_45, 0xff), *(arg5 + 0xb0))
                result_9 =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_45, temp0_45, 0x55), *(arg5 + 0x90))
                result =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_45, temp0_45, 0xaa), *(arg5 + 0xa0))
                float temp0_53[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_45, temp0_45, 0), *(arg5 + 0x80))
                result_10 = _mm_add_ps(_mm_add_ps(temp0_47, result), _mm_add_ps(result_9, temp0_53))
                result_11 = _mm_shuffle_ps(result_10, result_10, 0x55)
                result_17 = _mm_shuffle_ps(result_10, result_10, 0xaa)
            
            result_11[0] = result_11[0] * result_11[0]
            result.d = result_10.d f* result_10[0]
            result_9.d = result_17.d f* result_17[0]
            result_11[0] = result_11[0] f+ result.d
            result_11[0] = result_11[0] f+ result_9.d
            result_5 = _mm_sqrt_ss(0, result_11[0])
            
            if (result_5.d f<= zmm14_1)
                result_6 = data_143dbb1f8
                result_16 = data_143dbb1fc
                result_9 = data_143dbb200
            else
                result_9.d = 1f f/ result_5.d
                result_16 = result_9
                result.d = result_9.d f* result_10[0]
                result_16[0] = result_16[0] * result_11[0]
                result_6 = result
                result_9.d = result_9.d f* result_17[0]
            
            float temp0_60[0x4] = _mm_shuffle_ps(result_6, result_6, 0xe1)
            temp0_60[0] = result_16[0]
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc6)
            temp0_61[0] = result_9.d
            float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x27)
            temp0_62[0] = result_5.d
            result_6 = _mm_shuffle_ps(temp0_62, temp0_62, 0x39)
            float result_8[0x4] = result_6
        else
            result_6 = data_142d3f660
        
        if ((*(arg1 + 0x28) & 1) != 0)
            int64_t rax_19 = sx.q(*(arg1 + 0xc4))
            
            if (rax_19.d s> 0)
                result = *(rax_19 + rsi_2)
                int32_t i = 0
                uint128_t result_3 = result
                
                if (r14_1.d != 0)
                    do
                        int32_t i_1 = i
                        i += 1
                        *(zx.q(i_1 * r15_2) + r12) = result
                    while (i u< r14_1.d)
                
                r12 += zx.q(r15_2 * r14_1.d)
        
        uint128_t result_4
        
        if (*(arg1 + 0x100) != 0)
            int64_t rax_23 = sx.q(*(arg1 + 0x104))
            
            if (rax_23.d s> 0)
                result_5 = *(rax_23 + rsi_2)
                result_9.d = result_5.d f+ result_5.d
                result_9.d = result_9.d f- zmm13_1
                int32_t rax_25 = int.d(result_9.d) s>> 1
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(rax_25)
                result_4:2.w = (divs.dp.d(temp3_1:temp4_1, rax_4)).w
                result_4.w = (mods.dp.d(temp3_1:temp4_1, rax_4)).w
                int32_t temp9_1
                int32_t temp10_1
                temp9_1:temp10_1 = sx.q(rax_25 + 1)
                result_4:4.w = (mods.dp.d(temp9_1:temp10_1, rax_4)).w
                result_4:6.w = (divs.dp.d(temp9_1:temp10_1, rax_4)).w
                truncf(result_5.d)
                result_5.d = result_5.d f- result_5.d
                result_4:8.d = result_5.d
        
        result = rsi_2[3]
        uint64_t rdx_8 = 0
        int32_t var_fc_1 = result.d
        
        if (r14_1.d != 0)
            result = result_4
            
            do
                int32_t rcx_10 = (rdx_8 * 3).d
                rdx_8 = zx.q(rdx_8.d + 1)
                int128_t* rcx_12 = zx.q(rcx_10 << 5) + r13
                *rcx_12 = var_198_1
                rcx_12[1] = zmm8_1
                rcx_12[2] = zmm9_1
                rcx_12[3] = zmm10_1
                rcx_12[4] = result_6
                rcx_12[5] = result
            while (rdx_8.d u< r14_1.d)
        
        r13 += zx.q((r14_1 * 3).d << 5)
        rcx = var_270 - 1
        cond:2_1 = var_270 - 1 s>= 0
        var_270 = rcx
    while (cond:2_1)

__security_check_cookie(rax_1 ^ &var_2e8)
return result

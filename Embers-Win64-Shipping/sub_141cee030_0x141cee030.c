// 函数: sub_141cee030
// 地址: 0x141cee030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3.d
int64_t r12 = *(arg1 + 0xe0)
int64_t rdi = 0
uint128_t zmm5 = arg3
int64_t rsi
rsi.b = 1
int64_t r9 = 0
uint128_t zmm10 = data_143dbb1f8
arg3 = zmm10
uint128_t zmm11 = data_143dbb1fc
uint128_t zmm3 = zmm11
uint32_t zmm12[0x4] = data_143dbb200
uint128_t zmm6 = zmm12
uint128_t zmm4 = zmm6
uint128_t zmm14 = zmm10
int64_t rax = sx.q(arg2)
uint128_t zmm15 = zmm11
int32_t var_240 = zmm6.d
int64_t r15 = rax * 5
int32_t* rdx = *(r12 + (r15 << 3))
int64_t r14 = sx.q(*(r12 + (r15 << 3) + 8))
uint64_t r10_1 = r14 << 2 u>> 2

if (rdx u> &rdx[r14])
    r10_1 = 0

if (r10_1 != 0)
    int64_t r8_1 = **(arg4 + 0x18)
    
    do
        int64_t rax_3 = sx.q(*rdx)
        r9 += 1
        rdx = &rdx[1]
        int64_t rcx_1 = sx.q(*(*(arg1 + 0x38) + rax_3 * 0x18)) * 3
        arg3.d = arg3.d f+ *(r8_1 + (rcx_1 << 2))
        zmm3.d = zmm3.d f+ *(r8_1 + (rcx_1 << 2) + 4)
        zmm4.d = zmm4.d f+ *(r8_1 + (rcx_1 << 2) + 8)
    while (r9 != r10_1)

uint128_t zmm7 = zmm10
uint128_t zmm8 = zmm11
uint32_t zmm9[0x4] = zmm6
int32_t* r14_1 = *(r12 + (r15 << 3) + 0x10)
uint128_t zmm13 = zmm10
uint64_t r15_2 = sx.q(*(r12 + (r15 << 3) + 0x18)) << 2 u>> 2
int32_t arg_10 = zmm11.d
uint128_t zmm1
zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o(r14.d)).d

if (r14_1 u> &r14_1[sx.q(*(r12 + (r15 << 3) + 0x18))])
    r15_2 = 0

int32_t arg_8 = zmm6.d
arg3.d = arg3.d f* zmm1.d
zmm3.d = zmm3.d f* zmm1.d
zmm4.d = zmm4.d f* zmm1.d
int32_t var_1d0 = arg3.d
int32_t var_1cc = zmm3.d
int32_t var_1c8 = zmm4.d
int32_t var_218 = __maxss_xmmss_memss(zmm5.d, 0x800000).d
float var_278
uint128_t zmm0

if (r15_2 != 0)
    zmm9 = 0x7fffffff
    int32_t var_23c_1 = zmm10.d
    int32_t var_238_1 = zmm11.d
    int32_t var_258_1 = zmm6.d
    int32_t var_254_1 = zmm10.d
    arg_10 = zmm11.d
    arg_8 = zmm6.d
    
    do
        int64_t r8_2 = *(arg1 + 0x38)
        int32_t* rdx_3 = (sx.q(*r14_1) << 4) + *(arg1 + 0xa8)
        int64_t r9_1 = **(arg4 + 0x18)
        int64_t r11_2 = sx.q(*rdx_3)
        int64_t r10_2 = sx.q(rdx_3[1])
        int64_t rdx_4 = sx.q(rdx_3[2])
        int64_t rax_9 = sx.q(*(r8_2 + r11_2 * 0x18)) * 3
        zmm0 = zx.o(*(r9_1 + (rax_9 << 2)))
        int32_t rax_10 = *(r9_1 + (rax_9 << 2) + 8)
        uint64_t var_1e0_1 = zmm0.q
        uint64_t var_228_1 = zmm0.q
        int64_t rax_12 = sx.q(*(r8_2 + r10_2 * 0x18)) * 3
        zmm1.d = (*(r9_1 + (rax_12 << 2))).d f- zmm0.d
        arg3.d = (*(r9_1 + (rax_12 << 2) + 4)).d f- var_1e0_1:4.d
        zmm3.d = (*(r9_1 + (rax_12 << 2) + 8)).d f- rax_10
        int32_t var_1f0_1 = zmm1.d
        int32_t var_1ec_1 = arg3.d
        int64_t rax_14 = sx.q(*(r8_2 + rdx_4 * 0x18)) * 3
        zmm4.d = (*(r9_1 + (rax_14 << 2))).d f- zmm0.d
        zmm7.d = (*(r9_1 + (rax_14 << 2) + 8)).d f- rax_10
        zmm5.d = (*(r9_1 + (rax_14 << 2) + 4)).d f- var_1e0_1:4.d
        int32_t var_1e8_1 = zmm3.d
        int32_t var_1fc_1 = zmm4.d
        int32_t var_1f4_1 = zmm7.d
        int64_t rcx_5 = **(arg5 + 0x18)
        int32_t var_1f8_1 = zmm5.d
        zmm0 = *(rcx_5 + (r11_2 << 3))
        zmm6 = *(rcx_5 + (r11_2 << 3) + 4)
        zmm8.d = (*(rcx_5 + (r10_2 << 3))).d f- zmm0.d
        int32_t var_204_1 = zmm0.d
        int32_t var_200_1 = zmm6.d
        int32_t var_214_1 = zmm8.d
        zmm8.d = (*(rcx_5 + (r10_2 << 3) + 4)).d f- zmm6.d
        int32_t var_210_1 = zmm8.d
        zmm8.d = (*(rcx_5 + (rdx_4 << 3))).d f- zmm0.d
        zmm0.d = (*(rcx_5 + (rdx_4 << 3) + 4)).d f- zmm6.d
        zmm6.d = zmm5.d f* zmm3.d
        int32_t var_20c_1 = zmm8.d
        int32_t var_208_1 = zmm0.d
        zmm0.d = zmm7.d f* arg3.d
        zmm8.d = zmm4.d f* arg3.d
        zmm6.d = zmm6.d f- zmm0.d
        zmm7.d = zmm7.d f* zmm1.d
        zmm0.d = zmm4.d f* zmm3.d
        zmm7.d = zmm7.d f- zmm0.d
        zmm0.d = zmm5.d f* zmm1.d
        zmm8.d = zmm8.d f- zmm0.d
        arg3.d = zmm7.d f* zmm7.d
        zmm0.d = zmm6.d f* zmm6.d
        zmm1.d = zmm8.d f* zmm8.d
        arg3.d = arg3.d f+ zmm0.d
        arg3.d = arg3.d f+ zmm1.d
        int32_t var_264_1
        uint32_t var_260_1
        
        if (not(arg3.d f!= 1f))
            var_264_1 = zmm7.d
            var_260_1 = zmm8.d
        else if (arg3.d f>= var_218)
            zmm5 = _mm_rsqrt_ss(arg3.d, arg3.d)
            zmm3.d = arg3.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            zmm1.d = zmm3.d f* zmm0.d
            arg3.d = 0.5f f- zmm1.d
            zmm0.d = zmm5.d f* arg3.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm1.d = zmm5.d f* zmm5.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm4.d = 0.5f f- zmm3.d
            zmm0.d = zmm5.d f* zmm4.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm6.d = zmm6.d f* zmm5.d
            zmm0.d = zmm5.d f* zmm7.d
            zmm5.d = zmm5.d f* zmm8.d
            var_264_1 = zmm0.d
            zmm7 = zmm0
            var_260_1 = zmm5.d
            zmm8 = zmm5
        else
            zmm7 = zmm11
            var_260_1 = zmm12[0]
            var_264_1 = zmm7.d
            zmm6 = zmm10
            zmm8 = zmm12
        
        zmm0 = arg_18
        int32_t var_268 = zmm6.d
        int64_t* rax_15
        
        if (_mm_and_ps(zmm6, zmm9).d f> zmm0.d)
            rax_15.b = 0
        else if (_mm_and_ps(zmm7, zmm9).d f> zmm0.d)
            rax_15.b = 0
        else if (_mm_and_ps(zmm8, zmm9).d f> zmm0.d)
            rax_15.b = 0
        else
            rax_15.b = 1
        
        if (rax_15.b != 0)
            zmm6 = zmm12
            zmm7 = zmm10
            zmm8 = zmm11
            var_258_1 = zmm6.d
            var_254_1 = zmm7.d
            zmm14 = zmm10
            arg_10 = zmm8.d
            zmm15 = zmm11
            arg_8 = zmm6.d
            rsi.b = 0
        else
            int32_t var_168 = var_214_1.d
            int32_t var_158_1 = var_20c_1.d
            int32_t var_164_1 = var_210_1.d
            int32_t var_148_1 = var_204_1.d
            int32_t var_154_1 = var_208_1.d
            uint128_t var_138_1 = data_142d3f660
            int32_t var_144_1 = var_200_1.d
            int32_t var_1ac_1 = 0
            int32_t var_19c_1 = 0
            int32_t var_18c_1 = 0
            int32_t var_17c_1 = 0x3f800000
            int64_t var_160_1 = 0
            int64_t var_150_1 = 0
            int64_t var_140_1 = 0x3f800000
            uint32_t var_118[0x4][0x4]
            uint32_t (* rax_16)[0x4]
            rax_16, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_140631b10(&var_168, &var_118)
            float var_1a8[0x4]
            var_1a8[0] = var_1fc_1[0]
            uint32_t zmm2[0x4] = *rax_16
            float var_1b8[0x4]
            var_1b8[0] = var_1f0_1[0]
            uint32_t zmm7_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float var_188[0x4]
            var_188[0] = zmm10.d
            float temp0_7[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xe1)
            temp0_7[0] = var_1f8_1[0]
            float temp0_8[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
            temp0_8[0] = var_1ec_1[0]
            float temp0_9[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
            temp0_9[0] = zmm11.d
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
            temp0_10[0] = var_1f4_1[0]
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            temp0_11[0] = var_1e8_1[0]
            zmm7_1 = _mm_mul_ps(zmm7_1, temp0_12)
            float temp0_15[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
            float temp0_17[0x4] = _mm_mul_ps(temp0_13, temp0_16)
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            temp0_18[0] = zmm12[0]
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
            zmm7_1 = _mm_add_ps(zmm7_1, temp0_17)
            zmm2 = _mm_mul_ps(zmm2, temp0_20)
            float var_198[0x4]
            var_198[0] = zx.o(var_228_1)[0]
            var_1a8 = temp0_12
            float temp0_23[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
            temp0_23[0] = var_1e0_1:4.d[0]
            var_1b8 = temp0_16
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
            temp0_24[0] = rax_10[0]
            var_188 = temp0_20
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc9)
            var_198 = temp0_25
            zmm7_1 = _mm_add_ps(_mm_add_ps(zmm7_1, _mm_mul_ps(temp0_15, temp0_25)), zmm2)
            zmm2 = rax_16[1]
            float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_32[0x4] = _mm_mul_ps(temp0_30, temp0_16)
            float var_228_2 = 0f
            float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_25)
            int32_t var_220_1 = 0
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_20)
            float temp0_39[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_29, temp0_12), temp0_32), temp0_33), zmm2)
            zmm2 = rax_16[2]
            float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_43[0x4] = _mm_mul_ps(temp0_40, temp0_16)
            float temp0_44[0x4] = _mm_mul_ps(temp0_41, temp0_25)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_20)
            zmm11 = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11, temp0_12), temp0_43), temp0_44), zmm2)
            zmm2 = rax_16[3]
            float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm12 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_54[0x4] = _mm_mul_ps(temp0_51, temp0_16)
            float temp0_55[0x4] = _mm_mul_ps(temp0_52, temp0_25)
            zmm12 = _mm_mul_ps(zmm12, temp0_12)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_20)
            zmm12 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm12, temp0_54), temp0_55), zmm2)
            zmm2 = data_142d4cc00
            float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_63[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_64[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            float temp0_65[0x4] = _mm_mul_ps(temp0_62, zmm11)
            float temp0_66[0x4] = _mm_mul_ps(temp0_63, temp0_39)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7_1)
            float temp0_69[0x4] = _mm_mul_ps(temp0_64, zmm12)
            float temp0_70[0x4] = _mm_add_ps(temp0_66, zmm2)
            float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_69, temp0_65), temp0_70)
            float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
            var_228_2 = temp0_73[0]
            temp0_73[0] = temp0_73[0] * temp0_73[0]
            temp0_72[0] = temp0_72[0] * temp0_72[0]
            zmm2 = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
            uint32_t var_128_1 = zmm2[0]
            temp0_73[0] = temp0_73[0] + temp0_72[0]
            float zmm0_1[0x4] = zmm2
            zmm0_1[0] = zmm0_1[0] f* zmm2[0]
            temp0_73[0] = temp0_73[0] + zmm0_1[0]
            float zmm1_1[0x4]
            float zmm3_1[0x4]
            float zmm4_1[0x4]
            float zmm5_1[0x4]
            
            if (temp0_73[0] <= 9.99999994e-09f)
                zmm0_1 = zx.o(0)
                zmm1_1 = zx.o(0)
                zmm5_1 = zx.o(0)
            else
                zmm3_1 = zx.o(0)
                zmm4_1 = 0x3f000000
                zmm3_1[0] = temp0_73[0]
                zmm2 = 0x3f000000
                zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                zmm2[0] = 0.5f - zmm3_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm2[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                zmm4_1[0] = 0.5f - zmm3_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm0_1 = zmm5_1
                zmm1_1 = zmm5_1
                zmm1_1[0] = zmm1_1[0] * var_228_2
                zmm5_1[0] = zmm5_1[0] f* var_128_1
                zmm0_1[0] = zmm0_1[0] * temp0_72[0]
            
            zmm2 = data_142d4cc20
            float var_24c_1 = zmm1_1[0]
            float var_250 = zmm0_1[0]
            float temp0_76[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_77[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_78[0x4] = _mm_mul_ps(temp0_76, temp0_39)
            int64_t var_228_3 = 0
            float temp0_79[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            float temp0_80[0x4] = _mm_mul_ps(temp0_77, zmm11)
            int32_t var_220_2 = 0
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, zmm12)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7_1)
            float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_80)
            uint32_t var_248_1 = zmm5_1[0]
            float temp0_86[0x4] = _mm_add_ps(temp0_84, _mm_add_ps(temp0_78, zmm2))
            temp0_86[0] = temp0_86[0] * temp0_86[0]
            zmm7_1 = _mm_shuffle_ps(temp0_86, temp0_86, 0x55)
            float temp0_88[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xaa)
            zmm1_1 = zmm7_1
            zmm1_1[0] = zmm1_1[0] f* zmm7_1[0]
            zmm1_1[0] = zmm1_1[0] + temp0_86[0]
            temp0_88[0] = temp0_88[0] * temp0_88[0]
            zmm1_1[0] = zmm1_1[0] + temp0_88[0]
            
            if (zmm1_1[0] <= 9.99999994e-09f)
                zmm0_1 = zx.o(0)
                zmm1_1 = zx.o(0)
                zmm5_1 = zx.o(0)
            else
                zmm3_1 = zx.o(0)
                zmm4_1 = 0x3f000000
                zmm3_1[0] = zmm1_1[0]
                zmm2 = 0x3f000000
                zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                zmm3_1[0] = zmm3_1[0] * 0.5f
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                zmm2[0] = 0.5f - zmm3_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm2[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                zmm4_1[0] = 0.5f - zmm3_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                zmm0_1 = zmm5_1
                zmm1_1 = zmm5_1
                zmm0_1[0] = zmm0_1[0] * temp0_86[0]
                zmm1_1[0] = zmm1_1[0] f* zmm7_1[0]
                zmm5_1[0] = zmm5_1[0] * temp0_88[0]
            
            var_278 = zmm0_1[0]
            float var_274_1 = zmm1_1[0]
            float var_270_1 = zmm5_1[0]
            zmm9 = sub_140ad25d0(&var_250, &var_278, &var_268)
            zmm1 = var_250
            
            if (not(_mm_and_ps(zmm1, zmm9).d f> zmm13.d))
                if (_mm_and_ps(var_24c_1, zmm9).d f> zmm13.d)
                    goto label_141cee908
                
                if (_mm_and_ps(var_248_1, zmm9).d f<= zmm13.d)
                    goto label_141cee9c7
                
                goto label_141cee908
            
        label_141cee908:
            
            if (_finite(_mm_cvtps_pd(zmm1.q).q) == 0)
            label_141cee9c7:
                zmm10 = data_143dbb1f8
                rsi.b = 0
                zmm11 = data_143dbb1fc
                zmm12 = data_143dbb200
                var_250 = zmm10.d
                var_24c_1 = zmm11.d
                var_248_1 = zmm12[0]
                var_278 = zmm10.d
                var_274_1 = zmm11.d
                var_270_1 = zmm12[0]
            else
                if (_finite(_mm_cvtps_pd(var_24c_1.q).q) == 0)
                    goto label_141cee9c7
                
                if (_finite(_mm_cvtps_pd(var_248_1.q).q) == 0)
                    goto label_141cee9c7
                
                zmm1 = var_278
                
                if (not(_mm_and_ps(zmm1, zmm9).d f> zmm13.d)
                        && not(_mm_and_ps(var_274_1, zmm9).d f> zmm13.d)
                        && _mm_and_ps(var_270_1, zmm9).d f<= zmm13.d)
                    goto label_141cee9c7
                
                if (_finite(_mm_cvtps_pd(zmm1.q).q) == 0)
                    goto label_141cee9c7
                
                if (_finite(_mm_cvtps_pd(var_274_1.q).q) == 0)
                    goto label_141cee9c7
                
                if (_finite(_mm_cvtps_pd(var_270_1.q).q) == 0)
                    goto label_141cee9c7
                
                zmm12 = data_143dbb200
                zmm11 = data_143dbb1fc
                zmm10 = data_143dbb1f8
            
            zmm1 = var_268
            
            if (not(_mm_and_ps(zmm1, zmm9).d f> zmm13.d))
                if (_mm_and_ps(var_264_1, zmm9).d f> zmm13.d)
                    goto label_141ceea49
                
                if (_mm_and_ps(var_260_1, zmm9).d f<= zmm13.d)
                    goto label_141ceeac3
                
                goto label_141ceea49
            
        label_141ceea49:
            
            if (_finite(_mm_cvtps_pd(zmm1.q).q) == 0)
            label_141ceeaa8:
                zmm12 = data_143dbb200
                zmm11 = data_143dbb1fc
                zmm10 = data_143dbb1f8
            label_141ceeac3:
                arg3 = zmm10
                zmm1 = zmm11
                zmm0 = zmm12
                var_268 = arg3.d
                int32_t var_264_2 = zmm1.d
                rsi.b = 0
                int32_t var_260_2 = zmm0.d
            else
                if (_finite(_mm_cvtps_pd(var_264_1.q).q) == 0)
                    goto label_141ceeaa8
                
                if (_finite(_mm_cvtps_pd(var_260_1.q).q) == 0)
                    goto label_141ceeaa8
                
                zmm12 = data_143dbb200
                zmm11 = data_143dbb1fc
                zmm10 = data_143dbb1f8
                zmm0 = var_260_1
                zmm1 = var_264_1
                arg3 = var_268
            
            zmm14.d = zmm14.d f+ arg3.d
            zmm3.d = var_258_1.d f+ var_248_1
            zmm15.d = zmm15.d f+ zmm1.d
            zmm6.d = var_240.d f+ zmm0.d
            zmm7.d = var_23c_1.d f+ var_250
            zmm8.d = var_238_1.d f+ var_24c_1
            var_258_1 = zmm3.d
            zmm3.d = var_254_1.d f+ var_278
            var_254_1 = zmm3.d
            zmm3.d = arg_10.d f+ var_274_1
            arg_10 = zmm3.d
            zmm3.d = arg_8.d f+ var_270_1
            arg_8 = zmm3.d
        
        r14_1 = &r14_1[1]
        var_238_1 = zmm8.d
        rdi += 1
        var_23c_1 = zmm7.d
        var_240 = zmm6.d
    while (rdi != r15_2)
    
    zmm9 = var_258_1
    zmm13 = var_254_1

arg3.d = zmm14.d f* zmm14.d
zmm0.d = zmm15.d f* zmm15.d
zmm1.d = zmm6.d f* zmm6.d
arg3.d = arg3.d f+ zmm0.d
arg3.d = arg3.d f+ zmm1.d
uint32_t var_270_2

if (not(arg3.d f!= 1f))
    var_278 = zmm14.d
    int32_t var_274_2 = zmm15.d
    var_270_2 = zmm6.d
else if (arg3.d f>= 9.99999994e-09f)
    zmm3.d = arg3.d
    zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* zmm0.d
    arg3.d = 0.5f f- zmm1.d
    zmm0.d = zmm5.d f* arg3.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm4.d = 0.5f f- zmm3.d
    zmm0.d = zmm5.d f* zmm4.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm0.d = zmm5.d f* zmm14.d
    zmm1.d = zmm5.d f* zmm15.d
    zmm5.d = zmm5.d f* zmm6.d
    var_278 = zmm0.d
    int32_t var_274_4 = zmm1.d
    var_270_2 = zmm5.d
else
    var_278 = zmm10.d
    int32_t var_274_3 = zmm11.d
    var_270_2 = zmm12[0]

zmm3 = 0x322bcc77
int64_t r9_2 = rax * 3
arg3.d = zmm7.d f* zmm7.d
zmm1.d = zmm9.d f* zmm9[0]
int64_t rdx_7 = **(arg6 + 0x18)
*(rdx_7 + (r9_2 << 2)) = var_278.q
zmm0.d = zmm8.d f* zmm8.d
*(rdx_7 + (r9_2 << 2) + 8) = var_270_2
arg3.d = arg3.d f+ zmm0.d
arg3.d = arg3.d f+ zmm1.d
uint32_t var_270_3

if (arg3.d f!= 1f)
    if (arg3.d f>= 9.99999994e-09f)
        zmm3.d = arg3.d
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        arg3.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* arg3.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm3 = 0x322bcc77
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1 = zmm5
        zmm0.d = zmm5.d f* zmm7.d
        zmm5.d = zmm5.d f* zmm9[0]
        var_278 = zmm0.d
        zmm1.d = zmm1.d f* zmm8.d
        var_270_3 = zmm5.d
    else
        zmm1 = data_143dbb1fc
        var_278 = data_143dbb1f8.d
        var_270_3 = data_143dbb200.d
    
    int32_t var_274_6 = zmm1.d
else
    var_278 = zmm7.d
    int32_t var_274_5 = zmm8.d
    var_270_3 = zmm9[0]

zmm6 = arg_10
zmm7 = arg_8
arg3.d = zmm13.d f* zmm13.d
int64_t rdx_8 = **(arg7 + 0x18)
zmm1.d = zmm7.d f* zmm7.d
*(rdx_8 + (r9_2 << 2)) = var_278.q
zmm0.d = zmm6.d f* zmm6.d
*(rdx_8 + (r9_2 << 2) + 8) = var_270_3
arg3.d = arg3.d f+ zmm0.d
arg3.d = arg3.d f+ zmm1.d
int32_t var_270_4

if (arg3.d f!= 1f)
    if (arg3.d f>= zmm3.d)
        zmm3.d = arg3.d
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        arg3.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* arg3.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1 = zmm5
        zmm0.d = zmm5.d f* zmm13.d
        zmm5.d = zmm5.d f* zmm7.d
        var_278 = zmm0.d
        zmm1.d = zmm1.d f* zmm6.d
        var_270_4 = zmm5.d
    else
        zmm1 = data_143dbb1fc
        var_278 = data_143dbb1f8.d
        var_270_4 = data_143dbb200.d
    
    int32_t var_274_8 = zmm1.d
else
    var_278 = zmm13.d
    int32_t var_274_7 = zmm6.d
    var_270_4 = zmm7.d

int64_t rdx_9 = **(arg8 + 0x18)
*(rdx_9 + (r9_2 << 2)) = var_278.q
*(rdx_9 + (r9_2 << 2) + 8) = var_270_4
int64_t r8_4 = **(arg9 + 0x18)
*(r8_4 + (r9_2 << 2)) = var_1d0.q
*(r8_4 + (r9_2 << 2) + 8) = var_1c8
return zx.q(rsi.b)

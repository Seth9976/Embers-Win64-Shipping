// 函数: sub_14167ba70
// 地址: 0x14167ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
float result_10[0x4] = zx.o(0)
float (* rsi)[0x4] = arg4
double zmm0[0x2] = *(*(arg2 + 0x10) + 0x1c)
uint32_t result_44[0x4]

if (zmm0[0].d f== 0f)
    result_44 = zx.o(0)
else
    result_44 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    result_44[0] = result_44[0] f* zmm0[0].d

float result_43[0x4] = *arg3
double var_338[0x2] = arg3[1]
int64_t r12 = 0
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
zmm0 = data_142d3f7e0
float zmm2[0x4] = result_43 ^ 0x80000000
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
void* var_258 = arg1
double var_178[0x2] = zmm0
float result_33[0x4] = _mm_shuffle_ps(result_43, result_43, 0x55)
result_44[0] = result_44[0] f* result_44[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
double temp0_3[0x2] = _mm_cvtps_pd(result_44[0].q)
float result_45[0x4] = _mm_shuffle_ps(result_43, result_43, 0xaa)
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
float temp0_4[0x4] = _mm_shuffle_ps(result_43, result_43, 0xff)
float result_14 = _mm_cvtpd_ps(temp0_3)[0]
temp0_2[0] = (result_33 ^ 0x80000000)[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_6[0] = (result_45 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0_4[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
float var_248[0x4] = temp0_8
float var_1c8[0x4] = temp0_8
int64_t result_46
float result_6[0x4]
uint128_t result_21
uint128_t result_9
result_6, result_21, result_9 = sub_141758e70(arg1, &result_46, arg10, zx.o(0))
int64_t result_40 = result_46
int32_t result_36
int32_t result_41 = result_36
void* rax_5 = *(arg2 + 0x10)
float result_8[0x4] = *(rax_5 + 0x18)
float result_18[0x4] = *(rax_5 + 0x14)
result_8[0] = result_8[0] f* *(arg2 + 0x30)
float result_31[0x4] = *(rax_5 + 0x10)
result_18[0] = result_18[0] f* *(arg2 + 0x2c)
result_31[0] = result_31[0] f* *(arg2 + 0x28)
uint128_t result_20
result_20.d = result_8.d f* result_21.d
result_18[0] = result_18[0] * result_45[0]
float result_32[0x4] = result_31
result_32[0] = result_32[0] * result_45[0]
result_20.d = result_20.d f- result_18[0]
result_8[0] = result_8[0] * result_6[0]
result_20.d = result_20.d f+ result_20.d
int64_t var_2f8 = 0
float result_7[0x4] = result_18
float var_2f0 = 1f
result_7[0] = result_7[0] * result_6[0]
result_32[0] = result_32[0] - result_8[0]
result_31[0] = result_31[0] f* result_21.d
uint128_t result_30
result_30.d = result_20.d f* temp0_4[0]
result_7[0] = result_7[0] - result_31[0]
result_32[0] = result_32[0] + result_32[0]
result_30.d = result_30.d f+ result_31[0]
result_31 = result_20
result_31[0] = result_31[0] * result_45[0]
result_7[0] = result_7[0] + result_7[0]
result_20.d = result_20.d f* result_21.d
result_32[0] = result_32[0] * result_45[0]
float zmm13[0x4] = zx.o(0)
float result_19[0x4] = result_7
result_19[0] = result_19[0] f* result_21.d
result_19[0] = result_19[0] - result_32[0]
result_7[0] = result_7[0] * result_6[0]
result_7[0] = result_7[0] * temp0_4[0]
result_31[0] = result_31[0] - result_7[0]
result_19[0] = result_19[0] f+ result_30.d
result_32[0] = result_32[0] * result_6[0]
result_7[0] = result_7[0] + result_8[0]
result_30.d = result_32.d f* temp0_4[0]
result_32[0] = result_32[0] f- result_20.d
result_30.d = result_30.d f+ result_18[0]
result_18 = var_338[1].d
float result_15 = result_18[0]
result_8 = result_18
float result_2 = result_18[0]
result_32[0] = result_32[0] + result_7[0]
result_7 = var_338[0]:4.d
result_6 = result_7
float result_23 = result_7[0]
result_31[0] = result_31[0] f+ result_30.d
float var_2bc = result_7[0]
result_30 = var_338[0].d
result_20 = result_7
float var_2c0 = result_30.d
float result_1 = result_32[0]
float result_22[0x4] = result_30
int64_t result_17 = (_mm_unpacklo_ps(result_19, result_31[0].q)).q
float result_29[0x4] = result_46.d
result_29[0] = result_29[0] - result_19[0]
float result_3 = result_1
float result = zx.d(arg9)
result_21.d = result_30.d f- result_29[0]
result_29 = result_46:4.d
result_29[0] = result_29[0] - result_31[0]
result_6[0] = result_6[0] - result_29[0]
result_29 = result_36
result_29[0] = result_29[0] - result_32[0]
result_32 = result_18
result_32[0] = result_32[0] - result_29[0]
result_6[0] = result_6[0] * result_6[0]
result_29 = result_21
result_29[0] = result_29[0] f* result_21.d
result_30.d = result_32.d f* result_32[0]
result_6[0] = result_6[0] + result_29[0]
result_6[0] = result_6[0] f+ result_30.d
float result_5

if (result_6[0] f>= result_9.d || (result.b != 0 && result_6[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_30 = 0x7f7fffff
int32_t rcx_1 = 0
float result_12 = 3.40282347e+38f
result_9 = 0x7f7fffff
int32_t var_318 = 0
uint64_t r14_1 = zx.q(result_5.b)
char var_347 = 0
char var_348 = result_5.b
float result_13
float var_320
float result_16
int64_t result_37

if (result_5.b == 0)
    while (true)
        int32_t rax_7 = rcx_1
        rcx_1 += 1
        var_318 = rcx_1
        
        if (rax_7 s>= 0x20)
            result_20 = result_23
            result = zx.d(arg9)
        else
            result_19 = 0x3f000000
            void* rcx_2 = var_258
            result_7 = zx.o(0)
            result_6[0] = result_6[0] * result_6[0]
            result_30.d = result_32.d f* result_32[0]
            result_29 = result_21
            result_29[0] = result_29[0] f* result_21.d
            result_6[0] = result_6[0] + result_29[0]
            result_6[0] = result_6[0] f+ result_30.d
            result_7[0] = result_6[0]
            result_31 = 0x3f000000
            float temp0_10[0x4] = _mm_rsqrt_ss(result_7[0], result_7[0])
            result_7[0] = result_7[0] * 0.5f
            temp0_10[0] = temp0_10[0] * temp0_10[0]
            result_30.d = result_7.d f* temp0_10[0]
            result_31[0] = 0.5f f- result_30.d
            temp0_10[0] = temp0_10[0] * result_31[0]
            temp0_10[0] = temp0_10[0] + temp0_10[0]
            result_30.d = temp0_10.d f* temp0_10[0]
            result_7[0] = result_7[0] f* result_30.d
            result_19[0] = 0.5f - result_7[0]
            temp0_10[0] = temp0_10[0] * result_19[0]
            temp0_10[0] = temp0_10[0] + temp0_10[0]
            result_6[0] = result_6[0] * temp0_10[0]
            temp0_10[0] = temp0_10[0] f* result_21.d
            result_32[0] = result_32[0] * temp0_10[0]
            float result_26 = temp0_10[0]
            float result_25 = temp0_10[0]
            float result_27 = result_6[0]
            float result_38 = result_32[0]
            float var_2ac_1 = result_6[0]
            float var_2a8_1 = result_32[0]
            float var_2e4_1 = temp0_10[0]
            sub_141758e70(rcx_2, &result_16, &result_25, result_10)
            result_20 = result_33
            result_30 = result_45
            void* rax_8 = *(arg2 + 0x10)
            result_9 = result_16
            int32_t result_24
            result_21 = result_24
            int32_t result_35
            float var_2c8 = result_35[0]
            result_18 = *(rax_8 + 0x14)
            result_8 = *(rax_8 + 0x18)
            result_31 = *(rax_8 + 0x10)
            result_18[0] = result_18[0] f* *(arg2 + 0x2c)
            result_8[0] = result_8[0] f* *(arg2 + 0x30)
            result_31[0] = result_31[0] f* *(arg2 + 0x28)
            result_18[0] = result_18[0] f* result_30.d
            result_32 = result_31
            result_32[0] = result_32[0] f* result_30.d
            result_30 = result_43
            result_18[0] = result_18[0] f* result_30.d
            result_8[0] = result_8[0] f* result_20.d
            result_8[0] = result_8[0] - result_18[0]
            result_8[0] = result_8[0] f* result_30.d
            result_32[0] = result_32[0] - result_8[0]
            result_31[0] = result_31[0] f* result_20.d
            result_8[0] = result_8[0] + result_8[0]
            result_18[0] = result_18[0] - result_31[0]
            result_32[0] = result_32[0] + result_32[0]
            result_18[0] = result_18[0] + result_18[0]
            result_18[0] = result_18[0] f* result_20.d
            result_32[0] = result_32[0] * result_45[0]
            result_30.d = result_8.d f* temp0_4[0]
            (&var_18c)[sx.q(r13.d)] = r13.d
            result_20.d = result_8.d f* result_45[0]
            result_18[0] = result_18[0] - result_32[0]
            r13 = sx.q(var_190)
            result_8[0] = result_8[0] * result_33[0]
            result_30.d = result_30.d f+ result_31[0]
            result_18[0] = result_18[0] * result_43[0]
            uint64_t rcx_5 = r13 * 3
            result_18[0] = result_18[0] f+ result_30.d
            result_32[0] = result_32[0] * result_43[0]
            result_31 = result_23
            result_20.d = result_20.d f- result_18[0]
            result_18[0] = result_18[0] * temp0_4[0]
            result_32[0] = result_32[0] - result_8[0]
            result_19 = result_27
            result_30.d = result_32.d f* temp0_4[0]
            result_29 = result_35
            result_18[0] = result_18[0] + result_8[0]
            result_8 = result_15
            result_30.d = result_30.d f+ result_18[0]
            result_32[0] = result_32[0] + result_18[0]
            result_7 = result_21
            result_20.d = result_20.d f+ result_30.d
            result_30.d = result_9.d f- result_18[0]
            result_29[0] = result_29[0] - result_32[0]
            float var_1e0_1 = result_32[0]
            result_32 = result_38
            result_7[0] = result_7[0] f- result_20.d
            result_22[0] = result_22[0] f- result_30.d
            int32_t var_284_1 = result_30.d
            float var_2e4_2 = result_29[0]
            result_31[0] = result_31[0] - result_7[0]
            float var_280_1 = result_7[0]
            result_13 = result_22[0]
            result_8[0] = result_8[0] - result_29[0]
            float temp0_11[0x4] = _mm_unpacklo_ps(result_9, result_21.q)
            result_21 = result_26
            *(&result_40 + (rcx_5 << 2)) = temp0_11.q
            result_22[0] = result_22[0] f* result_21.d
            (&result_41)[rcx_5] = var_2c8
            float var_324_1 = result_31[0]
            result_31[0] = result_31[0] * result_19[0]
            var_320 = result_8[0]
            result_8[0] = result_8[0] * result_32[0]
            result_22[0] = result_22[0] + result_31[0]
            *(&result_17 + (rcx_5 << 2)) = (_mm_unpacklo_ps(result_18, result_20.q)).q
            (&result_3)[rcx_5] = var_1e0_1
            result_22[0] = result_22[0] + result_8[0]
            int128_t var_158_1
            float result_39
            
            if (result_22[0] f<= result_44[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_5 << 2)) = result_13.q
                *(&var_168:8 + (rcx_5 << 2)) = var_320
                var_190 = r13.d
            label_14167c378:
                result_9 = result_12
                result_20 = result_23
                
                if (r14_1.b != 0 && not(result_22[0] < result_10[0]))
                    result_22[0] = result_22[0] * result_22[0]
                    result_22[0] = result_22[0] + 9.99999997e-07f
                    result_5.b = result_22[0] f>= result_9.d
            else
                result_20 = (*rsi)[1]
                result_7 = *rsi
                result_29 = result_20
                result_6 = (*rsi)[2]
                result_7[0] = result_7[0] f* result_21.d
                result_29[0] = result_29[0] * result_19[0]
                result_30.d = result_6.d f* result_32[0]
                result_7[0] = result_7[0] + result_29[0]
                result_7[0] = result_7[0] f+ result_30.d
                
                if (result_7[0] >= result_10[0])
                    result.b = 0
                    goto label_14167ce11
                
                result_22[0] = result_22[0] f- result_44[0]
                result_22[0] = result_22[0] / result_7[0]
                zmm13[0] = zmm13[0] - result_22[0]
                
                if (zmm13[0] f<= zmm13.d)
                    goto label_14167c378
                
                if (zmm13[0] f> arg5)
                    result.b = 0
                    goto label_14167ce11
                
                result_30 = zx.o(var_2c0.q)
                result_22 = result_7
                result_29 = result_30
                result_9 = 0x7f7fffff
                result_8 = result_6
                float temp0_13[0x4] = _mm_shuffle_ps(result_29, result_29, 0x55)
                r13 = zx.q(r13.d + 1)
                result_37 = result_30.q
                result_22[0] = result_22[0] * zmm13[0]
                result_1 = result_2
                result_20.d = result_20.d f* zmm13[0]
                var_190 = r13.d
                result_22[0] = result_22[0] f+ var_338[0].d
                result_8[0] = result_8[0] * zmm13[0]
                var_348 = 0
                result_20.d = result_20.d f+ var_338[0]:4.d
                var_2f8.d = result_21.d
                result_8[0] = result_8[0] f+ var_338[1].d
                var_2c0 = result_22[0]
                result_22[0] = result_22[0] f- result_30.d
                var_2f8:4.d = result_19[0]
                result_30 = var_168:4.d
                result_18 = result_20
                result_18[0] = result_18[0] - temp0_13[0]
                result_23 = result_20.d
                result_29 = var_168.d
                result_8[0] = result_8[0] - result_1
                result_29[0] = result_29[0] + result_22[0]
                result_15 = result_8[0]
                int32_t var_2bc_1 = result_20.d
                result_30.d = result_30.d f+ result_18[0]
                result_2 = result_8[0]
                var_2f0 = result_32[0]
                result_12 = 3.40282347e+38f
                var_168.d = result_29[0]
                result_29 = var_168:8.d
                result_29[0] = result_29[0] + result_8[0]
                var_168:4.d = result_30.d
                result_30.d = var_168:0xc.d.d f+ result_22[0]
                var_168:8.d = result_29[0]
                result_29 = var_158_1.d
                var_168:0xc.d = result_30.d
                result_29[0] = result_29[0] + result_18[0]
                result_30.d = var_158_1:4.d.d f+ result_8[0]
                var_158_1.d = result_29[0]
                result_29 = var_158_1:8.d
                var_158_1:4.d = result_30.d
                result_29[0] = result_29[0] + result_22[0]
                result_30.d = var_158_1:0xc.d.d f+ result_18[0]
                var_158_1:8.d = result_29[0]
                result_29 = result_39
                result_29[0] = result_29[0] + result_8[0]
                var_158_1:0xc.d = result_30.d
                result_31 = result_20
                result_30.d = result_22.d f- var_284_1
                result_31[0] = result_31[0] - var_280_1
                result_39 = result_29[0]
                result_8[0] = result_8[0] - var_2e4_2
                *(&var_168 + (rcx_5 << 2)) = (_mm_unpacklo_ps(result_30, result_31[0].q)).q
                *(&var_168:8 + (rcx_5 << 2)) = result_8[0]
            
            uint32_t rdx_7
            
            if (result_5.b != 0)
                int64_t* rax_21
                rax_21, result_20, result_8, result_9, result_10, zmm13, result_44, result_22 =
                    sub_1416f4530(&var_248, &var_168, &var_190, &var_178, &result_40, &result_17)
                r13 = zx.q(var_190)
                rdx_7 = zx.d(var_347)
                result_30 = zx.o(*rax_21)
                result_29 = result_30
                result_32 = rax_21[1].d
                result = zx.d(arg9)
                float result_11[0x4] = _mm_shuffle_ps(result_29, result_29, 0x55)
                result_25.q = result_30.q
                result_6 = result_11
                result_21 = result_25
            else
                int32_t rcx_6 = r13.d
                int32_t result_42
                
                if (rcx_6 == 1)
                    int64_t rax_17 = sx.q(var_18c)
                    int64_t rcx_13 = rax_17 * 3
                    *(&var_178 + (rax_17 << 2)) = 0x3f800000
                    result_29 = zx.o(*(&var_168 + (rcx_13 << 2)))
                    result_42 = *(&var_168:8 + (rcx_13 << 2))
                else if (rcx_6 == 2)
                    void var_1a0
                    uint64_t* rax_16
                    rax_16, result_20, result_8 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_29 = zx.o(*rax_16)
                    result_42 = rax_16[1].d
                else if (rcx_6 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_15
                    rax_15, result_20, result_8, result_9, result_10, zmm13, result_44, result_22 =
                        sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_29 = zx.o(*rax_15)
                    result_42 = rax_15[1].d
                else if (rcx_6 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_14
                    rax_14, result_20, result_8, result_9, result_10, zmm13, result_44, result_22 =
                        sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_29 = zx.o(*rax_14)
                    result_42 = rax_14[1].d
                else
                    int32_t var_308_1 = 0
                    result_29 = _mm_unpacklo_ps(result_10, result_10[0].q)
                    result_42 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_4 = sx.q(var_188:4.d)
                int64_t result_34 = result_29.q
                int64_t rbx_1 = rdi * 3
                int64_t r15_1 = r11_1 * 3
                r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t r8_5 = *(&var_168:8 + (r15_1 << 2))
                result_21 = result_34.d
                result_6 = result_34:4.d
                result_32 = result_42
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_39:4.q = *(&var_168 + (rbx_1 << 2))
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                int32_t result_47 = (&result_41)[r15_1]
                var_178[1].d = (*(&var_178 + (r9_4 << 2)))[0]
                var_178[0].d = (*(&var_178 + (r11_1 << 2)))[0]
                var_178[0]:4.d = (*(&var_178 + (r10_1 << 2))).d
                var_178[1]:4.d = (*(&var_178 + (rdi << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_6 = (&result_41)[r14_1]
                result_39 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rcx_15 = (&result_41)[rsi_1]
                result_39 = *(&var_168:8 + (rbx_1 << 2))
                int32_t rax_19 = (&result_41)[rbx_1]
                var_12c_1.q = *(&result_40 + (r14_1 << 2))
                result_31 = zx.o(*(&result_17 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_40 + (rbx_1 << 2))
                result_29 = zx.o(*(&result_17 + (rbx_1 << 2)))
                var_12c_1:0xc.q = *(&result_40 + (rsi_1 << 2))
                result_30 = zx.o(*(&result_17 + (rsi_1 << 2)))
                result_40 = *(&result_40 + (r15_1 << 2))
                result_7 = zx.o(*(&result_17 + (r15_1 << 2)))
                result_41 = result_47
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_6
                rdx_7 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_15
                int32_t rcx_16 = (&result_3)[rsi_1]
                int32_t var_10c_1 = rax_19
                int32_t rax_20 = (&result_3)[rbx_1]
                var_fc_1.q = result_31.q
                int128_t var_ec_1
                var_ec_1:8.q = result_29.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_5
                result_6[0] = result_6[0] * result_6[0]
                result_29 = result_21
                result_3 = result_5
                var_fc_1:0xc.q = result_30.q
                result_29[0] = result_29[0] f* result_21.d
                var_fc_1:8.d = rdx_7
                result_30.d = result_32.d f* result_32[0]
                var_ec_1:4.d = rcx_16
                result_6[0] = result_6[0] + result_29[0]
                result_17 = result_7.q
                result_7 = result_14
                int32_t var_dc_1 = rax_20
                result_6[0] = result_6[0] f+ result_30.d
                result = zx.d(arg9)
                result_5.b = result_7[0] > result_6[0]
                bool cond:4_1 = result_6[0] f>= result_9.d
                result_12 = result_6[0]
                result_9 = result_6
                rdx_7.b = cond:4_1
                var_347 = rdx_7.b
                
                if (result.b == 0)
                    goto label_14167c7c5
                
                if (result_5.b == 0)
                    goto label_14167c7ca
                
                if (not(zmm13[0] != result_10[0]))
                    result_30 = 0x3eb0c6f7a0b5ed8d
                    result_29 = _mm_cvtps_pd(result_6[0].q)
                    
                    if (not(result_29[0].q f<= result_30.q))
                        result_29 = _mm_cvtps_pd(result_7[0].q)
                        
                        if (not(result_29[0].q f<= result_30.q) && r13.d s< 4)
                            r14_1.b = 1
                            result_5.b = 0
                            var_348 = 1
                            goto label_14167c7d0
            
        label_14167c7c5:
            
            if (result_5.b != 0)
                rcx_1 = var_318
            else
            label_14167c7ca:
                r14_1 = zx.q(var_348)
            label_14167c7d0:
                rcx_1 = var_318
                
                if (rdx_7.b == 0)
                    rsi = arg4
                    continue
        
        result_30 = 0x7f7fffff
        break

bool cond:1_1 = zmm13[0] <= result_10[0]
float* rdi_1 = arg6
*rdi_1 = zmm13[0]

if (not(cond:1_1))
    *arg8 = var_2f8
    *(arg8 + 8) = var_2f0
    
    if (r13.d s> 0)
        int128_t* rcx_18 = &var_178
        uint64_t i_4 = zx.q(r13.d)
        float* rax_24 = &result_3
        uint64_t i
        
        do
            result_31 = *rcx_18
            rcx_18 += 4
            result_31[0] = result_31[0] * rax_24[-2]
            result_30.d = result_31.d f* rax_24[-1]
            result_31[0] = result_31[0] * *rax_24
            rax_24 = &rax_24[3]
            result_10[0] = result_10[0] + result_31[0]
            result_10[0] = result_10[0] f+ result_30.d
            result_10[0] = result_10[0] + result_31[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_29 = result_44
    result_29[0] = result_29[0] f* *arg8
    result_30.d = zmm13.d f* *arg4
    result_10[0] = result_10[0] - result_29[0]
    result_29 = result_44
    result_29[0] = result_29[0] f* *(arg8 + 4)
    result_30.d = result_30.d f+ var_338[0].d
    result_44[0] = result_44[0] f* *(arg8 + 8)
    result_10[0] = result_10[0] - result_29[0]
    result_10[0] = result_10[0] f+ result_30.d
    result_30.d = zmm13.d f* (*arg4)[1]
    result_10[0] = result_10[0] f- result_44[0]
    zmm13[0] = zmm13[0] * (*arg4)[2]
    result_30.d = result_30.d f+ var_338[0]:4.d
    zmm13[0] = zmm13[0] f+ var_338[1].d
    result_10[0] = result_10[0] f+ result_30.d
    result_10[0] = result_10[0] + zmm13[0]
    *arg7 = (_mm_unpacklo_ps(result_10, result_10[0].q)).q
    arg7[1].d = result_10[0]
else if (result.b != 0)
    if (not(result_44[0] f<= result_10[0]))
        result_29 = _mm_cvtps_pd(result_9.q)
    
    if (result_44[0] f<= result_10[0] || result_29[0].q f<= 9.9999999999999995e-07
            || result_9.d f>= result_30.d)
        var_178[0] = 0
        var_178[1] = 0
        var_338[0] = 0
        var_338[1] = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_338[1]:4.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        float rax_36
        float result_48[0x4]
        
        if (var_318 == 0)
            int32_t var_308_5 = 0x3f800000
            rax_36 = 1f
            result_48 = _mm_unpacklo_ps(result_10, result_10[0].q)
        label_14167cdad:
            result_31 = result_40:4.d
            result_30 = result_40.d
            *rdi_1 = (result_44 ^ data_142d3f780)[0]
            *arg8 = result_48.q
            result_48 = result_41
            *(arg8 + 8) = rax_36
            result_30 = _mm_unpacklo_ps(result_30, result_31[0].q)
            result = result_48[0]
            *arg7 = result_30.q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(var_178[1].d)
                    int32_t rax_29 = (rdi_2 + 1).d
                    var_178[1].d = rax_29
                    
                    if (rax_29 s> var_178[1]:4.d)
                        sub_14083a7e0(&var_178)
                    
                    double rcx_22 = var_178[0]
                    int64_t rdx_10 = rdi_2 * 3
                    int32_t rax_30 = *(&result_41 + r12)
                    result_30.d = result_20.d f+ *(&result_17:4 + r12)
                    *(rcx_22 i+ (rdx_10 << 2)) = *(&result_40 + r12)
                    result_22[0] = result_22[0] f+ *(&result_17 + r12)
                    *(rcx_22 i+ (rdx_10 << 2) + 8) = rax_30
                    int64_t rdi_3 = sx.q(var_338[1].d)
                    int32_t var_324_2 = result_30.d
                    result_13 = result_22[0]
                    result_8[0] = result_8[0] f+ *(&result_3 + r12)
                    int32_t rax_31 = (rdi_3 + 1).d
                    var_338[1].d = rax_31
                    var_320 = result_8[0]
                    
                    if (rax_31 s> var_338[1]:4.d)
                        sub_14083a7e0(&var_338)
                    
                    double rcx_24 = var_338[0]
                    int64_t rdx_12 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_24 i+ (rdx_12 << 2)) = result_13.q
                    *(rcx_24 i+ (rdx_12 << 2) + 8) = var_320
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_35
            rax_35, result_44 = sub_14155d690(&var_178, &var_338, &var_258, &var_190, &result_14, 
                &result_13, &result_37, &var_248)
            result_48 = zx.o(result_13.q)
            rax_36 = var_320
            
            if (rax_35 == 2)
                goto label_14167cdad
            
            *arg8 = result_48.q
            result_48 = result_14 ^ data_142d3f780
            *(arg8 + 8) = rax_36
            result_48[0] = result_48[0] f- result_44[0]
            result = result_1
            *rdi_1 = result_48[0]
            *arg7 = result_37
        double rcx_26 = var_338[0]
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        double rcx_27 = var_178[0]
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    else
        result_7 = result_10
        result_18 = result_10
        *arg8 = var_2f8
        result_19 = result_10
        *(arg8 + 8) = var_2f0
        result_21 = result_10
        result_9 = result_10
        result_6 = result_10
        
        if (rcx_1 == 0)
            result_30 = zx.o(result_40)
            result_31 = zx.o(result_17)
            result_29 = result_30
            int32_t result_28 = result_41
            result_18 = _mm_shuffle_ps(result_29, result_29, 0x55)
            float result_4 = result_3
            result_19 = result_28
            result_9 = _mm_shuffle_ps(result_31, result_31, 0x55)
            result_6 = result_4
            result_13.q = result_30.q
            result_7 = result_13
            result_16.q = result_31.q
            result_21 = result_16
        else if (r13.d s> 0)
            int128_t* rax_27 = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_31 = *rax_27
                rax_27 += 4
                result_31[0] = result_31[0] f* *(&result_40 + r12)
                result_30.d = result_31.d f* *(&result_40:4 + r12)
                result_7[0] = result_7[0] + result_31[0]
                result_31[0] = result_31[0] f* *(&result_41 + r12)
                result_18[0] = result_18[0] f+ result_30.d
                result_30.d = result_31.d f* *(&result_17 + r12)
                result_19[0] = result_19[0] + result_31[0]
                result_31[0] = result_31[0] f* *(&result_17:4 + r12)
                result_31[0] = result_31[0] f* *(&result_3 + r12)
                result_21.d = result_21.d f+ result_30.d
                r12 += 0xc
                result_9.d = result_9.d f+ result_31[0]
                result_6[0] = result_6[0] + result_31[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_32 = result_21
        result_22 = var_338[0]:4.d
        result_20.d = var_338[1].d.d f+ result_6[0]
        zmm13 = var_338[0].d
        result_22[0] = result_22[0] f+ result_9.d
        result_32[0] = result_32[0] + zmm13[0]
        result_20.d = result_20.d f- result_19[0]
        result_19 = 0x3f000000
        result_22[0] = result_22[0] - result_18[0]
        result_32[0] = result_32[0] - result_7[0]
        result_30.d = result_20.d f* result_20.d
        result_32[0] = result_32[0] * result_32[0]
        result_22[0] = result_22[0] * result_22[0]
        result_22[0] = result_22[0] + result_32[0]
        result_22[0] = result_22[0] f+ result_30.d
        float temp0_22[0x4] = _mm_rsqrt_ss(result_22[0], result_22[0])
        result_31 = 0x3f000000
        result_22[0] = result_22[0] * 0.5f
        temp0_22[0] = temp0_22[0] * temp0_22[0]
        result_30.d = result_22.d f* temp0_22[0]
        result_31[0] = 0.5f f- result_30.d
        temp0_22[0] = temp0_22[0] * result_31[0]
        temp0_22[0] = temp0_22[0] + temp0_22[0]
        result_30.d = temp0_22.d f* temp0_22[0]
        result_22[0] = result_22[0] f* result_30.d
        result_19[0] = 0.5f - result_22[0]
        temp0_22[0] = temp0_22[0] * result_19[0]
        temp0_22[0] = temp0_22[0] + temp0_22[0]
        result_30.d = temp0_22.d f* result_22[0]
        temp0_22[0] = temp0_22[0] * result_32[0]
        temp0_22[0] = temp0_22[0] f* result_20.d
        float temp0_23[0x4] = _mm_unpacklo_ps(temp0_22, result_30.q)
        *arg8 = temp0_23.q
        result_30.d = result_44.d f- __sqrtss_xmmss_memss(temp0_23[0], result_12)[0]
        *(arg8 + 8) = temp0_22[0]
        
        if (not(result_30.d f< result_10[0]))
            result_10 = __minss_xmmss_memss(result_30[0], 0x7f7fffff)
        
        result_30 = *arg8
        result_31 = *(arg8 + 4)
        result_29 = result_30
        result_7 = *(arg8 + 8)
        result_29[0] = result_29[0] f* result_44[0]
        result_30.d = result_30.d f* result_10[0]
        result_21.d = result_21.d f- result_29[0]
        result_31[0] = result_31[0] f* result_44[0]
        result_31[0] = result_31[0] * result_10[0]
        result_9.d = result_9.d f- result_31[0]
        result_7[0] = result_7[0] f* result_44[0]
        result_21.d = result_21.d f+ zmm13[0]
        result_7[0] = result_7[0] * result_10[0]
        result_10 ^= data_142d3f780
        result_6[0] = result_6[0] - result_7[0]
        result_9.d = result_9.d f+ result_22[0]
        result_21.d = result_21.d f+ result_30.d
        result_6[0] = result_6[0] f+ var_338[1].d
        result_9.d = result_9.d f+ result_31[0]
        result_6[0] = result_6[0] + result_7[0]
        *arg7 = (_mm_unpacklo_ps(result_21, result_9.q)).q
        arg7[1].d = result_6[0]
        *rdi_1 = result_10[0]

result.b = 1
label_14167ce11:
__security_check_cookie(rax_1 ^ &var_388)
return result

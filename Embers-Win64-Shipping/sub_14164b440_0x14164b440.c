// 函数: sub_14164b440
// 地址: 0x14164b440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t r12 = 0
uint32_t result_11[0x4] = zx.o(0)
float (* r10)[0x4] = arg4
void* r15 = arg2
int32_t r9 = 0
uint32_t zmm0[0x4] = *(*(arg1 + 0x10) + 0x2c)
int32_t var_2f0 = 0
uint32_t zmm15[0x4]

if (zmm0[0] f== 0f)
    zmm15 = zx.o(0)
else
    zmm15 = _mm_and_ps(*(arg1 + 0x28), 0x7fffffff)
    zmm15[0] = zmm15[0] f* zmm0[0]

void* r11 = *(arg2 + 0x10)
zmm0 = *(r11 + 0x1c)
uint32_t result_25[0x4]

if (zmm0[0] f== 0f)
    result_25 = zx.o(0)
else
    result_25 = _mm_and_ps(*(arg2 + 0x28), 0x7fffffff)
    result_25[0] = result_25[0] f* zmm0[0]

float result_12[0x4] = *arg3
uint32_t var_358[0x4] = arg3[1]
uint32_t result_24[0x4] = result_25
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
zmm0 = data_142d3f7e0
result_24[0] = result_24[0] f+ zmm15[0]
uint32_t var_178[0x4] = zmm0
int64_t var_278 = arg1
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
uint32_t result_14 = result_25[0]
result_24[0] = result_24[0] f* result_24[0]
float zmm2[0x4] = result_12 ^ 0x80000000
uint32_t result_32 = result_24[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
double temp0_4[0x2] = _mm_cvtps_pd(result_24[0].q)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
temp0_4[0] = temp0_4[0] + 9.9999999999999995e-07
uint64_t r13 = zx.q(var_190)
float result_43[0x4] = _mm_shuffle_ps(result_12, result_12, 0x55)
double result_42[0x2] = _mm_shuffle_ps(result_12, result_12, 0xaa)
float result_16[0x4] = result_12
uint32_t result_15 = _mm_cvtpd_ps(temp0_4)[0]
temp0_3[0] = (result_43 ^ 0x80000000)[0]
float result_44[0x4] = _mm_shuffle_ps(result_12, result_12, 0xff)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_7[0] = (result_42 ^ 0x80000000)[0].d
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
temp0_8[0] = result_44[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
float var_258[0x4] = temp0_9
float var_1c8[0x4] = temp0_9
int64_t result_33
float result_22[0x4] = sub_14170aa90(&var_278, &result_33, arg10)
uint32_t result_21[0x4] = *(r11 + 0x14)
uint32_t result_6[0x4] = *(r11 + 0x18)
uint32_t result_18[0x4] = zx.o(result_33)
float result_8[0x4] = *(r11 + 0x10)
result_21[0] = result_21[0] f* *(r15 + 0x2c)
result_6[0] = result_6[0] f* *(r15 + 0x30)
int32_t result_34
int32_t result_46 = result_34
result_8[0] = result_8[0] f* *(r15 + 0x28)
int64_t result_39 = result_18.q
result_6[0] = result_6[0] f* result_43[0]
result_21[0] = result_21[0] f* result_22[0]
float result_10[0x4] = result_8
result_6[0] = result_6[0] f- result_21[0]
result_6[0] = result_6[0] f+ result_6[0]
uint128_t result_19 = result_44[0]
result_6[0] = result_6[0] f* result_12[0]
int64_t var_308 = 0
result_10[0] = result_10[0] * result_22[0]
uint32_t var_300 = 0x3f800000
result_19.d = result_19.d f* result_6[0]
result_10[0] = result_10[0] f- result_6[0]
result_21[0] = result_21[0] f* result_12[0]
result_19.d = result_19.d f+ result_8[0]
result_18 = result_8
result_18[0] = result_18[0] f* result_43[0]
result_8 = result_12
result_10[0] = result_10[0] + result_10[0]
result_21[0] = result_21[0] f- result_18[0]
result_18 = result_42
result_42[0].d = result_42[0].d f* result_6[0]
result_18[0] = result_18[0] f* result_10[0]
result_8[0] = result_8[0] * result_10[0]
result_21[0] = result_21[0] f+ result_21[0]
result_43[0] = result_43[0] f* result_21[0]
result_43[0] = result_43[0] f- result_18[0]
result_18 = result_12
result_18[0] = result_18[0] f* result_21[0]
result_12 = zx.o(0)
result_42[0].d = result_42[0].d f- result_18[0]
result_18 = result_43
result_43[0] = result_43[0] f+ result_19.d
result_18[0] = result_18[0] f* result_6[0]
result_19.d = result_44[0].d f* result_10[0]
result_10 = var_358[2]
result_8[0] = result_8[0] f- result_18[0]
float result_7 = result_10[0]
result_19.d = result_19.d f+ result_21[0]
float result_2 = result_10[0]
result_42[0].d = result_42[0].d f+ result_19.d
result_19.d = result_44[0].d f* result_21[0]
uint32_t result_9[0x4] = var_358[1]
uint32_t result_31 = result_9[0]
uint32_t result_23[0x4] = result_9
result_18 = _mm_unpacklo_ps(result_43, result_42[0])
result_19.d = result_19.d f+ result_6[0]
int64_t result_17 = result_18.q
result_6 = result_10
result_18 = result_33.d
result_18[0] = result_18[0] f- result_43[0]
uint32_t var_2a4 = result_9[0]
result_22 = result_10
result_8[0] = result_8[0] f+ result_19.d
result_19 = var_358[0]
float result_26[0x4] = result_19
uint32_t result_13 = result_19.d
uint32_t var_2a8 = result_19.d
result_21 = result_19
result_26[0] = result_26[0] f- result_18[0]
result_18 = result_33:4.d
result_18[0] = result_18[0] f- result_42[0].d
double result_20[0x2] = result_9
float result_1 = result_8[0]
float result_3 = result_1
float result = zx.d(arg9)
result_20[0].d = result_20[0].d f- result_18[0]
result_18 = result_34
result_18[0] = result_18[0] f- result_8[0]
result_8 = result_20
result_22[0] = result_22[0] f- result_18[0]
result_8[0] = result_8[0] f* result_20[0].d
result_18 = result_26
result_18[0] = result_18[0] f* result_26[0]
result_19.d = result_22.d f* result_22[0]
result_8[0] = result_8[0] f+ result_18[0]
result_8[0] = result_8[0] f+ result_19.d
float result_5

if (result_8[0] f>= result_15 || (result.b != 0 && result_8[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_8 = 0x7f7fffff
int64_t rsi
rsi.b = 0
float result_27 = 3.40282347e+38f
int32_t rcx_1 = 0
char var_368 = result_5.b
uint32_t r8_1 = zx.d(result_5.b)
int32_t var_344 = 0
result_19 = 0x7f7fffff
uint32_t var_340
uint32_t var_338
float var_330
int64_t result_35
uint32_t result_36

if (result_5.b == 0)
    while (true)
        int32_t rax_6 = rcx_1
        rcx_1 += 1
        var_344 = rcx_1
        
        if (rax_6 s>= 0x20)
            result_21 = result_13
            result_6 = result_7
            result_19 = result_27
            result = zx.d(arg9)
        else
            result_10 = 0x3f000000
            int64_t rax_7 = var_278
            result_18 = result_20
            result_26[0] = result_26[0] * result_26[0]
            result_18[0] = result_18[0] f* result_20[0].d
            void* rcx_2 = *(rax_7 + 0x10)
            result_23 = *(rax_7 + 0x28)
            result_21 = *(rax_7 + 0x30)
            result_26[0] = result_26[0] f+ result_18[0]
            result_19.d = result_22.d f* result_22[0]
            result_26[0] = result_26[0] f+ result_19.d
            result_9 = result_26
            result_25 = _mm_rsqrt_ss(result_26[0], result_9[0])
            result_8 = 0x3f000000
            result_9[0] = result_9[0] f* 0.5f
            result_25[0] = result_25[0] f* result_25[0]
            result_19.d = result_9.d f* result_25[0]
            result_8[0] = 0.5f f- result_19.d
            result_25[0] = result_25[0] f* result_8[0]
            result_8 = result_23
            result_25[0] = result_25[0] f+ result_25[0]
            result_19.d = result_25.d f* result_25[0]
            result_9[0] = result_9[0] f* result_19.d
            result_10[0] = 0.5f f- result_9[0]
            result_9 = *(rcx_2 + 0x20)
            result_25[0] = result_25[0] f* result_10[0]
            result_10 = *(rcx_2 + 0x1c)
            result_25[0] = result_25[0] f+ result_25[0]
            result_26[0] = result_26[0] f* result_25[0]
            result_19.d = result_25.d f* result_20[0].d
            result_20 = *(rcx_2 + 0x24)
            result_8[0] = result_8[0] * result_26[0]
            int32_t result_37 = result_19.d
            var_340 = result_25[0]
            result_25[0] = result_25[0] f* result_22[0]
            result_22 = *(rax_7 + 0x2c)
            result_8[0] = result_8[0] * result_10[0]
            result_18 = result_22
            result_18[0] = result_18[0] f* result_19.d
            result_19.d = result_21.d f* result_25[0]
            result_18[0] = result_18[0] f* result_9[0]
            result_19.d = result_19.d f* result_20[0].d
            result_8[0] = result_8[0] f+ result_18[0]
            result_8[0] = result_8[0] f+ result_19.d
            int32_t* rax_8
            int32_t r9_1
            
            if (result_8[0] f< result_11[0])
                r9_1 = r9 | 2
                int32_t var_218_1 = *(rcx_2 + 0x18)
                int64_t var_220
                rax_8 = &var_220
                var_220 = *(rcx_2 + 0x10)
            else
                result_8 = *(rcx_2 + 0x28)
                rax_8 = &result_36
                result_18 = result_8
                result_18[0] = result_18[0] f* result_10[0]
                r9_1 = r9 | 1
                result_19.d = result_8.d f* result_9[0]
                result_18[0] = result_18[0] f+ *(rcx_2 + 0x10)
                result_8[0] = result_8[0] f* result_20[0].d
                result_19.d = result_19.d f+ *(rcx_2 + 0x14)
                result_8[0] = result_8[0] f+ *(rcx_2 + 0x18)
                result_36 = result_18[0]
                int32_t var_2c4_1 = result_19.d
                float var_2c0_1 = result_8[0]
            
            result_19 = zx.o(*rax_8)
            int32_t rax_10 = rax_8[2]
            result_18 = result_19
            result_10 = *(r15 + 0x2c)
            result_24 = result_19
            result_19 = result_42
            int32_t rcx_4 = r9_1 & 0xfffffffd
            result_18 = _mm_shuffle_ps(result_18, result_18, 0x55)
            result_22[0] = result_22[0] f* result_18[0]
            result_21[0] = result_21[0] f* rax_10
            result_24[0] = result_24[0] f* result_23[0]
            
            if ((r9_1.b & 2) == 0)
                rcx_4 = r9_1
            
            int32_t rdx_2 = rcx_4 & 0xfffffffe
            float result_30 = result_22[0]
            result_22 = *(r15 + 0x30)
            void* rax_13 = *(r15 + 0x10)
            uint32_t result_29 = result_21[0]
            
            if ((rcx_4.b & 1) == 0)
                rdx_2 = rcx_4
            
            uint32_t var_2e0 = result_21[0]
            result_21 = result_43
            result_8 = *(rax_13 + 0x10)
            result_8[0] = result_8[0] f* *(r15 + 0x28)
            result_10[0] = result_10[0] f* *(rax_13 + 0x14)
            result_22[0] = result_22[0] f* *(rax_13 + 0x18)
            result_23 = result_8
            result_23[0] = result_23[0] f* result_19.d
            result_9 = result_10
            result_20 = result_22
            result_18 = result_10
            result_18[0] = result_18[0] f* result_19.d
            result_19 = result_16
            result_9[0] = result_9[0] f* result_19.d
            result_20[0].d = result_20[0].d f* result_21[0]
            result_20[0].d = result_20[0].d f- result_18[0]
            result_18 = result_22
            result_18[0] = result_18[0] f* result_19.d
            result_23[0] = result_23[0] f- result_18[0]
            result_18 = result_8
            result_18[0] = result_18[0] f* result_21[0]
            result_20[0].d = result_20[0].d f+ result_20[0].d
            result_9[0] = result_9[0] f- result_18[0]
            result_23[0] = result_23[0] f+ result_23[0]
            result_19.d = result_20.d f* result_44[0]
            result_9[0] = result_9[0] f+ result_9[0]
            result_19.d = result_19.d f+ result_8[0]
            result_23[0] = result_23[0] f* result_42[0].d
            result_6 = result_9
            result_6[0] = result_6[0] f* result_21[0]
            result_21 = result_20
            result_21[0] = result_21[0] f* result_42[0].d
            result_20[0].d = result_20[0].d f* result_43[0]
            result_6[0] = result_6[0] f- result_23[0]
            result_9[0] = result_9[0] f* result_16[0]
            result_6[0] = result_6[0] f+ result_19.d
            result_23[0] = result_23[0] f* result_16[0]
            result_8 = result_24
            result_21[0] = result_21[0] f- result_9[0]
            result_18 = result_44
            result_9[0] = result_9[0] f* result_18[0]
            result_23[0] = result_23[0] f- result_20[0].d
            result_19.d = result_23.d f* result_18[0]
            result_9[0] = result_9[0] f+ result_22[0]
            result_8[0] = result_8[0] f- result_6[0]
            result_19.d = result_19.d f+ result_10[0]
            result_23[0] = result_23[0] f+ result_9[0]
            var_340 = result_8[0]
            result_21[0] = result_21[0] f+ result_19.d
            uint32_t var_1e0_1 = result_23[0]
            result_19 = result_30
            result_18 = result_29
            result_20 = result_19
            result_9 = result_13
            result_18[0] = result_18[0] f- result_23[0]
            result_23 = result_31
            result_9[0] = result_9[0] f- result_8[0]
            result_8 = result_7
            result_20[0].d = result_20[0].d f- result_21[0]
            result_10 = result_23
            result_8[0] = result_8[0] f- result_18[0]
            uint32_t var_310_1 = result_18[0]
            result_18 = result_24
            var_338 = result_9[0]
            result_24 = result_32
            result_10[0] = result_10[0] f- result_20[0].d
            result_18 = _mm_unpacklo_ps(result_18, result_19.q)
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            float var_334_1 = result_10[0]
            int32_t var_30c_1 = result_20[0].d
            result_20 = result_37
            uint64_t rcx_6 = r13 * 3
            result_10[0] = result_10[0] f* result_20[0].d
            result_9[0] = result_9[0] f* result_26[0]
            *(&result_39 + (rcx_6 << 2)) = result_18.q
            *(&result_17 + (rcx_6 << 2)) = (_mm_unpacklo_ps(result_6, result_21[0].q)).q
            result_10[0] = result_10[0] f+ result_9[0]
            (&result_46)[rcx_6] = var_2e0
            result_25[0] = result_25[0] f* result_8[0]
            (&result_3)[rcx_6] = var_1e0_1
            var_330 = result_8[0]
            result_10[0] = result_10[0] f+ result_25[0]
            int128_t var_158_1
            uint32_t result_38
            
            if (result_10[0] f<= result_24[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_6 << 2)) = var_338.q
                *(&var_168:8 + (rcx_6 << 2)) = var_330
                var_190 = r13.d
            label_14164be59:
                result_25 = result_27
                result_21 = result_13
                result_6 = result_7
                
                if (r8_1.b != 0 && not(result_10[0] f< result_11[0]))
                    result_10[0] = result_10[0] * result_10[0]
                    result_10[0] = result_10[0] + 9.99999997e-07f
                    result_5.b = result_10[0] f>= result_25[0]
            else
                result_9 = (*r10)[1]
                result_22 = *r10
                result_18 = result_20
                result_26[0] = result_26[0] * result_22[0]
                result_19.d = result_25.d f* (*r10)[2]
                result_18[0] = result_18[0] f* result_9[0]
                result_26[0] = result_26[0] f+ result_18[0]
                result_26[0] = result_26[0] f+ result_19.d
                
                if (result_26[0] f>= result_11[0])
                    result.b = 0
                    goto label_14164c949
                
                result_18 = result_10
                result_18[0] = result_18[0] f- result_24[0]
                result_18[0] = result_18[0] f/ result_26[0]
                result_12[0] = result_12[0] f- result_18[0]
                
                if (result_12[0] f<= result_12.d)
                    goto label_14164be59
                
                if (result_12[0] f> arg5)
                    result.b = 0
                    goto label_14164c949
                
                result_19 = zx.o(var_2a8.q)
                result_21 = result_12
                result_18 = result_19
                result_18 = _mm_shuffle_ps(result_18, result_18, 0x55)
                result_23 = result_12
                result_35 = result_19.q
                result_6 = result_12
                result_6[0] = result_6[0] f* (*r10)[2]
                r13 = zx.q(r13.d + 1)
                result_1 = result_2
                result_23[0] = result_23[0] f* result_9[0]
                var_190 = r13.d
                result_6[0] = result_6[0] f+ var_358[2]
                result_21[0] = result_21[0] f* result_22[0]
                var_368 = 0
                result_23[0] = result_23[0] f+ var_358[1]
                var_300 = result_25[0]
                result_21[0] = result_21[0] f+ var_358[0]
                result_25 = 0x7f7fffff
                result_8 = result_6
                result_8[0] = result_8[0] - result_1
                result_10 = result_23
                result_31 = result_23[0]
                result_10[0] = result_10[0] f- result_18[0]
                result_7 = result_6[0]
                result_18 = var_168.d
                result_21[0] = result_21[0] f- result_19.d
                result_13 = result_21[0]
                var_2a8 = result_21[0]
                result_19.d = var_168:4.d.d f+ result_10[0]
                uint32_t var_2a4_1 = result_23[0]
                result_2 = result_6[0]
                result_18[0] = result_18[0] f+ result_21[0]
                var_308.d = result_26[0]
                var_308:4.d = result_20[0].d
                result_27 = 3.40282347e+38f
                var_168:4.d = result_19.d
                var_168.d = result_18[0]
                result_19.d = var_168:0xc.d.d f+ result_21[0]
                result_18 = var_168:8.d
                result_18[0] = result_18[0] f+ result_8[0]
                var_168:0xc.d = result_19.d
                var_168:8.d = result_18[0]
                result_19.d = var_158_1:4.d.d f+ result_8[0]
                result_18 = var_158_1.d
                result_18[0] = result_18[0] f+ result_10[0]
                var_158_1:4.d = result_19.d
                result_19 = var_158_1:0xc.d
                var_158_1.d = result_18[0]
                result_19.d = result_19.d f+ result_10[0]
                result_18 = var_158_1:8.d
                result_18[0] = result_18[0] f+ result_21[0]
                var_158_1:0xc.d = result_19.d
                result_19.d = result_21.d f- var_340
                var_158_1:8.d = result_18[0]
                result_18 = result_38
                result_18[0] = result_18[0] f+ result_8[0]
                result_8 = result_23
                result_8[0] = result_8[0] f- var_30c_1
                result_38 = result_18[0]
                result_6[0] = result_6[0] f- var_310_1
                *(&var_168 + (rcx_6 << 2)) = (_mm_unpacklo_ps(result_19, result_8[0].q)).q
                *(&var_168:8 + (rcx_6 << 2)) = result_6[0]
            
            if (result_5.b != 0)
                int64_t* rax_25
                rax_25, result_21, result_23, result_6, result_24, result_11, result_12, zmm15 =
                    sub_1416f4530(&var_258, &var_168, &var_190, &var_178, &result_39, &result_17)
                r13 = zx.q(var_190)
                result_19 = zx.o(*rax_25)
                result_18 = result_19
                result_22 = rax_25[1].d
                result = zx.d(arg9)
                result_26 = result_19.d
                result_19 = result_27
                result_20 = _mm_shuffle_ps(result_18, result_18, 0x55)
            else
                int32_t rcx_7 = r13.d
                int32_t result_40
                
                if (rcx_7 == 1)
                    int64_t rax_22 = sx.q(var_18c)
                    int64_t rcx_14 = rax_22 * 3
                    var_178[rax_22] = 0x3f800000
                    result_18 = zx.o(*(&var_168 + (rcx_14 << 2)))
                    result_40 = *(&var_168:8 + (rcx_14 << 2))
                else if (rcx_7 == 2)
                    void var_1a0
                    uint64_t* rax_21
                    rax_21, result_21, result_23, result_6 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_18 = zx.o(*rax_21)
                    result_40 = rax_21[1].d
                else if (rcx_7 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_20
                    rax_20, result_21, result_23, result_6, result_24, result_11, result_25, 
                        result_12, zmm15 = sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_18 = zx.o(*rax_20)
                    result_40 = rax_20[1].d
                else if (rcx_7 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_19
                    rax_19, result_21, result_23, result_6, result_24, result_11, result_25, 
                        result_12, zmm15 = sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_18 = zx.o(*rax_19)
                    result_40 = rax_19[1].d
                else
                    int32_t var_320_1 = 0
                    result_18 = _mm_unpacklo_ps(result_11, result_11[0].q)
                    result_40 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_5 = sx.q(var_188:4.d)
                int64_t result_28 = result_18.q
                int64_t rbx_1 = rdi * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_5 * 3
                int32_t rdx_6 = *(&var_168:8 + (r14_1 << 2))
                uint32_t result_48 = *(&var_168:8 + (rsi << 2))
                r8_1 = *(&var_168:8 + (r15_1 << 2))
                result_26 = result_28.d
                result_20 = result_28:4.d
                int32_t result_47 = *(&var_168:8 + (rbx_1 << 2))
                result_22 = result_40
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_38:4.q = *(&var_168 + (rbx_1 << 2))
                result_18 = var_178[r11_1]
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                result_19 = var_178[r10_1]
                var_168.q = *(&var_168 + (r15_1 << 2))
                result_9 = var_178[rdi]
                int32_t result_50 = (&result_46)[r15_1]
                var_178[2] = var_178[r9_5][0]
                result_8 = zx.o(*(&result_39 + (r14_1 << 2)))
                var_178[0] = result_18[0]
                result_18 = zx.o(*(&result_39 + (rbx_1 << 2)))
                var_178[1] = result_19.d
                result_19 = zx.o(*(&result_39 + (rsi << 2)))
                var_178[3] = result_9[0]
                var_158_1:4.d = rdx_6
                int32_t rdx_7 = (&result_46)[r14_1]
                result_38 = result_48
                int32_t rcx_15 = (&result_46)[rsi]
                result_38 = result_47
                int32_t rax_23 = (&result_46)[rbx_1]
                var_12c_1.q = result_8.q
                result_8 = zx.o(*(&result_17 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = result_18.q
                result_18 = zx.o(*(&result_17 + (rbx_1 << 2)))
                var_12c_1:0xc.q = result_19.q
                result_19 = zx.o(*(&result_17 + (rsi << 2)))
                result_39 = *(&result_39 + (r15_1 << 2))
                result_9 = zx.o(*(&result_17 + (r15_1 << 2)))
                result_46 = result_50
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_7
                int32_t rdx_8 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_15
                int32_t rcx_16 = (&result_3)[rsi]
                int32_t var_10c_1 = rax_23
                int32_t rax_24 = (&result_3)[rbx_1]
                var_fc_1.q = result_8.q
                result_8 = result_20
                int128_t var_ec_1
                var_ec_1:8.q = result_18.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_1
                result_8[0] = result_8[0] f* result_20[0].d
                result_18 = result_26
                result_3 = result_5
                var_fc_1:0xc.q = result_19.q
                result_18[0] = result_18[0] f* result_26[0]
                var_fc_1:8.d = rdx_8
                result_19.d = result_22.d f* result_22[0]
                var_ec_1:4.d = rcx_16
                result_8[0] = result_8[0] f+ result_18[0]
                result_17 = result_9.q
                result_9 = result_15
                int32_t var_dc_1 = rax_24
                result_8[0] = result_8[0] f+ result_19.d
                result = zx.d(arg9)
                result_5.b = result_9[0] f> result_8[0]
                result_27 = result_8[0]
                result_19 = result_8
                rsi.b = result_8[0] f>= result_25[0]
                
                if (result.b != 0)
                    if (result_5.b == 0)
                        goto label_14164c2b2
                    
                    if (result_12[0] f!= result_11[0])
                    label_14164c2aa:
                        result_19 = result_8
                        goto label_14164c2ad
                    
                    result_19 = 0x3eb0c6f7a0b5ed8d
                    result_18 = _mm_cvtps_pd(result_8[0].q)
                    
                    if (result_18[0].q f<= result_19.q)
                        goto label_14164c2aa
                    
                    result_18 = _mm_cvtps_pd(result_9[0].q)
                    
                    if (result_18[0].q f<= result_19.q || r13.d s>= 4)
                        goto label_14164c2aa
                    
                    r8_1.b = 1
                    result_5.b = 0
                    var_368 = 1
                    goto label_14164c2b8
            
        label_14164c2ad:
            
            if (result_5.b != 0)
                rcx_1 = var_344
                r10 = arg4
            else
            label_14164c2b2:
                r8_1 = zx.d(var_368)
            label_14164c2b8:
                rcx_1 = var_344
                r10 = arg4
                
                if (rsi.b != 0)
                    result_19 = result_27
                else
                    r9 = rdx_2
                    r15 = arg2
                    continue
        
        result_25 = result_14
        result_8 = 0x7f7fffff
        break

bool cond:1_1 = result_12[0] f<= result_11[0]
uint32_t* rdi_1 = arg6
*rdi_1 = result_12[0]

if (not(cond:1_1))
    result_10 = result_11
    *arg8 = var_308
    *(arg8 + 8) = var_300
    
    if (r13.d s> 0)
        int128_t* rcx_18 = &var_178
        uint64_t i_4 = zx.q(r13.d)
        float* rax_28 = &result_3
        uint64_t i
        
        do
            result_8 = *rcx_18
            rcx_18 += 4
            result_18 = result_8
            result_18[0] = result_18[0] f* rax_28[-2]
            result_19.d = result_8.d f* rax_28[-1]
            result_8[0] = result_8[0] * *rax_28
            rax_28 = &rax_28[3]
            result_11[0] = result_11[0] f+ result_18[0]
            result_10[0] = result_10[0] f+ result_19.d
            result_11[0] = result_11[0] f+ result_8[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_25[0] = result_25[0] f* *arg8
    result_19.d = result_12.d f* *r10
    result_11[0] = result_11[0] f- result_25[0]
    result_25[0] = result_25[0] f* *(arg8 + 4)
    result_19.d = result_19.d f+ var_358[0]
    result_25[0] = result_25[0] f* *(arg8 + 8)
    result_10[0] = result_10[0] f- result_25[0]
    result_11[0] = result_11[0] f+ result_19.d
    result_19.d = result_12.d f* (*r10)[1]
    result_11[0] = result_11[0] f- result_25[0]
    result_12[0] = result_12[0] * (*r10)[2]
    result_19.d = result_19.d f+ var_358[1]
    result_12[0] = result_12[0] f+ var_358[2]
    result_10[0] = result_10[0] f+ result_19.d
    result_11[0] = result_11[0] f+ result_12[0]
    *arg7 = (_mm_unpacklo_ps(result_11, result_10[0].q)).q
    arg7[1].d = result_11[0]
else if (result.b != 0)
    if (not(result_24[0] f<= result_11[0]))
        result_18 = _mm_cvtps_pd(result_19.q)
    
    if (result_24[0] f<= result_11[0] || result_18[0].q f<= 9.9999999999999995e-07
            || result_19.d f>= result_8[0])
        var_178[0].q = 0
        var_178[2].q = 0
        var_358[0].q = 0
        var_358[2].q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_358[3] s< 8)
            sub_14083ad30(&var_358, 8)
        
        uint128_t result_49
        float rax_39
        
        if (var_344 == 0)
            int32_t var_320_5 = 0x3f800000
            rax_39 = 1f
            result_49 = _mm_unpacklo_ps(result_11, result_11[0].q)
        label_14164c8d0:
            *rdi_1 = (result_24 ^ data_142d3f780)[0]
            *arg8 = result_49.q
            *(arg8 + 8) = rax_39
            result_49.d = zmm15.d f* *arg8
            zmm15[0] = zmm15[0] f* *(arg8 + 8)
            result_19.d = zmm15.d f* *(arg8 + 4)
            zmm15[0] = zmm15[0] f+ result_46
            result_49.d = result_49.d f+ result_39.d
            result_19.d = result_19.d f+ result_39:4.d
            result = zmm15[0]
            result_49 = _mm_unpacklo_ps(result_49, result_19.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(var_178[2])
                    int32_t rax_32 = (rdi_2 + 1).d
                    var_178[2] = rax_32
                    
                    if (rax_32 s> var_178[3])
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_22 = var_178[0].q
                    int64_t rdx_11 = rdi_2 * 3
                    int32_t rax_33 = *(&result_46 + r12)
                    result_19.d = result_23.d f+ *(&result_17:4 + r12)
                    *(rcx_22 + (rdx_11 << 2)) = *(&result_39 + r12)
                    result_49.d = result_21.d f+ *(&result_17 + r12)
                    *(rcx_22 + (rdx_11 << 2) + 8) = rax_33
                    int64_t rdi_3 = sx.q(var_358[2])
                    int32_t var_334_2 = result_19.d
                    var_338 = result_49.d
                    result_49.d = result_6.d f+ *(&result_3 + r12)
                    int32_t rax_34 = (rdi_3 + 1).d
                    var_358[2] = rax_34
                    var_330 = result_49.d
                    
                    if (rax_34 s> var_358[3])
                        sub_14083a7e0(&var_358)
                    
                    int64_t rcx_24 = var_358[0].q
                    int64_t rdx_13 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_24 + (rdx_13 << 2)) = var_338.q
                    *(rcx_24 + (rdx_13 << 2) + 8) = var_330
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_38
            rax_38, result_24, zmm15 = sub_1415c28a0(&var_178, &var_358, &var_278, &var_190, 
                &var_340, &var_338, &result_35, &var_258)
            result_49 = zx.o(var_338.q)
            rax_39 = var_330
            
            if (rax_38 == 2)
                goto label_14164c8d0
            
            *arg8 = result_49.q
            result_49.d = (var_340 ^ data_142d3f780).d f- result_24[0]
            *(arg8 + 8) = rax_39
            result = result_1
            *rdi_1 = result_49.d
            result_49 = zx.o(result_35)
        int64_t rcx_26 = var_358[0].q
        *arg7 = result_49.q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_178[0].q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    else
        result_9 = result_11
        result_10 = result_11
        *arg8 = var_308
        result_20 = result_11
        *(arg8 + 8) = var_300
        result_24 = result_11
        result_25 = result_11
        result_6 = result_11
        
        if (rcx_1 == 0)
            result_19 = zx.o(result_39)
            result_8 = zx.o(result_17)
            result_18 = result_19
            int32_t result_41 = result_46
            result_10 = _mm_shuffle_ps(result_18, result_18, 0x55)
            float result_4 = result_3
            result_18 = result_8
            result_20 = result_41
            result_25 = _mm_shuffle_ps(result_18, result_18, 0x55)
            result_6 = result_4
            result_9 = result_19.d
            result_36.q = result_8.q
            result_24 = result_36
        else if (r13.d s> 0)
            int128_t* rax_30 = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_8 = *rax_30
                rax_30 += 4
                result_18 = result_8
                result_18[0] = result_18[0] f* *(&result_39 + r12)
                result_19.d = result_8.d f* *(&result_39:4 + r12)
                result_9[0] = result_9[0] f+ result_18[0]
                result_18 = result_8
                result_18[0] = result_18[0] f* *(&result_46 + r12)
                result_10[0] = result_10[0] f+ result_19.d
                result_19.d = result_8.d f* *(&result_17 + r12)
                result_20[0].d = result_20[0].d f+ result_18[0]
                result_18 = result_8
                result_18[0] = result_18[0] f* *(&result_17:4 + r12)
                result_8[0] = result_8[0] f* *(&result_3 + r12)
                result_24[0] = result_24[0] f+ result_19.d
                r12 += 0xc
                result_25[0] = result_25[0] f+ result_18[0]
                result_6[0] = result_6[0] f+ result_8[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_26 = var_358[1]
        result_12 = var_358[0]
        zmm15 = var_358[2]
        result_24[0] = result_24[0] f+ result_12[0]
        result_26[0] = result_26[0] f+ result_25[0]
        zmm15[0] = zmm15[0] f+ result_6[0]
        result_24[0] = result_24[0] f- result_9[0]
        result_26[0] = result_26[0] - result_10[0]
        zmm15[0] = zmm15[0] f- result_20[0].d
        result_20 = 0x3f000000
        result_24[0] = result_24[0] f* result_24[0]
        result_26[0] = result_26[0] * result_26[0]
        result_19.d = zmm15.d f* zmm15[0]
        result_26[0] = result_26[0] f+ result_24[0]
        result_26[0] = result_26[0] f+ result_19.d
        result_9 = result_26
        float result_45[0x4] = _mm_rsqrt_ss(result_26[0], result_9[0])
        result_8 = 0x3f000000
        result_9[0] = result_9[0] f* 0.5f
        result_18 = result_45
        result_18[0] = result_18[0] f* result_45[0]
        result_19.d = result_9.d f* result_18[0]
        result_18 = result_45
        result_8[0] = 0.5f f- result_19.d
        result_18[0] = result_18[0] f* result_8[0]
        result_45[0] = result_45[0] f+ result_18[0]
        result_18 = result_45
        result_19.d = result_45.d f* result_45[0]
        result_9[0] = result_9[0] f* result_19.d
        result_20[0].d = 0.5f f- result_9[0]
        result_18[0] = result_18[0] f* result_20[0].d
        result_45[0] = result_45[0] f+ result_18[0]
        result_24[0] = result_24[0] f* result_45[0]
        result_26[0] = result_26[0] * result_45[0]
        zmm15[0] = zmm15[0] f* result_45[0]
        result_18 = _mm_unpacklo_ps(result_24, result_26[0].q)
        *arg8 = result_18.q
        result_19.d = result_32.d f- __sqrtss_xmmss_memss(result_18[0], result_27)[0]
        *(arg8 + 8) = zmm15[0]
        
        if (not(result_19.d f< result_11[0]))
            result_11 = __minss_xmmss_memss(result_19[0], 0x7f7fffff)
        
        result_19 = *arg8
        result_8 = *(arg8 + 4)
        result_18 = result_19
        result_9 = *(arg8 + 8)
        result_10 = result_14
        result_18[0] = result_18[0] f* result_10[0]
        result_24[0] = result_24[0] f- result_18[0]
        result_11[0] = result_11[0] f* result_19.d
        result_19.d = result_8.d f* result_10[0]
        result_24[0] = result_24[0] f+ result_12[0]
        result_25[0] = result_25[0] f- result_19.d
        result_19.d = result_9.d f* result_10[0]
        result_24[0] = result_24[0] f+ result_11[0]
        result_11[0] = result_11[0] f* result_8[0]
        result_6[0] = result_6[0] f- result_19.d
        result_25[0] = result_25[0] f+ result_26[0]
        result_6[0] = result_6[0] f+ zmm15[0]
        result_25[0] = result_25[0] f+ result_11[0]
        result_18 = result_11
        result_11 ^= data_142d3f780
        result_18[0] = result_18[0] f* result_9[0]
        result_6[0] = result_6[0] f+ result_18[0]
        *arg7 = (_mm_unpacklo_ps(result_24, result_25[0].q)).q
        arg7[1].d = result_6[0]
        *rdi_1 = result_11[0]

result.b = 1
label_14164c949:
__security_check_cookie(rax_1 ^ &var_3a8)
return result

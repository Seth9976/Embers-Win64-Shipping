// 函数: sub_141641990
// 地址: 0x141641990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* r11 = *(arg2 + 0x10)
float result_11[0x4] = zx.o(0)
int128_t* r15 = arg3
double result_17[0x2] = *(r11 + 0x1c)
void* r8 = arg2
uint32_t (* var_278)[0x4] = arg4
uint32_t result_38[0x4]

if (result_17[0].d f== 0f)
    result_38 = zx.o(0)
else
    result_38 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    result_38[0] = result_38[0] f* result_17[0].d

float result_6[0x4] = *r15
int64_t r12 = 0
double var_328[0x2] = r15[1]
void* var_258 = arg1
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
result_17 = data_142d3f7e0
float result_18[0x4] = result_6 ^ 0x80000000
float temp0_2[0x4] = _mm_shuffle_ps(result_18, result_18, 0xe1)
double result_31[0x2] = result_17
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float result_44[0x4] = _mm_shuffle_ps(result_6, result_6, 0x55)
result_38[0] = result_38[0] f* result_38[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
double temp0_3[0x2] = _mm_cvtps_pd(result_38[0].q)
float result_25[0x4] = _mm_shuffle_ps(result_6, result_6, 0xaa)
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
float result_8[0x4] = result_6
int32_t result_14 = _mm_cvtpd_ps(temp0_3)[0].d
temp0_2[0] = (result_44 ^ 0x80000000)[0].d
float result_40[0x4] = _mm_shuffle_ps(result_6, result_6, 0xff)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_5[0] = (result_25 ^ 0x80000000)[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = result_40[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float var_1c8[0x4] = temp0_7
float result_19[0x4] = *(arg1 + 0x28)
uint32_t result_10[0x4] = *(arg1 + 0x2c)
result_17 = result_19
result_17[0].d = result_17[0].d f* *arg10
void* rcx = *(arg1 + 0x10)
float zmm15[0x4] = *(arg1 + 0x30)
result_10[0] = result_10[0] f* arg10[1]
bool cond:1 = result_17[0].d f>= 0f
float var_248[0x4] = temp0_7
zmm15[0] = zmm15[0] f* arg10[2]
double result_39[0x2]

if (cond:1)
    result_39 = *(rcx + 0x1c)
else
    result_39 = *(rcx + 0x10)

float result_23[0x4]

if (result_10[0] f>= 0f)
    result_23 = *(rcx + 0x20)
else
    result_23 = *(rcx + 0x14)

if (zmm15[0] >= 0f)
    result_17 = *(rcx + 0x24)
else
    result_17 = *(rcx + 0x18)

double result_21[0x2] = *(r11 + 0x18)
result_21[0].d = result_21[0].d f* *(arg2 + 0x30)
result_18 = *(r11 + 0x10)
result_18[0] = result_18[0] f* *(arg2 + 0x28)
zmm15[0] = zmm15[0] f* result_17[0].d
uint32_t result_37[0x4] = result_21
result_39[0].d = result_39[0].d f* result_19[0]
float result_22[0x4] = result_18
result_22[0] = result_22[0] * result_25[0]
result_37[0] = result_37[0] f* result_44[0]
result_23[0] = result_23[0] f* result_10[0]
result_10 = *(r11 + 0x14)
result_10[0] = result_10[0] f* *(arg2 + 0x2c)
int64_t result_16 = (_mm_unpacklo_ps(result_39, result_23[0].q)).q
result_19 = result_10
result_17 = result_10
result_17[0].d = result_17[0].d f* result_25[0]
float result_42 = zmm15[0]
result_19[0] = result_19[0] * result_6[0]
result_37[0] = result_37[0] f- result_17[0].d
result_21[0].d = result_21[0].d f* result_6[0]
result_22[0] = result_22[0] f- result_21[0].d
result_17 = result_18
result_17[0].d = result_17[0].d f* result_44[0]
result_37[0] = result_37[0] f+ result_37[0]
result_19[0] = result_19[0] f- result_17[0].d
result_22[0] = result_22[0] + result_22[0]
result_37[0] = result_37[0] f* result_40[0]
result_19[0] = result_19[0] + result_19[0]
result_37[0] = result_37[0] f+ result_18[0]
result_17 = result_22
result_17[0].d = result_17[0].d f* result_25[0]
result_18 = result_37
result_18[0] = result_18[0] * result_25[0]
result_37[0] = result_37[0] f* result_44[0]
result_19[0] = result_19[0] * result_44[0]
float result_24[0x4] = zx.o(0)
result_19[0] = result_19[0] f- result_17[0].d
result_17 = result_19
result_17[0].d = result_17[0].d f* result_6[0]
result_19[0] = result_19[0] f+ result_37[0]
uint32_t result_9[0x4] = result_22
result_18[0] = result_18[0] f- result_17[0].d
result_22[0] = result_22[0] * result_6[0]
result_17 = result_40
result_9[0] = result_9[0] f* result_17[0].d
result_19[0] = result_19[0] f* result_17[0].d
result_22[0] = result_22[0] f- result_37[0]
result_39[0].d = result_39[0].d f- result_19[0]
result_9[0] = result_9[0] f+ result_10[0]
result_10 = var_328[1].d
result_19[0] = result_19[0] f+ result_21[0].d
uint32_t result_28 = result_10[0]
float result_2 = result_10[0]
result_21 = result_10
result_18[0] = result_18[0] f+ result_9[0]
result_9 = var_328[0]:4.d
result_22[0] = result_22[0] + result_19[0]
uint32_t result_7 = result_9[0]
uint32_t var_2ac = result_9[0]
result_6 = result_9
result_17 = _mm_unpacklo_ps(result_19, result_18[0].q)
result_23[0] = result_23[0] - result_18[0]
int64_t result_33 = result_17.q
result_17 = var_328[0].d
float result_20[0x4] = result_17
float result_1 = result_22[0]
result_20[0] = result_20[0] f- result_39[0].d
uint32_t result_12 = result_17[0].d
result_37 = result_17
uint32_t var_2b0 = result_17[0].d
float result_3 = result_1
uint32_t result = zx.d(arg9)
zmm15[0] = zmm15[0] - result_22[0]
result_19 = result_9
int64_t var_2d8 = 0
result_19[0] = result_19[0] - result_23[0]
float var_2d0 = 1f
result_22 = result_10
result_17 = result_20
result_17[0].d = result_17[0].d f* result_20[0]
result_22[0] = result_22[0] - zmm15[0]
float var_334 = result_19[0]
result_19[0] = result_19[0] * result_19[0]
result_9 = result_22
result_19[0] = result_19[0] f+ result_17[0].d
result_9[0] = result_9[0] f* result_22[0]
result_19[0] = result_19[0] f+ result_9[0]
float result_5

if (result_19[0] f>= result_14 || (result.b != 0 && result_19[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

zmm15 = 0x7f7fffff
int64_t rbx
rbx.b = 0
float result_41 = 3.40282347e+38f
uint32_t rdx = zx.d(result_5.b)
char var_338 = rdx.b
int32_t rcx_1 = 0
int32_t var_310 = 0
result_39 = 0x7f7fffff
float result_29
uint64_t result_45
uint32_t var_300
int64_t result_15

if (result_5.b == 0)
    while (true)
        int32_t rax_6 = rcx_1
        rcx_1 += 1
        var_310 = rcx_1
        
        if (rax_6 s>= 0x20)
            result_37 = result_12
            result_6 = result_7
            zmm15 = 0x7f7fffff
            result = zx.d(arg9)
        else
            result_10 = 0x3f000000
            result_18 = result_19
            void* rax_7 = var_258
            result_17 = result_20
            result_18[0] = result_18[0] * result_19[0]
            result_9 = result_22
            result_17[0].d = result_17[0].d f* result_20[0]
            result_19 = zx.o(0)
            void* rcx_2 = *(rax_7 + 0x10)
            result_37 = *(rax_7 + 0x30)
            result_9[0] = result_9[0] f* result_22[0]
            result_18[0] = result_18[0] f+ result_17[0].d
            result_18[0] = result_18[0] f+ result_9[0]
            result_19[0] = result_18[0]
            result_18 = 0x3f000000
            float result_26[0x4] = _mm_rsqrt_ss(result_19[0], result_19[0])
            result_19[0] = result_19[0] * 0.5f
            result_17 = result_26
            result_17[0].d = result_17[0].d f* result_26[0]
            result_9 = result_19
            result_9[0] = result_9[0] f* result_17[0].d
            result_17 = result_26
            result_18[0] = 0.5f f- result_9[0]
            result_17[0].d = result_17[0].d f* result_18[0]
            result_26[0] = result_26[0] f+ result_17[0].d
            result_9 = result_26
            result_17 = result_26
            result_9[0] = result_9[0] f* result_26[0]
            result_19[0] = result_19[0] f* result_9[0]
            result_10[0] = 0.5f - result_19[0]
            result_17[0].d = result_17[0].d f* result_10[0]
            result_10 = *(rax_7 + 0x28)
            result_26[0] = result_26[0] f+ result_17[0].d
            result_17 = result_10
            result_39 = result_26
            result_29 = result_26[0]
            result_39[0].d = result_39[0].d f* result_20[0]
            result_26[0] = result_26[0] * var_334
            result_20 = *(rax_7 + 0x2c)
            result_26[0] = result_26[0] * result_22[0]
            result_9 = result_20
            result_17[0].d = result_17[0].d f* result_39[0].d
            result_9[0] = result_9[0] f* result_26[0]
            bool cond:3_1 = result_17[0].d f>= result_11[0]
            result_26[0] = result_26[0] f* result_37[0]
            
            if (cond:3_1)
                result_19 = *(rcx_2 + 0x1c)
            else
                result_19 = *(rcx_2 + 0x10)
            
            if (result_9[0] f>= result_11[0])
                result_9 = *(rcx_2 + 0x20)
            else
                result_9 = *(rcx_2 + 0x14)
            
            if (result_26[0] >= result_11[0])
                result_17 = *(rcx_2 + 0x24)
            else
                result_17 = *(rcx_2 + 0x18)
            
            void* rax_8 = *(r8 + 0x10)
            result_18 = *(r8 + 0x28)
            result_17[0].d = result_17[0].d f* result_37[0]
            result_18[0] = result_18[0] f* *(rax_8 + 0x10)
            result_37 = result_44
            result_21 = *(rax_8 + 0x18)
            result_21[0].d = result_21[0].d f* *(r8 + 0x30)
            result_10[0] = result_10[0] f* result_19[0]
            result_29 = result_17[0].d
            result_9[0] = result_9[0] f* result_20[0]
            result_20 = result_37
            int32_t var_298_1 = result_17[0].d
            result_17 = result_25
            result_25[0] = result_25[0] * result_18[0]
            uint32_t result_13 = result_9[0]
            result_20[0] = result_20[0] f* result_21[0].d
            uint32_t result_27 = result_10[0]
            result_10 = *(rax_8 + 0x14)
            result_10[0] = result_10[0] f* *(r8 + 0x2c)
            result_17[0].d = result_17[0].d f* result_10[0]
            (&var_18c)[sx.q(r13.d)] = r13.d
            result_8[0] = result_8[0] f* result_10[0]
            result_20[0] = result_20[0] f- result_17[0].d
            result_17 = result_8
            result_17[0].d = result_17[0].d f* result_21[0].d
            result_25[0] = result_25[0] f- result_17[0].d
            result_17 = result_37
            result_17[0].d = result_17[0].d f* result_18[0]
            result_20[0] = result_20[0] + result_20[0]
            result_8[0] = result_8[0] f- result_17[0].d
            result_25[0] = result_25[0] + result_25[0]
            result_9 = result_20
            result_9[0] = result_9[0] f* result_40[0]
            result_8[0] = result_8[0] + result_8[0]
            result_9[0] = result_9[0] f+ result_18[0]
            result_17 = result_25
            result_17[0].d = result_17[0].d f* result_25[0]
            result_8[0] = result_8[0] f* result_37[0]
            result_37 = result_20
            result_37[0] = result_37[0] f* result_25[0]
            result_20[0] = result_20[0] * result_44[0]
            result_8[0] = result_8[0] f- result_17[0].d
            result_17 = result_8
            result_17[0].d = result_17[0].d f* result_8[0]
            result_8[0] = result_8[0] f+ result_9[0]
            result_9 = result_25
            result_25[0] = result_25[0] * result_8[0]
            result_37[0] = result_37[0] f- result_17[0].d
            result_17 = result_40
            result_8[0] = result_8[0] f* result_17[0].d
            result_9[0] = result_9[0] f* result_17[0].d
            result_25[0] = result_25[0] - result_20[0]
            result_17 = result_27
            result_8[0] = result_8[0] f+ result_21[0].d
            result_21 = result_29
            result_18 = result_17
            result_9[0] = result_9[0] f+ result_10[0]
            result_10 = result_12
            result_18[0] = result_18[0] - result_8[0]
            result_25[0] = result_25[0] + result_8[0]
            result_37[0] = result_37[0] f+ result_9[0]
            result_9 = result_13
            result_10[0] = result_10[0] f- result_18[0]
            float var_334_1 = result_18[0]
            result_18 = result_7
            result_19 = result_9
            result_21[0].d = result_21[0].d f- result_25[0]
            uint32_t var_1e0_1 = result_25[0]
            result_19[0] = result_19[0] f- result_37[0]
            result_45.d = result_10[0]
            result_18[0] = result_18[0] - result_19[0]
            float var_2e0_1 = result_19[0]
            result_19 = result_28
            result_19[0] = result_19[0] f- result_21[0].d
            result_45:4.d = result_18[0]
            var_300 = result_19[0]
            r13 = sx.q(var_190)
            result_17 = _mm_unpacklo_ps(result_17, result_9[0].q)
            result_9 = result_26
            result_26[0] = result_26[0] * result_18[0]
            uint64_t rcx_4 = r13 * 3
            result_9[0] = result_9[0] f* result_19[0]
            *(&result_16 + (rcx_4 << 2)) = result_17.q
            *(&result_33 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_8, result_37[0].q)).q
            result_39[0].d = result_39[0].d f* result_10[0]
            (&result_42)[rcx_4] = var_298_1
            (&result_3)[rcx_4] = var_1e0_1
            result_26[0] = result_26[0] f+ result_39[0].d
            result_26[0] = result_26[0] f+ result_9[0]
            int128_t var_158_1
            int32_t result_32
            
            if (result_26[0] f<= result_38[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_4 << 2)) = result_45
                *(&var_168:8 + (rcx_4 << 2)) = var_300
                var_190 = r13.d
            label_141642330:
                result_39 = result_41
                result_37 = result_12
                result_6 = result_7
                zmm15 = 0x7f7fffff
                
                if (rdx.b != 0 && not(result_26[0] < result_11[0]))
                    result_26[0] = result_26[0] * result_26[0]
                    result_26[0] = result_26[0] + 9.99999997e-07f
                    result_5.b = result_26[0] f>= result_39[0].d
            else
                result_6 = (*arg4)[1]
                result_18 = result_39
                result_37 = *arg4
                result_17 = result_26
                result_19 = (*arg4)[2]
                result_9 = result_26
                result_18[0] = result_18[0] f* result_37[0]
                result_17[0].d = result_17[0].d f* result_6[0]
                result_9[0] = result_9[0] f* result_19[0]
                result_18[0] = result_18[0] f+ result_17[0].d
                result_18[0] = result_18[0] f+ result_9[0]
                
                if (result_18[0] >= result_11[0])
                    result.b = 0
                    goto label_141642ddd
                
                result_17 = result_26
                result_17[0].d = result_17[0].d f- result_38[0]
                result_17[0].d = result_17[0].d f/ result_18[0]
                result_24[0] = result_24[0] f- result_17[0].d
                
                if (result_24[0] f<= result_24[0])
                    goto label_141642330
                
                if (result_24[0] f> arg5)
                    result.b = 0
                    goto label_141642ddd
                
                result_9 = zx.o(var_2b0.q)
                result_20 = result_19
                result_17 = result_9
                result_17 = _mm_shuffle_ps(result_17, result_17, 0x55)
                r13 = zx.q(r13.d + 1)
                result_15 = result_9.q
                result_37[0] = result_37[0] f* result_24[0]
                result_1 = result_2
                result_6[0] = result_6[0] * result_24[0]
                var_190 = r13.d
                result_37[0] = result_37[0] f+ var_328[0].d
                result_20[0] = result_20[0] * result_24[0]
                var_338 = 0
                result_6[0] = result_6[0] f+ var_328[0]:4.d
                var_2d8:4.d = result_26[0]
                result_20[0] = result_20[0] f+ var_328[1].d
                zmm15 = 0x7f7fffff
                result_19 = result_37
                result_19[0] = result_19[0] f- result_9[0]
                var_2d8.d = result_39[0].d
                result_9 = var_168:4.d
                result_10 = result_6
                result_10[0] = result_10[0] f- result_17[0].d
                result_12 = result_37[0]
                result_17 = var_168.d
                result_20[0] = result_20[0] - result_1
                result_17[0].d = result_17[0].d f+ result_19[0]
                result_7 = result_6[0]
                result_28 = result_20[0]
                result_39 = 0x7f7fffff
                result_9[0] = result_9[0] f+ result_10[0]
                var_2b0 = result_37[0]
                float var_2ac_1 = result_6[0]
                result_2 = result_20[0]
                var_168.d = result_17[0].d
                result_17 = var_168:8.d
                result_17[0].d = result_17[0].d f+ result_20[0]
                var_168:4.d = result_9[0]
                result_9 = var_168:0xc.d
                result_9[0] = result_9[0] f+ result_19[0]
                var_2d0 = result_26[0]
                result_41 = 3.40282347e+38f
                var_168:8.d = result_17[0].d
                result_17 = var_158_1.d
                var_168:0xc.d = result_9[0]
                result_17[0].d = result_17[0].d f+ result_10[0]
                result_9 = var_158_1:4.d
                result_9[0] = result_9[0] f+ result_20[0]
                var_158_1.d = result_17[0].d
                result_17 = var_158_1:8.d
                var_158_1:4.d = result_9[0]
                result_17[0].d = result_17[0].d f+ result_19[0]
                result_9 = var_158_1:0xc.d
                result_9[0] = result_9[0] f+ result_10[0]
                var_158_1:8.d = result_17[0].d
                result_17 = result_32
                result_17[0].d = result_17[0].d f+ result_20[0]
                var_158_1:0xc.d = result_9[0]
                result_37[0] = result_37[0] f- var_334_1
                result_6[0] = result_6[0] - var_2e0_1
                result_32 = result_17[0].d
                result_17 = result_20
                result_17[0].d = result_17[0].d f- result_21[0].d
                *(&var_168 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_37, result_6[0].q)).q
                *(&var_168:8 + (rcx_4 << 2)) = result_17[0].d
            
            if (result_5.b != 0)
                int64_t* rax_21
                rax_21, result_37, result_6, result_11, result_24, result_38, result_39, zmm15 =
                    sub_1416f4530(&var_248, &var_168, &var_190, &result_31, &result_16, &result_33)
                r13 = zx.q(var_190)
                result_9 = zx.o(*rax_21)
                int32_t result_35 = rax_21[1].d
                result_17 = result_9
                result_17 = _mm_shuffle_ps(result_17, result_17, 0x55)
                result_19 = result_17
                result_22 = result_35
                result = zx.d(arg9)
                result_20 = result_9.d
                var_334 = result_17[0].d
            else
                int32_t rcx_5 = r13.d
                int32_t result_34
                
                if (rcx_5 == 1)
                    int64_t rax_17 = sx.q(var_18c)
                    int64_t rcx_12 = rax_17 * 3
                    *(&result_31 + (rax_17 << 2)) = 0x3f800000
                    result_17 = zx.o(*(&var_168 + (rcx_12 << 2)))
                    result_34 = *(&var_168:8 + (rcx_12 << 2))
                else if (rcx_5 == 2)
                    void var_1a0
                    uint64_t* rax_16
                    rax_16, result_37, result_6 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &result_31)
                    r13 = zx.q(var_190)
                    result_17 = zx.o(*rax_16)
                    result_34 = rax_16[1].d
                else if (rcx_5 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_15
                    rax_15, result_37, result_6, result_11, result_24, result_38, result_39, 
                        zmm15 = sub_1416fa750(&var_1ac, &var_168, &var_190, &result_31)
                    r13 = zx.q(var_190)
                    result_17 = zx.o(*rax_15)
                    result_34 = rax_15[1].d
                else if (rcx_5 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_14
                    rax_14, result_37, result_6, result_11, result_24, result_38, result_39, 
                        zmm15 = sub_1416f9c90(&var_1b8, &var_168, &var_190, &result_31)
                    r13 = zx.q(var_190)
                    result_17 = zx.o(*rax_14)
                    result_34 = rax_14[1].d
                else
                    int32_t var_2f0_1 = 0
                    result_17 = _mm_unpacklo_ps(result_11, result_11[0].q)
                    result_34 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                result_10 = result_14
                rbx = rdi * 3
                int64_t result_30 = result_17.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_4 = *(&var_168:8 + (r15_1 << 2))
                result_20 = result_30.d
                result_22 = result_34
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_32:4.q = *(&var_168 + (rbx << 2))
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                float result_46 = (&result_42)[r15_1]
                result_31[1].d = (*(&result_31 + (r9_3 << 2)))[0]
                result_31[0].d = (*(&result_31 + (r11_1 << 2)))[0].d
                result_31[0]:4.d = (*(&result_31 + (r10_1 << 2)))[0]
                result_31[1]:4.d = (*(&result_31 + (rdi << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_5 = (&result_42)[r14_1]
                result_32 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rcx_14 = (&result_42)[rsi_1]
                result_32 = *(&var_168:8 + (rbx << 2))
                int32_t rax_19 = (&result_42)[rbx]
                var_12c_1.q = *(&result_16 + (r14_1 << 2))
                result_18 = zx.o(*(&result_33 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_16 + (rbx << 2))
                result_17 = zx.o(*(&result_33 + (rbx << 2)))
                var_12c_1:0xc.q = *(&result_16 + (rsi_1 << 2))
                result_9 = zx.o(*(&result_33 + (rsi_1 << 2)))
                result_16 = *(&result_16 + (r15_1 << 2))
                result_19 = zx.o(*(&result_33 + (r15_1 << 2)))
                result_42 = result_46
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_5
                rdx = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_14
                int32_t rcx_15 = (&result_3)[rsi_1]
                int32_t var_10c_1 = rax_19
                int32_t rax_20 = (&result_3)[rbx]
                var_fc_1.q = result_18.q
                int128_t var_ec_1
                var_ec_1:8.q = result_17.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_4
                var_fc_1:0xc.q = result_9.q
                result_17 = result_20
                result_33 = result_19.q
                result_9 = result_22
                result_19 = result_30:4.d
                result_17[0].d = result_17[0].d f* result_20[0]
                result_3 = result_5
                result_19[0] = result_19[0] * result_19[0]
                var_fc_1:8.d = rdx
                result_9[0] = result_9[0] f* result_22[0]
                var_ec_1:4.d = rcx_15
                result_19[0] = result_19[0] f+ result_17[0].d
                var_334 = result_19[0]
                int32_t var_dc_1 = rax_20
                result_19[0] = result_19[0] f+ result_9[0]
                result = zx.d(arg9)
                result_41 = result_19[0]
                result_5.b = result_10[0] f> result_19[0]
                bool cond:6_1 = result_19[0] f>= result_39[0].d
                result_39 = result_19
                rbx.b = cond:6_1
                
                if (result.b == 0)
                    goto label_14164278b
                
                if (result_5.b == 0)
                    goto label_141642790
                
                if (not(result_24[0] != result_11[0]))
                    result_9 = 0x3eb0c6f7a0b5ed8d
                    
                    if (not(_mm_cvtps_pd(result_19[0].q)[0] f<= result_9[0].q)
                            && not(_mm_cvtps_pd(result_10[0].q)[0] f<= result_9[0].q)
                            && r13.d s< 4)
                        rdx.b = 1
                        result_5.b = 0
                        var_338 = 1
                        goto label_141642795
            
        label_14164278b:
            
            if (result_5.b != 0)
                rcx_1 = var_310
                arg4 = var_278
            else
            label_141642790:
                rdx = zx.d(var_338)
            label_141642795:
                rcx_1 = var_310
                arg4 = var_278
                
                if (rbx.b == 0)
                    r8 = arg2
                    continue
        
        result_21 = result_28
        r15 = arg3
        break

bool cond:2_1 = result_24[0] <= result_11[0]
float* rdi_1 = arg6
*rdi_1 = result_24[0]

if (not(cond:2_1))
    result_10 = result_11
    *arg8 = var_2d8
    (*arg8)[2] = var_2d0
    
    if (r13.d s> 0)
        double (* rcx_17)[0x2] = &result_31
        uint64_t i_4 = zx.q(r13.d)
        float* rax_23 = &result_3
        uint64_t i
        
        do
            result_18 = *rcx_17
            rcx_17 += 4
            result_17 = result_18
            result_9 = result_18
            result_17[0].d = result_17[0].d f* rax_23[-2]
            result_9[0] = result_9[0] f* rax_23[-1]
            result_18[0] = result_18[0] * *rax_23
            rax_23 = &rax_23[3]
            result_11[0] = result_11[0] f+ result_17[0].d
            result_10[0] = result_10[0] f+ result_9[0]
            result_11[0] = result_11[0] + result_18[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_9 = result_24
    result_17 = result_38
    result_17[0].d = result_17[0].d f* *arg8
    result_9[0] = result_9[0] f* *arg4
    result_11[0] = result_11[0] f- result_17[0].d
    result_17 = result_38
    result_17[0].d = result_17[0].d f* (*arg8)[1]
    result_9[0] = result_9[0] f+ var_328[0].d
    result_38[0] = result_38[0] f* (*arg8)[2]
    result_10[0] = result_10[0] f- result_17[0].d
    result_11[0] = result_11[0] f+ result_9[0]
    result_9 = result_24
    result_9[0] = result_9[0] f* (*arg4)[1]
    result_11[0] = result_11[0] f- result_38[0]
    result_24[0] = result_24[0] f* (*arg4)[2]
    result_9[0] = result_9[0] f+ var_328[0]:4.d
    result_24[0] = result_24[0] f+ var_328[1].d
    result_10[0] = result_10[0] f+ result_9[0]
    result_11[0] = result_11[0] + result_24[0]
    *arg7 = (_mm_unpacklo_ps(result_11, result_10[0].q)).q
    arg7[1].d = result_11[0]
else if (result.b != 0)
    double temp0_19[0x2]
    
    if (not(result_38[0] f<= result_11[0]))
        temp0_19 = _mm_cvtps_pd(result_39[0])
    
    if (result_38[0] f<= result_11[0] || temp0_19[0] <= 9.9999999999999995e-07
            || result_39[0].d f>= zmm15[0])
        result_31[0] = 0
        result_31[1] = 0
        var_328[0] = 0
        var_328[1] = 0
        sub_14083ad30(&result_31, 8)
        
        if (var_328[1]:4.d s< 8)
            sub_14083ad30(&var_328, 8)
        
        uint32_t rax_33
        double result_43[0x2]
        
        if (var_310 == 0)
            int32_t var_2f0_5 = 0x3f800000
            rax_33 = 0x3f800000
            result_43 = _mm_unpacklo_ps(result_11, result_11[0].q)
        label_141642d79:
            result_18 = result_16:4.d
            result_9 = result_16.d
            *rdi_1 = (result_38 ^ data_142d3f780)[0]
            *arg8 = result_43.q
            result_43 = result_42
            (*arg8)[2] = rax_33
            result_9 = _mm_unpacklo_ps(result_9, result_18[0].q)
            result = result_43[0].d
            *arg7 = result_9.q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(result_31[1].d)
                    int32_t rax_27 = (rdi_2 + 1).d
                    result_31[1].d = rax_27
                    
                    if (rax_27 s> result_31[1]:4.d)
                        sub_14083a7e0(&result_31)
                    
                    double rcx_21 = result_31[0]
                    int64_t rdx_8 = rdi_2 * 3
                    result_43 = zx.o(*(&result_16 + r12))
                    result_9 = result_6
                    int32_t rax_28 = *(&result_42 + r12)
                    result_9[0] = result_9[0] f+ *(&result_33:4 + r12)
                    *(rcx_21 i+ (rdx_8 << 2)) = result_43.q
                    result_43 = result_37
                    result_43[0].d = result_43[0].d f+ *(&result_33 + r12)
                    *(rcx_21 i+ (rdx_8 << 2) + 8) = rax_28
                    int64_t rdi_3 = sx.q(var_328[1].d)
                    result_45:4.d = result_9[0]
                    result_45.d = result_43[0].d
                    result_21[0].d = result_21[0].d f+ *(&result_3 + r12)
                    int32_t rax_29 = (rdi_3 + 1).d
                    var_328[1].d = rax_29
                    var_300 = result_21[0].d
                    
                    if (rax_29 s> var_328[1]:4.d)
                        sub_14083a7e0(&var_328)
                    
                    double rcx_23 = var_328[0]
                    int64_t rdx_10 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_23 i+ (rdx_10 << 2)) = result_45
                    *(rcx_23 i+ (rdx_10 << 2) + 8) = var_300
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            int128_t* var_180_1 = r15
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int32_t rax_32
            rax_32, result_38 = sub_14155e210(&result_31, &var_328, &var_258, &var_190, &result_29, 
                &result_45, &result_15, &var_248)
            result_43 = zx.o(result_45)
            rax_33 = var_300
            
            if (rax_32 == 2)
                goto label_141642d79
            
            *arg8 = result_43.q
            result_43 = result_29 ^ data_142d3f780
            (*arg8)[2] = rax_33
            result_43[0].d = result_43[0].d f- result_38[0]
            result = result_1
            *rdi_1 = result_43[0].d
            *arg7 = result_15
        double rcx_25 = var_328[0]
        arg7[1].d = result
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        double rcx_26 = result_31[0]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        result_19 = result_11
        result_10 = result_11
        *arg8 = var_2d8
        result_20 = result_11
        (*arg8)[2] = var_2d0
        result_23 = result_11
        result_24 = result_11
        result_6 = result_11
        
        if (rcx_1 == 0)
            result_9 = zx.o(result_16)
            result_18 = zx.o(result_33)
            result_17 = result_9
            float result_36 = result_42
            result_10 = _mm_shuffle_ps(result_17, result_17, 0x55)
            float result_4 = result_3
            result_17 = result_18
            result_20 = result_36
            result_24 = _mm_shuffle_ps(result_17, result_17, 0x55)
            result_6 = result_4
            result_19 = result_9.d
            result_23 = result_18.d
        else if (r13.d s> 0)
            double (* rax_25)[0x2] = &result_31
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_18 = *rax_25
                rax_25 += 4
                result_17 = result_18
                result_9 = result_18
                result_17[0].d = result_17[0].d f* *(&result_16 + r12)
                result_9[0] = result_9[0] f* *(&result_16:4 + r12)
                result_19[0] = result_19[0] f+ result_17[0].d
                result_17 = result_18
                result_17[0].d = result_17[0].d f* *(&result_42 + r12)
                result_10[0] = result_10[0] f+ result_9[0]
                result_9 = result_18
                result_9[0] = result_9[0] f* *(&result_33 + r12)
                result_20[0] = result_20[0] f+ result_17[0].d
                result_17 = result_18
                result_17[0].d = result_17[0].d f* *(&result_33:4 + r12)
                result_18[0] = result_18[0] f* *(&result_3 + r12)
                result_23[0] = result_23[0] f+ result_9[0]
                r12 += 0xc
                result_24[0] = result_24[0] f+ result_17[0].d
                result_6[0] = result_6[0] + result_18[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_21 = var_328[0]:4.d
        result_23[0] = result_23[0] f+ var_328[0].d
        result_37 = var_328[1].d
        result_21[0].d = result_21[0].d f+ result_24[0]
        result_37[0] = result_37[0] f+ result_6[0]
        result_23[0] = result_23[0] - result_19[0]
        result_21[0].d = result_21[0].d f- result_10[0]
        result_37[0] = result_37[0] f- result_20[0]
        result_20 = 0x3f000000
        result_17 = result_23
        result_17[0].d = result_17[0].d f* result_23[0]
        result_18 = result_21
        result_18[0] = result_18[0] f* result_21[0].d
        result_37[0] = result_37[0] f* result_37[0]
        result_18[0] = result_18[0] f+ result_17[0].d
        result_18[0] = result_18[0] f+ result_37[0]
        result_19 = result_18
        result_10 = _mm_rsqrt_ss(result_18[0], result_19[0])
        result_18 = 0x3f000000
        result_19[0] = result_19[0] * 0.5f
        result_17 = result_10
        result_17[0].d = result_17[0].d f* result_10[0]
        result_9 = result_19
        result_9[0] = result_9[0] f* result_17[0].d
        result_17 = result_10
        result_18[0] = 0.5f f- result_9[0]
        result_17[0].d = result_17[0].d f* result_18[0]
        result_10[0] = result_10[0] f+ result_17[0].d
        result_17 = result_10
        result_10[0] = result_10[0] f* result_10[0]
        result_19[0] = result_19[0] f* result_10[0]
        result_20[0] = 0.5f - result_19[0]
        result_17[0].d = result_17[0].d f* result_20[0]
        result_10[0] = result_10[0] f+ result_17[0].d
        result_17 = result_10
        result_17[0].d = result_17[0].d f* result_23[0]
        result_10[0] = result_10[0] f* result_21[0].d
        result_10[0] = result_10[0] f* result_37[0]
        *arg8 = (_mm_unpacklo_ps(result_17, result_10[0].q)).q
        result_17 = _mm_sqrt_ss(0, result_39[0].d)
        uint32_t var_2f0_3 = result_10[0]
        result_38[0] = result_38[0] f- result_17[0].d
        (*arg8)[2] = var_2f0_3
        
        if (not(result_38[0] f< result_11[0]))
            result_11 = _mm_min_ss(result_38[0], zmm15[0])
        
        result_9 = *arg8
        result_18 = (*arg8)[1]
        result_17 = result_9
        result_19 = (*arg8)[2]
        result_17[0].d = result_17[0].d f* result_38[0]
        result_9[0] = result_9[0] f* result_11[0]
        result_23[0] = result_23[0] f- result_17[0].d
        result_17 = result_18
        result_17[0].d = result_17[0].d f* result_38[0]
        result_18[0] = result_18[0] * result_11[0]
        result_23[0] = result_23[0] f+ var_328[0].d
        result_24[0] = result_24[0] f- result_17[0].d
        result_17 = result_19
        result_17[0].d = result_17[0].d f* result_38[0]
        result_19[0] = result_19[0] * result_11[0]
        result_11 ^= data_142d3f780
        result_23[0] = result_23[0] f+ result_9[0]
        result_24[0] = result_24[0] f+ var_328[0]:4.d
        result_6[0] = result_6[0] f- result_17[0].d
        result_24[0] = result_24[0] + result_18[0]
        result_6[0] = result_6[0] f+ var_328[1].d
        *arg7 = (_mm_unpacklo_ps(result_23, result_24[0].q)).q
        result_6[0] = result_6[0] + result_19[0]
        arg7[1].d = result_6[0]
        *rdi_1 = result_11[0]

result.b = 1
label_141642ddd:
__security_check_cookie(rax_1 ^ &var_378)
return result

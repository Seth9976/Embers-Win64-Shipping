// 函数: sub_141671830
// 地址: 0x141671830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void* r11 = *(arg2 + 0x10)
double result_12[0x2] = zx.o(0)
int128_t* r12 = arg3
void* rsi = arg2
int32_t* r10 = arg1
double result_20[0x2] = *(r11 + 0x1c)
float (* var_270)[0x4] = arg4
uint32_t result_27[0x4]

if (result_20[0].d f== 0f)
    result_27 = zx.o(0)
else
    result_27 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    result_27[0] = result_27[0] f* result_20[0].d

float result_24[0x4] = *arg3
int64_t r13 = 0
uint128_t result_26 = 0x3eb0c6f7a0b5ed8d
double var_338[0x2] = arg3[1]
float result_8[0x4] = result_24 ^ 0x80000000
float temp0_2[0x4] = _mm_shuffle_ps(result_8, result_8, 0xe1)
int32_t* var_2c0 = r10
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int32_t i_7 = 0
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
double var_178[0x2] = data_142d3f7e0
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float result_7[0x4] = result_27
float result_40[0x4] = _mm_shuffle_ps(result_24, result_24, 0x55)
result_7[0] = result_7[0] f* result_27[0]
float result_41[0x4] = _mm_shuffle_ps(result_24, result_24, 0xaa)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
int32_t i_8 = i_7
double temp0_3[0x2] = _mm_cvtps_pd(result_7[0].q)
int32_t i_6 = i_8
float result_10[0x4] = (*arg10)[1]
float result_35[0x4] = result_24
temp0_3[0] = temp0_3[0] f+ result_26.q
int32_t result_16 = _mm_cvtpd_ps(temp0_3)[0].d
temp0_2[0] = (result_40 ^ 0x80000000)[0].d
float result_42[0x4] = _mm_shuffle_ps(result_24, result_24, 0xff)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_5[0] = (result_41 ^ 0x80000000)[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = result_42[0]
float result_9[0x4] = (*arg10)[2]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float var_1c8[0x4] = temp0_7
result_9[0] = result_9[0] f* r10[2]
result_10[0] = result_10[0] f* r10[1]
result_10[0] = result_10[0] f* r10[4]
result_10[0] = result_10[0] f* r10[7]
float var_248[0x4] = temp0_7
result_8 = *arg10
result_20 = result_8
result_20[0].d = result_20[0].d f* *r10
result_10[0] = result_10[0] f+ result_20[0].d
result_20 = result_8
result_20[0].d = result_20[0].d f* r10[3]
result_10[0] = result_10[0] + result_9[0]
result_9[0] = result_9[0] f* r10[5]
result_10[0] = result_10[0] f+ result_20[0].d
result_10[0] = result_10[0] + result_9[0]
bool cond:1 = result_10[0] < result_10[0]
result_8[0] = result_8[0] f* r10[6]
result_9[0] = result_9[0] f* r10[8]
result_10[0] = result_10[0] + result_8[0]
result_10[0] = result_10[0] + result_9[0]
int32_t result_37

if (not(cond:1) && not(result_10[0] < result_10[0]))
    result_20 = zx.o(*r10)
    result_37 = r10[2]
else if (result_10[0] < result_10[0] || result_10[0] < result_10[0])
    result_20 = zx.o(*(r10 + 0x18))
    result_37 = r10[8]
else
    result_20 = zx.o(*(r10 + 0xc))
    result_37 = r10[5]

float result_22[0x4] = *(r11 + 0x14)
result_22[0] = result_22[0] f* *(arg2 + 0x2c)
double result_5[0x2] = *(r11 + 0x18)
result_5[0].d = result_5[0].d f* *(arg2 + 0x30)
int32_t result_44 = result_37
result_8 = *(r11 + 0x10)
result_8[0] = result_8[0] f* *(arg2 + 0x28)
result_7 = result_42[0]
float result_11[0x4] = result_5
int64_t result_31 = result_20.q
int64_t result_18 = result_20.q
result_10 = result_8
result_20 = result_22
result_10[0] = result_10[0] * result_41[0]
result_20[0].d = result_20[0].d f* result_41[0]
result_22[0] = result_22[0] * result_24[0]
result_11[0] = result_11[0] * result_40[0]
result_11[0] = result_11[0] f- result_20[0].d
result_5[0].d = result_5[0].d f* result_24[0]
result_10[0] = result_10[0] f- result_5[0].d
result_20 = result_8
result_20[0].d = result_20[0].d f* result_40[0]
result_11[0] = result_11[0] + result_11[0]
result_22[0] = result_22[0] f- result_20[0].d
result_20 = result_41
result_7[0] = result_7[0] * result_11[0]
result_10[0] = result_10[0] + result_10[0]
result_41[0] = result_41[0] * result_11[0]
float zmm14[0x4] = zx.o(0)
result_7[0] = result_7[0] + result_8[0]
result_8 = result_24
result_20[0].d = result_20[0].d f* result_10[0]
result_22[0] = result_22[0] + result_22[0]
result_8[0] = result_8[0] * result_10[0]
result_40[0] = result_40[0] * result_22[0]
result_40[0] = result_40[0] f- result_20[0].d
result_20 = result_24
result_20[0].d = result_20[0].d f* result_22[0]
result_40[0] = result_40[0] + result_7[0]
result_41[0] = result_41[0] f- result_20[0].d
result_42[0] = result_42[0] * result_10[0]
result_10 = var_338[1].d
result_20 = result_40
result_20[0].d = result_20[0].d f* result_11[0]
result_24 = result_10
result_42[0] = result_42[0] + result_22[0]
float result_14 = result_10[0]
float result_2 = result_10[0]
result_8[0] = result_8[0] f- result_20[0].d
result_41[0] = result_41[0] + result_42[0]
result_42[0] = result_42[0] * result_22[0]
result_9 = var_338[0]:4.d
float result_6 = result_9[0]
result_20 = _mm_unpacklo_ps(result_40, result_41[0].q)
result_42[0] = result_42[0] f+ result_5[0].d
int64_t result_19 = result_20.q
result_5 = result_9
result_20 = result_31.d
result_20[0].d = result_20[0].d f- result_40[0]
float var_2b4 = result_9[0]
float result_23[0x4] = result_9
result_8[0] = result_8[0] + result_42[0]
result_7 = var_338[0].d
result_22 = result_7
float result_15 = result_7[0]
float var_2b8 = result_7[0]
result_11 = result_7
result_22[0] = result_22[0] f- result_20[0].d
result_20 = result_31:4.d
result_20[0].d = result_20[0].d f- result_41[0]
float result_1 = result_8[0]
float result_3 = result_1
float result = zx.d(arg9)
result_23[0] = result_23[0] f- result_20[0].d
result_20 = result_37
float result_25[0x4] = result_10
result_20[0].d = result_20[0].d f- result_8[0]
int64_t var_2e8 = 0
float var_2e0 = 1f
result_23[0] = result_23[0] * result_23[0]
result_25[0] = result_25[0] f- result_20[0].d
result_20 = result_22
result_20[0].d = result_20[0].d f* result_22[0]
result_23[0] = result_23[0] f+ result_20[0].d
result_25[0] = result_25[0] * result_25[0]
result_23[0] = result_23[0] + result_25[0]
float rdi

if (result_23[0] f>= result_16 || (result.b != 0 && result_23[0] >= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

result_8 = 0x7f7fffff
int64_t r15
r15.b = 0
float result_13 = 3.40282347e+38f
int32_t rdx = 0
char var_358 = rdi.b
uint32_t r8 = zx.d(rdi.b)
int32_t var_318 = 0
result_7 = 0x7f7fffff
float result_28
float var_320
float var_314
int64_t result_17
float result_21[0x4]

if (rdi.b == 0)
    while (true)
        int32_t rax_5 = rdx
        rdx += 1
        var_318 = rdx
        
        if (rax_5 s>= 0x20)
            result_5 = result_6
            result_24 = result_14
            result_7 = result_13
            result = zx.d(arg9)
        else
            result_10 = 0x3f000000
            result_9 = zx.o(0)
            result_20 = result_22
            result_20[0].d = result_20[0].d f* result_22[0]
            result_25[0] = result_25[0] * result_25[0]
            result_23[0] = result_23[0] * result_23[0]
            result_23[0] = result_23[0] f+ result_20[0].d
            result_23[0] = result_23[0] + result_25[0]
            result_9[0] = result_23[0]
            result_8 = 0x3f000000
            result_26 = _mm_rsqrt_ss(result_9.d, result_9[0])
            result_9[0] = result_9[0] * 0.5f
            result_20 = result_26
            result_20[0].d = result_20[0].d f* result_26.d
            result_9[0] = result_9[0] f* result_20[0].d
            result_20 = result_26
            result_8[0] = 0.5f - result_9[0]
            result_20[0].d = result_20[0].d f* result_8[0]
            result_26.d = result_26.d f+ result_20[0].d
            result_7 = result_26
            result_20 = result_26
            result_7[0] = result_7[0] f* result_26.d
            result_9[0] = result_9[0] * result_7[0]
            result_10[0] = 0.5f - result_9[0]
            result_20[0].d = result_20[0].d f* result_10[0]
            result_26.d = result_26.d f+ result_20[0].d
            result_21 = result_26
            var_314 = result_26.d
            result_10 = result_26
            result_21[0] = result_21[0] * result_22[0]
            result_10[0] = result_10[0] * result_23[0]
            result_26.d = result_26.d f* result_25[0]
            result_20 = result_21
            result_20[0].d = result_20[0].d f* *r10
            result_10[0] = result_10[0] f* r10[1]
            result_10[0] = result_10[0] f* r10[4]
            result_7 = result_26
            result_7[0] = result_7[0] f* r10[2]
            result_10[0] = result_10[0] f+ result_20[0].d
            float result_34 = result_10[0]
            result_20 = result_21
            result_20[0].d = result_20[0].d f* r10[3]
            result_10[0] = result_10[0] f* r10[7]
            result_10[0] = result_10[0] + result_7[0]
            result_7 = result_26
            float result_33 = result_21[0]
            result_7[0] = result_7[0] f* r10[5]
            result_10[0] = result_10[0] f+ result_20[0].d
            result_20 = result_21
            result_20[0].d = result_20[0].d f* r10[6]
            result_10[0] = result_10[0] + result_7[0]
            result_7 = result_26
            result_7[0] = result_7[0] f* r10[8]
            result_10[0] = result_10[0] f+ result_20[0].d
            bool cond:3_1 = result_10[0] < result_10[0]
            result_10[0] = result_10[0] + result_7[0]
            int32_t result_38
            
            if (not(cond:3_1) && not(result_10[0] < result_10[0]))
                result_20 = zx.o(*r10)
                result_38 = r10[2]
            else if (result_10[0] < result_10[0] || result_10[0] < result_10[0])
                result_20 = zx.o(*(r10 + 0x18))
                result_38 = r10[8]
            else
                result_20 = zx.o(*(r10 + 0xc))
                result_38 = r10[5]
            
            result_10 = *(rsi + 0x2c)
            result_23 = *(rsi + 0x30)
            int64_t result_32 = result_20.q
            result_25 = result_32.d
            result_24 = result_32:4.d
            void* rax_6 = *(rsi + 0x10)
            int32_t var_2f0_1 = result_38[0].d
            result_10[0] = result_10[0] f* *(rax_6 + 0x14)
            result_23[0] = result_23[0] f* *(rax_6 + 0x18)
            result_8 = *(rax_6 + 0x10)
            result_8[0] = result_8[0] f* *(rsi + 0x28)
            result_20 = result_10
            result_20[0].d = result_20[0].d f* result_41[0]
            result_23[0] = result_23[0] * result_40[0]
            result_11 = result_8
            (&var_18c)[sx.q(i_8)] = i_8
            result_11[0] = result_11[0] * result_41[0]
            result_23[0] = result_23[0] f- result_20[0].d
            result_10[0] = result_10[0] * result_35[0]
            result_20 = result_23
            result_20[0].d = result_20[0].d f* result_35[0]
            result_23[0] = result_23[0] + result_23[0]
            result_11[0] = result_11[0] f- result_20[0].d
            result_20 = result_8
            result_20[0].d = result_20[0].d f* result_40[0]
            result_23[0] = result_23[0] * result_42[0]
            result_10[0] = result_10[0] f- result_20[0].d
            result_11[0] = result_11[0] + result_11[0]
            result_23[0] = result_23[0] + result_8[0]
            result_10[0] = result_10[0] + result_10[0]
            result_20 = result_11
            result_20[0].d = result_20[0].d f* result_41[0]
            result_5 = result_10
            result_5[0].d = result_5[0].d f* result_40[0]
            result_22 = result_23
            result_22[0] = result_22[0] * result_41[0]
            result_23[0] = result_23[0] * result_40[0]
            result_5[0].d = result_5[0].d f- result_20[0].d
            result_20 = result_10
            result_20[0].d = result_20[0].d f* result_35[0]
            result_5[0].d = result_5[0].d f+ result_23[0]
            result_11[0] = result_11[0] * result_35[0]
            result_8 = result_6
            result_22[0] = result_22[0] f- result_20[0].d
            result_20 = result_42
            result_11[0] = result_11[0] f* result_20[0].d
            result_11[0] = result_11[0] - result_23[0]
            result_10[0] = result_10[0] f* result_20[0].d
            result_20 = result_25
            result_11[0] = result_11[0] + result_10[0]
            result_20[0].d = result_20[0].d f- result_5[0].d
            result_10[0] = result_10[0] + result_23[0]
            result_23 = result_38
            result_22[0] = result_22[0] + result_11[0]
            int32_t var_280_1 = result_20[0].d
            result_11[0] = result_11[0] + result_10[0]
            result_9 = result_14
            result_24[0] = result_24[0] - result_22[0]
            result_23[0] = result_23[0] - result_11[0]
            float var_1d4_1 = result_11[0]
            result_11 = result_15
            result_8[0] = result_8[0] - result_24[0]
            var_314 = result_24[0]
            result_11[0] = result_11[0] f- result_20[0].d
            result_9[0] = result_9[0] - result_23[0]
            float var_324_1 = result_8[0]
            result_28 = result_11[0]
            var_320 = result_9[0]
            int64_t i_9 = sx.q(i_7)
            result_21 = result_33
            result_20 = _mm_unpacklo_ps(result_25, result_24[0].q)
            int64_t rdx_1 = i_9 * 3
            result_11[0] = result_11[0] * result_21[0]
            i_6 = i_9.d
            *(&result_18 + (rdx_1 << 2)) = result_20.q
            result_20 = _mm_unpacklo_ps(result_5, result_22[0].q)
            result_22 = result_34
            result_8[0] = result_8[0] * result_22[0]
            (&result_44)[rdx_1] = var_2f0_1
            result_9[0] = result_9[0] f* result_26.d
            result_11[0] = result_11[0] + result_8[0]
            *(&result_19 + (rdx_1 << 2)) = result_20.q
            (&result_3)[rdx_1] = var_1d4_1
            result_11[0] = result_11[0] + result_9[0]
            int128_t var_158_1
            int32_t result_36
            
            if (result_11[0] f<= result_27[0])
                i_9 = zx.q(i_9.d + 1)
                *(&var_168 + (rdx_1 << 2)) = result_28.q
                *(&var_168:8 + (rdx_1 << 2)) = var_320
                i_6 = i_9.d
                i_7 = i_9.d
            label_141672262:
                result_26 = result_13
                result_5 = result_6
                result_24 = result_14
                
                if (r8.b != 0 && not(result_11[0] f< result_12[0].d))
                    result_11[0] = result_11[0] * result_11[0]
                    result_11[0] = result_11[0] + 9.99999997e-07f
                    rdi.b = result_11[0] f>= result_26.d
            else
                result_5 = (*arg4)[1]
                result_9 = *arg4
                result_24 = (*arg4)[2]
                result_9[0] = result_9[0] * result_21[0]
                result_5[0].d = result_5[0].d f* result_22[0]
                result_24[0] = result_24[0] f* result_26.d
                result_9[0] = result_9[0] f+ result_5[0].d
                result_9[0] = result_9[0] + result_24[0]
                
                if (result_9[0] f>= result_12[0].d)
                    result.b = 0
                    goto label_141672d4d
                
                result_20 = result_11
                result_20[0].d = result_20[0].d f- result_27[0]
                result_20[0].d = result_20[0].d f/ result_9[0]
                zmm14[0] = zmm14[0] f- result_20[0].d
                
                if (zmm14[0] <= zmm14[0])
                    goto label_141672262
                
                if (zmm14[0] f> arg5)
                    result.b = 0
                    goto label_141672d4d
                
                result_7 = zx.o(var_2b8.q)
                result_11 = result_9
                result_20 = result_7
                result_20 = _mm_shuffle_ps(result_20, result_20, 0x55)
                i_9 = zx.q(i_9.d + 1)
                result_17 = result_7.q
                result_11[0] = result_11[0] * zmm14[0]
                result_1 = result_2
                result_5[0].d = result_5[0].d f* zmm14[0]
                i_6 = i_9.d
                result_11[0] = result_11[0] f+ var_338[0].d
                result_24[0] = result_24[0] * zmm14[0]
                i_7 = i_9.d
                result_5[0].d = result_5[0].d f+ var_338[0]:4.d
                var_2e0 = result_26.d
                result_24[0] = result_24[0] f+ var_338[1].d
                result_26 = 0x7f7fffff
                result_11[0] = result_11[0] - result_7[0]
                result_15 = result_11[0]
                result_7 = var_168:4.d
                result_10 = result_5
                result_10[0] = result_10[0] f- result_20[0].d
                result_6 = result_5[0].d
                result_20 = var_168.d
                result_24[0] = result_24[0] - result_1
                result_20[0].d = result_20[0].d f+ result_11[0]
                result_14 = result_24[0]
                var_2b8 = result_11[0]
                result_7[0] = result_7[0] + result_10[0]
                int32_t var_2b4_1 = result_5[0].d
                result_2 = result_24[0]
                var_2e8.d = result_21[0]
                var_168.d = result_20[0].d
                result_20 = var_168:8.d
                result_20[0].d = result_20[0].d f+ result_24[0]
                var_168:4.d = result_7[0]
                result_7 = var_168:0xc.d
                result_7[0] = result_7[0] + result_11[0]
                var_2e8:4.d = result_22[0]
                result_13 = 3.40282347e+38f
                var_358 = 0
                var_168:8.d = result_20[0].d
                result_20 = var_158_1.d
                var_168:0xc.d = result_7[0]
                result_20[0].d = result_20[0].d f+ result_10[0]
                result_7 = var_158_1:4.d
                result_7[0] = result_7[0] + result_24[0]
                var_158_1.d = result_20[0].d
                result_20 = var_158_1:8.d
                var_158_1:4.d = result_7[0]
                result_20[0].d = result_20[0].d f+ result_11[0]
                result_7 = var_158_1:0xc.d
                result_7[0] = result_7[0] + result_10[0]
                var_158_1:8.d = result_20[0].d
                result_20 = result_36
                result_20[0].d = result_20[0].d f+ result_24[0]
                var_158_1:0xc.d = result_7[0]
                result_8 = result_5
                result_11[0] = result_11[0] f- var_280_1
                result_8[0] = result_8[0] - var_314
                result_36 = result_20[0].d
                result_20 = result_24
                result_20[0].d = result_20[0].d f- result_23[0]
                *(&var_168 + (rdx_1 << 2)) = (_mm_unpacklo_ps(result_11, result_8[0].q)).q
                *(&var_168:8 + (rdx_1 << 2)) = result_20[0].d
            
            if (rdi.b != 0)
                int64_t* rax_20
                rax_20, result_11, result_5, result_24, result_12, zmm14, result_27 =
                    sub_1416f4530(&var_248, &var_168, &i_7, &var_178, &result_18, &result_19)
                r10 = var_2c0
                result_26 = 0x3eb0c6f7a0b5ed8d
                result_7 = zx.o(*rax_20)
                result_20 = result_7
                result_25 = rax_20[1].d
                result_22 = result_7.d
                result_7 = result_13
                i_6 = i_7
                result_23 = _mm_shuffle_ps(result_20, result_20, 0x55)
                result = zx.d(arg9)
            label_1416726c2:
                
                if (rdi.b == 0)
                    goto label_1416727e2
                
                rdx = var_318
                arg4 = var_270
            else
                int32_t result_30
                
                if (i_9.d == 1)
                    int64_t rax_16 = sx.q(var_18c)
                    int64_t rcx_6 = rax_16 * 3
                    *(&var_178 + (rax_16 << 2)) = 0x3f800000
                    result_20 = zx.o(*(&var_168 + (rcx_6 << 2)))
                    result_30 = *(&var_168:8 + (rcx_6 << 2))
                else
                    uint64_t* rax_13
                    
                    if (i_9.d == 2)
                        void var_1a0
                        rax_13, result_11, result_5 =
                            sub_1416e69d0(&var_1a0, &var_168, &var_18c, &i_7, &var_178)
                    label_1416722ec:
                        result_20 = zx.o(*rax_13)
                        r10 = var_2c0
                        result_30 = rax_13[1].d
                        i_6 = i_7
                    else
                        if (i_9.d == 3)
                            uint64_t var_1ac
                            rax_13, result_11, result_5, result_24, result_12, result_26, zmm14, 
                                result_27 = sub_1416fa750(&var_1ac, &var_168, &i_7, &var_178)
                            goto label_1416722ec
                        
                        if (i_9.d == 4)
                            uint64_t var_1b8
                            rax_13, result_11, result_5, result_24, result_12, result_26, zmm14, 
                                result_27 = sub_1416f9c90(&var_1b8, &var_168, &i_7, &var_178)
                            goto label_1416722ec
                        
                        int32_t var_308_1 = 0
                        result_20 = _mm_unpacklo_ps(result_12, result_12[0])
                        result_30 = 0
                
                int32_t var_180
                int64_t rdi_1 = sx.q(var_180)
                int64_t rbx_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r11_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                result_25 = result_30
                int64_t rsi_1 = rdi_1 * 3
                int64_t r12_1 = rbx_1 * 3
                r15 = r11_1 * 3
                int64_t r14_1 = r9_3 * 3
                r8 = *(&var_168:8 + (r12_1 << 2))
                int64_t result_29 = result_20.q
                result_22 = result_29.d
                result_23 = result_29:4.d
                var_168:0xc.q = *(&var_168 + (r15 << 2))
                result_36:4.q = *(&var_168 + (rsi_1 << 2))
                var_158_1:8.q = *(&var_168 + (r14_1 << 2))
                var_168.q = *(&var_168 + (r12_1 << 2))
                int32_t result_45 = (&result_44)[r12_1]
                var_178[1].d = (*(&var_178 + (r9_3 << 2)))[0]
                var_178[0].d = (*(&var_178 + (rbx_1 << 2)))[0].d
                var_178[0]:4.d = (*(&var_178 + (r11_1 << 2)))[0]
                var_178[1]:4.d = (*(&var_178 + (rdi_1 << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r15 << 2))
                int32_t rdx_6 = (&result_44)[r15]
                result_36 = *(&var_168:8 + (r14_1 << 2))
                int32_t rcx_8 = (&result_44)[r14_1]
                result_36 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rax_18 = (&result_44)[rsi_1]
                var_12c_1.q = *(&result_18 + (r15 << 2))
                result_8 = zx.o(*(&result_19 + (r15 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_18 + (rsi_1 << 2))
                result_20 = zx.o(*(&result_19 + (rsi_1 << 2)))
                var_12c_1:0xc.q = *(&result_18 + (r14_1 << 2))
                result_7 = zx.o(*(&result_19 + (r14_1 << 2)))
                result_18 = *(&result_18 + (r12_1 << 2))
                result_9 = zx.o(*(&result_19 + (r12_1 << 2)))
                result_44 = result_45
                var_12c_1:8.d = rdx_6
                int32_t rdx_7 = (&result_3)[r15]
                var_11c_1:4.d = rcx_8
                int32_t rcx_9 = (&result_3)[r14_1]
                int32_t var_10c_1 = rax_18
                int32_t rax_19 = (&result_3)[rsi_1]
                var_fc_1.q = result_8.q
                int128_t var_ec_1
                var_ec_1:8.q = result_20.q
                var_18c.o = data_142e11d00
                result_3 = (&result_3)[r12_1]
                result_23[0] = result_23[0] * result_23[0]
                result_20 = result_22
                var_168:8.d = r8
                var_fc_1:0xc.q = result_7.q
                result_20[0].d = result_20[0].d f* result_22[0]
                var_fc_1:8.d = rdx_7
                result_25[0] = result_25[0] * result_25[0]
                var_ec_1:4.d = rcx_9
                result_23[0] = result_23[0] f+ result_20[0].d
                result_19 = result_9.q
                result_9 = result_16
                int32_t var_dc_1 = rax_19
                result_23[0] = result_23[0] + result_25[0]
                rdi.b = result_9[0] > result_23[0]
                result = zx.d(arg9)
                result_7 = result_23
                result_13 = result_23[0]
                r15.b = result_23[0] f>= result_26.d
                
                if (result.b == 0)
                    result_26 = 0x3eb0c6f7a0b5ed8d
                    goto label_1416726c2
                
                if (rdi.b != 0)
                    result_26 = 0x3eb0c6f7a0b5ed8d
                    
                    if (zmm14[0] f!= result_12[0].d)
                    label_1416726bf:
                        result_7 = result_23
                        goto label_1416726c2
                    
                    if (_mm_cvtps_pd(result_23[0].q)[0] f<= result_26.q)
                        goto label_1416726bf
                    
                    if (_mm_cvtps_pd(result_9[0].q)[0] f<= result_26.q)
                        goto label_1416726bf
                    
                    result_7 = result_23
                    
                    if (i_6 s>= 4)
                        goto label_1416726c2
                    
                    r8.b = 1
                    rdi.b = 0
                    var_358 = 1
                    goto label_1416727e8
                
                result_7 = result_23
            label_1416727e2:
                r8 = zx.d(var_358)
            label_1416727e8:
                result_26 = 0x3eb0c6f7a0b5ed8d
                rdx = var_318
                arg4 = var_270
                
                if (r15.b == 0)
                    i_8 = i_6
                    rsi = arg2
                    continue
        
        result_8 = 0x7f7fffff
        r12 = arg3
        break

bool cond:2_1 = zmm14[0] f<= result_12[0].d
int32_t* rdi_2 = arg6
*rdi_2 = zmm14[0]

if (not(cond:2_1))
    result_10 = result_12
    result_9 = result_12
    *arg8 = var_2e8
    (*arg8)[2] = var_2e0
    uint64_t i_3 = zx.q(i_6)
    
    if (i_3.d s> 0)
        int128_t* rdx_9 = &var_178
        float* rcx_11 = &result_3
        uint64_t i
        
        do
            result_8 = *rdx_9
            rdx_9 += 4
            result_20 = result_8
            result_20[0].d = result_20[0].d f* rcx_11[-2]
            result_8[0] = result_8[0] * rcx_11[-1]
            result_8[0] = result_8[0] * *rcx_11
            rcx_11 = &rcx_11[3]
            result_12[0].d = result_12[0].d f+ result_20[0].d
            result_10[0] = result_10[0] + result_8[0]
            result_9[0] = result_9[0] + result_8[0]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    result_20 = result_27
    result_20[0].d = result_20[0].d f* *arg8
    zmm14[0] = zmm14[0] * *arg4
    result_12[0].d = result_12[0].d f- result_20[0].d
    result_20 = result_27
    result_20[0].d = result_20[0].d f* (*arg8)[1]
    zmm14[0] = zmm14[0] f+ var_338[0].d
    result_27[0] = result_27[0] f* (*arg8)[2]
    result_10[0] = result_10[0] f- result_20[0].d
    result_12[0].d = result_12[0].d f+ zmm14[0]
    zmm14[0] = zmm14[0] * (*arg4)[1]
    result_9[0] = result_9[0] f- result_27[0]
    zmm14[0] = zmm14[0] * (*arg4)[2]
    zmm14[0] = zmm14[0] f+ var_338[0]:4.d
    zmm14[0] = zmm14[0] f+ var_338[1].d
    result_10[0] = result_10[0] + zmm14[0]
    result_9[0] = result_9[0] + zmm14[0]
    *arg7 = (_mm_unpacklo_ps(result_12, result_10[0].q)).q
    arg7[1].d = result_9[0]
else if (result.b != 0)
    double temp0_19[0x2]
    
    if (not(result_27[0] f<= result_12[0].d))
        temp0_19 = _mm_cvtps_pd(result_7[0].q)
    
    if (result_27[0] f<= result_12[0].d || temp0_19[0] f<= result_26.q
            || result_7[0] >= result_8[0])
        var_178[0] = 0
        var_178[1] = 0
        var_338[0] = 0
        var_338[1] = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_338[1]:4.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        float rax_34
        float result_46[0x4]
        
        if (var_318 == 0)
            int32_t var_308_5 = 0x3f800000
            rax_34 = 1f
            result_46 = _mm_unpacklo_ps(result_12, result_12[0])
        label_141672ce9:
            result_8 = result_18:4.d
            result_7 = result_18.d
            *rdi_2 = (result_27 ^ data_142d3f780)[0]
            *arg8 = result_46.q
            result_46 = result_44
            (*arg8)[2] = rax_34
            float temp0_27[0x4] = _mm_unpacklo_ps(result_7, result_8[0].q)
            result = result_46[0]
            *arg7 = temp0_27.q
        else
            if (i_6 s> 0)
                uint64_t i_5 = zx.q(i_6)
                uint64_t i_1
                
                do
                    int64_t rdi_3 = sx.q(var_178[1].d)
                    int32_t rax_28 = (rdi_3 + 1).d
                    var_178[1].d = rax_28
                    
                    if (rax_28 s> var_178[1]:4.d)
                        sub_14083a7e0(&var_178)
                    
                    double rcx_16 = var_178[0]
                    int64_t rdx_11 = rdi_3 * 3
                    result_46 = zx.o(*(&result_18 + r13))
                    result_7 = result_5
                    int32_t rax_29 = *(&result_44 + r13)
                    result_7[0] = result_7[0] f+ *(&result_19:4 + r13)
                    *(rcx_16 i+ (rdx_11 << 2)) = result_46.q
                    result_11[0] = result_11[0] f+ *(&result_19 + r13)
                    *(rcx_16 i+ (rdx_11 << 2) + 8) = rax_29
                    int64_t rdi_4 = sx.q(var_338[1].d)
                    float var_324_2 = result_7[0]
                    result_28 = result_11[0]
                    result_24[0] = result_24[0] f+ *(&result_3 + r13)
                    int32_t rax_30 = (rdi_4 + 1).d
                    var_338[1].d = rax_30
                    var_320 = result_24[0]
                    
                    if (rax_30 s> var_338[1]:4.d)
                        sub_14083a7e0(&var_338)
                    
                    double rcx_18 = var_338[0]
                    int64_t rdx_13 = rdi_4 * 3
                    r13 += 0xc
                    *(rcx_18 i+ (rdx_13 << 2)) = result_28.q
                    *(rcx_18 i+ (rdx_13 << 2) + 8) = var_320
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_2 = arg6
            
            int128_t* var_180_1 = r12
            i_7.q = &var_1c8
            void* var_188_1 = arg2
            int32_t rax_33
            rax_33, result_27 = sub_1415b1c50(&var_178, &var_338, &var_2c0, &i_7, result_27, 
                &var_314, &result_28, &result_17, &var_248)
            result_46 = zx.o(result_28.q)
            rax_34 = var_320
            
            if (rax_33 == 2)
                goto label_141672ce9
            
            *arg8 = result_46.q
            result_46 = var_314 ^ data_142d3f780
            (*arg8)[2] = rax_34
            result_46[0] = result_46[0] f- result_27[0]
            result = result_1
            *rdi_2 = result_46[0]
            *arg7 = result_17
        double rcx_20 = var_338[0]
        arg7[1].d = result
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        double rcx_21 = var_178[0]
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    else
        result_9 = result_12
        result_10 = result_12
        *arg8 = var_2e8
        result_21 = result_12
        (*arg8)[2] = var_2e0
        result_24 = result_12
        result_25 = result_12
        result_5 = result_12
        
        if (rdx == 0)
            result_7 = zx.o(result_18)
            result_8 = zx.o(result_19)
            result_20 = result_7
            int32_t result_39 = result_44
            result_10 = _mm_shuffle_ps(result_20, result_20, 0x55)
            float result_4 = result_3
            result_20 = result_8
            result_21 = result_39
            result_25 = _mm_shuffle_ps(result_20, result_20, 0x55)
            result_5 = result_4
            result_9 = result_7.d
            result_28.q = result_8.q
            result_24 = result_28
        else if (i_6 s> 0)
            int128_t* rcx_12 = &var_178
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_2
            
            do
                result_8 = *rcx_12
                rcx_12 += 4
                result_20 = result_8
                result_20[0].d = result_20[0].d f* *(&result_18 + r13)
                result_8[0] = result_8[0] f* *(&result_18:4 + r13)
                result_9[0] = result_9[0] f+ result_20[0].d
                result_20 = result_8
                result_20[0].d = result_20[0].d f* *(&result_44 + r13)
                result_10[0] = result_10[0] + result_8[0]
                result_8[0] = result_8[0] f* *(&result_19 + r13)
                result_21[0] = result_21[0] f+ result_20[0].d
                result_20 = result_8
                result_20[0].d = result_20[0].d f* *(&result_19:4 + r13)
                result_8[0] = result_8[0] f* *(&result_3 + r13)
                result_24[0] = result_24[0] + result_8[0]
                r13 += 0xc
                result_25[0] = result_25[0] f+ result_20[0].d
                result_5[0].d = result_5[0].d f+ result_8[0]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        result_22 = var_338[1].d
        zmm14 = var_338[0]:4.d
        result_22[0] = result_22[0] f+ result_5[0].d
        result_26 = var_338[0].d
        result_24[0] = result_24[0] f+ result_26.d
        zmm14[0] = zmm14[0] + result_25[0]
        result_22[0] = result_22[0] - result_21[0]
        result_21 = 0x3f000000
        result_24[0] = result_24[0] - result_9[0]
        zmm14[0] = zmm14[0] - result_10[0]
        result_22[0] = result_22[0] * result_22[0]
        result_20 = result_24
        result_20[0].d = result_20[0].d f* result_24[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm14[0] = zmm14[0] f+ result_20[0].d
        zmm14[0] = zmm14[0] + result_22[0]
        float result_43[0x4] = _mm_rsqrt_ss(zmm14[0], zmm14[0])
        result_8 = 0x3f000000
        zmm14[0] = zmm14[0] * 0.5f
        result_20 = result_43
        result_20[0].d = result_20[0].d f* result_43[0]
        zmm14[0] = zmm14[0] f* result_20[0].d
        result_20 = result_43
        result_8[0] = 0.5f - zmm14[0]
        result_20[0].d = result_20[0].d f* result_8[0]
        result_43[0] = result_43[0] f+ result_20[0].d
        result_20 = result_43
        result_43[0] = result_43[0] * result_43[0]
        zmm14[0] = zmm14[0] * result_43[0]
        result_7 = result_27
        result_21[0] = 0.5f - zmm14[0]
        result_20[0].d = result_20[0].d f* result_21[0]
        result_43[0] = result_43[0] f+ result_20[0].d
        result_24[0] = result_24[0] * result_43[0]
        zmm14[0] = zmm14[0] * result_43[0]
        result_22[0] = result_22[0] * result_43[0]
        result_20 = _mm_unpacklo_ps(result_24, zmm14[0].q)
        *arg8 = result_20.q
        result_20 = __sqrtss_xmmss_memss(result_20[0].d, result_13)
        float var_308_3 = result_22[0]
        result_7[0] = result_7[0] f- result_20[0].d
        (*arg8)[2] = var_308_3
        
        if (not(result_7[0] f< result_12[0].d))
            result_12 = __minss_xmmss_memss(result_7[0].d, 0x7f7fffff)
        
        result_7 = *arg8
        result_8 = (*arg8)[1]
        result_20 = result_7
        result_9 = (*arg8)[2]
        result_20[0].d = result_20[0].d f* result_27[0]
        result_24[0] = result_24[0] f- result_20[0].d
        result_12[0].d = result_12[0].d f* result_7[0]
        result_8[0] = result_8[0] f* result_27[0]
        result_24[0] = result_24[0] f+ result_26.d
        result_25[0] = result_25[0] - result_8[0]
        result_9[0] = result_9[0] f* result_27[0]
        result_24[0] = result_24[0] f+ result_12[0].d
        result_12[0].d = result_12[0].d f* result_8[0]
        result_5[0].d = result_5[0].d f- result_9[0]
        result_25[0] = result_25[0] + zmm14[0]
        result_5[0].d = result_5[0].d f+ var_338[1].d
        result_25[0] = result_25[0] f+ result_12[0].d
        result_20 = result_12
        result_12 ^= data_142d3f780
        result_20[0].d = result_20[0].d f* result_9[0]
        result_5[0].d = result_5[0].d f+ result_20[0].d
        *arg7 = (_mm_unpacklo_ps(result_24, result_25[0].q)).q
        arg7[1].d = result_5[0].d
        *rdi_2 = result_12[0].d

result.b = 1
label_141672d4d:
__security_check_cookie(rax_1 ^ &var_398)
return result

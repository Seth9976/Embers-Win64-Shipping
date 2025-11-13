// 函数: sub_14164dd00
// 地址: 0x14164dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int64_t r12 = 0
float result_9[0x4] = zx.o(0)
float (* r10)[0x4] = arg4
void* r15 = arg2
int32_t r9 = 0
float zmm0[0x4] = *(*(arg1 + 0x10) + 0x2c)
int32_t var_30c = 0
uint32_t result_50[0x4]

if (zmm0[0] == 0f)
    result_50 = zx.o(0)
else
    result_50 = __andps_xmmxud_memxud(*(arg1 + 0x28), data_142d3f770)
    result_50[0] = result_50[0] f* zmm0[0]

float result_13[0x4] = *arg3
float result_8[0x4] = *(arg2 + 0x1c)
zmm0 = arg3[1]
float result_6[0x4] = result_8
result_6[0] = result_6[0] f+ result_50[0]
float result_19 = result_8[0]
float var_358[0x4] = zmm0
result_8 = result_13 ^ 0x80000000
int32_t var_190 = 0
float temp0_2[0x4] = _mm_shuffle_ps(result_8, result_8, 0xe1)
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
float var_178[0x4] = data_142d3f7e0
void* var_288 = arg1
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float temp0_3[0x4] = _mm_shuffle_ps(result_13, result_13, 0x55)
result_6[0] = result_6[0] * result_6[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
double temp0_4[0x2] = _mm_cvtps_pd(result_6[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(result_13, result_13, 0xaa)
temp0_4[0] = temp0_4[0] + 9.9999999999999995e-07
float result_7 = result_6[0]
temp0_2[0] = (temp0_3 ^ 0x80000000)[0]
float result_21[0x4] = result_13
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
float temp0_7[0x4] = _mm_cvtpd_ps(temp0_4)
float result_18 = temp0_7[0]
temp0_6[0] = (temp0_5 ^ 0x80000000)[0].d
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
float temp0_9[0x4] = _mm_shuffle_ps(result_13, result_13, 0xff)
temp0_8[0] = temp0_9[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
float var_278[0x4] = temp0_10
float var_1c8[0x4] = temp0_10
int64_t result_45
sub_14170aa90(&var_288, &result_45, arg10)
int64_t result_36 = result_45
float result_40[0x4] = zx.o(*(r15 + 0x10))
uint64_t result_43 = result_40.q
int32_t result_46
int32_t result_37 = result_46
float result_29 = *(r15 + 0x18)
uint32_t result_27[0x4] = result_29
float temp0_11[0x4] = _mm_shuffle_ps(result_40, result_40, 0x55)
result_27[0] = result_27[0] f* temp0_3[0]
temp0_11[0] = temp0_11[0] * temp0_5[0]
float result_25[0x4] = result_43.d
result_27[0] = result_27[0] f- temp0_11[0]
float result_28[0x4] = result_25
int64_t var_320 = 0
result_28[0] = result_28[0] * temp0_5[0]
float var_318 = 1f
temp0_11[0] = temp0_11[0] * result_13[0]
result_40 = result_27
result_40[0] = result_40[0] * result_13[0]
result_27[0] = result_27[0] f+ result_27[0]
result_28[0] = result_28[0] - result_40[0]
result_25[0] = result_25[0] * temp0_3[0]
uint128_t result_24
result_24.d = result_27.d f* temp0_9[0]
temp0_11[0] = temp0_11[0] - result_25[0]
result_28[0] = result_28[0] + result_28[0]
result_24.d = result_24.d f+ result_25[0]
result_25 = result_27
result_25[0] = result_25[0] * temp0_5[0]
temp0_11[0] = temp0_11[0] + temp0_11[0]
result_27[0] = result_27[0] f* temp0_3[0]
result_28[0] = result_28[0] * temp0_5[0]
temp0_11[0] = temp0_11[0] * temp0_3[0]
float zmm13[0x4] = zx.o(0)
temp0_11[0] = temp0_11[0] - result_28[0]
temp0_11[0] = temp0_11[0] * result_13[0]
result_25[0] = result_25[0] - temp0_11[0]
temp0_11[0] = temp0_11[0] * temp0_9[0]
temp0_11[0] = temp0_11[0] f+ result_24.d
result_28[0] = result_28[0] * result_13[0]
result_24.d = result_28.d f* temp0_9[0]
temp0_11[0] = temp0_11[0] f+ result_27[0]
result_28[0] = result_28[0] f- result_27[0]
result_24.d = result_24.d f+ temp0_11[0]
float result_11[0x4] = var_358[2]
float result_16 = result_11[0]
result_13 = result_11
float result_2 = result_11[0]
result_28[0] = result_28[0] + temp0_11[0]
float result_10[0x4] = var_358[1]
float result_15 = result_10[0]
result_27 = result_10
result_25[0] = result_25[0] f+ result_24.d
float var_2d4 = result_10[0]
result_24 = var_358[0]
float result_42[0x4] = result_24
uint32_t result_31 = result_24.d
float result_1 = result_28[0]
uint32_t result_26[0x4] = result_24
int64_t result_22 = (_mm_unpacklo_ps(temp0_11, result_25[0].q)).q
result_40 = result_45.d
result_40[0] = result_40[0] - temp0_11[0]
uint32_t var_2d8 = result_24.d
float result_12[0x4] = result_10
float result_3 = result_1
result_42[0] = result_42[0] - result_40[0]
result_40 = result_45:4.d
result_40[0] = result_40[0] - result_25[0]
result_12[0] = result_12[0] - result_40[0]
result_40 = result_46
result_40[0] = result_40[0] - result_28[0]
result_28 = result_11
result_28[0] = result_28[0] - result_40[0]
result_12[0] = result_12[0] * result_12[0]
result_42[0] = result_42[0] * result_42[0]
result_24.d = result_28.d f* result_28[0]
result_12[0] = result_12[0] + result_42[0]
result_12[0] = result_12[0] f+ result_24.d
uint32_t result = zx.d(arg9)
float result_5

if (result_12[0] >= temp0_7[0] || (result.b != 0 && result_12[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_24 = 0x7f7fffff
int64_t rsi
rsi.b = 0
float result_17 = 3.40282347e+38f
int32_t rcx_1 = 0
char var_378 = result_5.b
uint32_t r8_1 = zx.d(result_5.b)
int32_t var_348 = 0
float result_14[0x4] = 0x7f7fffff
int64_t result_33

if (result_5.b == 0)
    while (true)
        int32_t rax_7 = rcx_1
        rcx_1 += 1
        var_348 = rcx_1
        
        if (rax_7 s>= 0x20)
            result_27 = result_15
            result_13 = result_16
            result = zx.d(arg9)
        else
            result_11 = 0x3f000000
            void* rax_8 = var_288
            result_42[0] = result_42[0] * result_42[0]
            result_12[0] = result_12[0] * result_12[0]
            void* rcx_2 = *(rax_8 + 0x10)
            result_27 = *(rax_8 + 0x2c)
            result_26 = *(rax_8 + 0x30)
            result_42[0] = result_42[0] + result_12[0]
            result_24.d = result_28.d f* result_28[0]
            result_42[0] = result_42[0] f+ result_24.d
            float temp0_13[0x4] = _mm_rsqrt_ss(result_42[0], result_42[0])
            result_25 = 0x3f000000
            result_42[0] = result_42[0] * 0.5f
            temp0_13[0] = temp0_13[0] * temp0_13[0]
            result_24.d = result_42.d f* temp0_13[0]
            result_25[0] = 0.5f f- result_24.d
            temp0_13[0] = temp0_13[0] * result_25[0]
            temp0_13[0] = temp0_13[0] + temp0_13[0]
            result_24.d = temp0_13.d f* temp0_13[0]
            result_42[0] = result_42[0] f* result_24.d
            result_11[0] = 0.5f - result_42[0]
            result_10 = *(rcx_2 + 0x20)
            temp0_13[0] = temp0_13[0] * result_11[0]
            result_11 = *(rcx_2 + 0x1c)
            temp0_13[0] = temp0_13[0] + temp0_13[0]
            result_40 = result_27
            result_42[0] = result_42[0] * temp0_13[0]
            result_24.d = temp0_13.d f* result_12[0]
            result_12 = *(rcx_2 + 0x24)
            float var_300_1 = temp0_13[0]
            result_40[0] = result_40[0] f* result_24.d
            int32_t result_20 = result_24.d
            temp0_13[0] = temp0_13[0] * result_28[0]
            result_28 = *(rax_8 + 0x28)
            result_40[0] = result_40[0] * result_10[0]
            result_28[0] = result_28[0] * result_42[0]
            result_24.d = result_26.d f* temp0_13[0]
            result_28[0] = result_28[0] * result_11[0]
            result_24.d = result_24.d f* result_12[0]
            result_28[0] = result_28[0] + result_40[0]
            result_28[0] = result_28[0] f+ result_24.d
            int32_t* rax_9
            int32_t r9_1
            
            if (result_28[0] < result_9[0])
                r9_1 = r9 | 2
                int32_t var_230_1 = *(rcx_2 + 0x18)
                int64_t var_238
                rax_9 = &var_238
                var_238 = *(rcx_2 + 0x10)
            else
                result_25 = *(rcx_2 + 0x28)
                float var_260
                rax_9 = &var_260
                result_25[0] = result_25[0] * result_11[0]
                r9_1 = r9 | 1
                result_24.d = result_25.d f* result_10[0]
                result_25[0] = result_25[0] f+ *(rcx_2 + 0x10)
                result_25[0] = result_25[0] * result_12[0]
                result_24.d = result_24.d f+ *(rcx_2 + 0x14)
                result_25[0] = result_25[0] f+ *(rcx_2 + 0x18)
                var_260 = result_25[0]
                int32_t var_25c_1 = result_24.d
                float var_258_1 = result_25[0]
            
            result_24 = zx.o(*rax_9)
            int32_t rax_11 = rax_9[2]
            result_40 = result_24
            result_13 = result_24
            int32_t rcx_4 = r9_1 & 0xfffffffd
            float temp0_14[0x4] = _mm_shuffle_ps(result_40, result_40, 0x55)
            result_27[0] = result_27[0] f* temp0_14[0]
            result_40 = zx.o(*(r15 + 0x10))
            result_26[0] = result_26[0] f* rax_11
            
            if ((r9_1.b & 2) == 0)
                rcx_4 = r9_1
            
            int32_t result_34 = result_40.d
            float temp0_15[0x4] = _mm_shuffle_ps(result_40, result_40, 0x55)
            uint32_t result_30 = result_27[0]
            temp0_15[0] = temp0_15[0] * temp0_5[0]
            int32_t rdx_2 = rcx_4 & 0xfffffffe
            result_24.d = temp0_15.d f* result_21[0]
            int32_t result_38 = *(r15 + 0x18)
            result_13[0] = result_13[0] * result_28[0]
            
            if ((rcx_4.b & 1) == 0)
                rdx_2 = rcx_4
            
            result_27 = result_38
            result_28 = result_27
            uint32_t result_35 = result_26[0]
            result_28[0] = result_28[0] * temp0_3[0]
            uint32_t var_2e0 = result_26[0]
            result_26 = result_34
            result_28[0] = result_28[0] - temp0_15[0]
            result_12 = result_26
            result_40 = result_27
            result_12[0] = result_12[0] * temp0_5[0]
            result_40[0] = result_40[0] * result_21[0]
            result_28[0] = result_28[0] + result_28[0]
            result_12[0] = result_12[0] - result_40[0]
            result_40 = result_26
            result_40[0] = result_40[0] * temp0_3[0]
            temp0_5[0] = temp0_5[0] * result_28[0]
            result_24.d = result_24.d f- result_40[0]
            result_12[0] = result_12[0] + result_12[0]
            result_24.d = result_24.d f+ result_24.d
            result_21[0] = result_21[0] * result_12[0]
            temp0_9[0] = temp0_9[0] * result_12[0]
            result_21[0] = result_21[0] f* result_24.d
            temp0_9[0] = temp0_9[0] + temp0_15[0]
            temp0_9[0] = temp0_9[0] f* result_24.d
            temp0_5[0] = temp0_5[0] - result_21[0]
            result_40 = temp0_3[0]
            result_40[0] = result_40[0] * result_28[0]
            temp0_9[0] = temp0_9[0] f+ result_27[0]
            result_27 = temp0_3[0]
            result_27[0] = result_27[0] f* result_24.d
            result_24 = temp0_9[0]
            result_21[0] = result_21[0] - result_40[0]
            result_40 = temp0_5[0]
            temp0_5[0] = temp0_5[0] + temp0_9[0]
            result_40[0] = result_40[0] * result_12[0]
            result_24.d = result_24.d f* result_28[0]
            result_27[0] = result_27[0] f- result_40[0]
            result_21[0] = result_21[0] + temp0_9[0]
            result_24.d = result_24.d f+ result_26[0]
            uint32_t var_1f0_1 = result_21[0]
            result_27[0] = result_27[0] f+ result_24.d
            result_13[0] = result_13[0] f- result_27[0]
            result_24 = result_30
            result_26 = result_31
            result_25 = result_24
            result_28 = result_35
            result_25[0] = result_25[0] - temp0_5[0]
            float var_300_2 = result_13[0]
            result_28[0] = result_28[0] - result_21[0]
            result_11 = result_15
            result_10 = result_26
            result_10[0] = result_10[0] - result_13[0]
            float temp0_16[0x4] = _mm_unpacklo_ps(result_13, result_24.q)
            result_11[0] = result_11[0] - result_25[0]
            float var_328_1 = result_25[0]
            result_25 = result_16
            (&var_18c)[sx.q(r13.d)] = r13.d
            result_25[0] = result_25[0] - result_28[0]
            r13 = sx.q(var_190)
            result_42[0] = result_42[0] * result_10[0]
            result_43.d = result_10[0]
            result_10 = result_20
            uint64_t rcx_6 = r13 * 3
            result_43:4.d = result_11[0]
            result_11[0] = result_11[0] * result_10[0]
            *(&result_36 + (rcx_6 << 2)) = temp0_16.q
            float temp0_17[0x4] = _mm_unpacklo_ps(result_27, temp0_5[0].q)
            result_6 = result_7
            result_42[0] = result_42[0] + result_11[0]
            *(&result_22 + (rcx_6 << 2)) = temp0_17.q
            temp0_13[0] = temp0_13[0] * result_25[0]
            (&result_37)[rcx_6] = var_2e0
            result_29 = result_25[0]
            result_42[0] = result_42[0] + temp0_13[0]
            (&result_3)[rcx_6] = var_1f0_1
            int128_t var_158_1
            float result_47
            
            if (result_42[0] <= result_6[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_6 << 2)) = result_43
                *(&var_168:8 + (rcx_6 << 2)) = result_29
                var_190 = r13.d
            label_14164e6ff:
                result_14 = result_17
                result_27 = result_15
                result_13 = result_16
                
                if (r8_1.b != 0 && not(result_42[0] < result_9[0]))
                    result_42[0] = result_42[0] * result_42[0]
                    result_42[0] = result_42[0] + 9.99999997e-07f
                    result_5.b = result_42[0] >= result_14[0]
            else
                result_27 = (*r10)[1]
                result_11 = *r10
                result_40 = result_27
                result_13 = (*r10)[2]
                result_11[0] = result_11[0] * result_42[0]
                result_40[0] = result_40[0] * result_10[0]
                result_24.d = result_13.d f* temp0_13[0]
                result_11[0] = result_11[0] + result_40[0]
                result_11[0] = result_11[0] f+ result_24.d
                
                if (result_11[0] >= result_9[0])
                    result.b = 0
                    goto label_14164f1b8
                
                result_42[0] = result_42[0] - result_6[0]
                result_42[0] = result_42[0] / result_11[0]
                zmm13[0] = zmm13[0] - result_42[0]
                
                if (zmm13[0] f<= zmm13.d)
                    goto label_14164e6ff
                
                if (zmm13[0] f> arg5)
                    result.b = 0
                    goto label_14164f1b8
                
                result_24 = zx.o(var_2d8.q)
                result_26 = result_11
                result_40 = result_24
                float temp0_18[0x4] = _mm_shuffle_ps(result_40, result_40, 0x55)
                r13 = zx.q(r13.d + 1)
                result_33 = result_24.q
                result_26[0] = result_26[0] f* zmm13[0]
                result_1 = result_2
                result_27[0] = result_27[0] f* zmm13[0]
                var_190 = r13.d
                result_26[0] = result_26[0] f+ var_358[0]
                result_13[0] = result_13[0] * zmm13[0]
                var_378 = 0
                result_27[0] = result_27[0] f+ var_358[1]
                var_320:4.d = result_10[0]
                result_13[0] = result_13[0] + var_358[2]
                result_10 = result_26
                var_318 = temp0_13[0]
                result_14 = 0x7f7fffff
                result_10[0] = result_10[0] f- result_24.d
                result_24 = var_168:4.d
                result_11 = result_27
                result_11[0] = result_11[0] - temp0_18[0]
                result_31 = result_26[0]
                result_40 = var_168.d
                result_13[0] = result_13[0] - result_1
                result_40[0] = result_40[0] + result_10[0]
                result_15 = result_27[0]
                result_16 = result_13[0]
                result_24.d = result_24.d f+ result_11[0]
                var_2d8 = result_26[0]
                uint32_t var_2d4_1 = result_27[0]
                result_2 = result_13[0]
                var_168.d = result_40[0]
                result_40 = var_168:8.d
                result_40[0] = result_40[0] + result_13[0]
                var_168:4.d = result_24.d
                result_24.d = var_168:0xc.d.d f+ result_10[0]
                var_320.d = result_42[0]
                result_17 = 3.40282347e+38f
                var_168:8.d = result_40[0]
                result_40 = var_158_1.d
                var_168:0xc.d = result_24.d
                result_40[0] = result_40[0] + result_11[0]
                result_24.d = var_158_1:4.d.d f+ result_13[0]
                var_158_1.d = result_40[0]
                result_40 = var_158_1:8.d
                var_158_1:4.d = result_24.d
                result_40[0] = result_40[0] + result_10[0]
                result_24.d = var_158_1:0xc.d.d f+ result_11[0]
                var_158_1:8.d = result_40[0]
                result_40 = result_47
                result_40[0] = result_40[0] + result_13[0]
                var_158_1:0xc.d = result_24.d
                result_25 = result_27
                result_24.d = result_26.d f- var_300_2
                result_25[0] = result_25[0] - var_328_1
                result_47 = result_40[0]
                result_13[0] = result_13[0] - result_28[0]
                *(&var_168 + (rcx_6 << 2)) = (_mm_unpacklo_ps(result_24, result_25[0].q)).q
                *(&var_168:8 + (rcx_6 << 2)) = result_13[0]
            
            if (result_5.b != 0)
                int64_t* rax_25
                rax_25, result_26, result_27, result_6, result_13, result_9, result_14, zmm13, 
                    result_50 =
                    sub_1416f4530(&var_278, &var_168, &var_190, &var_178, &result_36, &result_22)
                r13 = zx.q(var_190)
                result_24 = zx.o(*rax_25)
                result_40 = result_24
                result_28 = rax_25[1].d
                result = zx.d(arg9)
                uint32_t result_32 = result_24.d
                result_12 = _mm_shuffle_ps(result_40, result_40, 0x55)
                result_42 = result_32
            else
                int32_t rcx_7 = r13.d
                int32_t result_39
                
                if (rcx_7 == 1)
                    int64_t rax_22 = sx.q(var_18c)
                    int64_t rcx_14 = rax_22 * 3
                    var_178[rax_22] = 0x3f800000
                    result_40 = zx.o(*(&var_168 + (rcx_14 << 2)))
                    result_39 = *(&var_168:8 + (rcx_14 << 2))
                else if (rcx_7 == 2)
                    void var_1a0
                    uint64_t* rax_21
                    rax_21, result_26, result_27, result_6 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_40 = zx.o(*rax_21)
                    result_39 = rax_21[1].d
                else if (rcx_7 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_20
                    rax_20, result_26, result_27, result_6, result_13, result_9, result_14, zmm13, 
                        result_50 = sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_40 = zx.o(*rax_20)
                    result_39 = rax_20[1].d
                else if (rcx_7 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_19
                    rax_19, result_26, result_27, result_6, result_13, result_9, result_14, zmm13, 
                        result_50 = sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_40 = zx.o(*rax_19)
                    result_39 = rax_19[1].d
                else
                    int32_t var_338_1 = 0
                    result_40 = _mm_unpacklo_ps(result_9, result_9[0].q)
                    result_39 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_5 = sx.q(var_188:4.d)
                int64_t result_44 = result_40.q
                int64_t rbx_1 = rdi * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_5 * 3
                int32_t rdx_6 = *(&var_168:8 + (r14_1 << 2))
                float result_52 = *(&var_168:8 + (rsi << 2))
                r8_1 = *(&var_168:8 + (r15_1 << 2))
                result_42 = result_44.d
                result_12 = result_44:4.d
                int32_t result_51 = *(&var_168:8 + (rbx_1 << 2))
                result_28 = result_39
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_47:4.q = *(&var_168 + (rbx_1 << 2))
                result_40 = var_178[r11_1]
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                result_24 = var_178[r10_1]
                var_168.q = *(&var_168 + (r15_1 << 2))
                result_10 = var_178[rdi]
                int32_t result_49 = (&result_37)[r15_1]
                var_178[2] = var_178[r9_5][0]
                result_25 = zx.o(*(&result_36 + (r14_1 << 2)))
                var_178[0] = result_40[0]
                result_40 = zx.o(*(&result_36 + (rbx_1 << 2)))
                var_178[1] = result_24.d
                result_24 = zx.o(*(&result_36 + (rsi << 2)))
                var_178[3] = result_10[0]
                var_158_1:4.d = rdx_6
                int32_t rdx_7 = (&result_37)[r14_1]
                result_47 = result_52
                int32_t rcx_15 = (&result_37)[rsi]
                result_47 = result_51
                int32_t rax_23 = (&result_37)[rbx_1]
                var_12c_1.q = result_25.q
                result_25 = zx.o(*(&result_22 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = result_40.q
                result_40 = zx.o(*(&result_22 + (rbx_1 << 2)))
                var_12c_1:0xc.q = result_24.q
                result_24 = zx.o(*(&result_22 + (rsi << 2)))
                result_36 = *(&result_36 + (r15_1 << 2))
                result_10 = zx.o(*(&result_22 + (r15_1 << 2)))
                result_37 = result_49
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_7
                int32_t rdx_8 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_15
                int32_t rcx_16 = (&result_3)[rsi]
                int32_t var_10c_1 = rax_23
                int32_t rax_24 = (&result_3)[rbx_1]
                var_fc_1.q = result_25.q
                int128_t var_ec_1
                var_ec_1:8.q = result_40.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_1
                result_12[0] = result_12[0] * result_12[0]
                result_3 = result_5
                var_fc_1:0xc.q = result_24.q
                result_42[0] = result_42[0] * result_42[0]
                var_fc_1:8.d = rdx_8
                result_24.d = result_28.d f* result_28[0]
                var_ec_1:4.d = rcx_16
                result_12[0] = result_12[0] + result_42[0]
                result_22 = result_10.q
                result_10 = result_18
                int32_t var_dc_1 = rax_24
                result_12[0] = result_12[0] f+ result_24.d
                result = zx.d(arg9)
                result_5.b = result_10[0] > result_12[0]
                bool cond:7_1 = result_12[0] >= result_14[0]
                result_17 = result_12[0]
                result_14 = result_12
                rsi.b = cond:7_1
                
                if (result.b == 0)
                    goto label_14164eb43
                
                if (result_5.b == 0)
                    goto label_14164eb48
                
                if (not(zmm13[0] != result_9[0]))
                    result_24 = 0x3eb0c6f7a0b5ed8d
                    result_40 = _mm_cvtps_pd(result_12[0].q)
                    
                    if (not(result_40[0].q f<= result_24.q))
                        result_40 = _mm_cvtps_pd(result_10[0].q)
                        
                        if (not(result_40[0].q f<= result_24.q) && r13.d s< 4)
                            r8_1.b = 1
                            result_5.b = 0
                            var_378 = 1
                            goto label_14164eb4e
            
        label_14164eb43:
            
            if (result_5.b != 0)
                rcx_1 = var_348
                r10 = arg4
            else
            label_14164eb48:
                r8_1 = zx.d(var_378)
            label_14164eb4e:
                rcx_1 = var_348
                r10 = arg4
                
                if (rsi.b == 0)
                    r9 = rdx_2
                    r15 = arg2
                    continue
        
        result_24 = 0x7f7fffff
        break

bool cond:2_1 = zmm13[0] <= result_9[0]
float* rdi_1 = arg6
*rdi_1 = zmm13[0]

if (not(cond:2_1))
    *arg8 = var_320
    *(arg8 + 8) = var_318
    
    if (r13.d s> 0)
        float (* rcx_18)[0x4] = &var_178
        uint64_t i_4 = zx.q(r13.d)
        float* rax_28 = &result_3
        uint64_t i
        
        do
            result_25 = *rcx_18
            rcx_18 = &(*rcx_18)[1]
            result_25[0] = result_25[0] * rax_28[-2]
            result_24.d = result_25.d f* rax_28[-1]
            result_25[0] = result_25[0] * *rax_28
            rax_28 = &rax_28[3]
            result_9[0] = result_9[0] + result_25[0]
            result_9[0] = result_9[0] f+ result_24.d
            result_9[0] = result_9[0] + result_25[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_25 = result_19
    result_24.d = zmm13.d f* *r10
    result_25[0] = result_25[0] f* *arg8
    result_24.d = result_24.d f+ var_358[0]
    result_9[0] = result_9[0] - result_25[0]
    result_25[0] = result_25[0] f* *(arg8 + 4)
    result_25[0] = result_25[0] f* *(arg8 + 8)
    result_9[0] = result_9[0] f+ result_24.d
    result_24.d = zmm13.d f* (*r10)[1]
    result_9[0] = result_9[0] - result_25[0]
    zmm13[0] = zmm13[0] * (*r10)[2]
    result_9[0] = result_9[0] - result_25[0]
    result_24.d = result_24.d f+ var_358[1]
    zmm13[0] = zmm13[0] + var_358[2]
    result_9[0] = result_9[0] f+ result_24.d
    result_9[0] = result_9[0] + zmm13[0]
    *arg7 = (_mm_unpacklo_ps(result_9, result_9[0].q)).q
    arg7[1].d = result_9[0]
else if (result.b != 0)
    if (not(result_6[0] <= result_9[0]))
        result_40 = _mm_cvtps_pd(result_14[0].q)
    
    if (result_6[0] <= result_9[0] || result_40[0].q f<= 9.9999999999999995e-07
            || result_14[0] f>= result_24.d)
        var_178[0].q = 0
        var_178[2].q = 0
        var_358[0].q = 0
        var_358[2].q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_358[3] s< 8)
            sub_14083ad30(&var_358, 8)
        
        float result_41[0x4]
        float result_48
        
        if (var_348 == 0)
            int32_t var_338_5 = 0x3f800000
            result_48 = 1f
            result_41 = _mm_unpacklo_ps(result_9, result_9[0].q)
        label_14164f13f:
            *rdi_1 = (result_6 ^ data_142d3f780)[0]
            *arg8 = result_41.q
            result_41 = result_50
            *(arg8 + 8) = result_48
            result_41[0] = result_41[0] f* *arg8
            result_50[0] = result_50[0] f* *(arg8 + 8)
            result_24.d = result_50.d f* *(arg8 + 4)
            result_50[0] = result_50[0] f+ result_37
            result_41[0] = result_41[0] f+ result_36.d
            result_24.d = result_24.d f+ result_36:4.d
            result = result_50[0]
            result_41 = _mm_unpacklo_ps(result_41, result_24.q)
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
                    int32_t rax_33 = *(&result_37 + r12)
                    result_24.d = result_27.d f+ *(&result_22:4 + r12)
                    *(rcx_22 + (rdx_11 << 2)) = *(&result_36 + r12)
                    result_41 = result_26
                    result_41[0] = result_41[0] f+ *(&result_22 + r12)
                    *(rcx_22 + (rdx_11 << 2) + 8) = rax_33
                    int64_t rdi_3 = sx.q(var_358[2])
                    result_43:4.d = result_24.d
                    result_43.d = result_41[0]
                    result_13[0] = result_13[0] f+ *(&result_3 + r12)
                    int32_t rax_34 = (rdi_3 + 1).d
                    var_358[2] = rax_34
                    result_29 = result_13[0]
                    
                    if (rax_34 s> var_358[3])
                        sub_14083a7e0(&var_358)
                    
                    int64_t rcx_24 = var_358[0].q
                    int64_t rdx_13 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_24 + (rdx_13 << 2)) = result_43
                    *(rcx_24 + (rdx_13 << 2) + 8) = result_29
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_38
            rax_38, result_6, result_50 = sub_141559af0(&var_178, &var_358, &var_288, &var_190, 
                &result_18, &result_43, &result_33, &var_278)
            result_41 = zx.o(result_43)
            result_48 = result_29
            
            if (rax_38 == 2)
                goto label_14164f13f
            
            *arg8 = result_41.q
            result_41 = result_18 ^ data_142d3f780
            result_41[0] = result_41[0] - result_6[0]
            *(arg8 + 8) = result_48
            result = result_1
            *rdi_1 = result_41[0]
            result_41 = zx.o(result_33)
        int64_t rcx_26 = var_358[0].q
        *arg7 = result_41.q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_178[0].q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    else
        result_10 = result_9
        result_11 = result_9
        *arg8 = var_320
        result_12 = result_9
        *(arg8 + 8) = var_318
        result_13 = result_9
        result_14 = result_9
        result_6 = result_9
        
        if (rcx_1 == 0)
            result_24 = zx.o(result_36)
            result_25 = zx.o(result_22)
            result_40 = result_24
            int32_t result_23 = result_37
            result_11 = _mm_shuffle_ps(result_40, result_40, 0x55)
            float result_4 = result_3
            result_12 = result_23
            result_14 = _mm_shuffle_ps(result_25, result_25, 0x55)
            result_6 = result_4
            result_10 = result_24.d
            result_13 = result_25.d
        else if (r13.d s> 0)
            float (* rax_30)[0x4] = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_25 = *rax_30
                rax_30 = &(*rax_30)[1]
                result_25[0] = result_25[0] f* *(&result_36 + r12)
                result_24.d = result_25.d f* *(&result_36:4 + r12)
                result_10[0] = result_10[0] + result_25[0]
                result_25[0] = result_25[0] f* *(&result_37 + r12)
                result_11[0] = result_11[0] f+ result_24.d
                result_24.d = result_25.d f* *(&result_22 + r12)
                result_12[0] = result_12[0] + result_25[0]
                result_25[0] = result_25[0] f* *(&result_22:4 + r12)
                result_25[0] = result_25[0] f* *(&result_3 + r12)
                result_13[0] = result_13[0] f+ result_24.d
                r12 += 0xc
                result_14[0] = result_14[0] + result_25[0]
                result_6[0] = result_6[0] + result_25[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_42 = var_358[1]
        zmm13 = var_358[0]
        result_27 = result_42
        result_50 = var_358[2]
        result_27[0] = result_27[0] f+ result_14[0]
        result_13[0] = result_13[0] + zmm13[0]
        result_50[0] = result_50[0] f+ result_6[0]
        result_27[0] = result_27[0] f- result_11[0]
        result_13[0] = result_13[0] - result_10[0]
        result_50[0] = result_50[0] f- result_12[0]
        result_12 = 0x3f000000
        result_25 = result_27
        result_25[0] = result_25[0] f* result_27[0]
        result_13[0] = result_13[0] * result_13[0]
        result_24.d = result_50.d f* result_50[0]
        result_25[0] = result_25[0] + result_13[0]
        result_25[0] = result_25[0] f+ result_24.d
        result_10 = result_25
        float temp0_28[0x4] = _mm_rsqrt_ss(result_25[0], result_10[0])
        result_25 = 0x3f000000
        result_10[0] = result_10[0] * 0.5f
        temp0_28[0] = temp0_28[0] * temp0_28[0]
        result_24.d = result_10.d f* temp0_28[0]
        result_25[0] = 0.5f f- result_24.d
        temp0_28[0] = temp0_28[0] * result_25[0]
        temp0_28[0] = temp0_28[0] + temp0_28[0]
        result_24.d = temp0_28.d f* temp0_28[0]
        result_10[0] = result_10[0] f* result_24.d
        result_12[0] = 0.5f - result_10[0]
        temp0_28[0] = temp0_28[0] * result_12[0]
        temp0_28[0] = temp0_28[0] + temp0_28[0]
        result_24.d = temp0_28.d f* result_27[0]
        temp0_28[0] = temp0_28[0] * result_13[0]
        temp0_28[0] = temp0_28[0] f* result_50[0]
        float temp0_29[0x4] = _mm_unpacklo_ps(temp0_28, result_24.q)
        *arg8 = temp0_29.q
        result_24.d = result_7.d f- __sqrtss_xmmss_memss(temp0_29[0], result_17)[0]
        *(arg8 + 8) = temp0_28[0]
        
        if (not(result_24.d f< result_9[0]))
            result_9 = __minss_xmmss_memss(result_24[0], 0x7f7fffff)
        
        result_24 = *arg8
        result_25 = *(arg8 + 4)
        result_40 = result_24
        result_10 = *(arg8 + 8)
        result_11 = result_19
        result_40[0] = result_40[0] * result_11[0]
        result_24.d = result_24.d f* result_9[0]
        result_13[0] = result_13[0] - result_40[0]
        result_25[0] = result_25[0] * result_11[0]
        result_25[0] = result_25[0] * result_9[0]
        result_14[0] = result_14[0] - result_25[0]
        result_10[0] = result_10[0] * result_11[0]
        result_13[0] = result_13[0] + zmm13[0]
        result_10[0] = result_10[0] * result_9[0]
        result_9 ^= data_142d3f780
        result_6[0] = result_6[0] - result_10[0]
        result_14[0] = result_14[0] + result_42[0]
        result_13[0] = result_13[0] f+ result_24.d
        result_6[0] = result_6[0] f+ result_50[0]
        result_14[0] = result_14[0] + result_25[0]
        result_6[0] = result_6[0] + result_10[0]
        *arg7 = (_mm_unpacklo_ps(result_13, result_14[0].q)).q
        arg7[1].d = result_6[0]
        *rdi_1 = result_9[0]

result.b = 1
label_14164f1b8:
__security_check_cookie(rax_1 ^ &var_3b8)
return result

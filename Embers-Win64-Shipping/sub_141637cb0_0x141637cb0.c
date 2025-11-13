// 函数: sub_141637cb0
// 地址: 0x141637cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int64_t r12 = 0
uint32_t result_14[0x4] = zx.o(0)
void* r15 = arg2
uint32_t result_17 = 0
void* r11 = *(arg2 + 0x10)
float result_33[0x4] = *(arg1 + 0x2c)
float result_38 = result_33[0]
float (* var_2a8)[0x4] = arg4
uint32_t result_26[0x4] = *(r11 + 0x1c)
uint32_t result_50[0x4]

if (result_26[0] f== 0f)
    result_50 = zx.o(0)
else
    result_50 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    result_50[0] = result_50[0] f* result_26[0]

float result_34[0x4] = *arg3
uint32_t var_368[0x4] = arg3[1]
uint32_t result_32[0x4] = result_50
void* var_258 = arg1
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
result_26 = data_142d3f7e0
result_32[0] = result_32[0] f+ result_33[0]
uint32_t result_42[0x4] = result_26
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
uint32_t result_52 = result_50[0]
result_32[0] = result_32[0] f* result_32[0]
float result_11[0x4] = result_34 ^ 0x80000000
uint32_t result_20 = result_32[0]
float temp0_2[0x4] = _mm_shuffle_ps(result_11, result_11, 0xe1)
double temp0_3[0x2] = _mm_cvtps_pd(result_32[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(result_34, result_34, 0x55)
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
float result_23[0x4] = result_34
uint32_t result_39 = _mm_cvtpd_ps(temp0_3)[0]
double result_10[0x2] = _mm_shuffle_ps(result_34, result_34, 0xaa)
temp0_2[0] = (temp0_4 ^ 0x80000000)[0]
double result_22[0x2] = result_10
float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_7[0] = (result_10 ^ 0x80000000)[0].d
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
float result_51[0x4] = _mm_shuffle_ps(result_34, result_34, 0xff)
temp0_8[0] = result_51[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
float var_1c8[0x4] = temp0_9
float result_12[0x4] = *(arg1 + 0x20)
float result_27[0x4] = *(arg1 + 0x1c)
double result_28[0x2] = *(arg1 + 0x24)
result_26 = result_27
result_26[0] = result_26[0] f* *arg10
result_28[0].d = result_28[0].d f* arg10[2]
float var_268[0x4] = temp0_9
result_12[0] = result_12[0] f* arg10[1]
result_12[0] = result_12[0] f+ result_26[0]
result_12[0] = result_12[0] f+ result_28[0].d
float var_358
float var_350
int64_t result_18
int32_t* rdx
uint32_t result_5

if (result_12[0] < 0f)
    rdx = &result_18
    int32_t rax_4 = *(arg1 + 0x18)
    result_5 = 2
    result_18 = *(arg1 + 0x10)
    int32_t var_318_1 = rax_4
else
    result_26 = *(arg1 + 0x28)
    rdx = &var_358
    result_27[0] = result_27[0] f* result_26[0]
    result_5 = 1
    result_12[0] = result_12[0] f* result_26[0]
    result_27[0] = result_27[0] f+ *(arg1 + 0x10)
    result_28[0].d = result_28[0].d f* result_26[0]
    result_12[0] = result_12[0] f+ *(arg1 + 0x14)
    result_28[0].d = result_28[0].d f+ *(arg1 + 0x18)
    var_358 = result_27[0]
    float var_354_1 = result_12[0]
    var_350 = result_28[0].d

float result_29[0x4] = *(r11 + 0x14)
result_29[0] = result_29[0] f* *(r15 + 0x2c)
uint32_t result_6 = result_5 & 0xfffffffd
int32_t result_44 = rdx[2]
result_11 = *(r11 + 0x10)
result_11[0] = result_11[0] f* *(r15 + 0x28)
result_12 = result_29
uint32_t result_7[0x4] = *(r11 + 0x18)
result_26 = result_29
result_7[0] = result_7[0] f* *(r15 + 0x30)
result_10 = result_51[0]
result_27 = result_11
uint128_t result_31 = zx.o(*rdx)

if ((result_5.b & 2) == 0)
    result_6 = result_5

result_26[0] = result_26[0] f* result_22[0].d
float result_13[0x4] = result_7
result_13[0] = result_13[0] * temp0_4[0]
uint32_t result_9 = result_6 & 0xfffffffe
result_12[0] = result_12[0] * result_34[0]
int32_t result_57 = rdx[2]

if ((result_6.b & 1) == 0)
    result_9 = result_6

result_13[0] = result_13[0] f- result_26[0]
result_27[0] = result_27[0] f* result_22[0].d
int32_t result_53 = result_57
int64_t result_24 = result_31.q
result_7[0] = result_7[0] f* result_34[0]
result_13[0] = result_13[0] + result_13[0]
result_27[0] = result_27[0] f- result_7[0]
result_26 = result_11
result_26[0] = result_26[0] f* temp0_4[0]
result_10[0].d = result_10[0].d f* result_13[0]
result_12[0] = result_12[0] f- result_26[0]
result_26 = result_22
result_27[0] = result_27[0] + result_27[0]
result_22[0].d = result_22[0].d f* result_13[0]
result_10[0].d = result_10[0].d f+ result_11[0]
result_11 = result_34
result_12[0] = result_12[0] + result_12[0]
result_26[0] = result_26[0] f* result_27[0]
result_11[0] = result_11[0] * result_27[0]
float result_30[0x4] = result_12
result_30[0] = result_30[0] * temp0_4[0]
result_30[0] = result_30[0] f- result_26[0]
result_26 = result_12
result_12[0] = result_12[0] * result_51[0]
result_26[0] = result_26[0] f* result_34[0]
result_34 = zx.o(0)
result_30[0] = result_30[0] f+ result_10[0].d
result_10 = result_51[0]
result_10[0].d = result_10[0].d f* result_27[0]
result_12[0] = result_12[0] f+ result_7[0]
result_27 = var_368[1]
result_22[0].d = result_22[0].d f- result_26[0]
result_26 = temp0_4[0]
result_26[0] = result_26[0] f* result_13[0]
result_10[0].d = result_10[0].d f+ result_29[0]
float result_19 = result_27[0]
result_13 = result_27
float var_2cc = result_27[0]
result_11[0] = result_11[0] f- result_26[0]
result_22[0].d = result_22[0].d f+ result_10[0].d
result_10 = var_368[0]
float result_16 = result_10[0].d
result_29 = result_10
float var_2d0 = result_10[0].d
result_11[0] = result_11[0] + result_12[0]
int64_t result_25 = (_mm_unpacklo_ps(result_30, result_22[0])).q
uint32_t result_1 = result_11[0]
uint32_t result_3 = result_1
result_12 = var_368[2]
result_26 = result_31
uint32_t result = zx.d(arg9)
result_26[0] = result_26[0] f- result_30[0]
result_30 = result_10
float result_8 = result_12[0]
uint32_t result_2 = result_12[0]
result_7 = result_12
int64_t var_310 = 0
float var_308 = 1f
result_30[0] = result_30[0] f- result_26[0]
result_26 = result_31
result_26 = _mm_shuffle_ps(result_26, result_26, 0x55)
result_26[0] = result_26[0] f- result_22[0].d
result_28 = result_27
result_28[0].d = result_28[0].d f- result_26[0]
result_26 = result_44
result_26[0] = result_26[0] f- result_11[0]
result_11 = result_28
result_31.d = result_12.d f- result_26[0]
result_11[0] = result_11[0] f* result_28[0].d
result_26 = result_30
result_26[0] = result_26[0] f* result_30[0]
result_10 = result_31
result_10[0].d = result_10[0].d f* result_31.d
result_11[0] = result_11[0] f+ result_26[0]
result_11[0] = result_11[0] f+ result_10[0].d

if (result_11[0] f>= result_39 || (result.b != 0 && result_11[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_11 = 0x7f7fffff
int64_t rsi
rsi.b = 0
float result_15 = 3.40282347e+38f
int32_t rcx_1 = 0
char var_388 = result_5.b
uint32_t r8 = zx.d(result_5.b)
int32_t var_348 = 0
result_10 = 0x7f7fffff
int64_t result_21
uint32_t result_40

if (result_5.b == 0)
    while (true)
        int32_t rax_8 = rcx_1
        rcx_1 += 1
        var_348 = rcx_1
        
        if (rax_8 s>= 0x20)
            result_29 = result_16
            result_7 = result_8
            result_10 = result_15
            result = zx.d(arg9)
        else
            result_12 = 0x3f000000
            result_27 = zx.o(0)
            void* rax_9 = var_258
            result_11 = result_28
            result_11[0] = result_11[0] f* result_28[0].d
            result_26 = result_30
            result_26[0] = result_26[0] f* result_30[0]
            result_10 = result_31
            result_10[0].d = result_10[0].d f* result_31.d
            result_11[0] = result_11[0] f+ result_26[0]
            result_11[0] = result_11[0] f+ result_10[0].d
            result_27[0] = result_11[0]
            result_11 = 0x3f000000
            float result_35[0x4] = _mm_rsqrt_ss(result_27[0], result_27[0])
            result_27[0] = result_27[0] * 0.5f
            result_26 = result_35
            result_26[0] = result_26[0] f* result_35[0]
            result_10 = result_27
            result_10[0].d = result_10[0].d f* result_26[0]
            result_26 = result_35
            result_11[0] = 0.5f f- result_10[0].d
            result_26[0] = result_26[0] f* result_11[0]
            result_35[0] = result_35[0] f+ result_26[0]
            result_10 = result_35
            result_26 = result_35
            result_10[0].d = result_10[0].d f* result_35[0]
            result_27[0] = result_27[0] f* result_10[0].d
            result_12[0] = 0.5f - result_27[0]
            result_27 = *(rax_9 + 0x20)
            result_26[0] = result_26[0] f* result_12[0]
            result_12 = *(rax_9 + 0x1c)
            result_35[0] = result_35[0] f+ result_26[0]
            result_26 = result_27
            result_10 = result_35
            result_17 = result_35[0]
            result_10[0].d = result_10[0].d f* result_28[0].d
            result_50 = result_35
            result_28 = *(rax_9 + 0x24)
            result_50[0] = result_50[0] f* result_30[0]
            result_26[0] = result_26[0] f* result_10[0].d
            int32_t result_41 = result_10[0].d
            result_12[0] = result_12[0] f* result_50[0]
            result_35[0] = result_35[0] f* result_31.d
            result_12[0] = result_12[0] f+ result_26[0]
            result_28[0].d = result_28[0].d f* result_35[0]
            result_12[0] = result_12[0] f+ result_28[0].d
            uint32_t* rax_10
            int32_t rdx_1
            
            if (result_12[0] f< result_14[0])
                rdx_1 = 8
                int32_t var_210_1 = *(rax_9 + 0x18)
                int64_t var_218
                rax_10 = &var_218
                var_218 = *(rax_9 + 0x10)
            else
                result_11 = *(rax_9 + 0x28)
                rdx_1 = 4
                result_26 = result_11
                result_10 = result_11
                result_26[0] = result_26[0] f* result_12[0]
                result_10[0].d = result_10[0].d f* result_27[0]
                result_26[0] = result_26[0] f+ *(rax_9 + 0x10)
                result_11[0] = result_11[0] f* result_28[0].d
                result_10[0].d = result_10[0].d f+ *(rax_9 + 0x14)
                result_11[0] = result_11[0] f+ *(rax_9 + 0x18)
                result_40 = result_26[0]
                rax_10 = &result_40
                int32_t var_2dc_1 = result_10[0].d
                float var_2d8_1 = result_11[0]
            
            result_32 = zx.o(*rax_10)
            uint32_t result_58 = rdx_1 | result_9
            int32_t result_45 = rax_10[2]
            result_30 = *(r15 + 0x30)
            uint32_t result_55 = result_58 & 0xfffffff7
            result_12 = *(r15 + 0x2c)
            uint32_t var_280_1 = result_45[0]
            
            if ((result_58.b & 8) == 0)
                result_55 = result_58
            
            result_31 = result_32.q:4.d
            uint32_t result_48 = result_55 & 0xfffffffb
            void* rax_14 = *(r15 + 0x10)
            
            if ((result_55.b & 4) == 0)
                result_48 = result_55
            
            result_17 = result_48
            result_30[0] = result_30[0] f* *(rax_14 + 0x18)
            result_11 = *(rax_14 + 0x10)
            result_11[0] = result_11[0] f* *(r15 + 0x28)
            result_12[0] = result_12[0] f* *(rax_14 + 0x14)
            result_28 = result_30
            result_28[0].d = result_28[0].d f* temp0_4[0]
            result_11[0] = result_11[0] f* result_22[0].d
            result_26 = result_12
            result_26[0] = result_26[0] f* result_22[0].d
            result_10 = result_23
            result_12[0] = result_12[0] f* result_10[0].d
            result_28[0].d = result_28[0].d f- result_26[0]
            result_26 = result_30
            result_26[0] = result_26[0] f* result_10[0].d
            result_11[0] = result_11[0] f- result_26[0]
            result_26 = result_11
            result_26[0] = result_26[0] f* temp0_4[0]
            result_28[0].d = result_28[0].d f+ result_28[0].d
            result_12[0] = result_12[0] f- result_26[0]
            result_11[0] = result_11[0] + result_11[0]
            result_28[0].d = result_28[0].d f* result_51[0]
            result_12[0] = result_12[0] + result_12[0]
            result_28[0].d = result_28[0].d f+ result_11[0]
            result_26 = result_11
            result_26[0] = result_26[0] f* result_22[0].d
            result_7 = result_12
            result_7[0] = result_7[0] f* temp0_4[0]
            result_29 = result_28
            result_29[0] = result_29[0] f* result_22[0].d
            result_28[0].d = result_28[0].d f* temp0_4[0]
            result_7[0] = result_7[0] f- result_26[0]
            result_26 = result_12
            result_26[0] = result_26[0] f* result_23[0]
            result_7[0] = result_7[0] f+ result_28[0].d
            result_10 = result_11
            result_11[0] = result_11[0] * result_23[0]
            result_29[0] = result_29[0] f- result_26[0]
            result_26 = result_51
            result_10[0].d = result_10[0].d f* result_26[0]
            result_12[0] = result_12[0] f* result_26[0]
            result_11[0] = result_11[0] f- result_28[0].d
            result_10[0].d = result_10[0].d f+ result_12[0]
            result_32[0] = result_32[0] f- result_7[0]
            result_12[0] = result_12[0] + result_30[0]
            result_30 = result_45
            result_29[0] = result_29[0] f+ result_10[0].d
            result_10 = result_31
            uint32_t var_2bc_1 = result_32[0]
            result_11[0] = result_11[0] + result_12[0]
            result_10[0].d = result_10[0].d f- result_29[0]
            float var_1e0_1 = result_11[0]
            int32_t var_2b8_1 = result_10[0].d
            result_12 = result_16
            result_30[0] = result_30[0] - result_11[0]
            result_13 = result_19
            result_12[0] = result_12[0] f- result_32[0]
            result_27 = result_8
            result_26 = result_32
            result_28 = result_41
            result_32 = result_20
            result_13[0] = result_13[0] f- result_10[0].d
            result_27[0] = result_27[0] - result_30[0]
            var_358 = result_12[0]
            result_26 = _mm_unpacklo_ps(result_26, result_31.q)
            result_12[0] = result_12[0] f* result_50[0]
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            float var_354_2 = result_13[0]
            result_13[0] = result_13[0] f* result_28[0].d
            uint64_t rcx_4 = r13 * 3
            var_350 = result_27[0]
            result_27[0] = result_27[0] * result_35[0]
            result_12[0] = result_12[0] + result_13[0]
            *(&result_24 + (rcx_4 << 2)) = result_26.q
            result_26 = _mm_unpacklo_ps(result_7, result_29[0].q)
            (&result_53)[rcx_4] = var_280_1
            result_12[0] = result_12[0] + result_27[0]
            *(&result_25 + (rcx_4 << 2)) = result_26.q
            (&result_3)[rcx_4] = var_1e0_1
            int128_t var_158_1
            uint32_t result_43
            
            if (result_12[0] f<= result_32[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_4 << 2)) = var_358.q
                *(&var_168:8 + (rcx_4 << 2)) = var_350
                var_190 = r13.d
            label_141638735:
                result_33 = result_15
                result_29 = result_16
                result_7 = result_8
                
                if (r8.b != 0 && not(result_12[0] f< result_14[0]))
                    result_12[0] = result_12[0] * result_12[0]
                    result_12[0] = result_12[0] + 9.99999997e-07f
                    result_5.b = result_12[0] >= result_33[0]
            else
                result_27 = (*arg4)[1]
                result_29 = *arg4
                result_26 = result_27
                result_7 = (*arg4)[2]
                result_29[0] = result_29[0] f* result_50[0]
                result_10 = result_7
                result_26[0] = result_26[0] f* result_28[0].d
                result_10[0].d = result_10[0].d f* result_35[0]
                result_29[0] = result_29[0] f+ result_26[0]
                result_29[0] = result_29[0] f+ result_10[0].d
                
                if (result_29[0] f>= result_14[0])
                    result.b = 0
                    goto label_141639219
                
                result_26 = result_12
                result_26[0] = result_26[0] f- result_32[0]
                result_26[0] = result_26[0] f/ result_29[0]
                result_34[0] = result_34[0] f- result_26[0]
                
                if (result_34[0] f<= result_34[0].d)
                    goto label_141638735
                
                if (result_34[0] f> arg5)
                    result.b = 0
                    goto label_141639219
                
                result_10 = zx.o(var_2d0.q)
                result_13 = result_27
                result_26 = result_10
                result_26 = _mm_shuffle_ps(result_26, result_26, 0x55)
                r13 = zx.q(r13.d + 1)
                result_21 = result_10.q
                result_29[0] = result_29[0] * result_34[0]
                result_1 = result_2
                result_13[0] = result_13[0] * result_34[0]
                var_190 = r13.d
                result_29[0] = result_29[0] f+ var_368[0]
                result_7[0] = result_7[0] f* result_34[0]
                var_388 = 0
                result_13[0] = result_13[0] f+ var_368[1]
                var_308 = result_35[0]
                result_7[0] = result_7[0] f+ var_368[2]
                result_33 = 0x7f7fffff
                result_29[0] = result_29[0] f- result_10[0].d
                result_16 = result_29[0]
                result_10 = var_168:4.d
                result_13[0] = result_13[0] f- result_26[0]
                result_19 = result_13[0]
                result_26 = var_168.d
                result_11 = result_7
                result_11[0] = result_11[0] f- result_1
                result_26[0] = result_26[0] f+ result_29[0]
                result_8 = result_7[0]
                var_2d0 = result_29[0]
                result_10[0].d = result_10[0].d f+ result_13[0]
                float var_2cc_1 = result_13[0]
                result_2 = result_7[0]
                var_310.d = result_50[0]
                var_168.d = result_26[0]
                result_26 = var_168:8.d
                result_26[0] = result_26[0] f+ result_11[0]
                var_168:4.d = result_10[0].d
                result_10 = var_168:0xc.d
                result_10[0].d = result_10[0].d f+ result_29[0]
                var_310:4.d = result_28[0].d
                result_15 = 3.40282347e+38f
                var_168:8.d = result_26[0]
                result_26 = var_158_1.d
                var_168:0xc.d = result_10[0].d
                result_26[0] = result_26[0] f+ result_13[0]
                result_10 = var_158_1:4.d
                result_10[0].d = result_10[0].d f+ result_11[0]
                var_158_1.d = result_26[0]
                result_26 = var_158_1:8.d
                var_158_1:4.d = result_10[0].d
                result_26[0] = result_26[0] f+ result_29[0]
                result_10 = var_158_1:0xc.d
                result_10[0].d = result_10[0].d f+ result_13[0]
                var_158_1:8.d = result_26[0]
                result_26 = result_43
                result_26[0] = result_26[0] f+ result_11[0]
                var_158_1:0xc.d = result_10[0].d
                result_10 = result_29
                result_10[0].d = result_10[0].d f- var_2bc_1
                result_13[0] = result_13[0] f- var_2b8_1
                result_43 = result_26[0]
                result_7[0] = result_7[0] f- result_30[0]
                *(&var_168 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_10, result_13[0].q)).q
                *(&var_168:8 + (rcx_4 << 2)) = result_7[0]
            
            if (result_5.b != 0)
                int64_t* rax_26
                rax_26, result_29, result_13, result_7, result_32, result_14, result_34 =
                    sub_1416f4530(&var_268, &var_168, &var_190, &result_42, &result_24, &result_25)
                r13 = zx.q(var_190)
                result_10 = zx.o(*rax_26)
                result_26 = result_10
                result_31 = rax_26[1].d
                result = zx.d(arg9)
                result_18 = result_10.q
                result_30 = result_18.d
                result_10 = result_15
                result_28 = _mm_shuffle_ps(result_26, result_26, 0x55)
            else
                int32_t rcx_5 = r13.d
                int32_t result_46
                
                if (rcx_5 == 1)
                    int64_t rax_23 = sx.q(var_18c)
                    int64_t rcx_12 = rax_23 * 3
                    result_42[rax_23] = 0x3f800000
                    result_26 = zx.o(*(&var_168 + (rcx_12 << 2)))
                    result_46 = *(&var_168:8 + (rcx_12 << 2))
                else if (rcx_5 == 2)
                    void var_1a0
                    uint64_t* rax_22
                    rax_22, result_29, result_13, result_7 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &result_42)
                    r13 = zx.q(var_190)
                    result_26 = zx.o(*rax_22)
                    result_46 = rax_22[1].d
                else if (rcx_5 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_21
                    rax_21, result_29, result_13, result_7, result_32, result_14, result_33, 
                        result_34 = sub_1416fa750(&var_1ac, &var_168, &var_190, &result_42)
                    r13 = zx.q(var_190)
                    result_26 = zx.o(*rax_21)
                    result_46 = rax_21[1].d
                else if (rcx_5 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_20
                    rax_20, result_29, result_13, result_7, result_32, result_14, result_33, 
                        result_34 = sub_1416f9c90(&var_1b8, &var_168, &var_190, &result_42)
                    r13 = zx.q(var_190)
                    result_26 = zx.o(*rax_20)
                    result_46 = rax_20[1].d
                else
                    int32_t var_338_1 = 0
                    result_26 = _mm_unpacklo_ps(result_14, result_14[0].q)
                    result_46 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_2 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                int64_t result_37 = result_26.q
                int64_t rbx_1 = rdi * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_2 * 3
                rsi = r9_3 * 3
                int32_t rdx_6 = *(&var_168:8 + (r14_1 << 2))
                uint32_t result_56 = *(&var_168:8 + (rsi << 2))
                r8 = *(&var_168:8 + (r15_1 << 2))
                result_30 = result_37.d
                result_28 = result_37:4.d
                int32_t result_54 = *(&var_168:8 + (rbx_1 << 2))
                result_31 = result_46
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_43:4.q = *(&var_168 + (rbx_1 << 2))
                result_26 = result_42[r11_1]
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                result_10 = result_42[r10_2]
                var_168.q = *(&var_168 + (r15_1 << 2))
                result_27 = result_42[rdi]
                int32_t result_59 = (&result_53)[r15_1]
                result_42[2] = result_42[r9_3][0]
                result_11 = zx.o(*(&result_24 + (r14_1 << 2)))
                result_42[0] = result_26[0]
                result_26 = zx.o(*(&result_24 + (rbx_1 << 2)))
                result_42[1] = result_10[0].d
                result_10 = zx.o(*(&result_24 + (rsi << 2)))
                result_42[3] = result_27[0]
                var_158_1:4.d = rdx_6
                int32_t rdx_7 = (&result_53)[r14_1]
                result_43 = result_56
                int32_t rcx_13 = (&result_53)[rsi]
                result_43 = result_54
                int32_t rax_24 = (&result_53)[rbx_1]
                var_12c_1.q = result_11.q
                result_11 = zx.o(*(&result_25 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = result_26.q
                result_26 = zx.o(*(&result_25 + (rbx_1 << 2)))
                var_12c_1:0xc.q = result_10.q
                result_10 = zx.o(*(&result_25 + (rsi << 2)))
                result_24 = *(&result_24 + (r15_1 << 2))
                result_27 = zx.o(*(&result_25 + (r15_1 << 2)))
                result_53 = result_59
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_7
                int32_t rdx_8 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_13
                int32_t rcx_14 = (&result_3)[rsi]
                int32_t var_10c_1 = rax_24
                int32_t rax_25 = (&result_3)[rbx_1]
                var_fc_1.q = result_11.q
                result_11 = result_28
                int128_t var_ec_1
                var_ec_1:8.q = result_26.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8
                result_11[0] = result_11[0] f* result_28[0].d
                result_26 = result_30
                result_3 = result_5
                var_fc_1:0xc.q = result_10.q
                result_10 = result_31
                result_26[0] = result_26[0] f* result_30[0]
                var_fc_1:8.d = rdx_8
                result_10[0].d = result_10[0].d f* result_31.d
                var_ec_1:4.d = rcx_14
                result_11[0] = result_11[0] f+ result_26[0]
                result_25 = result_27.q
                result_27 = result_39
                int32_t var_dc_1 = rax_25
                result_11[0] = result_11[0] f+ result_10[0].d
                result = zx.d(arg9)
                result_5.b = result_27[0] > result_11[0]
                result_15 = result_11[0]
                result_10 = result_11
                rsi.b = result_11[0] >= result_33[0]
                
                if (result.b != 0)
                    if (result_5.b == 0)
                        goto label_141638b87
                    
                    if (result_34[0] f!= result_14[0])
                    label_141638b7f:
                        result_10 = result_11
                        goto label_141638b82
                    
                    result_10 = 0x3eb0c6f7a0b5ed8d
                    result_26 = _mm_cvtps_pd(result_11[0].q)
                    
                    if (result_26[0].q f<= result_10[0])
                        goto label_141638b7f
                    
                    result_26 = _mm_cvtps_pd(result_27[0].q)
                    
                    if (result_26[0].q f<= result_10[0] || r13.d s>= 4)
                        goto label_141638b7f
                    
                    r8.b = 1
                    result_5.b = 0
                    var_388 = 1
                    goto label_141638b8d
            
        label_141638b82:
            
            if (result_5.b != 0)
                rcx_1 = var_348
                arg4 = var_2a8
            else
            label_141638b87:
                r8 = zx.d(var_388)
            label_141638b8d:
                rcx_1 = var_348
                arg4 = var_2a8
                
                if (rsi.b != 0)
                    result_10 = result_15
                else
                    r15 = arg2
                    result_9 = result_17
                    continue
        
        result_33 = result_38
        result_50 = result_52
        result_11 = 0x7f7fffff
        break

bool cond:3_1 = result_34[0] f<= result_14[0]
uint32_t* rdi_1 = arg6
*rdi_1 = result_34[0]

if (not(cond:3_1))
    result_12 = result_14
    result_27 = result_14
    *arg8 = var_310
    (*arg8)[1].d = var_308
    
    if (r13.d s> 0)
        int128_t* rcx_16 = &result_42
        uint64_t i_4 = zx.q(r13.d)
        uint32_t* rax_29 = &result_3
        uint64_t i
        
        do
            result_11 = *rcx_16
            rcx_16 += 4
            result_26 = result_11
            result_10 = result_11
            result_26[0] = result_26[0] f* rax_29[-2]
            result_10[0].d = result_10[0].d f* rax_29[-1]
            result_11[0] = result_11[0] f* *rax_29
            rax_29 = &rax_29[3]
            result_14[0] = result_14[0] f+ result_26[0]
            result_12[0] = result_12[0] f+ result_10[0].d
            result_27[0] = result_27[0] + result_11[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_10 = result_34
    result_50[0] = result_50[0] f* *arg8
    result_10[0].d = result_10[0].d f* *arg4
    result_14[0] = result_14[0] f- result_50[0]
    result_50[0] = result_50[0] f* *(arg8 + 4)
    result_10[0].d = result_10[0].d f+ var_368[0]
    result_50[0] = result_50[0] f* (*arg8)[1].d
    result_12[0] = result_12[0] f- result_50[0]
    result_14[0] = result_14[0] f+ result_10[0].d
    result_10 = result_34
    result_10[0].d = result_10[0].d f* (*arg4)[1]
    result_27[0] = result_27[0] f- result_50[0]
    result_34[0] = result_34[0] * (*arg4)[2]
    result_10[0].d = result_10[0].d f+ var_368[1]
    result_34[0] = result_34[0] f+ var_368[2]
    result_12[0] = result_12[0] f+ result_10[0].d
    result_27[0] = result_27[0] + result_34[0]
    *arg7 = (_mm_unpacklo_ps(result_14, result_12[0].q)).q
    arg7[1].d = result_27[0]
else if (result.b != 0)
    if (not(result_32[0] f<= result_14[0]))
        result_26 = _mm_cvtps_pd(result_10[0])
    
    if (result_32[0] f<= result_14[0] || result_26[0].q f<= 9.9999999999999995e-07
            || result_10[0].d f>= result_11[0])
        result_42[0].q = 0
        result_42[2].q = 0
        var_368[0].q = 0
        var_368[2].q = 0
        sub_14083ad30(&result_42, 8)
        
        if (var_368[3] s< 8)
            sub_14083ad30(&var_368, 8)
        
        uint128_t result_49
        float rax_40
        
        if (var_348 == 0)
            int32_t var_338_5 = 0x3f800000
            rax_40 = 1f
            result_49 = _mm_unpacklo_ps(result_14, result_14[0].q)
        label_14163919c:
            result_10 = result_33
            *rdi_1 = (result_32 ^ data_142d3f780)[0]
            *arg8 = result_49.q
            (*arg8)[1].d = rax_40
            result_49.d = result_33.d f* *arg8
            result_33[0] = result_33[0] * (*arg8)[1].d
            result_10[0].d = result_10[0].d f* *(arg8 + 4)
            result_33[0] = result_33[0] f+ result_53
            result_49.d = result_49.d f+ result_24.d
            result_10[0].d = result_10[0].d f+ result_24:4.d
            result = result_33[0]
            result_49 = _mm_unpacklo_ps(result_49, result_10[0])
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(result_42[2])
                    int32_t rax_33 = (rdi_2 + 1).d
                    result_42[2] = rax_33
                    
                    if (rax_33 s> result_42[3])
                        sub_14083a7e0(&result_42)
                    
                    int64_t rcx_20 = result_42[0].q
                    int64_t rdx_11 = rdi_2 * 3
                    result_10 = result_13
                    int32_t rax_34 = *(&result_53 + r12)
                    result_10[0].d = result_10[0].d f+ *(&result_25:4 + r12)
                    *(rcx_20 + (rdx_11 << 2)) = *(&result_24 + r12)
                    result_49.d = result_29.d f+ *(&result_25 + r12)
                    *(rcx_20 + (rdx_11 << 2) + 8) = rax_34
                    int64_t rdi_3 = sx.q(var_368[2])
                    int32_t var_354_3 = result_10[0].d
                    var_358 = result_49.d
                    result_49.d = result_7.d f+ *(&result_3 + r12)
                    int32_t rax_35 = (rdi_3 + 1).d
                    var_368[2] = rax_35
                    var_350 = result_49.d
                    
                    if (rax_35 s> var_368[3])
                        sub_14083a7e0(&var_368)
                    
                    int64_t rcx_22 = var_368[0].q
                    int64_t rdx_13 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_22 + (rdx_13 << 2)) = var_358.q
                    *(rcx_22 + (rdx_13 << 2) + 8) = var_350
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_39
            rax_39, result_32, result_33 = sub_1415a04c0(&result_42, &var_368, &var_258, &var_190, 
                result_34, result_50, &result_17, &var_358, &result_21, &var_268)
            result_49 = zx.o(var_358.q)
            rax_40 = var_350
            
            if (rax_39 == 2)
                goto label_14163919c
            
            *arg8 = result_49.q
            result_49.d = (result_17 ^ data_142d3f780).d f- result_32[0]
            (*arg8)[1].d = rax_40
            result = result_1
            *rdi_1 = result_49.d
            result_49 = zx.o(result_21)
        int64_t rcx_24 = var_368[0].q
        *arg7 = result_49.q
        arg7[1].d = result
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = result_42[0].q
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
    else
        result_27 = result_14
        result_12 = result_14
        *arg8 = var_310
        result_28 = result_14
        (*arg8)[1].d = var_308
        result_31 = result_14
        result_32 = result_14
        result_7 = result_14
        
        if (rcx_1 == 0)
            result_10 = zx.o(result_24)
            result_11 = zx.o(result_25)
            result_26 = result_10
            int32_t result_47 = result_53
            result_12 = _mm_shuffle_ps(result_26, result_26, 0x55)
            uint32_t result_4 = result_3
            result_26 = result_11
            result_28 = result_47
            result_32 = _mm_shuffle_ps(result_26, result_26, 0x55)
            result_7 = result_4
            result_18 = result_10.q
            result_27 = result_18.d
            result_40.q = result_11.q
            result_31 = result_40
        else if (r13.d s> 0)
            int128_t* rax_31 = &result_42
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_11 = *rax_31
                rax_31 += 4
                result_26 = result_11
                result_10 = result_11
                result_26[0] = result_26[0] f* *(&result_24 + r12)
                result_10[0].d = result_10[0].d f* *(&result_24:4 + r12)
                result_27[0] = result_27[0] f+ result_26[0]
                result_26 = result_11
                result_26[0] = result_26[0] f* *(&result_53 + r12)
                result_12[0] = result_12[0] f+ result_10[0].d
                result_10 = result_11
                result_10[0].d = result_10[0].d f* *(&result_25 + r12)
                result_28[0].d = result_28[0].d f+ result_26[0]
                result_26 = result_11
                result_26[0] = result_26[0] f* *(&result_25:4 + r12)
                result_11[0] = result_11[0] f* *(&result_3 + r12)
                result_31.d = result_31.d f+ result_10[0].d
                r12 += 0xc
                result_32[0] = result_32[0] f+ result_26[0]
                result_7[0] = result_7[0] f+ result_11[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_29 = var_368[2]
        result_13 = result_31
        result_34 = var_368[1]
        result_29[0] = result_29[0] f+ result_7[0]
        result_33 = var_368[0]
        result_13[0] = result_13[0] + result_33[0]
        result_34[0] = result_34[0] f+ result_32[0]
        result_29[0] = result_29[0] f- result_28[0].d
        result_28 = 0x3f000000
        result_13[0] = result_13[0] - result_27[0]
        result_34[0] = result_34[0] - result_12[0]
        result_10 = result_29
        result_10[0].d = result_10[0].d f* result_29[0]
        result_26 = result_13
        result_26[0] = result_26[0] f* result_13[0]
        result_34[0] = result_34[0] * result_34[0]
        result_34[0] = result_34[0] f+ result_26[0]
        result_34[0] = result_34[0] f+ result_10[0].d
        float result_36[0x4] = _mm_rsqrt_ss(result_34[0], result_34[0])
        result_11 = 0x3f000000
        result_34[0] = result_34[0] * 0.5f
        result_26 = result_36
        result_26[0] = result_26[0] f* result_36[0]
        result_10 = result_34
        result_10[0].d = result_10[0].d f* result_26[0]
        result_26 = result_36
        result_11[0] = 0.5f f- result_10[0].d
        result_26[0] = result_26[0] f* result_11[0]
        result_36[0] = result_36[0] f+ result_26[0]
        result_10 = result_36
        result_26 = result_36
        result_10[0].d = result_10[0].d f* result_36[0]
        result_34[0] = result_34[0] f* result_10[0].d
        result_10 = result_20
        result_28[0].d = 0.5f - result_34[0]
        result_26[0] = result_26[0] f* result_28[0].d
        result_36[0] = result_36[0] f+ result_26[0]
        result_13[0] = result_13[0] * result_36[0]
        result_34[0] = result_34[0] * result_36[0]
        result_29[0] = result_29[0] * result_36[0]
        result_26 = _mm_unpacklo_ps(result_13, result_34[0].q)
        *arg8 = result_26.q
        result_26 = __sqrtss_xmmss_memss(result_26[0], result_15)
        result_10[0].d = result_10[0].d f- result_26[0]
        (*arg8)[1].d = result_29[0]
        
        if (not(result_10[0].d f< result_14[0]))
            result_14 = __minss_xmmss_memss(result_10[0], 0x7f7fffff)
        
        result_10 = *arg8
        result_11 = *(arg8 + 4)
        result_26 = result_10
        result_27 = (*arg8)[1].d
        result_26[0] = result_26[0] f* result_50[0]
        result_31.d = result_31.d f- result_26[0]
        result_14[0] = result_14[0] f* result_10[0].d
        result_10 = result_11
        result_10[0].d = result_10[0].d f* result_50[0]
        result_31.d = result_31.d f+ result_33[0]
        result_32[0] = result_32[0] f- result_10[0].d
        result_10 = result_27
        result_10[0].d = result_10[0].d f* result_50[0]
        result_31.d = result_31.d f+ result_14[0]
        result_14[0] = result_14[0] f* result_11[0]
        result_7[0] = result_7[0] f- result_10[0].d
        result_32[0] = result_32[0] f+ result_34[0]
        result_7[0] = result_7[0] f+ var_368[2]
        result_32[0] = result_32[0] f+ result_14[0]
        result_26 = result_14
        result_14 ^= data_142d3f780
        result_26[0] = result_26[0] f* result_27[0]
        result_7[0] = result_7[0] f+ result_26[0]
        *arg7 = (_mm_unpacklo_ps(result_31, result_32[0].q)).q
        arg7[1].d = result_7[0]
        *rdi_1 = result_14[0]

result.b = 1
label_141639219:
__security_check_cookie(rax_1 ^ &var_3c8)
return result

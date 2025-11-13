// 函数: sub_14163a630
// 地址: 0x14163a630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int64_t r12 = 0
float result_12 = 0f
float result_18[0x4] = *(arg1 + 0x2c)
int128_t* r15 = arg3
float result_19[0x4] = *(arg2 + 0x1c)
float result_37 = result_18[0]
double result_24[0x2] = result_19
float result_36 = result_19[0]
float result_25[0x4] = *r15
result_24[0].d = result_24[0].d f+ result_18[0]
result_18 = result_25 ^ 0x80000000
double var_358[0x2] = r15[1]
float temp0[0x4] = _mm_shuffle_ps(result_18, result_18, 0xe1)
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
void* var_268 = arg1
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
double var_178[0x2] = data_142d3f7e0
void* r8 = arg2
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float (* var_2a0)[0x4] = arg4
float temp0_1[0x4] = _mm_shuffle_ps(result_25, result_25, 0x55)
result_24[0].d = result_24[0].d f* result_24[0].d
float result_48[0x4] = _mm_shuffle_ps(result_25, result_25, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(result_25, result_25, 0xff)
double result_11[0x2] = zx.o(0)
double temp0_3[0x2] = _mm_cvtps_pd(result_24[0])
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
uint64_t r13 = zx.q(var_190)
int32_t result_35 = result_24[0].d
float result_40[0x4] = result_25
int32_t result_34 = _mm_cvtpd_ps(temp0_3)[0].d
float result_39 = temp0_2[0]
temp0[0] = (temp0_1 ^ 0x80000000)[0].d
float temp0_5[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_5[0] = (result_48 ^ 0x80000000)[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = temp0_2[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float var_1c8[0x4] = temp0_7
result_19 = *(arg1 + 0x20)
double result_20[0x2] = *(arg1 + 0x1c)
float var_258[0x4] = temp0_7
double result_21[0x2] = *(arg1 + 0x24)
result_19[0] = result_19[0] f* arg10[1]
result_20[0].d = result_20[0].d f* *arg10
result_21[0].d = result_21[0].d f* arg10[2]
result_19[0] = result_19[0] f+ result_20[0].d
result_19[0] = result_19[0] f+ result_21[0].d
float result_27
int64_t result_32
int32_t* rdx
float result_5
double result_10[0x2]
double result_17[0x2]

if (result_19[0] < 0f)
    rdx = &result_32
    int32_t rax_4 = *(arg1 + 0x18)
    result_5 = 2.80259693e-45f
    result_32 = *(arg1 + 0x10)
    int32_t var_318_1 = rax_4
else
    result_18 = *(arg1 + 0x28)
    rdx = &result_27
    result_10 = result_18
    result_5 = 1.40129846e-45f
    result_17 = result_18
    result_10[0].d = result_10[0].d f* result_20[0].d
    result_17[0].d = result_17[0].d f* result_19[0]
    result_10[0].d = result_10[0].d f+ *(arg1 + 0x10)
    result_18[0] = result_18[0] f* result_21[0].d
    result_17[0].d = result_17[0].d f+ *(arg1 + 0x14)
    result_18[0] = result_18[0] f+ *(arg1 + 0x18)
    result_27 = result_10[0].d
    int32_t var_37c_1 = result_17[0].d
    float var_378_1 = result_18[0]

int32_t result_15 = rdx[2]
result_10 = zx.o(*(r8 + 0x10))
float result_6 = result_5 & 0xfffffffd
uint128_t result_7 = zx.o(*rdx)
result_20 = _mm_shuffle_ps(result_10, result_10, 0x55)
result_19 = result_20
int64_t result_8 = result_7.q
result_19[0] = result_19[0] * result_25[0]

if ((result_5.b & 2) == 0)
    result_6 = result_5

float result_9 = result_6 & 0xfffffffe
result_27.q = result_10.q

if ((result_6.b & 1) == 0)
    result_9 = result_6

result_18 = result_27
result_20[0].d = result_20[0].d f* result_48[0]
float result_23[0x4] = result_18
int32_t result_50 = rdx[2]
float result_51 = *(r8 + 0x18)
result_23[0] = result_23[0] * result_48[0]
float result_28 = result_51
float result_22[0x4] = result_28
result_22[0] = result_22[0] * temp0_1[0]
result_22[0] = result_22[0] f- result_20[0].d
result_10 = result_22
result_10[0].d = result_10[0].d f* result_25[0]
result_23[0] = result_23[0] f- result_10[0].d
result_10 = result_18
result_10[0].d = result_10[0].d f* temp0_1[0]
result_22[0] = result_22[0] + result_22[0]
result_19[0] = result_19[0] f- result_10[0].d
result_23[0] = result_23[0] + result_23[0]
result_17 = result_22
result_17[0].d = result_17[0].d f* temp0_2[0]
result_19[0] = result_19[0] + result_19[0]
result_17[0].d = result_17[0].d f+ result_18[0]
result_10 = result_23
result_10[0].d = result_10[0].d f* result_48[0]
result_18 = result_22
result_18[0] = result_18[0] * result_48[0]
result_21 = result_19
result_22[0] = result_22[0] * temp0_1[0]
result_21[0].d = result_21[0].d f* temp0_1[0]
float result_46[0x4] = zx.o(0)
result_21[0].d = result_21[0].d f- result_10[0].d
result_10 = result_19
result_10[0].d = result_10[0].d f* result_25[0]
result_19[0] = result_19[0] * temp0_2[0]
result_21[0].d = result_21[0].d f+ result_17[0].d
result_17 = result_23
result_23[0] = result_23[0] * result_25[0]
result_18[0] = result_18[0] f- result_10[0].d
result_17[0].d = result_17[0].d f* temp0_2[0]
result_19[0] = result_19[0] + result_22[0]
result_23[0] = result_23[0] - result_22[0]
result_17[0].d = result_17[0].d f+ result_20[0].d
result_20 = var_358[0]:4.d
float result_29 = result_20[0].d
result_25 = result_20
int32_t var_2e4 = result_20[0].d
result_23[0] = result_23[0] + result_19[0]
result_18[0] = result_18[0] f+ result_17[0].d
result_17 = var_358[0].d
float result_33 = result_17[0].d
result_22 = result_17
float var_2e8 = result_17[0].d
float result_1 = result_23[0]
int64_t result_41 = (_mm_unpacklo_ps(result_21, result_18[0].q)).q
float result_3 = result_1
float result_47[0x4] = var_358[1].d
result_19 = result_17
uint32_t result = zx.d(arg9)
result_10 = result_7
result_10[0].d = result_10[0].d f- result_21[0].d
int64_t var_310 = 0
float result_45[0x4] = result_47
float var_308 = 1f
float result_26[0x4] = result_20
float result_31 = result_45[0]
float result_2 = result_45[0]
result_19[0] = result_19[0] f- result_10[0].d
result_10 = result_7
result_10 = _mm_shuffle_ps(result_10, result_10, 0x55)
result_10[0].d = result_10[0].d f- result_18[0]
float var_340 = result_19[0]
result_26[0] = result_26[0] f- result_10[0].d
result_10 = result_15
result_10[0].d = result_10[0].d f- result_23[0]
result_47[0] = result_47[0] f- result_10[0].d
result_26[0] = result_26[0] * result_26[0]
result_10 = result_19
result_10[0].d = result_10[0].d f* result_19[0]
result_17 = result_47
result_17[0].d = result_17[0].d f* result_47[0]
result_26[0] = result_26[0] f+ result_10[0].d
result_26[0] = result_26[0] f+ result_17[0].d

if (result_26[0] f>= result_34 || (result.b != 0 && result_26[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_17 = 0x7f7fffff
int64_t rsi
rsi.b = 0
float result_30 = 3.40282347e+38f
uint32_t rdx_1 = zx.d(result_5.b)
char var_388 = rdx_1.b
int32_t rcx_1 = 0
int32_t var_344 = 0
result_23 = 0x7f7fffff
int64_t result_38

if (result_5.b == 0)
    while (true)
        int32_t rax_9 = rcx_1
        rcx_1 += 1
        var_344 = rcx_1
        
        if (rax_9 s>= 0x20)
            result_25 = result_29
            result = zx.d(arg9)
        else
            result_21 = 0x3f000000
            result_10 = result_19
            void* rax_10 = var_268
            result_10[0].d = result_10[0].d f* result_19[0]
            result_17 = result_47
            result_26[0] = result_26[0] * result_26[0]
            result_19 = zx.o(0)
            result_17[0].d = result_17[0].d f* result_47[0]
            result_26[0] = result_26[0] f+ result_10[0].d
            result_26[0] = result_26[0] f+ result_17[0].d
            result_19[0] = result_26[0]
            result_18 = 0x3f000000
            result_20 = _mm_rsqrt_ss(result_19[0].d, result_19[0])
            result_19[0] = result_19[0] * 0.5f
            result_20[0].d = result_20[0].d f* result_20[0].d
            result_17 = result_19
            result_17[0].d = result_17[0].d f* result_20[0].d
            result_18[0] = 0.5f f- result_17[0].d
            result_20[0].d = result_20[0].d f* result_18[0]
            result_20[0].d = result_20[0].d f+ result_20[0].d
            result_20[0].d = result_20[0].d f* result_20[0].d
            result_19[0] = result_19[0] f* result_20[0].d
            result_21[0].d = 0.5f - result_19[0]
            result_19 = *(rax_10 + 0x20)
            result_20[0].d = result_20[0].d f* result_21[0].d
            result_21 = *(rax_10 + 0x24)
            result_20[0].d = result_20[0].d f+ result_20[0].d
            result_10 = result_20
            result_26[0] = result_26[0] f* result_20[0].d
            result_10[0].d = result_10[0].d f* var_340
            result_47[0] = result_47[0] f* result_20[0].d
            int32_t result_49 = result_10[0].d
            result_12 = result_20[0].d
            result_20 = *(rax_10 + 0x1c)
            result_18 = result_20
            result_21[0].d = result_21[0].d f* result_47[0]
            result_18[0] = result_18[0] f* result_10[0].d
            result_10 = result_19
            result_10[0].d = result_10[0].d f* result_26[0]
            result_18[0] = result_18[0] f+ result_10[0].d
            result_18[0] = result_18[0] f+ result_21[0].d
            int32_t* rax_11
            int32_t rcx_2
            
            if (result_18[0] f< result_11[0].d)
                rcx_2 = 8
                int32_t var_22c_1 = *(rax_10 + 0x18)
                int64_t var_234
                rax_11 = &var_234
                var_234 = *(rax_10 + 0x10)
            else
                result_18 = *(rax_10 + 0x28)
                rcx_2 = 4
                result_10 = result_18
                result_17 = result_18
                result_10[0].d = result_10[0].d f* result_20[0].d
                result_17[0].d = result_17[0].d f* result_19[0]
                result_10[0].d = result_10[0].d f+ *(rax_10 + 0x10)
                result_18[0] = result_18[0] f* result_21[0].d
                result_17[0].d = result_17[0].d f+ *(rax_10 + 0x14)
                result_18[0] = result_18[0] f+ *(rax_10 + 0x18)
                int32_t var_240 = result_10[0].d
                rax_11 = &var_240
                int32_t var_23c_1 = result_17[0].d
                float var_238_1 = result_18[0]
            
            result_25 = zx.o(*rax_11)
            float result_57 = result_9 | rcx_2
            int32_t result_16 = rax_11[2]
            float result_54 = result_57 & 0xfffffff7
            result_10 = zx.o(*(r8 + 0x10))
            result_17 = result_48
            result_18 = result_10.d
            result_23 = result_18
            result_23[0] = result_23[0] f* result_17[0].d
            float var_270_1 = result_16[0]
            
            if ((result_57.b & 8) == 0)
                result_54 = result_57
            
            result_20 = _mm_shuffle_ps(result_10, result_10, 0x55)
            result_19 = result_20
            result_24 = result_25.q:4.d
            result_20[0].d = result_20[0].d f* result_17[0].d
            float result_44 = result_54 & 0xfffffffb
            result_17 = result_40
            int32_t result_42 = *(r8 + 0x18)
            result_19[0] = result_19[0] f* result_17[0].d
            
            if ((result_54.b & 4) == 0)
                result_44 = result_54
            
            result_22 = result_42
            result_21 = result_22
            result_12 = result_44
            result_21[0].d = result_21[0].d f* temp0_1[0]
            result_21[0].d = result_21[0].d f- result_20[0].d
            result_10 = result_22
            result_10[0].d = result_10[0].d f* result_17[0].d
            result_17 = result_39
            result_23[0] = result_23[0] f- result_10[0].d
            result_10 = result_18
            result_10[0].d = result_10[0].d f* temp0_1[0]
            result_21[0].d = result_21[0].d f+ result_21[0].d
            result_19[0] = result_19[0] f- result_10[0].d
            result_17[0].d = result_17[0].d f* result_21[0].d
            result_23[0] = result_23[0] + result_23[0]
            result_17[0].d = result_17[0].d f+ result_18[0]
            result_19[0] = result_19[0] + result_19[0]
            result_10 = result_23
            result_7.d = result_19.d f* temp0_1[0]
            result_10[0].d = result_10[0].d f* result_48[0]
            result_48[0] = result_48[0] f* result_21[0].d
            result_7.d = result_7.d f- result_10[0].d
            result_10 = result_19
            result_19[0] = result_19[0] * result_39
            result_10[0].d = result_10[0].d f* result_40[0]
            result_7.d = result_7.d f+ result_17[0].d
            result_17 = result_23
            result_17[0].d = result_17[0].d f* result_39
            result_19[0] = result_19[0] + result_22[0]
            result_48[0] = result_48[0] f- result_10[0].d
            result_23[0] = result_23[0] * result_40[0]
            result_10 = temp0_1[0]
            result_17[0].d = result_17[0].d f+ result_20[0].d
            result_10[0].d = result_10[0].d f* result_21[0].d
            result_48[0] = result_48[0] f+ result_17[0].d
            result_17 = result_25
            result_23[0] = result_23[0] f- result_10[0].d
            result_17[0].d = result_17[0].d f- result_7.d
            result_23[0] = result_23[0] + result_19[0]
            result_19 = result_24
            result_19[0] = result_19[0] - result_48[0]
            int32_t var_2b8_1 = result_17[0].d
            uint32_t var_1d4_1 = result_23[0]
            float var_2b4_1 = result_19[0]
            result_10 = result_16
            result_18 = result_29
            result_10[0].d = result_10[0].d f- result_23[0]
            result_22 = result_33
            result_18[0] = result_18[0] - result_19[0]
            result_19 = result_31
            result_20 = result_22
            result_20[0].d = result_20[0].d f- result_17[0].d
            result_17 = result_47
            result_19[0] = result_19[0] f- result_10[0].d
            int32_t var_2b0_1 = result_10[0].d
            float var_37c_2 = result_18[0]
            result_10 = _mm_unpacklo_ps(result_25, result_24[0])
            result_24 = result_35
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            result_17[0].d = result_17[0].d f* result_19[0]
            result_27 = result_20[0].d
            uint64_t rcx_5 = r13 * 3
            result_28 = result_19[0]
            *(&result_8 + (rcx_5 << 2)) = result_10.q
            result_45 = result_49
            *(&result_41 + (rcx_5 << 2)) = (_mm_unpacklo_ps(result_7, result_48[0].q)).q
            result_21 = result_45
            result_21[0].d = result_21[0].d f* result_20[0].d
            result_10 = result_26
            (&result_50)[rcx_5] = var_270_1
            result_10[0].d = result_10[0].d f* result_18[0]
            (&result_3)[rcx_5] = var_1d4_1
            result_21[0].d = result_21[0].d f+ result_10[0].d
            result_21[0].d = result_21[0].d f+ result_17[0].d
            int128_t var_158_1
            int32_t result_14
            
            if (result_21[0].d f<= result_24[0].d)
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_5 << 2)) = result_27.q
                *(&var_168:8 + (rcx_5 << 2)) = result_28
                var_190 = r13.d
            label_14163b0a1:
                result_23 = result_30
                result_25 = result_29
                
                if (rdx_1.b != 0 && not(result_21[0].d f< result_11[0].d))
                    result_21[0].d = result_21[0].d f* result_21[0].d
                    result_21[0].d = result_21[0].d f+ 9.99999997e-07f
                    result_5.b = result_21[0].d f>= result_23[0]
            else
                result_25 = (*arg4)[1]
                result_19 = *arg4
                result_10 = result_25
                result_20 = (*arg4)[2]
                result_19[0] = result_19[0] * result_45[0]
                result_10[0].d = result_10[0].d f* result_26[0]
                result_20[0].d = result_20[0].d f* result_47[0]
                result_19[0] = result_19[0] f+ result_10[0].d
                result_19[0] = result_19[0] f+ result_20[0].d
                
                if (result_19[0] f>= result_11[0].d)
                    result.b = 0
                    goto label_14163bb64
                
                result_21[0].d = result_21[0].d f- result_24[0].d
                result_21[0].d = result_21[0].d f/ result_19[0]
                result_46[0] = result_46[0] f- result_21[0].d
                
                if (result_46[0] f<= result_46[0].d)
                    goto label_14163b0a1
                
                if (result_46[0] f> arg5)
                    result.b = 0
                    goto label_14163bb64
                
                result_17 = zx.o(var_2e8.q)
                result_21 = result_20
                result_23 = 0x7f7fffff
                result_22 = result_19
                result_10 = _mm_shuffle_ps(result_17, result_17, 0x55)
                r13 = zx.q(r13.d + 1)
                result_38 = result_17.q
                result_22[0] = result_22[0] * result_46[0]
                result_1 = result_2
                result_25[0] = result_25[0] * result_46[0]
                var_190 = r13.d
                result_22[0] = result_22[0] f+ var_358[0].d
                result_21[0].d = result_21[0].d f* result_46[0]
                var_388 = 0
                result_25[0] = result_25[0] f+ var_358[0]:4.d
                var_310.d = result_45[0]
                result_21[0].d = result_21[0].d f+ var_358[1].d
                result_33 = result_22[0]
                result_22[0] = result_22[0] f- result_17[0].d
                var_2e8 = result_22[0]
                result_17 = var_168:4.d
                result_20 = result_25
                result_20[0].d = result_20[0].d f- result_10[0].d
                result_29 = result_25[0]
                result_10 = var_168.d
                result_18 = result_21
                result_18[0] = result_18[0] - result_1
                result_10[0].d = result_10[0].d f+ result_22[0]
                result_31 = result_21[0].d
                float var_2e4_1 = result_25[0]
                result_17[0].d = result_17[0].d f+ result_20[0].d
                result_2 = result_21[0].d
                var_310:4.d = result_26[0]
                var_308 = result_47[0]
                var_168.d = result_10[0].d
                result_10 = var_168:8.d
                result_10[0].d = result_10[0].d f+ result_18[0]
                var_168:4.d = result_17[0].d
                result_17 = var_168:0xc.d
                result_17[0].d = result_17[0].d f+ result_22[0]
                result_30 = 3.40282347e+38f
                var_168:8.d = result_10[0].d
                result_10 = var_158_1.d
                var_168:0xc.d = result_17[0].d
                result_10[0].d = result_10[0].d f+ result_20[0].d
                result_17 = var_158_1:4.d
                result_17[0].d = result_17[0].d f+ result_18[0]
                var_158_1.d = result_10[0].d
                result_10 = var_158_1:8.d
                var_158_1:4.d = result_17[0].d
                result_10[0].d = result_10[0].d f+ result_22[0]
                result_17 = var_158_1:0xc.d
                result_17[0].d = result_17[0].d f+ result_20[0].d
                var_158_1:8.d = result_10[0].d
                result_10 = result_14
                result_10[0].d = result_10[0].d f+ result_18[0]
                var_158_1:0xc.d = result_17[0].d
                result_17 = result_22
                result_17[0].d = result_17[0].d f- var_2b8_1
                result_25[0] = result_25[0] - var_2b4_1
                result_14 = result_10[0].d
                result_21[0].d = result_21[0].d f- var_2b0_1
                *(&var_168 + (rcx_5 << 2)) = (_mm_unpacklo_ps(result_17, result_25[0].q)).q
                *(&var_168:8 + (rcx_5 << 2)) = result_21[0].d
            
            if (result_5.b != 0)
                int64_t* rax_27
                rax_27, result_22, result_23, result_24, result_25, result_11, result_46 =
                    sub_1416f4530(&var_258, &var_168, &var_190, &var_178, &result_8, &result_41)
                r13 = zx.q(var_190)
                result_17 = zx.o(*rax_27)
                result_47 = rax_27[1].d
                result = zx.d(arg9)
                result_32 = result_17.q
                result_19 = result_32.d
                result_26 = _mm_shuffle_ps(result_17, result_17, 0x55)
                var_340 = result_19[0]
            else
                int32_t rcx_6 = r13.d
                int32_t result_52
                
                if (rcx_6 == 1)
                    int64_t rax_23 = sx.q(var_18c)
                    int64_t rcx_13 = rax_23 * 3
                    *(&var_178 + (rax_23 << 2)) = 0x3f800000
                    result_10 = zx.o(*(&var_168 + (rcx_13 << 2)))
                    result_52 = *(&var_168:8 + (rcx_13 << 2))
                else if (rcx_6 == 2)
                    void var_1a0
                    uint64_t* rax_22
                    rax_22, result_22, result_23 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_10 = zx.o(*rax_22)
                    result_52 = rax_22[1].d
                else if (rcx_6 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_21
                    rax_21, result_22, result_23, result_24, result_25, result_11, result_46 =
                        sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_10 = zx.o(*rax_21)
                    result_52 = rax_21[1].d
                else if (rcx_6 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_20
                    rax_20, result_22, result_23, result_24, result_25, result_11, result_46 =
                        sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_10 = zx.o(*rax_20)
                    result_52 = rax_20[1].d
                else
                    int32_t var_334_1 = 0
                    result_10 = _mm_unpacklo_ps(result_11, result_11[0])
                    result_52 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_3 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                result_20 = result_34
                int64_t rbx_1 = rdi * 3
                int64_t result_13 = result_10.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_3 * 3
                rsi = r9_3 * 3
                int32_t r8_4 = *(&var_168:8 + (r15_1 << 2))
                result_26 = result_13:4.d
                result_47 = result_52
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_14:4.q = *(&var_168 + (rbx_1 << 2))
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                int32_t result_56 = (&result_50)[r15_1]
                var_178[1].d = (*(&var_178 + (r9_3 << 2)))[0]
                var_178[0].d = (*(&var_178 + (r11_1 << 2)))[0].d
                var_178[0]:4.d = (*(&var_178 + (r10_3 << 2)))[0].d
                var_178[1]:4.d = (*(&var_178 + (rdi << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_6 = (&result_50)[r14_1]
                result_14 = *(&var_168:8 + (rsi << 2))
                int32_t rcx_15 = (&result_50)[rsi]
                result_14 = *(&var_168:8 + (rbx_1 << 2))
                int32_t rax_25 = (&result_50)[rbx_1]
                var_12c_1.q = *(&result_8 + (r14_1 << 2))
                result_18 = zx.o(*(&result_41 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_8 + (rbx_1 << 2))
                result_10 = zx.o(*(&result_41 + (rbx_1 << 2)))
                var_12c_1:0xc.q = *(&result_8 + (rsi << 2))
                result_17 = zx.o(*(&result_41 + (rsi << 2)))
                result_8 = *(&result_8 + (r15_1 << 2))
                result_19 = zx.o(*(&result_41 + (r15_1 << 2)))
                result_50 = result_56
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_6
                rdx_1 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_15
                int32_t rcx_16 = (&result_3)[rsi]
                int32_t var_10c_1 = rax_25
                int32_t rax_26 = (&result_3)[rbx_1]
                var_fc_1.q = result_18.q
                int128_t var_ec_1
                var_ec_1:8.q = result_10.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_4
                result_26[0] = result_26[0] * result_26[0]
                result_3 = result_5
                var_fc_1:0xc.q = result_17.q
                result_17 = result_47
                result_41 = result_19.q
                result_19 = result_13.d
                result_10 = result_19
                result_17[0].d = result_17[0].d f* result_47[0]
                var_fc_1:8.d = rdx_1
                result_10[0].d = result_10[0].d f* result_19[0]
                var_ec_1:4.d = rcx_16
                var_340 = result_19[0]
                int32_t var_dc_1 = rax_26
                result_26[0] = result_26[0] f+ result_10[0].d
                result_26[0] = result_26[0] f+ result_17[0].d
                result = zx.d(arg9)
                result_30 = result_26[0]
                result_5.b = result_20[0].d f> result_26[0]
                bool cond:7_1 = result_26[0] >= result_23[0]
                result_23 = result_26
                rsi.b = cond:7_1
                
                if (result.b == 0)
                    goto label_14163b4e5
                
                if (result_5.b == 0)
                    goto label_14163b4ea
                
                if (not(result_46[0] f!= result_11[0].d))
                    result_17 = 0x3eb0c6f7a0b5ed8d
                    
                    if (not(_mm_cvtps_pd(result_26[0].q)[0] <= result_17[0])
                            && not(_mm_cvtps_pd(result_20[0])[0] <= result_17[0]) && r13.d s< 4)
                        rdx_1.b = 1
                        result_5.b = 0
                        var_388 = 1
                        goto label_14163b4ef
            
        label_14163b4e5:
            
            if (result_5.b != 0)
                rcx_1 = var_344
                arg4 = var_2a0
            else
            label_14163b4ea:
                rdx_1 = zx.d(var_388)
            label_14163b4ef:
                rcx_1 = var_344
                arg4 = var_2a0
                
                if (rsi.b == 0)
                    r8 = arg2
                    result_9 = result_12
                    continue
        
        result_45 = result_31
        result_17 = 0x7f7fffff
        r15 = arg3
        break

bool cond:2_1 = result_46[0] f<= result_11[0].d
int32_t* rdi_1 = arg6
*rdi_1 = result_46[0]

if (not(cond:2_1))
    result_19 = result_11
    *arg8 = var_310
    (*arg8)[1].d = var_308
    
    if (r13.d s> 0)
        double (* rcx_18)[0x2] = &var_178
        uint64_t i_4 = zx.q(r13.d)
        float* rax_30 = &result_3
        uint64_t i
        
        do
            result_18 = *rcx_18
            rcx_18 += 4
            result_10 = result_18
            result_17 = result_18
            result_10[0].d = result_10[0].d f* rax_30[-2]
            result_17[0].d = result_17[0].d f* rax_30[-1]
            result_18[0] = result_18[0] * *rax_30
            rax_30 = &rax_30[3]
            result_11[0].d = result_11[0].d f+ result_10[0].d
            result_11[0].d = result_11[0].d f+ result_17[0].d
            result_19[0] = result_19[0] + result_18[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_18 = result_36
    result_17 = result_46
    result_17[0].d = result_17[0].d f* *arg4
    result_10 = result_18
    result_10[0].d = result_10[0].d f* *arg8
    result_17[0].d = result_17[0].d f+ var_358[0].d
    result_11[0].d = result_11[0].d f- result_10[0].d
    result_10 = result_18
    result_10[0].d = result_10[0].d f* *(arg8 + 4)
    result_18[0] = result_18[0] * (*arg8)[1].d
    result_11[0].d = result_11[0].d f+ result_17[0].d
    result_17 = result_46
    result_17[0].d = result_17[0].d f* (*arg4)[1]
    result_11[0].d = result_11[0].d f- result_10[0].d
    result_46[0] = result_46[0] * (*arg4)[2]
    result_19[0] = result_19[0] - result_18[0]
    result_17[0].d = result_17[0].d f+ var_358[0]:4.d
    result_46[0] = result_46[0] f+ var_358[1].d
    result_11[0].d = result_11[0].d f+ result_17[0].d
    result_19[0] = result_19[0] + result_46[0]
    *arg7 = (_mm_unpacklo_ps(result_11, result_11[0])).q
    arg7[1].d = result_19[0]
else if (result.b != 0)
    double temp0_22[0x2]
    
    if (not(result_24[0].d f<= result_11[0].d))
        temp0_22 = _mm_cvtps_pd(result_23[0].q)
    
    if (result_24[0].d f<= result_11[0].d || temp0_22[0] <= 9.9999999999999995e-07
            || result_23[0] f>= result_17[0].d)
        var_178[0] = 0
        var_178[1] = 0
        var_358[0] = 0
        var_358[1] = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_358[1]:4.d s< 8)
            sub_14083ad30(&var_358, 8)
        
        float result_55[0x4]
        float result_53
        
        if (var_344 == 0)
            int32_t var_334_5 = 0x3f800000
            result_53 = 1f
            result_55 = _mm_unpacklo_ps(result_11, result_11[0])
        label_14163badf:
            result_18 = result_37
            result_17 = result_18
            *rdi_1 = (result_24 ^ data_142d3f780)[0].d
            *arg8 = result_55.q
            (*arg8)[1].d = result_53
            result_18[0] = result_18[0] f* *arg8
            result_18[0] = result_18[0] * (*arg8)[1].d
            result_17[0].d = result_17[0].d f* *(arg8 + 4)
            result_18[0] = result_18[0] f+ result_50
            result_18[0] = result_18[0] f+ result_8.d
            result_17[0].d = result_17[0].d f+ result_8:4.d
            result = result_18[0]
            result_55 = _mm_unpacklo_ps(result_18, result_17[0])
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(var_178[1].d)
                    int32_t rax_34 = (rdi_2 + 1).d
                    var_178[1].d = rax_34
                    
                    if (rax_34 s> var_178[1]:4.d)
                        sub_14083a7e0(&var_178)
                    
                    double rcx_22 = var_178[0]
                    int64_t rdx_9 = rdi_2 * 3
                    result_17 = result_25
                    int32_t rax_35 = *(&result_50 + r12)
                    result_17[0].d = result_17[0].d f+ *(&result_41:4 + r12)
                    *(rcx_22 i+ (rdx_9 << 2)) = *(&result_8 + r12)
                    result_22[0] = result_22[0] f+ *(&result_41 + r12)
                    *(rcx_22 i+ (rdx_9 << 2) + 8) = rax_35
                    int64_t rdi_3 = sx.q(var_358[1].d)
                    int32_t var_37c_3 = result_17[0].d
                    result_27 = result_22[0]
                    result_45[0] = result_45[0] f+ *(&result_3 + r12)
                    int32_t rax_36 = (rdi_3 + 1).d
                    var_358[1].d = rax_36
                    result_28 = result_45[0]
                    
                    if (rax_36 s> var_358[1]:4.d)
                        sub_14083a7e0(&var_358)
                    
                    double rcx_24 = var_358[0]
                    int64_t rdx_11 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_24 i+ (rdx_11 << 2)) = result_27.q
                    *(rcx_24 i+ (rdx_11 << 2) + 8) = result_28
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            int128_t* var_180_1 = r15
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int32_t rax_39
            rax_39, result_24 = sub_14157aaa0(&var_178, &var_358, &var_268, &var_190, &result_12, 
                &result_27, &result_38, &var_258)
            result_55 = zx.o(result_27.q)
            result_53 = result_28
            
            if (rax_39 == 2)
                goto label_14163badf
            
            *arg8 = result_55.q
            result_55 = result_12 ^ data_142d3f780
            result_55[0] = result_55[0] f- result_24[0].d
            (*arg8)[1].d = result_53
            result = result_1
            *rdi_1 = result_55[0]
            result_55 = zx.o(result_38)
        double rcx_26 = var_358[0]
        *arg7 = result_55.q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        double rcx_27 = var_178[0]
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    else
        result_19 = result_11
        result_20 = result_11
        *arg8 = var_310
        result_21 = result_11
        (*arg8)[1].d = var_308
        result_24 = result_11
        result_25 = result_11
        result_7 = result_11
        
        if (rcx_1 == 0)
            result_17 = zx.o(result_8)
            result_18 = zx.o(result_41)
            int32_t result_43 = result_50
            result_20 = _mm_shuffle_ps(result_17, result_17, 0x55)
            float result_4 = result_3
            result_10 = result_18
            result_21 = result_43
            result_25 = _mm_shuffle_ps(result_10, result_10, 0x55)
            result_7 = result_4
            result_32 = result_17.q
            result_19 = result_32.d
            result_24 = result_18.d
        else if (r13.d s> 0)
            double (* rax_32)[0x2] = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_18 = *rax_32
                rax_32 += 4
                result_10 = result_18
                result_17 = result_18
                result_10[0].d = result_10[0].d f* *(&result_8 + r12)
                result_17[0].d = result_17[0].d f* *(&result_8:4 + r12)
                result_19[0] = result_19[0] f+ result_10[0].d
                result_10 = result_18
                result_10[0].d = result_10[0].d f* *(&result_50 + r12)
                result_20[0].d = result_20[0].d f+ result_17[0].d
                result_17 = result_18
                result_17[0].d = result_17[0].d f* *(&result_41 + r12)
                result_21[0].d = result_21[0].d f+ result_10[0].d
                result_10 = result_18
                result_10[0].d = result_10[0].d f* *(&result_41:4 + r12)
                result_18[0] = result_18[0] f* *(&result_3 + r12)
                result_24[0].d = result_24[0].d f+ result_17[0].d
                r12 += 0xc
                result_25[0] = result_25[0] f+ result_10[0].d
                result_7.d = result_7.d f+ result_18[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_26 = var_358[0]:4.d
        result_23 = result_24
        result_46 = var_358[0].d
        result_47 = var_358[1].d
        result_26[0] = result_26[0] + result_25[0]
        result_23[0] = result_23[0] + result_46[0]
        result_47[0] = result_47[0] f+ result_7.d
        result_26[0] = result_26[0] f- result_20[0].d
        result_23[0] = result_23[0] - result_19[0]
        result_47[0] = result_47[0] f- result_21[0].d
        result_21 = 0x3f000000
        result_26[0] = result_26[0] * result_26[0]
        result_10 = result_23
        result_10[0].d = result_10[0].d f* result_23[0]
        result_17 = result_47
        result_17[0].d = result_17[0].d f* result_47[0]
        result_26[0] = result_26[0] f+ result_10[0].d
        result_26[0] = result_26[0] f+ result_17[0].d
        result_20 = _mm_rsqrt_ss(result_26[0].d, result_26[0])
        result_18 = 0x3f000000
        result_26[0] = result_26[0] * 0.5f
        result_20[0].d = result_20[0].d f* result_20[0].d
        result_17 = result_26
        result_17[0].d = result_17[0].d f* result_20[0].d
        result_18[0] = 0.5f f- result_17[0].d
        result_20[0].d = result_20[0].d f* result_18[0]
        result_20[0].d = result_20[0].d f+ result_20[0].d
        result_20[0].d = result_20[0].d f* result_20[0].d
        result_26[0] = result_26[0] f* result_20[0].d
        result_21[0].d = 0.5f - result_26[0]
        result_20[0].d = result_20[0].d f* result_21[0].d
        result_20[0].d = result_20[0].d f+ result_20[0].d
        result_20[0].d = result_20[0].d f* result_26[0]
        result_20[0].d = result_20[0].d f* result_23[0]
        result_20[0].d = result_20[0].d f* result_47[0]
        result_10 = _mm_unpacklo_ps(result_20, result_20[0])
        result_17 = result_35
        *arg8 = result_10.q
        result_10 = __sqrtss_xmmss_memss(result_10[0].d, result_30)
        result_17[0].d = result_17[0].d f- result_10[0].d
        (*arg8)[1].d = result_20[0].d
        
        if (not(result_17[0].d f< result_11[0].d))
            result_11 = __minss_xmmss_memss(result_17[0].d, 0x7f7fffff)
        
        result_17 = *arg8
        result_18 = *(arg8 + 4)
        result_19 = (*arg8)[1].d
        result_20 = result_36
        result_17[0].d = result_17[0].d f* result_20[0].d
        result_17[0].d = result_17[0].d f* result_11[0].d
        result_24[0].d = result_24[0].d f- result_17[0].d
        result_10 = result_18
        result_10[0].d = result_10[0].d f* result_20[0].d
        result_18[0] = result_18[0] f* result_11[0].d
        result_25[0] = result_25[0] f- result_10[0].d
        result_10 = result_19
        result_10[0].d = result_10[0].d f* result_20[0].d
        result_24[0].d = result_24[0].d f+ result_46[0]
        result_19[0] = result_19[0] f* result_11[0].d
        result_11 ^= data_142d3f780
        result_7.d = result_7.d f- result_10[0].d
        result_25[0] = result_25[0] + result_26[0]
        result_24[0].d = result_24[0].d f+ result_17[0].d
        result_7.d = result_7.d f+ result_47[0]
        result_25[0] = result_25[0] + result_18[0]
        result_7.d = result_7.d f+ result_19[0]
        *arg7 = (_mm_unpacklo_ps(result_24, result_25[0].q)).q
        arg7[1].d = result_7.d
        *rdi_1 = result_11[0].d

result.b = 1
label_14163bb64:
__security_check_cookie(rax_1 ^ &var_3c8)
return result

// 函数: sub_14162e260
// 地址: 0x14162e260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
void* r11 = *(arg2 + 0x10)
double result_11[0x2] = zx.o(0)
int128_t* r15 = arg3
double result_19[0x2] = *(r11 + 0x1c)
void* r8 = arg2
float (* var_270)[0x4] = arg4
uint32_t result_41[0x4]

if (result_19[0].d f== 0f)
    result_41 = zx.o(0)
else
    result_41 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    result_41[0] = result_41[0] f* result_19[0].d

float result_6[0x4] = *r15
int64_t r12 = 0
double var_318[0x2] = r15[1]
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
result_19 = data_142d3f7e0
float result_20[0x4] = result_6 ^ 0x80000000
uint32_t result_8[0x4] = result_6
float temp0_2[0x4] = _mm_shuffle_ps(result_20, result_20, 0xe1)
double result_37[0x2] = result_19
void* var_248 = arg1
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float temp0_3[0x4] = _mm_shuffle_ps(result_6, result_6, 0x55)
result_41[0] = result_41[0] f* result_41[0]
float result_28[0x4] = _mm_shuffle_ps(result_6, result_6, 0xaa)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
double temp0_4[0x2] = _mm_cvtps_pd(result_41[0].q)
float result_44[0x4] = _mm_shuffle_ps(result_6, result_6, 0xff)
bool cond:1 = 0f <= *arg10
temp0_4[0] = temp0_4[0] + 9.9999999999999995e-07
int32_t result_13 = _mm_cvtpd_ps(temp0_4)[0].d
temp0_2[0] = (temp0_3 ^ 0x80000000)[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_6[0] = (result_28 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = result_44[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
float var_238[0x4] = temp0_8
float var_1c8[0x4] = temp0_8

if (cond:1)
    result_19 = *(arg1 + 0x1c)
else
    result_19 = *(arg1 + 0x10)

int32_t result_31 = result_19[0].d
int32_t var_288 = result_19[0].d
float result_43[0x4]

if (0f <= arg10[1])
    result_43 = *(arg1 + 0x20)
else
    result_43 = *(arg1 + 0x14)

float var_284 = result_43[0]

if (0f <= arg10[2])
    result_19 = *(arg1 + 0x24)
else
    result_19 = *(arg1 + 0x18)

double result_21[0x2] = *(r11 + 0x14)
result_21[0].d = result_21[0].d f* *(arg2 + 0x2c)
result_20 = *(arg2 + 0x28)
result_20[0] = result_20[0] f* *(r11 + 0x10)
float result_24[0x4] = *(r11 + 0x18)
double result_10[0x2] = result_21
result_24[0] = result_24[0] f* *(arg2 + 0x30)
int32_t result_48 = result_19[0].d
int32_t result_30 = result_19[0].d
int64_t result_17 = var_288.q
result_21[0].d = result_21[0].d f* result_28[0]
int32_t result_46 = result_48
result_24[0] = result_24[0] * temp0_3[0]
result_20[0] = result_20[0] * result_28[0]
result_24[0] = result_24[0] f- result_21[0].d
result_10[0].d = result_10[0].d f* result_6[0]
result_19 = result_24
result_19[0].d = result_19[0].d f* result_6[0]
result_24[0] = result_24[0] + result_24[0]
result_20[0] = result_20[0] f- result_19[0].d
result_19 = result_20
result_19[0].d = result_19[0].d f* temp0_3[0]
uint32_t result_9[0x4] = result_24
result_9[0] = result_9[0] f* result_44[0]
result_10[0].d = result_10[0].d f- result_19[0].d
result_20[0] = result_20[0] + result_20[0]
result_9[0] = result_9[0] f+ result_20[0]
result_24[0] = result_24[0] * temp0_3[0]
result_10[0].d = result_10[0].d f+ result_10[0].d
result_24[0] = result_24[0] * result_28[0]
result_19 = result_20
result_19[0].d = result_19[0].d f* result_28[0]
float result_27[0x4] = zx.o(0)
double result_22[0x2] = result_10
result_22[0].d = result_22[0].d f* temp0_3[0]
result_22[0].d = result_22[0].d f- result_19[0].d
result_10[0].d = result_10[0].d f* result_6[0]
result_10[0].d = result_10[0].d f* result_44[0]
result_22[0].d = result_22[0].d f+ result_9[0]
result_9 = result_20
result_24[0] = result_24[0] f- result_10[0].d
result_9[0] = result_9[0] f* result_44[0]
result_20[0] = result_20[0] * result_6[0]
result_10[0].d = result_10[0].d f+ result_24[0]
result_9[0] = result_9[0] f+ result_21[0].d
result_21 = var_318[1].d
result_20[0] = result_20[0] - result_24[0]
float result_12 = result_21[0].d
float result_2 = result_21[0].d
float result_42[0x4] = result_21
result_24[0] = result_24[0] f+ result_9[0]
result_9 = var_318[0].d
uint32_t result_7 = result_9[0]
result_6 = result_9
result_20[0] = result_20[0] f+ result_10[0].d
uint32_t var_2b8 = result_9[0]
result_10 = var_318[0]:4.d
float result_23[0x4] = result_10
float result_33 = result_10[0].d
result_19 = _mm_unpacklo_ps(result_22, result_24[0].q)
result_43[0] = result_43[0] - result_24[0]
int64_t result_18 = result_19.q
float result_26[0x4] = result_10
result_19 = result_31
result_19[0].d = result_19[0].d f- result_22[0].d
float result_1 = result_20[0]
result_22 = result_9
int32_t var_2b4 = result_10[0].d
result_23[0] = result_23[0] - result_43[0]
float result_3 = result_1
result_22[0].d = result_22[0].d f- result_19[0].d
result_19 = result_30
uint32_t result = zx.d(arg9)
result_19[0].d = result_19[0].d f- result_20[0]
result_24 = result_21
int64_t var_2c8 = 0
float var_2c0 = 1f
result_23[0] = result_23[0] * result_23[0]
result_24[0] = result_24[0] f- result_19[0].d
result_22[0].d = result_22[0].d f* result_22[0].d
result_9 = result_24
result_23[0] = result_23[0] f+ result_22[0].d
result_9[0] = result_9[0] f* result_24[0]
result_23[0] = result_23[0] f+ result_9[0]
float result_5

if (result_23[0] f>= result_13 || (result.b != 0 && result_23[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_9 = 0x7f7fffff
int64_t rsi
rsi.b = 0
float result_45 = 3.40282347e+38f
uint32_t rdx = zx.d(result_5.b)
char var_328 = rdx.b
int32_t rcx = 0
int32_t var_320 = 0
result_43 = 0x7f7fffff
uint64_t result_32
uint32_t var_300
int64_t result_16

if (result_5.b == 0)
    while (true)
        int32_t rax_6 = rcx
        rcx += 1
        var_320 = rcx
        
        if (rax_6 s>= 0x20)
            result_6 = result_7
            result = zx.d(arg9)
        else
            result_21 = 0x3f000000
            result_20 = result_22
            void* rax_7 = var_248
            result_19 = result_23
            result_19[0].d = result_19[0].d f* result_23[0]
            result_9 = result_24
            result_20[0] = result_20[0] f* result_22[0].d
            result_9[0] = result_9[0] f* result_24[0]
            result_20[0] = result_20[0] f+ result_19[0].d
            result_20[0] = result_20[0] f+ result_9[0]
            result_10 = result_20
            float result_29[0x4] = _mm_rsqrt_ss(result_20[0], result_10[0].d)
            result_20 = 0x3f000000
            result_10[0].d = result_10[0].d f* 0.5f
            result_19 = result_29
            result_19[0].d = result_19[0].d f* result_29[0]
            result_9 = result_10
            result_9[0] = result_9[0] f* result_19[0].d
            result_19 = result_29
            result_20[0] = 0.5f f- result_9[0]
            result_19[0].d = result_19[0].d f* result_20[0]
            result_29[0] = result_29[0] f+ result_19[0].d
            result_9 = result_29
            result_19 = result_29
            result_9[0] = result_9[0] f* result_29[0]
            result_10[0].d = result_10[0].d f* result_9[0]
            result_21[0].d = 0.5f f- result_10[0].d
            result_19[0].d = result_19[0].d f* result_21[0].d
            result_29[0] = result_29[0] f+ result_19[0].d
            float var_2cc_1 = result_29[0]
            result_29[0] = result_29[0] f* result_22[0].d
            result_29[0] = result_29[0] * result_23[0]
            bool cond:5_1 = result_29[0] f>= result_11[0].d
            result_29[0] = result_29[0] * result_24[0]
            
            if (cond:5_1)
                result_19 = *(rax_7 + 0x1c)
            else
                result_19 = *(rax_7 + 0x10)
            
            int32_t result_34 = result_19[0].d
            
            if (result_29[0] f>= result_11[0].d)
                result_19 = *(rax_7 + 0x20)
            else
                result_19 = *(rax_7 + 0x14)
            
            int32_t result_14 = result_19[0].d
            
            if (result_29[0] f>= result_11[0].d)
                result_19 = *(rax_7 + 0x24)
            else
                result_19 = *(rax_7 + 0x18)
            
            void* rax_8 = *(r8 + 0x10)
            result_9 = result_28
            int32_t result_36 = result_19[0].d
            result_21 = *(rax_8 + 0x14)
            result_21[0].d = result_21[0].d f* *(r8 + 0x2c)
            result_20 = *(rax_8 + 0x10)
            result_20[0] = result_20[0] f* *(r8 + 0x28)
            result_24 = *(rax_8 + 0x18)
            result_10 = result_21
            result_24[0] = result_24[0] f* *(r8 + 0x30)
            int32_t var_280 = result_19[0].d
            float result_25[0x4] = result_20
            result_25[0] = result_25[0] f* result_9[0]
            result_21[0].d = result_21[0].d f* result_9[0]
            result_22 = result_24
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            result_10[0].d = result_10[0].d f* result_8[0]
            result_22[0].d = result_22[0].d f* temp0_3[0]
            uint64_t rcx_2 = r13 * 3
            result_22[0].d = result_22[0].d f- result_21[0].d
            result_19 = result_24
            result_19[0].d = result_19[0].d f* result_8[0]
            result_25[0] = result_25[0] f- result_19[0].d
            result_19 = result_20
            result_19[0].d = result_19[0].d f* temp0_3[0]
            result_22[0].d = result_22[0].d f+ result_22[0].d
            result_10[0].d = result_10[0].d f- result_19[0].d
            result_25[0] = result_25[0] + result_25[0]
            result_9 = result_22
            result_9[0] = result_9[0] f* result_44[0]
            result_10[0].d = result_10[0].d f+ result_10[0].d
            result_9[0] = result_9[0] f+ result_20[0]
            result_19 = result_25
            result_19[0].d = result_19[0].d f* result_28[0]
            result_20 = result_8
            result_6 = result_10
            result_6[0] = result_6[0] * temp0_3[0]
            result_23 = result_22
            result_22[0].d = result_22[0].d f* temp0_3[0]
            result_23[0] = result_23[0] * result_28[0]
            result_6[0] = result_6[0] f- result_19[0].d
            result_10[0].d = result_10[0].d f* result_20[0]
            result_6[0] = result_6[0] f+ result_9[0]
            result_9 = result_25
            result_25[0] = result_25[0] * result_20[0]
            result_23[0] = result_23[0] f- result_10[0].d
            result_19 = result_44
            result_10[0].d = result_10[0].d f* result_19[0].d
            result_9[0] = result_9[0] f* result_19[0].d
            result_25[0] = result_25[0] f- result_22[0].d
            result_19 = result_34
            result_10[0].d = result_10[0].d f+ result_24[0]
            result_22 = result_36
            result_20 = result_19
            result_9[0] = result_9[0] f+ result_21[0].d
            result_21 = result_7
            result_20[0] = result_20[0] - result_6[0]
            result_25[0] = result_25[0] f+ result_10[0].d
            result_23[0] = result_23[0] f+ result_9[0]
            result_9 = result_14
            result_21[0].d = result_21[0].d f- result_20[0]
            float var_2ec_1 = result_20[0]
            result_20 = result_33
            result_10 = result_9
            result_22[0].d = result_22[0].d f- result_25[0]
            uint32_t var_1e0_1 = result_25[0]
            result_10[0].d = result_10[0].d f- result_23[0]
            result_32.d = result_21[0].d
            result_20[0] = result_20[0] f- result_10[0].d
            int32_t var_2e8_1 = result_10[0].d
            result_10 = result_12
            result_10[0].d = result_10[0].d f- result_22[0].d
            result_32:4.d = result_20[0]
            var_300 = result_10[0].d
            *(&result_17 + (rcx_2 << 2)) = (_mm_unpacklo_ps(result_19, result_9[0].q)).q
            result_21[0].d = result_21[0].d f* result_29[0]
            (&result_46)[rcx_2] = var_280
            result_20[0] = result_20[0] * result_29[0]
            result_10[0].d = result_10[0].d f* result_29[0]
            result_21[0].d = result_21[0].d f+ result_20[0]
            *(&result_18 + (rcx_2 << 2)) = (_mm_unpacklo_ps(result_6, result_23[0].q)).q
            (&result_3)[rcx_2] = var_1e0_1
            result_21[0].d = result_21[0].d f+ result_10[0].d
            int128_t var_158_1
            int32_t result_38
            
            if (result_21[0].d f<= result_41[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_2 << 2)) = result_32
                *(&var_168:8 + (rcx_2 << 2)) = var_300
                var_190 = r13.d
            label_14162eb86:
                result_43 = result_45
                result_6 = result_7
                
                if (rdx.b != 0 && not(result_21[0].d f< result_11[0].d))
                    result_21[0].d = result_21[0].d f* result_21[0].d
                    result_21[0].d = result_21[0].d f+ 9.99999997e-07f
                    result_5.b = result_21[0].d f>= result_43[0]
            else
                result_23 = (*arg4)[1]
                result_6 = *arg4
                result_19 = result_23
                result_24 = (*arg4)[2]
                result_6[0] = result_6[0] * result_29[0]
                result_9 = result_24
                result_19[0].d = result_19[0].d f* result_29[0]
                result_9[0] = result_9[0] f* result_29[0]
                result_6[0] = result_6[0] f+ result_19[0].d
                result_6[0] = result_6[0] f+ result_9[0]
                
                if (result_6[0] f>= result_11[0].d)
                    result.b = 0
                    goto label_14162f61f
                
                result_21[0].d = result_21[0].d f- result_41[0]
                result_21[0].d = result_21[0].d f/ result_6[0]
                result_27[0] = result_27[0] f- result_21[0].d
                
                if (result_27[0] f<= result_27[0])
                    goto label_14162eb86
                
                if (result_27[0] f> arg5)
                    result.b = 0
                    goto label_14162f61f
                
                result_9 = zx.o(var_2b8.q)
                r13 = zx.q(r13.d + 1)
                result_19 = result_9
                result_19 = _mm_shuffle_ps(result_19, result_19, 0x55)
                result_16 = result_9.q
                result_6[0] = result_6[0] * result_27[0]
                result_1 = result_2
                result_23[0] = result_23[0] * result_27[0]
                var_190 = r13.d
                result_6[0] = result_6[0] f+ var_318[0].d
                result_24[0] = result_24[0] * result_27[0]
                var_328 = 0
                result_23[0] = result_23[0] f+ var_318[0]:4.d
                var_2c8.d = result_29[0]
                result_24[0] = result_24[0] f+ var_318[1].d
                result_43 = 0x7f7fffff
                result_10 = result_6
                result_10[0].d = result_10[0].d f- result_9[0]
                result_7 = result_6[0]
                result_9 = var_168:4.d
                result_21 = result_23
                result_21[0].d = result_21[0].d f- result_19[0].d
                result_33 = result_23[0]
                result_19 = var_168.d
                result_24[0] = result_24[0] - result_1
                result_19[0].d = result_19[0].d f+ result_10[0].d
                result_12 = result_24[0]
                var_2b8 = result_6[0]
                result_9[0] = result_9[0] f+ result_21[0].d
                float var_2b4_1 = result_23[0]
                result_2 = result_24[0]
                var_2c8:4.d = result_29[0]
                var_168.d = result_19[0].d
                result_19 = var_168:8.d
                result_19[0].d = result_19[0].d f+ result_24[0]
                var_168:4.d = result_9[0]
                result_9 = var_168:0xc.d
                result_9[0] = result_9[0] f+ result_10[0].d
                var_2c0 = result_29[0]
                result_45 = 3.40282347e+38f
                var_168:8.d = result_19[0].d
                result_19 = var_158_1.d
                var_168:0xc.d = result_9[0]
                result_19[0].d = result_19[0].d f+ result_21[0].d
                result_9 = var_158_1:4.d
                result_9[0] = result_9[0] f+ result_24[0]
                var_158_1.d = result_19[0].d
                result_19 = var_158_1:8.d
                var_158_1:4.d = result_9[0]
                result_19[0].d = result_19[0].d f+ result_10[0].d
                result_9 = var_158_1:0xc.d
                result_9[0] = result_9[0] f+ result_21[0].d
                var_158_1:8.d = result_19[0].d
                result_19 = result_38
                result_19[0].d = result_19[0].d f+ result_24[0]
                var_158_1:0xc.d = result_9[0]
                result_9 = result_6
                result_9[0] = result_9[0] f- var_2ec_1
                result_23[0] = result_23[0] f- var_2e8_1
                result_38 = result_19[0].d
                result_19 = result_24
                result_19[0].d = result_19[0].d f- result_22[0].d
                *(&var_168 + (rcx_2 << 2)) = (_mm_unpacklo_ps(result_9, result_23[0].q)).q
                *(&var_168:8 + (rcx_2 << 2)) = result_19[0].d
            
            if (result_5.b != 0)
                int64_t* rax_21
                rax_21, result_6, result_11, result_27, result_41, result_43 =
                    sub_1416f4530(&var_238, &var_168, &var_190, &result_37, &result_17, &result_18)
                r13 = zx.q(var_190)
                result_9 = zx.o(*rax_21)
                result_19 = result_9
                result_24 = rax_21[1].d
                result = zx.d(arg9)
                int32_t result_15 = result_9.d
                result_23 = _mm_shuffle_ps(result_19, result_19, 0x55)
                result_22 = result_15
            else
                int32_t rcx_3 = r13.d
                int32_t result_39
                
                if (rcx_3 == 1)
                    int64_t rax_17 = sx.q(var_18c)
                    int64_t rcx_10 = rax_17 * 3
                    *(&result_37 + (rax_17 << 2)) = 0x3f800000
                    result_19 = zx.o(*(&var_168 + (rcx_10 << 2)))
                    result_39 = *(&var_168:8 + (rcx_10 << 2))
                else if (rcx_3 == 2)
                    void var_1a0
                    uint64_t* rax_16
                    rax_16, result_6 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &result_37)
                    r13 = zx.q(var_190)
                    result_19 = zx.o(*rax_16)
                    result_39 = rax_16[1].d
                else if (rcx_3 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_15
                    rax_15, result_6, result_11, result_27, result_41, result_43 =
                        sub_1416fa750(&var_1ac, &var_168, &var_190, &result_37)
                    r13 = zx.q(var_190)
                    result_19 = zx.o(*rax_15)
                    result_39 = rax_15[1].d
                else if (rcx_3 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_14
                    rax_14, result_6, result_11, result_27, result_41, result_43 =
                        sub_1416f9c90(&var_1b8, &var_168, &var_190, &result_37)
                    r13 = zx.q(var_190)
                    result_19 = zx.o(*rax_14)
                    result_39 = rax_14[1].d
                else
                    int32_t var_2dc_1 = 0
                    result_19 = _mm_unpacklo_ps(result_11, result_11[0])
                    result_39 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                int64_t result_35 = result_19.q
                int64_t rbx_1 = rdi * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_3 * 3
                int32_t r8_4 = *(&var_168:8 + (r15_1 << 2))
                result_22 = result_35.d
                result_23 = result_35:4.d
                result_24 = result_39
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_38:4.q = *(&var_168 + (rbx_1 << 2))
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                int32_t result_49 = (&result_46)[r15_1]
                result_37[1].d = (*(&result_37 + (r9_3 << 2)))[0]
                result_37[0].d = (*(&result_37 + (r11_1 << 2)))[0].d
                result_37[0]:4.d = (*(&result_37 + (r10_1 << 2)))[0]
                result_37[1]:4.d = (*(&result_37 + (rdi << 2)))[0].d
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_5 = (&result_46)[r14_1]
                result_38 = *(&var_168:8 + (rsi << 2))
                int32_t rcx_12 = (&result_46)[rsi]
                result_38 = *(&var_168:8 + (rbx_1 << 2))
                int32_t rax_19 = (&result_46)[rbx_1]
                var_12c_1.q = *(&result_17 + (r14_1 << 2))
                result_20 = zx.o(*(&result_18 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_17 + (rbx_1 << 2))
                result_19 = zx.o(*(&result_18 + (rbx_1 << 2)))
                var_12c_1:0xc.q = *(&result_17 + (rsi << 2))
                result_9 = zx.o(*(&result_18 + (rsi << 2)))
                result_17 = *(&result_17 + (r15_1 << 2))
                result_10 = zx.o(*(&result_18 + (r15_1 << 2)))
                result_46 = result_49
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_5
                rdx = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_12
                int32_t rcx_13 = (&result_3)[rsi]
                int32_t var_10c_1 = rax_19
                int32_t rax_20 = (&result_3)[rbx_1]
                var_fc_1.q = result_20.q
                int128_t var_ec_1
                var_ec_1:8.q = result_19.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_4
                result_23[0] = result_23[0] * result_23[0]
                result_3 = result_5
                var_fc_1:0xc.q = result_9.q
                result_9 = result_24
                result_22[0].d = result_22[0].d f* result_22[0].d
                var_fc_1:8.d = rdx
                result_9[0] = result_9[0] f* result_24[0]
                var_ec_1:4.d = rcx_13
                result_23[0] = result_23[0] f+ result_22[0].d
                result_18 = result_10.q
                result_10 = result_13
                int32_t var_dc_1 = rax_20
                result_23[0] = result_23[0] f+ result_9[0]
                result = zx.d(arg9)
                result_5.b = result_10[0].d f> result_23[0]
                bool cond:10_1 = result_23[0] >= result_43[0]
                result_45 = result_23[0]
                result_43 = result_23
                rsi.b = cond:10_1
                
                if (result.b == 0)
                    goto label_14162efb9
                
                if (result_5.b == 0)
                    goto label_14162efbe
                
                if (not(result_27[0] f!= result_11[0].d))
                    result_9 = 0x3eb0c6f7a0b5ed8d
                    
                    if (not(_mm_cvtps_pd(result_23[0].q)[0] f<= result_9[0].q)
                            && not(_mm_cvtps_pd(result_10[0])[0] f<= result_9[0].q) && r13.d s< 4)
                        rdx.b = 1
                        result_5.b = 0
                        var_328 = 1
                        goto label_14162efc3
            
        label_14162efb9:
            
            if (result_5.b != 0)
                rcx = var_320
                arg4 = var_270
            else
            label_14162efbe:
                rdx = zx.d(var_328)
            label_14162efc3:
                rcx = var_320
                arg4 = var_270
                
                if (rsi.b == 0)
                    r8 = arg2
                    continue
        
        result_26 = result_33
        result_42 = result_12
        result_9 = 0x7f7fffff
        r15 = arg3
        break

bool cond:4_1 = result_27[0] f<= result_11[0].d
int32_t* rdi_1 = arg6
*rdi_1 = result_27[0]

if (not(cond:4_1))
    *arg8 = var_2c8
    (*arg8)[2] = var_2c0
    
    if (r13.d s> 0)
        double (* rcx_15)[0x2] = &result_37
        uint64_t i_4 = zx.q(r13.d)
        float* rax_24 = &result_3
        uint64_t i
        
        do
            result_20 = *rcx_15
            rcx_15 += 4
            result_19 = result_20
            result_9 = result_20
            result_19[0].d = result_19[0].d f* rax_24[-2]
            result_9[0] = result_9[0] f* rax_24[-1]
            result_20[0] = result_20[0] * *rax_24
            rax_24 = &rax_24[3]
            result_11[0].d = result_11[0].d f+ result_19[0].d
            result_11[0].d = result_11[0].d f+ result_9[0]
            result_11[0].d = result_11[0].d f+ result_20[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_9 = result_27
    result_19 = result_41
    result_19[0].d = result_19[0].d f* *arg8
    result_9[0] = result_9[0] f* *arg4
    result_11[0].d = result_11[0].d f- result_19[0].d
    result_19 = result_41
    result_19[0].d = result_19[0].d f* (*arg8)[1]
    result_9[0] = result_9[0] f+ var_318[0].d
    result_41[0] = result_41[0] f* (*arg8)[2]
    result_11[0].d = result_11[0].d f- result_19[0].d
    result_11[0].d = result_11[0].d f+ result_9[0]
    result_9 = result_27
    result_9[0] = result_9[0] f* (*arg4)[1]
    result_11[0].d = result_11[0].d f- result_41[0]
    result_27[0] = result_27[0] * (*arg4)[2]
    result_9[0] = result_9[0] f+ var_318[0]:4.d
    result_27[0] = result_27[0] f+ var_318[1].d
    result_11[0].d = result_11[0].d f+ result_9[0]
    result_11[0].d = result_11[0].d f+ result_27[0]
    *arg7 = (_mm_unpacklo_ps(result_11, result_11[0])).q
    arg7[1].d = result_11[0].d
else if (result.b != 0)
    double temp0_19[0x2]
    
    if (not(result_41[0] f<= result_11[0].d))
        temp0_19 = _mm_cvtps_pd(result_43[0].q)
    
    if (result_41[0] f<= result_11[0].d || temp0_19[0] <= 9.9999999999999995e-07
            || result_43[0] f>= result_9[0])
        result_37[0] = 0
        result_37[1] = 0
        var_318[0] = 0
        var_318[1] = 0
        sub_14083ad30(&result_37, 8)
        
        if (var_318[1]:4.d s< 8)
            sub_14083ad30(&var_318, 8)
        
        uint32_t rax_34
        float result_47[0x4]
        
        if (var_320 == 0)
            int32_t var_2dc_5 = 0x3f800000
            rax_34 = 0x3f800000
            result_47 = _mm_unpacklo_ps(result_11, result_11[0])
        label_14162f5bb:
            result_20 = result_17:4.d
            result_9 = result_17.d
            *rdi_1 = (result_41 ^ data_142d3f780)[0]
            *arg8 = result_47.q
            result_47 = result_46
            (*arg8)[2] = rax_34
            result_9 = _mm_unpacklo_ps(result_9, result_20[0].q)
            result = result_47[0]
            *arg7 = result_9.q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(result_37[1].d)
                    int32_t rax_28 = (rdi_2 + 1).d
                    result_37[1].d = rax_28
                    
                    if (rax_28 s> result_37[1]:4.d)
                        sub_14083a7e0(&result_37)
                    
                    double rcx_19 = result_37[0]
                    int64_t rdx_8 = rdi_2 * 3
                    result_47 = zx.o(*(&result_17 + r12))
                    result_9 = result_26
                    int32_t rax_29 = *(&result_46 + r12)
                    result_9[0] = result_9[0] f+ *(&result_18:4 + r12)
                    *(rcx_19 i+ (rdx_8 << 2)) = result_47.q
                    result_6[0] = result_6[0] f+ *(&result_18 + r12)
                    *(rcx_19 i+ (rdx_8 << 2) + 8) = rax_29
                    int64_t rdi_3 = sx.q(var_318[1].d)
                    result_32:4.d = result_9[0]
                    result_32.d = result_6[0]
                    result_42[0] = result_42[0] f+ *(&result_3 + r12)
                    int32_t rax_30 = (rdi_3 + 1).d
                    var_318[1].d = rax_30
                    var_300 = result_42[0]
                    
                    if (rax_30 s> var_318[1]:4.d)
                        sub_14083a7e0(&var_318)
                    
                    double rcx_21 = var_318[0]
                    int64_t rdx_10 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_21 i+ (rdx_10 << 2)) = result_32
                    *(rcx_21 i+ (rdx_10 << 2) + 8) = var_300
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            int128_t* var_180_1 = r15
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int32_t rax_33
            rax_33, result_41 = sub_14155f960(&result_37, &var_318, &var_248, &var_190, result_43, 
                &result_13, &result_32, &result_16, &var_238)
            result_47 = zx.o(result_32)
            rax_34 = var_300
            
            if (rax_33 == 2)
                goto label_14162f5bb
            
            *arg8 = result_47.q
            result_47 = result_13 ^ data_142d3f780
            (*arg8)[2] = rax_34
            result_47[0] = result_47[0] f- result_41[0]
            result = result_1
            *rdi_1 = result_47[0]
            *arg7 = result_16
        double rcx_23 = var_318[0]
        arg7[1].d = result
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        double rcx_24 = result_37[0]
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
    else
        result_10 = result_11
        result_21 = result_11
        *arg8 = var_2c8
        result_22 = result_11
        (*arg8)[2] = var_2c0
        result_26 = result_11
        result_27 = result_11
        result_6 = result_11
        
        if (rcx == 0)
            result_9 = zx.o(result_17)
            result_20 = zx.o(result_18)
            result_19 = result_9
            int32_t result_40 = result_46
            result_21 = _mm_shuffle_ps(result_19, result_19, 0x55)
            float result_4 = result_3
            result_19 = result_20
            result_22 = result_40
            result_27 = _mm_shuffle_ps(result_19, result_19, 0x55)
            result_6 = result_4
            result_10 = result_9.d
            result_32 = result_20.q
            result_26 = result_32.d
        else if (r13.d s> 0)
            double (* rax_26)[0x2] = &result_37
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_20 = *rax_26
                rax_26 += 4
                result_19 = result_20
                result_9 = result_20
                result_19[0].d = result_19[0].d f* *(&result_17 + r12)
                result_9[0] = result_9[0] f* *(&result_17:4 + r12)
                result_10[0].d = result_10[0].d f+ result_19[0].d
                result_19 = result_20
                result_19[0].d = result_19[0].d f* *(&result_46 + r12)
                result_21[0].d = result_21[0].d f+ result_9[0]
                result_9 = result_20
                result_9[0] = result_9[0] f* *(&result_18 + r12)
                result_22[0].d = result_22[0].d f+ result_19[0].d
                result_19 = result_20
                result_19[0].d = result_19[0].d f* *(&result_18:4 + r12)
                result_20[0] = result_20[0] f* *(&result_3 + r12)
                result_26[0] = result_26[0] f+ result_9[0]
                r12 += 0xc
                result_27[0] = result_27[0] f+ result_19[0].d
                result_6[0] = result_6[0] + result_20[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_24 = var_318[0]:4.d
        result_23 = var_318[1].d
        result_24[0] = result_24[0] + result_27[0]
        result_42 = var_318[0].d
        result_23[0] = result_23[0] + result_6[0]
        result_26[0] = result_26[0] + result_42[0]
        result_24[0] = result_24[0] f- result_21[0].d
        result_23[0] = result_23[0] f- result_22[0].d
        result_22 = 0x3f000000
        result_26[0] = result_26[0] f- result_10[0].d
        result_24[0] = result_24[0] * result_24[0]
        result_9 = result_23
        result_9[0] = result_9[0] f* result_23[0]
        result_19 = result_26
        result_19[0].d = result_19[0].d f* result_26[0]
        result_24[0] = result_24[0] f+ result_19[0].d
        result_24[0] = result_24[0] f+ result_9[0]
        result_10 = result_24
        result_21 = _mm_rsqrt_ss(result_24[0].d, result_10[0].d)
        result_20 = 0x3f000000
        result_10[0].d = result_10[0].d f* 0.5f
        result_21[0].d = result_21[0].d f* result_21[0].d
        result_9 = result_10
        result_9[0] = result_9[0] f* result_21[0].d
        result_20[0] = 0.5f f- result_9[0]
        result_21[0].d = result_21[0].d f* result_20[0]
        result_21[0].d = result_21[0].d f+ result_21[0].d
        result_9 = result_21
        result_9[0] = result_9[0] f* result_21[0].d
        result_10[0].d = result_10[0].d f* result_9[0]
        result_22[0].d = 0.5f f- result_10[0].d
        result_21[0].d = result_21[0].d f* result_22[0].d
        result_21[0].d = result_21[0].d f+ result_21[0].d
        result_9 = result_21
        result_21[0].d = result_21[0].d f* result_26[0]
        result_9[0] = result_9[0] f* result_24[0]
        result_21[0].d = result_21[0].d f* result_23[0]
        *arg8 = (_mm_unpacklo_ps(result_21, result_9[0].q)).q
        result_19 = _mm_sqrt_ss(0, result_43[0])
        uint32_t var_2dc_3 = result_21[0].d
        result_41[0] = result_41[0] f- result_19[0].d
        (*arg8)[2] = var_2dc_3
        
        if (not(result_41[0] f< result_11[0].d))
            result_11 = __minss_xmmss_memss(result_41[0].d, 0x7f7fffff)
        
        result_9 = *arg8
        result_20 = (*arg8)[1]
        result_19 = result_9
        result_10 = (*arg8)[2]
        result_19[0].d = result_19[0].d f* result_41[0]
        result_9[0] = result_9[0] f* result_11[0].d
        result_26[0] = result_26[0] f- result_19[0].d
        result_19 = result_20
        result_19[0].d = result_19[0].d f* result_41[0]
        result_20[0] = result_20[0] f* result_11[0].d
        result_27[0] = result_27[0] f- result_19[0].d
        result_10[0].d = result_10[0].d f* result_41[0]
        result_26[0] = result_26[0] + result_42[0]
        result_10[0].d = result_10[0].d f* result_11[0].d
        result_27[0] = result_27[0] f+ var_318[0]:4.d
        result_11 ^= data_142d3f780
        result_6[0] = result_6[0] f- result_10[0].d
        result_26[0] = result_26[0] f+ result_9[0]
        result_27[0] = result_27[0] + result_20[0]
        result_6[0] = result_6[0] f+ var_318[1].d
        *arg7 = (_mm_unpacklo_ps(result_26, result_27[0].q)).q
        result_6[0] = result_6[0] f+ result_10[0].d
        arg7[1].d = result_6[0]
        *rdi_1 = result_11[0].d

result.b = 1
label_14162f61f:
__security_check_cookie(rax_1 ^ &var_368)
return result

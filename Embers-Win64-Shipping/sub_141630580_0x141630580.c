// 函数: sub_141630580
// 地址: 0x141630580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
uint128_t result_28 = *(arg2 + 0x1c)
int128_t* r15 = arg3
int64_t r12 = 0
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float result_26[0x4] = *r15
uint128_t var_338 = r15[1]
int32_t var_190 = 0
float result_10[0x4] = result_26 ^ 0x80000000
float (* var_278)[0x4] = arg4
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
void* r8 = arg2
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
float temp0[0x4] = _mm_shuffle_ps(result_10, result_10, 0xe1)
uint128_t var_178 = data_142d3f7e0
void* var_220 = arg1
float result_9[0x4] = result_28
float temp0_1[0x4] = _mm_shuffle_ps(result_26, result_26, 0x55)
result_9[0] = result_9[0] f* result_28.d
uint128_t result_12 = zx.o(0)
float temp0_2[0x4] = _mm_shuffle_ps(result_26, result_26, 0xaa)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
uint128_t result_21 = _mm_cvtps_pd(result_9[0].q)
float result_35[0x4] = result_26
bool cond:0 = 0f <= *arg10
result_21.q = result_21.q f+ 9.9999999999999995e-07
int32_t result_31 = _mm_cvtpd_ps(result_21).d
temp0[0] = (temp0_1 ^ 0x80000000).d
float temp0_5[0x4] = _mm_shuffle_ps(result_26, result_26, 0xff)
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float result_16 = temp0_5[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0_5[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
float var_238[0x4] = temp0_8
float var_1c8[0x4] = temp0_8
float result_27[0x4]

if (cond:0)
    result_27 = *(arg1 + 0x1c)
else
    result_27 = *(arg1 + 0x10)

float result_40[0x4]

if (0f <= arg10[1])
    result_40 = *(arg1 + 0x20)
else
    result_40 = *(arg1 + 0x14)

float var_28c = result_40[0]

if (0f <= arg10[2])
    result_21 = *(arg1 + 0x24)
else
    result_21 = *(arg1 + 0x18)

result_9 = result_16
int32_t result_45 = result_21.d
int32_t var_344 = result_21.d
int64_t result_17 = result_27[0].q
result_21 = zx.o(*(arg2 + 0x10))
uint64_t result_29 = result_21.q
result_10 = result_29.d
uint128_t result_24 = _mm_shuffle_ps(result_21, result_21, 0x55)
float result_11[0x4] = result_10
result_11[0] = result_11[0] * temp0_2[0]
int32_t result_43 = result_45
result_21.d = result_24.d f* temp0_2[0]
float result_22[0x4] = result_24
float result_19 = *(arg2 + 0x18)
result_22[0] = result_22[0] * result_26[0]
float result_8 = result_19
uint128_t result_6 = result_8
uint128_t result_25
result_25.d = result_6.d f* temp0_1[0]
result_25.d = result_25.d f- result_21.d
result_21.d = result_6.d f* result_26[0]
result_11[0] = result_11[0] f- result_21.d
result_21.d = result_10.d f* temp0_1[0]
result_25.d = result_25.d f+ result_25.d
result_22[0] = result_22[0] f- result_21.d
result_9[0] = result_9[0] f* result_25.d
result_11[0] = result_11[0] + result_11[0]
temp0_2[0] = temp0_2[0] f* result_25.d
result_9[0] = result_9[0] + result_10[0]
result_10 = result_26
result_21.d = temp0_2.d f* result_11[0]
result_22[0] = result_22[0] + result_22[0]
result_10[0] = result_10[0] * result_11[0]
temp0_1[0] = temp0_1[0] * result_22[0]
temp0_1[0] = temp0_1[0] f- result_21.d
result_21.d = result_26.d f* result_22[0]
result_26 = zx.o(0)
temp0_1[0] = temp0_1[0] + result_9[0]
result_9 = result_16
temp0_2[0] = temp0_2[0] f- result_21.d
result_9[0] = result_9[0] * result_11[0]
result_21.d = temp0_1.d f* result_25.d
result_9[0] = result_9[0] f+ result_24.d
result_27[0] = result_27[0] - temp0_1[0]
result_10[0] = result_10[0] f- result_21.d
temp0_2[0] = temp0_2[0] + result_9[0]
result_9 = result_16
result_9[0] = result_9[0] * result_22[0]
result_22 = var_338:8.d
float result_30 = result_22[0]
float result_41[0x4] = result_22
result_9[0] = result_9[0] f+ result_6.d
int64_t result_18 = (_mm_unpacklo_ps(temp0_1, temp0_2[0].q)).q
result_40[0] = result_40[0] - temp0_2[0]
result_21 = var_338.d
int32_t result_34 = result_21.d
int32_t var_2d0 = result_21.d
result_24.d = result_21.d f- result_27[0]
result_10[0] = result_10[0] + result_9[0]
float result_2 = result_22[0]
result_9 = var_338:4.d
result_25 = result_21
float result_7 = result_9[0]
result_6 = result_9
float var_2cc = result_9[0]
float result_1 = result_10[0]
float result_3 = result_1
result_27 = result_9
uint32_t result = zx.d(arg9)
result_21.d = var_344.d f- result_10[0]
result_27[0] = result_27[0] - result_40[0]
int64_t var_2e8 = 0
result_40 = result_22
float var_2e0 = 1f
result_40[0] = result_40[0] f- result_21.d
result_21.d = result_24.d f* result_24.d
result_27[0] = result_27[0] * result_27[0]
result_40[0] = result_40[0] * result_40[0]
result_27[0] = result_27[0] f+ result_21.d
result_27[0] = result_27[0] + result_40[0]
float result_5

if (result_27[0] f>= result_31 || (result.b != 0 && result_27[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_9 = 0x7f7fffff
int64_t rbx
rbx.b = 0
float result_42 = 3.40282347e+38f
uint32_t rdx = zx.d(result_5.b)
char var_348 = rdx.b
int32_t rcx = 0
int32_t var_344_1 = 0
float result_39[0x4] = 0x7f7fffff
int64_t result_15
float result_23[0x4]

if (result_5.b == 0)
    while (true)
        int32_t rax_6 = rcx
        rcx += 1
        var_344_1 = rcx
        
        if (rax_6 s>= 0x20)
            result_6 = result_7
            result = zx.d(arg9)
        else
            result_23 = 0x3f000000
            void* rax_7 = var_220
            result_40[0] = result_40[0] * result_40[0]
            result_22 = zx.o(0)
            result_27[0] = result_27[0] * result_27[0]
            result_21.d = result_24.d f* result_24.d
            result_27[0] = result_27[0] f+ result_21.d
            result_27[0] = result_27[0] + result_40[0]
            result_22[0] = result_27[0]
            result_10 = 0x3f000000
            float temp0_11[0x4] = _mm_rsqrt_ss(result_22[0], result_22[0])
            result_22[0] = result_22[0] * 0.5f
            result_21.d = temp0_11.d f* temp0_11[0]
            result_22[0] = result_22[0] f* result_21.d
            result_10[0] = 0.5f - result_22[0]
            result_21.d = temp0_11.d f* result_10[0]
            temp0_11[0] = temp0_11[0] f+ result_21.d
            temp0_11[0] = temp0_11[0] * temp0_11[0]
            result_22[0] = result_22[0] * temp0_11[0]
            result_23[0] = 0.5f - result_22[0]
            result_21.d = temp0_11.d f* result_23[0]
            temp0_11[0] = temp0_11[0] f+ result_21.d
            float var_2f0_1 = temp0_11[0]
            temp0_11[0] = temp0_11[0] f* result_24.d
            result_27[0] = result_27[0] * temp0_11[0]
            bool cond:4_1 = temp0_11[0] f>= result_12.d
            result_40[0] = result_40[0] * temp0_11[0]
            
            if (cond:4_1)
                result_21 = *(rax_7 + 0x1c)
            else
                result_21 = *(rax_7 + 0x10)
            
            int32_t result_32 = result_21.d
            
            if (result_27[0] f>= result_12.d)
                result_21 = *(rax_7 + 0x20)
            else
                result_21 = *(rax_7 + 0x14)
            
            int32_t result_13 = result_21.d
            
            if (result_40[0] f>= result_12.d)
                result_21 = *(rax_7 + 0x24)
            else
                result_21 = *(rax_7 + 0x18)
            
            int32_t result_36 = *(r8 + 0x18)
            int32_t var_2f0_2 = result_21.d
            int32_t var_288 = result_21.d
            result_21 = zx.o(*(r8 + 0x10))
            result_23 = result_21
            result_10 = result_21.d
            float temp0_12[0x4] = _mm_shuffle_ps(result_23, result_23, 0x55)
            result_10[0] = result_10[0] * temp0_2[0]
            result_21.d = temp0_12.d f* temp0_2[0]
            result_25 = result_36
            temp0_12[0] = temp0_12[0] * result_35[0]
            (&var_18c)[sx.q(r13.d)] = r13.d
            result_24.d = result_25.d f* temp0_1[0]
            result_24.d = result_24.d f- result_21.d
            result_21.d = result_25.d f* result_35[0]
            result_9 = result_16
            result_10[0] = result_10[0] f- result_21.d
            result_21.d = result_10.d f* temp0_1[0]
            result_24.d = result_24.d f+ result_24.d
            temp0_12[0] = temp0_12[0] f- result_21.d
            result_9[0] = result_9[0] f* result_24.d
            result_10[0] = result_10[0] + result_10[0]
            temp0_2[0] = temp0_2[0] f* result_24.d
            result_9[0] = result_9[0] + result_10[0]
            result_21.d = temp0_2.d f* result_10[0]
            temp0_12[0] = temp0_12[0] + temp0_12[0]
            result_6.d = temp0_1.d f* temp0_12[0]
            result_6.d = result_6.d f- result_21.d
            result_21.d = result_35.d f* temp0_12[0]
            result_35[0] = result_35[0] * result_10[0]
            result_6.d = result_6.d f+ result_9[0]
            result_9 = result_16
            result_9[0] = result_9[0] * result_10[0]
            temp0_2[0] = temp0_2[0] f- result_21.d
            result_21.d = temp0_1[0].d f* result_24.d
            result_9[0] = result_9[0] + temp0_12[0]
            result_35[0] = result_35[0] f- result_21.d
            result_21 = result_32
            temp0_2[0] = temp0_2[0] + result_9[0]
            result_9 = result_16
            result_9[0] = result_9[0] * temp0_12[0]
            result_22 = result_21
            result_22[0] = result_22[0] f- result_6.d
            result_9[0] = result_9[0] f+ result_25.d
            result_25 = result_34
            result_11 = result_25
            result_11[0] = result_11[0] - result_22[0]
            float var_310_1 = result_22[0]
            result_22 = result_30
            result_35[0] = result_35[0] + result_9[0]
            result_9 = result_13
            result_9[0] = result_9[0] - temp0_2[0]
            result_29.d = result_11[0]
            result_24.d = var_2f0_2.d f- result_35[0]
            float var_1d4_1 = result_35[0]
            result_10 = result_7
            result_10[0] = result_10[0] - result_9[0]
            float var_30c_1 = result_9[0]
            result_22[0] = result_22[0] f- result_24.d
            result_29:4.d = result_10[0]
            result_8 = result_22[0]
            r13 = sx.q(var_190)
            result_21 = _mm_unpacklo_ps(result_21, result_9[0].q)
            temp0_11[0] = temp0_11[0] * result_11[0]
            uint64_t rcx_2 = r13 * 3
            result_40[0] = result_40[0] * result_22[0]
            *(&result_17 + (rcx_2 << 2)) = result_21.q
            *(&result_18 + (rcx_2 << 2)) = (_mm_unpacklo_ps(result_6, temp0_2[0].q)).q
            result_21.d = result_27.d f* result_10[0]
            (&result_43)[rcx_2] = var_288
            (&result_3)[rcx_2] = var_1d4_1
            temp0_11[0] = temp0_11[0] f+ result_21.d
            temp0_11[0] = temp0_11[0] + result_40[0]
            int128_t var_158_1
            int32_t var_148_1
            
            if (temp0_11[0] f<= result_28.d)
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_2 << 2)) = result_29
                *(&var_168:8 + (rcx_2 << 2)) = result_8
                var_190 = r13.d
            label_141630ea6:
                result_39 = result_42
                result_6 = result_7
                
                if (rdx.b != 0 && not(temp0_11[0] f< result_12.d))
                    temp0_11[0] = temp0_11[0] * temp0_11[0]
                    temp0_11[0] = temp0_11[0] + 9.99999997e-07f
                    result_5.b = temp0_11[0] >= result_39[0]
            else
                result_6 = (*arg4)[1]
                result_22 = *arg4
                result_11 = (*arg4)[2]
                temp0_11[0] = temp0_11[0] * result_22[0]
                result_21.d = result_27.d f* result_6.d
                result_40[0] = result_40[0] * result_11[0]
                temp0_11[0] = temp0_11[0] f+ result_21.d
                temp0_11[0] = temp0_11[0] + result_40[0]
                
                if (temp0_11[0] f>= result_12.d)
                    result.b = 0
                    goto label_14163193f
                
                result_21.d = temp0_11.d f- result_28.d
                result_21.d = result_21.d f/ temp0_11[0]
                result_26[0] = result_26[0] f- result_21.d
                
                if (result_26[0] <= result_26[0])
                    goto label_141630ea6
                
                if (result_26[0] f> arg5)
                    result.b = 0
                    goto label_14163193f
                
                result_9 = zx.o(var_2d0.q)
                result_23 = result_11
                result_21 = result_9
                result_39 = 0x7f7fffff
                result_21 = _mm_shuffle_ps(result_21, result_21, 0x55)
                r13 = zx.q(r13.d + 1)
                result_15 = result_9.q
                result_25.d = result_22.d f* result_26[0]
                result_1 = result_2
                result_6.d = result_6.d f* result_26[0]
                var_190 = r13.d
                result_25.d = result_25.d f+ var_338.d
                result_23[0] = result_23[0] * result_26[0]
                var_348 = 0
                result_6.d = result_6.d f+ var_338:4.d
                var_2e8.d = temp0_11[0]
                result_23[0] = result_23[0] f+ var_338:8.d
                result_22 = result_25
                result_34 = result_25.d
                result_22[0] = result_22[0] - result_9[0]
                var_2d0 = result_25.d
                result_9 = var_168:4.d
                result_11 = result_6
                result_11[0] = result_11[0] f- result_21.d
                result_7 = result_6.d
                result_21 = var_168.d
                result_23[0] = result_23[0] - result_1
                result_21.d = result_21.d f+ result_22[0]
                result_30 = result_23[0]
                int32_t var_2cc_1 = result_6.d
                result_9[0] = result_9[0] + result_11[0]
                result_2 = result_23[0]
                var_2e8:4.d = result_27[0]
                var_2e0 = result_40[0]
                var_168.d = result_21.d
                result_21.d = var_168:8.d.d f+ result_23[0]
                var_168:4.d = result_9[0]
                result_9 = var_168:0xc.d
                result_9[0] = result_9[0] + result_22[0]
                result_42 = 3.40282347e+38f
                var_168:8.d = result_21.d
                var_168:0xc.d = result_9[0]
                result_21.d = var_158_1.d.d f+ result_11[0]
                result_9 = var_158_1:4.d
                result_9[0] = result_9[0] + result_23[0]
                var_158_1.d = result_21.d
                result_21 = var_158_1:8.d
                var_158_1:4.d = result_9[0]
                result_21.d = result_21.d f+ result_22[0]
                result_9 = var_158_1:0xc.d
                result_9[0] = result_9[0] + result_11[0]
                var_158_1:8.d = result_21.d
                result_21.d = var_148_1.d f+ result_23[0]
                var_158_1:0xc.d = result_9[0]
                result_9 = result_25
                result_10 = result_6
                result_9[0] = result_9[0] - var_310_1
                result_10[0] = result_10[0] - var_30c_1
                var_148_1 = result_21.d
                result_21.d = result_23.d f- result_24.d
                *(&var_168 + (rcx_2 << 2)) = (_mm_unpacklo_ps(result_9, result_10[0].q)).q
                *(&var_168:8 + (rcx_2 << 2)) = result_21.d
            
            if (result_5.b != 0)
                int64_t* rax_20
                rax_20, result_39, result_25, result_6, result_12, result_26, result_28 =
                    sub_1416f4530(&var_238, &var_168, &var_190, &var_178, &result_17, &result_18)
                r13 = zx.q(var_190)
                result_9 = zx.o(*rax_20)
                result_21 = result_9
                result_40 = rax_20[1].d
                result = zx.d(arg9)
                int32_t result_14 = result_9.d
                result_27 = _mm_shuffle_ps(result_21, result_21, 0x55)
                result_24 = result_14
            else
                int32_t rcx_3 = r13.d
                int32_t result_44
                
                if (rcx_3 == 1)
                    int64_t rax_16 = sx.q(var_18c)
                    int64_t rcx_10 = rax_16 * 3
                    *(&var_178 + (rax_16 << 2)) = 0x3f800000
                    result_21 = zx.o(*(&var_168 + (rcx_10 << 2)))
                    result_44 = *(&var_168:8 + (rcx_10 << 2))
                else if (rcx_3 == 2)
                    uint64_t var_1ac
                    uint64_t* rax_15
                    rax_15, result_39, result_25, result_6 =
                        sub_1416e69d0(&var_1ac, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_21 = zx.o(*rax_15)
                    result_44 = rax_15[1].d
                else if (rcx_3 == 3)
                    uint64_t var_1b8
                    uint64_t* rax_14
                    rax_14, result_39, result_25, result_6, result_12, result_26, result_28 =
                        sub_1416fa750(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_21 = zx.o(*rax_14)
                    result_44 = rax_14[1].d
                else if (rcx_3 == 4)
                    void var_1a0
                    uint64_t* rax_13
                    rax_13, result_39, result_25, result_6, result_12, result_26, result_28 =
                        sub_1416f9c90(&var_1a0, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_21 = zx.o(*rax_13)
                    result_44 = rax_13[1].d
                else
                    int32_t var_300_1 = 0
                    result_21 = _mm_unpacklo_ps(result_12, result_12.q)
                    result_44 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                uint64_t result_33 = result_21.q
                rbx = rdi * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_4 = *(&var_168:8 + (r15_1 << 2))
                result_24 = result_33.d
                result_27 = result_33:4.d
                result_40 = result_44
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx << 2))
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                int32_t result_46 = (&result_43)[r15_1]
                var_178:8.d = (*(&var_178 + (r9_3 << 2)))[0]
                var_178.d = (*(&var_178 + (r11_1 << 2))).d
                var_178:4.d = (*(&var_178 + (r10_1 << 2)))[0]
                var_178:0xc.d = (*(&var_178 + (rdi << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_5 = (&result_43)[r14_1]
                var_148_1 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rcx_12 = (&result_43)[rsi_1]
                var_148_1 = *(&var_168:8 + (rbx << 2))
                int32_t rax_18 = (&result_43)[rbx]
                var_12c_1.q = *(&result_17 + (r14_1 << 2))
                result_10 = zx.o(*(&result_18 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_17 + (rbx << 2))
                result_21 = zx.o(*(&result_18 + (rbx << 2)))
                var_12c_1:0xc.q = *(&result_17 + (rsi_1 << 2))
                result_9 = zx.o(*(&result_18 + (rsi_1 << 2)))
                result_17 = *(&result_17 + (r15_1 << 2))
                result_22 = zx.o(*(&result_18 + (r15_1 << 2)))
                result_43 = result_46
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_5
                rdx = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_12
                int32_t rcx_13 = (&result_3)[rsi_1]
                int32_t var_10c_1 = rax_18
                int32_t rax_19 = (&result_3)[rbx]
                var_fc_1.q = result_10.q
                int128_t var_ec_1
                var_ec_1:8.q = result_21.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_4
                result_27[0] = result_27[0] * result_27[0]
                result_3 = result_5
                var_fc_1:0xc.q = result_9.q
                result_21.d = result_24.d f* result_24.d
                var_fc_1:8.d = rdx
                result_40[0] = result_40[0] * result_40[0]
                var_ec_1:4.d = rcx_13
                result_27[0] = result_27[0] f+ result_21.d
                result_18 = result_22.q
                result_22 = result_31
                int32_t var_dc_1 = rax_19
                result_27[0] = result_27[0] + result_40[0]
                result = zx.d(arg9)
                result_5.b = result_22[0] > result_27[0]
                bool cond:9_1 = result_27[0] >= result_39[0]
                result_42 = result_27[0]
                result_39 = result_27
                rbx.b = cond:9_1
                
                if (result.b == 0)
                    goto label_1416312e4
                
                if (result_5.b == 0)
                    goto label_1416312e9
                
                if (not(result_26[0] f!= result_12.d))
                    result_9 = 0x3eb0c6f7a0b5ed8d
                    result_21 = _mm_cvtps_pd(result_27[0].q)
                    
                    if (not(result_21.q f<= result_9[0].q))
                        result_21 = _mm_cvtps_pd(result_22[0].q)
                        
                        if (not(result_21.q f<= result_9[0].q) && r13.d s< 4)
                            rdx.b = 1
                            result_5.b = 0
                            var_348 = 1
                            goto label_1416312ee
            
        label_1416312e4:
            
            if (result_5.b != 0)
                rcx = var_344_1
                arg4 = var_278
            else
            label_1416312e9:
                rdx = zx.d(var_348)
            label_1416312ee:
                rcx = var_344_1
                arg4 = var_278
                
                if (rbx.b == 0)
                    r8 = arg2
                    continue
        
        result_41 = result_30
        result_9 = 0x7f7fffff
        r15 = arg3
        break

bool cond:3_1 = result_26[0] f<= result_12.d
int32_t* rdi_1 = arg6
*rdi_1 = result_26[0]

if (not(cond:3_1))
    result_11 = result_12
    result_22 = result_12
    *arg8 = var_2e8
    (*arg8)[2] = var_2e0
    
    if (r13.d s> 0)
        uint128_t* rcx_15 = &var_178
        uint64_t i_4 = zx.q(r13.d)
        float* rax_23 = &result_3
        uint64_t i
        
        do
            result_10 = *rcx_15
            rcx_15 += 4
            result_21.d = result_10.d f* rax_23[-2]
            result_10[0] = result_10[0] * rax_23[-1]
            result_10[0] = result_10[0] * *rax_23
            rax_23 = &rax_23[3]
            result_12.d = result_12.d f+ result_21.d
            result_11[0] = result_11[0] + result_10[0]
            result_22[0] = result_22[0] + result_10[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_21.d = result_28.d f* *arg8
    result_26[0] = result_26[0] * *arg4
    result_12.d = result_12.d f- result_21.d
    result_21.d = result_28.d f* (*arg8)[1]
    result_26[0] = result_26[0] f+ var_338.d
    result_28.d = result_28.d f* (*arg8)[2]
    result_11[0] = result_11[0] f- result_21.d
    result_12.d = result_12.d f+ result_26[0]
    result_26[0] = result_26[0] * (*arg4)[1]
    result_22[0] = result_22[0] f- result_28.d
    result_26[0] = result_26[0] * (*arg4)[2]
    result_26[0] = result_26[0] f+ var_338:4.d
    result_26[0] = result_26[0] f+ var_338:8.d
    result_11[0] = result_11[0] + result_26[0]
    result_22[0] = result_22[0] + result_26[0]
    *arg7 = (_mm_unpacklo_ps(result_12, result_11[0].q)).q
    arg7[1].d = result_22[0]
else if (result.b != 0)
    if (not(result_28.d f<= result_12.d))
        result_21 = _mm_cvtps_pd(result_39[0].q)
    
    if (result_28.d f<= result_12.d || result_21.q f<= 9.9999999999999995e-07
            || result_39[0] >= result_9[0])
        var_178.q = 0
        var_178:8.q = 0
        var_338.q = 0
        var_338:8.q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_338:0xc.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        float result_20
        float result_38[0x4]
        
        if (var_344_1 == 0)
            int32_t var_300_5 = 0x3f800000
            result_20 = 1f
            result_38 = _mm_unpacklo_ps(result_12, result_12.q)
        label_1416318db:
            result_10 = result_17:4.d
            result_9 = result_17.d
            *rdi_1 = (result_28 ^ data_142d3f780).d
            *arg8 = result_38.q
            result_38 = result_43
            (*arg8)[2] = result_20
            float temp0_31[0x4] = _mm_unpacklo_ps(result_9, result_10[0].q)
            result = result_38[0]
            *arg7 = temp0_31.q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(var_178:8.d)
                    int32_t rax_27 = (rdi_2 + 1).d
                    var_178:8.d = rax_27
                    
                    if (rax_27 s> var_178:0xc.d)
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_19 = var_178.q
                    int64_t rdx_8 = rdi_2 * 3
                    result_38 = zx.o(*(&result_17 + r12))
                    result_9 = result_6
                    int32_t rax_28 = *(&result_43 + r12)
                    result_9[0] = result_9[0] f+ *(&result_18:4 + r12)
                    *(rcx_19 + (rdx_8 << 2)) = result_38.q
                    result_38 = result_25
                    result_38[0] = result_38[0] f+ *(&result_18 + r12)
                    *(rcx_19 + (rdx_8 << 2) + 8) = rax_28
                    int64_t rdi_3 = sx.q(var_338:8.d)
                    result_29:4.d = result_9[0]
                    result_29.d = result_38[0]
                    result_41[0] = result_41[0] f+ *(&result_3 + r12)
                    int32_t rax_29 = (rdi_3 + 1).d
                    var_338:8.d = rax_29
                    result_8 = result_41[0]
                    
                    if (rax_29 s> var_338:0xc.d)
                        sub_14083a7e0(&var_338)
                    
                    int64_t rcx_21 = var_338.q
                    int64_t rdx_10 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_21 + (rdx_10 << 2)) = result_29
                    *(rcx_21 + (rdx_10 << 2) + 8) = result_8
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            int128_t* var_180_1 = r15
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int32_t rax_32
            rax_32, result_28 = sub_1415ad300(&var_178, &var_338, &var_220, &var_190, &result_31, 
                &result_29, &result_15, &var_238)
            result_38 = zx.o(result_29)
            result_20 = result_8
            
            if (rax_32 == 2)
                goto label_1416318db
            
            *arg8 = result_38.q
            result_38 = result_31 ^ data_142d3f780
            (*arg8)[2] = result_20
            result_38[0] = result_38[0] f- result_28.d
            result = result_1
            *rdi_1 = result_38[0]
            *arg7 = result_15
        int64_t rcx_23 = var_338.q
        arg7[1].d = result
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = var_178.q
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
    else
        result_22 = result_12
        result_11 = result_12
        *arg8 = var_2e8
        result_23 = result_12
        (*arg8)[2] = var_2e0
        result_26 = result_12
        result_27 = result_12
        result_6 = result_12
        
        if (rcx == 0)
            result_9 = zx.o(result_17)
            result_10 = zx.o(result_18)
            result_21 = result_9
            int32_t result_37 = result_43
            result_11 = _mm_shuffle_ps(result_21, result_21, 0x55)
            float result_4 = result_3
            result_21 = result_10
            result_23 = result_37
            result_27 = _mm_shuffle_ps(result_21, result_21, 0x55)
            result_6 = result_4
            result_22 = result_9.d
            result_26 = result_10.d
        else if (r13.d s> 0)
            uint128_t* rax_25 = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_10 = *rax_25
                rax_25 += 4
                result_21.d = result_10.d f* *(&result_17 + r12)
                result_10[0] = result_10[0] f* *(&result_17:4 + r12)
                result_22[0] = result_22[0] f+ result_21.d
                result_21.d = result_10.d f* *(&result_43 + r12)
                result_11[0] = result_11[0] + result_10[0]
                result_10[0] = result_10[0] f* *(&result_18 + r12)
                result_23[0] = result_23[0] f+ result_21.d
                result_21.d = result_10.d f* *(&result_18:4 + r12)
                result_10[0] = result_10[0] f* *(&result_3 + r12)
                result_26[0] = result_26[0] + result_10[0]
                r12 += 0xc
                result_27[0] = result_27[0] f+ result_21.d
                result_6.d = result_6.d f+ result_10[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_40 = var_338.d
        result_24.d = var_338:8.d.d f+ result_6.d
        result_41 = var_338:4.d
        result_25.d = result_40.d f+ result_26[0]
        result_41[0] = result_41[0] + result_27[0]
        result_24.d = result_24.d f- result_23[0]
        result_23 = 0x3f000000
        result_25.d = result_25.d f- result_22[0]
        result_41[0] = result_41[0] - result_11[0]
        result_9 = result_24
        result_9[0] = result_9[0] f* result_24.d
        result_21.d = result_25.d f* result_25.d
        result_41[0] = result_41[0] * result_41[0]
        result_41[0] = result_41[0] f+ result_21.d
        result_41[0] = result_41[0] + result_9[0]
        float temp0_25[0x4] = _mm_rsqrt_ss(result_41[0], result_41[0])
        result_10 = 0x3f000000
        result_41[0] = result_41[0] * 0.5f
        result_21.d = temp0_25.d f* temp0_25[0]
        result_41[0] = result_41[0] f* result_21.d
        result_10[0] = 0.5f - result_41[0]
        result_21.d = temp0_25.d f* result_10[0]
        temp0_25[0] = temp0_25[0] f+ result_21.d
        temp0_25[0] = temp0_25[0] * temp0_25[0]
        result_41[0] = result_41[0] * temp0_25[0]
        result_23[0] = 0.5f - result_41[0]
        result_21.d = temp0_25.d f* result_23[0]
        temp0_25[0] = temp0_25[0] f+ result_21.d
        temp0_25[0] = temp0_25[0] * result_41[0]
        result_21.d = temp0_25.d f* result_25.d
        temp0_25[0] = temp0_25[0] f* result_24.d
        result_21 = _mm_unpacklo_ps(result_21, temp0_25[0].q)
        result_9 = result_28
        *arg8 = result_21.q
        result_21 = __sqrtss_xmmss_memss(result_21.d, result_42)
        float var_300_3 = temp0_25[0]
        result_9[0] = result_9[0] f- result_21.d
        (*arg8)[2] = var_300_3
        
        if (not(result_9[0] f< result_12.d))
            result_12 = __minss_xmmss_memss(result_9.d, 0x7f7fffff)
        
        result_9 = *arg8
        result_10 = (*arg8)[1]
        result_22 = (*arg8)[2]
        result_21.d = result_9.d f* result_28.d
        result_9[0] = result_9[0] f* result_12.d
        result_26[0] = result_26[0] f- result_21.d
        result_21.d = result_10.d f* result_28.d
        result_10[0] = result_10[0] f* result_12.d
        result_27[0] = result_27[0] f- result_21.d
        result_21.d = result_22.d f* result_28.d
        result_26[0] = result_26[0] + result_40[0]
        result_22[0] = result_22[0] f* result_12.d
        result_12 ^= data_142d3f780
        result_6.d = result_6.d f- result_21.d
        result_27[0] = result_27[0] + result_41[0]
        result_26[0] = result_26[0] + result_9[0]
        result_6.d = result_6.d f+ var_338:8.d
        result_27[0] = result_27[0] + result_10[0]
        result_6.d = result_6.d f+ result_22[0]
        *arg7 = (_mm_unpacklo_ps(result_26, result_27[0].q)).q
        arg7[1].d = result_6.d
        *rdi_1 = result_12.d

result.b = 1
label_14163193f:
__security_check_cookie(rax_1 ^ &var_388)
return result

// 函数: sub_141643db0
// 地址: 0x141643db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
uint128_t result_36 = *(arg2 + 0x1c)
int128_t* r15 = arg3
int64_t r12 = 0
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
void* var_258 = arg1
float result_6[0x4] = *r15
uint128_t var_338 = r15[1]
float result_15[0x4] = result_6 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(result_15, result_15, 0xe1)
int32_t var_190 = 0
void* r8 = arg2
uint128_t* var_280 = arg4
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
float result_14[0x4] = result_36
result_14[0] = result_14[0] f* result_36.d
uint128_t var_178 = data_142d3f7e0
uint128_t result_13 = _mm_cvtps_pd(result_14[0].q)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
result_13.q = result_13.q f+ 9.9999999999999995e-07
uint64_t r13 = zx.q(var_190)
uint128_t result_10 = zx.o(0)
float temp0_2[0x4] = _mm_shuffle_ps(result_6, result_6, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(result_6, result_6, 0xaa)
float result_8[0x4] = result_6
int32_t result_11 = _mm_cvtpd_ps(result_13).d
temp0[0] = (temp0_2 ^ 0x80000000).d
float temp0_5[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_5[0] = (temp0_3 ^ 0x80000000)[0]
float result_38[0x4] = _mm_shuffle_ps(result_6, result_6, 0xff)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = result_38[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float var_1c8[0x4] = temp0_7
float result_37[0x4] = *(arg1 + 0x2c)
float result_9[0x4] = *(arg1 + 0x30)
result_37[0] = result_37[0] f* arg10[1]
void* rcx = *(arg1 + 0x10)
uint128_t result_16 = *(arg1 + 0x28)
float var_248[0x4] = temp0_7
result_9[0] = result_9[0] f* arg10[2]
result_13.d = result_16.d f* *arg10
uint128_t result_20

if (result_13.d f>= 0f)
    result_20 = *(rcx + 0x1c)
else
    result_20 = *(rcx + 0x10)

if (result_37[0] >= 0f)
    result_14 = *(rcx + 0x20)
else
    result_14 = *(rcx + 0x14)

if (result_9[0] >= 0f)
    result_13 = *(rcx + 0x24)
else
    result_13 = *(rcx + 0x18)

result_9[0] = result_9[0] f* result_13.d
result_37[0] = result_37[0] * result_14[0]
float var_340 = result_9[0]
result_20.d = result_20.d f* result_16.d
float result_42 = result_9[0]
float result_39 = *(arg2 + 0x18)
uint128_t result_34 = result_39
int64_t result_30 = (_mm_unpacklo_ps(result_20, result_37[0].q)).q
result_13 = zx.o(*(arg2 + 0x10))
uint64_t result_23 = result_13.q
result_15 = result_23.d
uint128_t result_18
result_18.d = result_34.d f* temp0_2[0]
float result_19[0x4] = result_15
result_19[0] = result_19[0] * temp0_3[0]
result_16 = _mm_shuffle_ps(result_13, result_13, 0x55)
result_9 = result_16
result_13.d = result_16.d f* temp0_3[0]
result_9[0] = result_9[0] * result_6[0]
result_18.d = result_18.d f- result_13.d
result_13.d = result_34.d f* result_6[0]
result_19[0] = result_19[0] f- result_13.d
result_13.d = result_15.d f* temp0_2[0]
result_18.d = result_18.d f+ result_18.d
result_9[0] = result_9[0] f- result_13.d
result_19[0] = result_19[0] + result_19[0]
result_14 = result_18
result_14[0] = result_14[0] * result_38[0]
result_9[0] = result_9[0] + result_9[0]
result_14[0] = result_14[0] + result_15[0]
result_13.d = result_19.d f* temp0_3[0]
result_15 = result_18
result_18.d = result_18.d f* temp0_2[0]
result_15[0] = result_15[0] * temp0_3[0]
result_9[0] = result_9[0] * temp0_2[0]
float result_21[0x4] = zx.o(0)
result_9[0] = result_9[0] f- result_13.d
result_13.d = result_9.d f* result_6[0]
result_9[0] = result_9[0] + result_14[0]
result_15[0] = result_15[0] f- result_13.d
result_19[0] = result_19[0] * result_6[0]
result_13 = result_38
result_19[0] = result_19[0] f* result_13.d
result_9[0] = result_9[0] f* result_13.d
result_19[0] = result_19[0] f- result_18.d
result_13 = result_9
result_20.d = result_20.d f- result_9[0]
result_19[0] = result_19[0] f+ result_16.d
result_9[0] = result_9[0] f+ result_34.d
result_15[0] = result_15[0] + result_19[0]
result_14 = var_338:4.d
result_19[0] = result_19[0] + result_9[0]
float result_41 = result_14[0]
result_9 = var_338:8.d
result_34 = result_14
float var_2cc = result_14[0]
result_6 = result_9
float result_7 = result_9[0]
int64_t result_12 = (_mm_unpacklo_ps(result_13, result_15[0].q)).q
result_13 = var_338.d
float result_1 = result_19[0]
result_18 = result_13
int32_t result_25 = result_13.d
int32_t var_2d0 = result_13.d
float result_2 = result_9[0]
float result_3 = result_1
uint32_t result = zx.d(arg9)
result_37[0] = result_37[0] - result_15[0]
float result_35[0x4] = result_13
int64_t var_2f0 = 0
result_35[0] = result_35[0] f- result_20.d
float result_17[0x4] = result_14
float var_2e8 = 1f
result_13.d = var_340.d f- result_19[0]
result_19 = result_9
result_17[0] = result_17[0] - result_37[0]
result_19[0] = result_19[0] f- result_13.d
result_13.d = result_35.d f* result_35[0]
result_17[0] = result_17[0] * result_17[0]
result_19[0] = result_19[0] * result_19[0]
result_17[0] = result_17[0] f+ result_13.d
result_17[0] = result_17[0] + result_19[0]
float result_5

if (result_17[0] f>= result_11 || (result.b != 0 && result_17[0] >= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_14 = 0x7f7fffff
int64_t rbx
rbx.b = 0
float result_40 = 3.40282347e+38f
uint32_t rdx = zx.d(result_5.b)
char var_348 = rdx.b
int32_t rcx_1 = 0
int32_t var_314 = 0
result_37 = 0x7f7fffff
float var_310
int64_t result_27

if (result_5.b == 0)
    while (true)
        int32_t rax_7 = rcx_1
        rcx_1 += 1
        var_314 = rcx_1
        
        if (rax_7 s>= 0x20)
            result_6 = result_7
            result = zx.d(arg9)
        else
            void* rax_8 = var_258
            result_13.d = result_17.d f* result_17[0]
            result_35[0] = result_35[0] * result_35[0]
            void* rcx_2 = *(rax_8 + 0x10)
            result_18 = *(rax_8 + 0x30)
            result_19[0] = result_19[0] * result_19[0]
            result_35[0] = result_35[0] f+ result_13.d
            result_35[0] = result_35[0] + result_19[0]
            result_20 = _mm_rsqrt_ss(result_35.d, result_35[0])
            result_15 = 0x3f000000
            result_35[0] = result_35[0] * 0.5f
            result_13.d = result_20.d f* result_20.d
            result_35[0] = result_35[0] f* result_13.d
            result_15[0] = 0.5f - result_35[0]
            result_13.d = result_20.d f* result_15[0]
            result_20.d = result_20.d f+ result_13.d
            result_14 = result_20
            result_14[0] = result_14[0] f* result_20.d
            result_35[0] = result_35[0] * result_14[0]
            result_16.d = 0.5f - result_35[0]
            result_13.d = result_20.d f* result_16.d
            result_16 = *(rax_8 + 0x28)
            result_20.d = result_20.d f+ result_13.d
            result_37 = result_20
            result_35[0] = result_35[0] f* result_20.d
            result_37[0] = result_37[0] * result_17[0]
            result_17 = *(rax_8 + 0x2c)
            var_310 = result_20.d
            result_20.d = result_20.d f* result_19[0]
            result_13.d = result_35.d f* result_16.d
            result_15 = result_20
            result_37[0] = result_37[0] * result_17[0]
            result_15[0] = result_15[0] f* result_18.d
            
            if (result_13.d f>= result_10.d)
                result_9 = *(rcx_2 + 0x1c)
            else
                result_9 = *(rcx_2 + 0x10)
            
            if (result_37[0] f>= result_10.d)
                result_14 = *(rcx_2 + 0x20)
            else
                result_14 = *(rcx_2 + 0x14)
            
            if (result_15[0] f>= result_10.d)
                result_13 = *(rcx_2 + 0x24)
            else
                result_13 = *(rcx_2 + 0x18)
            
            result_13.d = result_13.d f* result_18.d
            result_18 = *(r8 + 0x18)
            result_16.d = result_16.d f* result_9[0]
            int32_t var_2f4_1 = result_13.d
            int32_t var_2b8_1 = result_13.d
            result_13 = zx.o(*(r8 + 0x10))
            result_9 = result_13
            uint32_t result_29 = result_13.d
            result_34.d = result_18.d f* temp0_2[0]
            result_17[0] = result_17[0] * result_14[0]
            int32_t result_22 = result_16.d
            float temp0_12[0x4] = _mm_shuffle_ps(result_9, result_9, 0x55)
            float result_28 = result_17[0]
            result_17 = result_29
            result_13.d = temp0_12.d f* temp0_3[0]
            result_16.d = result_17.d f* temp0_3[0]
            result_34.d = result_34.d f- result_13.d
            temp0_12[0] = temp0_12[0] * result_8[0]
            result_13.d = result_18.d f* result_8[0]
            result_34.d = result_34.d f+ result_34.d
            result_16.d = result_16.d f- result_13.d
            result_13.d = result_17.d f* temp0_2[0]
            result_19 = result_34
            result_19[0] = result_19[0] * temp0_3[0]
            temp0_12[0] = temp0_12[0] f- result_13.d
            result_16.d = result_16.d f+ result_16.d
            temp0_12[0] = temp0_12[0] + temp0_12[0]
            result_15 = result_16
            result_15[0] = result_15[0] * result_8[0]
            result_13.d = temp0_12.d f* result_8[0]
            result_14 = result_16
            result_16.d = result_16.d f* temp0_3[0]
            result_14[0] = result_14[0] * result_38[0]
            result_19[0] = result_19[0] f- result_13.d
            result_13.d = result_34.d f* temp0_2[0]
            result_14[0] = result_14[0] + temp0_12[0]
            result_34.d = result_34.d f* result_38[0]
            result_15[0] = result_15[0] f- result_13.d
            temp0_12[0] = temp0_12[0] * temp0_2[0]
            result_13.d = temp0_12.d f* result_38[0]
            result_34.d = result_34.d f+ result_17[0]
            result_17 = result_28
            result_19[0] = result_19[0] + result_14[0]
            result_14 = result_22
            temp0_12[0] = temp0_12[0] f- result_16.d
            result_13.d = result_13.d f+ result_18.d
            result_18 = result_25
            temp0_12[0] = temp0_12[0] f+ result_34.d
            result_34 = result_41
            result_15[0] = result_15[0] f+ result_13.d
            result_13.d = result_17.d f- result_19[0]
            result_14[0] = result_14[0] - temp0_12[0]
            uint32_t var_1e4_1 = result_15[0]
            int32_t var_340_1 = result_13.d
            result_13.d = var_2f4_1.d f- result_15[0]
            result_15 = result_34
            result_15[0] = result_15[0] f- var_340_1
            result_16.d = result_18.d f- result_14[0]
            var_310 = result_14[0]
            int32_t var_2f4_2 = result_13.d
            result_23:4.d = result_15[0]
            result_23.d = result_16.d
            result_9 = result_7
            result_9[0] = result_9[0] f- result_13.d
            result_16.d = result_16.d f* result_35[0]
            result_13 = _mm_unpacklo_ps(result_14, result_17[0].q)
            result_17 = result_37
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            result_17[0] = result_17[0] * result_15[0]
            result_39 = result_9[0]
            uint64_t rcx_4 = r13 * 3
            result_9[0] = result_9[0] f* result_20.d
            result_17[0] = result_17[0] f+ result_16.d
            *(&result_30 + (rcx_4 << 2)) = result_13.q
            result_13 = _mm_unpacklo_ps(temp0_12, result_19[0].q)
            (&result_42)[rcx_4] = var_2b8_1
            result_17[0] = result_17[0] + result_9[0]
            *(&result_12 + (rcx_4 << 2)) = result_13.q
            (&result_3)[rcx_4] = var_1e4_1
            int128_t var_158_1
            int32_t var_148_1
            
            if (result_17[0] f<= result_36.d)
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_4 << 2)) = result_23
                *(&var_168:8 + (rcx_4 << 2)) = result_39
                var_190 = r13.d
            label_14164473c:
                result_37 = result_40
                result_6 = result_7
                
                if (rdx.b != 0 && not(result_17[0] f< result_10.d))
                    result_17[0] = result_17[0] * result_17[0]
                    result_17[0] = result_17[0] + 9.99999997e-07f
                    result_5.b = result_17[0] >= result_37[0]
            else
                result_9 = *(arg4 + 4)
                result_16 = *arg4
                result_6 = *(arg4 + 8)
                result_14 = result_20
                result_35[0] = result_35[0] f* result_16.d
                result_13.d = result_37.d f* result_9[0]
                result_14[0] = result_14[0] * result_6[0]
                result_35[0] = result_35[0] f+ result_13.d
                result_35[0] = result_35[0] + result_14[0]
                
                if (result_35[0] f>= result_10.d)
                    result.b = 0
                    goto label_1416451cd
                
                result_13.d = result_17.d f- result_36.d
                result_13.d = result_13.d f/ result_35[0]
                result_21[0] = result_21[0] f- result_13.d
                
                if (result_21[0] <= result_21[0])
                    goto label_14164473c
                
                if (result_21[0] f> arg5)
                    result.b = 0
                    goto label_1416451cd
                
                result_14 = zx.o(var_2d0.q)
                result_13 = result_14
                result_13 = _mm_shuffle_ps(result_13, result_13, 0x55)
                result_27 = result_14.q
                r13 = zx.q(r13.d + 1)
                result_18.d = result_16.d f* result_21[0]
                result_1 = result_2
                result_34.d = result_9.d f* result_21[0]
                var_190 = r13.d
                result_18.d = result_18.d f+ var_338.d
                result_6[0] = result_6[0] * result_21[0]
                var_348 = 0
                result_34.d = result_34.d f+ var_338:4.d
                var_2f0:4.d = result_37[0]
                result_6[0] = result_6[0] f+ var_338:8.d
                result_37 = 0x7f7fffff
                result_9 = result_18
                result_9[0] = result_9[0] - result_14[0]
                result_25 = result_18.d
                result_14 = var_168:4.d
                result_16.d = result_34.d f- result_13.d
                result_41 = result_34.d
                result_13 = var_168.d
                result_6[0] = result_6[0] - result_1
                result_13.d = result_13.d f+ result_9[0]
                result_7 = result_6[0]
                var_2d0 = result_18.d
                result_14[0] = result_14[0] f+ result_16.d
                int32_t var_2cc_1 = result_34.d
                result_2 = result_6[0]
                var_2f0.d = result_35[0]
                var_168.d = result_13.d
                result_13.d = var_168:8.d.d f+ result_6[0]
                var_168:4.d = result_14[0]
                result_14 = var_168:0xc.d
                result_14[0] = result_14[0] + result_9[0]
                var_2e8 = result_20.d
                result_40 = 3.40282347e+38f
                var_168:8.d = result_13.d
                var_168:0xc.d = result_14[0]
                result_13.d = var_158_1.d.d f+ result_16.d
                result_14 = var_158_1:4.d
                result_14[0] = result_14[0] + result_6[0]
                var_158_1.d = result_13.d
                result_13 = var_158_1:8.d
                var_158_1:4.d = result_14[0]
                result_13.d = result_13.d f+ result_9[0]
                result_14 = var_158_1:0xc.d
                result_14[0] = result_14[0] f+ result_16.d
                var_158_1:8.d = result_13.d
                result_13.d = var_148_1.d f+ result_6[0]
                var_158_1:0xc.d = result_14[0]
                result_14 = result_18
                result_15 = result_34
                result_14[0] = result_14[0] - var_310
                result_15[0] = result_15[0] f- var_340_1
                var_148_1 = result_13.d
                result_13.d = result_6.d f- var_2f4_2
                *(&var_168 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_14, result_15[0].q)).q
                *(&var_168:8 + (rcx_4 << 2)) = result_13.d
            
            if (result_5.b != 0)
                int64_t* rax_22
                rax_22, result_18, result_34, result_6, result_10, result_21, result_36, 
                    result_37 =
                    sub_1416f4530(&var_248, &var_168, &var_190, &var_178, &result_30, &result_12)
                r13 = zx.q(var_190)
                result_14 = zx.o(*rax_22)
                result_13 = result_14
                result_19 = rax_22[1].d
                result = zx.d(arg9)
                int32_t result_26 = result_14.d
                result_17 = _mm_shuffle_ps(result_13, result_13, 0x55)
                result_35 = result_26
            else
                int32_t rcx_5 = r13.d
                int32_t result_31
                
                if (rcx_5 == 1)
                    int64_t rax_18 = sx.q(var_18c)
                    int64_t rcx_12 = rax_18 * 3
                    *(&var_178 + (rax_18 << 2)) = 0x3f800000
                    result_13 = zx.o(*(&var_168 + (rcx_12 << 2)))
                    result_31 = *(&var_168:8 + (rcx_12 << 2))
                else if (rcx_5 == 2)
                    void var_1a0
                    uint64_t* rax_17
                    rax_17, result_18, result_34, result_6 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_13 = zx.o(*rax_17)
                    result_31 = rax_17[1].d
                else if (rcx_5 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_16
                    rax_16, result_18, result_34, result_6, result_10, result_21, result_36, 
                        result_37 = sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_13 = zx.o(*rax_16)
                    result_31 = rax_16[1].d
                else if (rcx_5 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_15
                    rax_15, result_18, result_34, result_6, result_10, result_21, result_36, 
                        result_37 = sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_13 = zx.o(*rax_15)
                    result_31 = rax_15[1].d
                else
                    int32_t var_304_1 = 0
                    result_13 = _mm_unpacklo_ps(result_10, result_10.q)
                    result_31 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                uint64_t result_24 = result_13.q
                rbx = rdi * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_4 = *(&var_168:8 + (r15_1 << 2))
                result_35 = result_24.d
                result_17 = result_24:4.d
                result_19 = result_31
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx << 2))
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                float result_44 = (&result_42)[r15_1]
                var_178:8.d = (*(&var_178 + (r9_3 << 2)))[0]
                var_178.d = (*(&var_178 + (r11_1 << 2))).d
                var_178:4.d = (*(&var_178 + (r10_1 << 2)))[0]
                var_178:0xc.d = (*(&var_178 + (rdi << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_5 = (&result_42)[r14_1]
                var_148_1 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rcx_14 = (&result_42)[rsi_1]
                var_148_1 = *(&var_168:8 + (rbx << 2))
                int32_t rax_20 = (&result_42)[rbx]
                var_12c_1.q = *(&result_30 + (r14_1 << 2))
                result_15 = zx.o(*(&result_12 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_30 + (rbx << 2))
                result_13 = zx.o(*(&result_12 + (rbx << 2)))
                var_12c_1:0xc.q = *(&result_30 + (rsi_1 << 2))
                result_14 = zx.o(*(&result_12 + (rsi_1 << 2)))
                result_30 = *(&result_30 + (r15_1 << 2))
                result_9 = zx.o(*(&result_12 + (r15_1 << 2)))
                result_42 = result_44
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_5
                rdx = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_14
                int32_t rcx_15 = (&result_3)[rsi_1]
                int32_t var_10c_1 = rax_20
                int32_t rax_21 = (&result_3)[rbx]
                var_fc_1.q = result_15.q
                int128_t var_ec_1
                var_ec_1:8.q = result_13.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_4
                result_17[0] = result_17[0] * result_17[0]
                result_3 = result_5
                var_fc_1:0xc.q = result_14.q
                result_13.d = result_35.d f* result_35[0]
                var_fc_1:8.d = rdx
                result_19[0] = result_19[0] * result_19[0]
                var_ec_1:4.d = rcx_15
                result_17[0] = result_17[0] f+ result_13.d
                result_12 = result_9.q
                result_9 = result_11
                int32_t var_dc_1 = rax_21
                result_17[0] = result_17[0] + result_19[0]
                result = zx.d(arg9)
                result_5.b = result_9[0] > result_17[0]
                bool cond:4_1 = result_17[0] >= result_37[0]
                result_40 = result_17[0]
                result_37 = result_17
                rbx.b = cond:4_1
                
                if (result.b == 0)
                    goto label_141644b75
                
                if (result_5.b == 0)
                    goto label_141644b7a
                
                if (not(result_21[0] f!= result_10.d))
                    result_14 = 0x3eb0c6f7a0b5ed8d
                    result_13 = _mm_cvtps_pd(result_17[0].q)
                    
                    if (not(result_13.q f<= result_14[0].q))
                        result_13 = _mm_cvtps_pd(result_9[0].q)
                        
                        if (not(result_13.q f<= result_14[0].q) && r13.d s< 4)
                            rdx.b = 1
                            result_5.b = 0
                            var_348 = 1
                            goto label_141644b7f
            
        label_141644b75:
            
            if (result_5.b != 0)
                rcx_1 = var_314
                arg4 = var_280
            else
            label_141644b7a:
                rdx = zx.d(var_348)
            label_141644b7f:
                rcx_1 = var_314
                arg4 = var_280
                
                if (rbx.b == 0)
                    r8 = arg2
                    continue
        
        result_14 = 0x7f7fffff
        r15 = arg3
        break

bool cond:0_1 = result_21[0] f<= result_10.d
int32_t* rdi_1 = arg6
*rdi_1 = result_21[0]

if (not(cond:0_1))
    result_16 = result_10
    result_9 = result_10
    *arg8 = var_2f0
    (*arg8)[2] = var_2e8
    
    if (r13.d s> 0)
        uint128_t* rcx_17 = &var_178
        uint64_t i_4 = zx.q(r13.d)
        float* rax_25 = &result_3
        uint64_t i
        
        do
            result_15 = *rcx_17
            rcx_17 += 4
            result_13.d = result_15.d f* rax_25[-2]
            result_15[0] = result_15[0] * rax_25[-1]
            result_15[0] = result_15[0] * *rax_25
            rax_25 = &rax_25[3]
            result_10.d = result_10.d f+ result_13.d
            result_16.d = result_16.d f+ result_15[0]
            result_9[0] = result_9[0] + result_15[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_13.d = result_36.d f* *arg8
    result_21[0] = result_21[0] f* *arg4
    result_10.d = result_10.d f- result_13.d
    result_13.d = result_36.d f* (*arg8)[1]
    result_21[0] = result_21[0] f+ var_338.d
    result_36.d = result_36.d f* (*arg8)[2]
    result_16.d = result_16.d f- result_13.d
    result_10.d = result_10.d f+ result_21[0]
    result_21[0] = result_21[0] f* *(arg4 + 4)
    result_9[0] = result_9[0] f- result_36.d
    result_21[0] = result_21[0] f* *(arg4 + 8)
    result_21[0] = result_21[0] f+ var_338:4.d
    result_21[0] = result_21[0] f+ var_338:8.d
    result_16.d = result_16.d f+ result_21[0]
    result_9[0] = result_9[0] + result_21[0]
    *arg7 = (_mm_unpacklo_ps(result_10, result_16.q)).q
    arg7[1].d = result_9[0]
else if (result.b != 0)
    if (not(result_36.d f<= result_10.d))
        result_13 = _mm_cvtps_pd(result_37[0].q)
    
    if (result_36.d f<= result_10.d || result_13.q f<= 9.9999999999999995e-07
            || result_37[0] >= result_14[0])
        var_178.q = 0
        var_178:8.q = 0
        var_338.q = 0
        var_338:8.q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_338:0xc.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        float result_43
        float result_33[0x4]
        
        if (var_314 == 0)
            int32_t var_304_5 = 0x3f800000
            result_43 = 1f
            result_33 = _mm_unpacklo_ps(result_10, result_10.q)
        label_141645169:
            result_15 = result_30:4.d
            result_14 = result_30.d
            *rdi_1 = (result_36 ^ data_142d3f780).d
            *arg8 = result_33.q
            result_33 = result_42
            (*arg8)[2] = result_43
            float temp0_31[0x4] = _mm_unpacklo_ps(result_14, result_15[0].q)
            result = result_33[0]
            *arg7 = temp0_31.q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(var_178:8.d)
                    int32_t rax_29 = (rdi_2 + 1).d
                    var_178:8.d = rax_29
                    
                    if (rax_29 s> var_178:0xc.d)
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_21 = var_178.q
                    int64_t rdx_8 = rdi_2 * 3
                    result_33 = zx.o(*(&result_30 + r12))
                    result_14 = result_34
                    int32_t rax_30 = *(&result_42 + r12)
                    result_14[0] = result_14[0] f+ *(&result_12:4 + r12)
                    *(rcx_21 + (rdx_8 << 2)) = result_33.q
                    result_33 = result_18
                    result_33[0] = result_33[0] f+ *(&result_12 + r12)
                    *(rcx_21 + (rdx_8 << 2) + 8) = rax_30
                    int64_t rdi_3 = sx.q(var_338:8.d)
                    result_23:4.d = result_14[0]
                    result_23.d = result_33[0]
                    result_6[0] = result_6[0] f+ *(&result_3 + r12)
                    int32_t rax_31 = (rdi_3 + 1).d
                    var_338:8.d = rax_31
                    result_39 = result_6[0]
                    
                    if (rax_31 s> var_338:0xc.d)
                        sub_14083a7e0(&var_338)
                    
                    int64_t rcx_23 = var_338.q
                    int64_t rdx_10 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_23 + (rdx_10 << 2)) = result_23
                    *(rcx_23 + (rdx_10 << 2) + 8) = result_39
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            int128_t* var_180_1 = r15
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int32_t rax_34
            rax_34, result_36 = sub_141589f30(&var_178, &var_338, &var_258, &var_190, &var_310, 
                &result_23, &result_27, &var_248)
            result_33 = zx.o(result_23)
            result_43 = result_39
            
            if (rax_34 == 2)
                goto label_141645169
            
            *arg8 = result_33.q
            result_33 = var_310 ^ data_142d3f780
            (*arg8)[2] = result_43
            result_33[0] = result_33[0] f- result_36.d
            result = result_1
            *rdi_1 = result_33[0]
            *arg7 = result_27
        int64_t rcx_25 = var_338.q
        arg7[1].d = result
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        int64_t rcx_26 = var_178.q
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        result_9 = result_10
        result_16 = result_10
        *arg8 = var_2f0
        result_17 = result_10
        (*arg8)[2] = var_2e8
        result_20 = result_10
        result_21 = result_10
        result_6 = result_10
        
        if (rcx_1 == 0)
            result_14 = zx.o(result_30)
            result_15 = zx.o(result_12)
            result_13 = result_14
            float result_32 = result_42
            result_16 = _mm_shuffle_ps(result_13, result_13, 0x55)
            float result_4 = result_3
            result_13 = result_15
            result_17 = result_32
            result_21 = _mm_shuffle_ps(result_13, result_13, 0x55)
            result_6 = result_4
            result_9 = result_14.d
            result_20 = result_15.d
        else if (r13.d s> 0)
            uint128_t* rax_27 = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_15 = *rax_27
                rax_27 += 4
                result_13.d = result_15.d f* *(&result_30 + r12)
                result_15[0] = result_15[0] f* *(&result_30:4 + r12)
                result_9[0] = result_9[0] f+ result_13.d
                result_13.d = result_15.d f* *(&result_42 + r12)
                result_16.d = result_16.d f+ result_15[0]
                result_15[0] = result_15[0] f* *(&result_12 + r12)
                result_17[0] = result_17[0] f+ result_13.d
                result_13.d = result_15.d f* *(&result_12:4 + r12)
                result_15[0] = result_15[0] f* *(&result_3 + r12)
                result_20.d = result_20.d f+ result_15[0]
                r12 += 0xc
                result_21[0] = result_21[0] f+ result_13.d
                result_6[0] = result_6[0] + result_15[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_19 = result_20
        result_34.d = var_338:4.d.d f+ result_21[0]
        result_35 = var_338.d
        result_18.d = var_338:8.d.d f+ result_6[0]
        result_19[0] = result_19[0] + result_35[0]
        result_34.d = result_34.d f- result_16.d
        result_18.d = result_18.d f- result_17[0]
        result_17 = 0x3f000000
        result_19[0] = result_19[0] - result_9[0]
        result_15 = result_34
        result_15[0] = result_15[0] f* result_34.d
        result_14 = result_18
        result_14[0] = result_14[0] f* result_18.d
        result_13.d = result_19.d f* result_19[0]
        result_15[0] = result_15[0] f+ result_13.d
        result_15[0] = result_15[0] + result_14[0]
        result_9 = result_15
        result_16 = _mm_rsqrt_ss(result_15.d, result_9[0])
        result_15 = 0x3f000000
        result_9[0] = result_9[0] * 0.5f
        result_13.d = result_16.d f* result_16.d
        result_9[0] = result_9[0] f* result_13.d
        result_15[0] = 0.5f - result_9[0]
        result_13.d = result_16.d f* result_15[0]
        result_16.d = result_16.d f+ result_13.d
        result_14 = result_16
        result_14[0] = result_14[0] f* result_16.d
        result_9[0] = result_9[0] * result_14[0]
        result_17[0] = 0.5f - result_9[0]
        result_13.d = result_16.d f* result_17[0]
        result_16.d = result_16.d f+ result_13.d
        result_14 = result_16
        result_13.d = result_16.d f* result_19[0]
        result_14[0] = result_14[0] f* result_34.d
        result_16.d = result_16.d f* result_18.d
        result_13 = _mm_unpacklo_ps(result_13, result_14[0].q)
        result_14 = result_36
        *arg8 = result_13.q
        result_13 = _mm_sqrt_ss(0, result_37[0])
        float var_304_3 = result_16.d
        result_14[0] = result_14[0] f- result_13.d
        (*arg8)[2] = var_304_3
        
        if (not(result_14[0] f< result_10.d))
            result_10 = __minss_xmmss_memss(result_14.d, 0x7f7fffff)
        
        result_14 = *arg8
        result_15 = (*arg8)[1]
        result_9 = (*arg8)[2]
        result_13.d = result_14.d f* result_36.d
        result_14[0] = result_14[0] f* result_10.d
        result_20.d = result_20.d f- result_13.d
        result_13.d = result_15.d f* result_36.d
        result_15[0] = result_15[0] f* result_10.d
        result_21[0] = result_21[0] f- result_13.d
        result_13.d = result_9.d f* result_36.d
        result_20.d = result_20.d f+ result_35[0]
        result_9[0] = result_9[0] f* result_10.d
        result_21[0] = result_21[0] f+ var_338:4.d
        result_10 ^= data_142d3f780
        result_6[0] = result_6[0] f- result_13.d
        result_20.d = result_20.d f+ result_14[0]
        result_21[0] = result_21[0] + result_15[0]
        result_6[0] = result_6[0] f+ var_338:8.d
        *arg7 = (_mm_unpacklo_ps(result_20, result_21[0].q)).q
        result_6[0] = result_6[0] + result_9[0]
        arg7[1].d = result_6[0]
        *rdi_1 = result_10.d

result.b = 1
label_1416451cd:
__security_check_cookie(rax_1 ^ &var_388)
return result

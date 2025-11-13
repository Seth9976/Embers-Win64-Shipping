// 函数: sub_14167dd50
// 地址: 0x14167dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
uint128_t zmm14 = *(arg2 + 0x1c)
int64_t r12 = 0
uint128_t* rsi = arg4
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float result_43[0x4] = *arg3
double var_338[0x2] = arg3[1]
float zmm2[0x4] = result_43 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
double var_178[0x2] = data_142d3f7e0
float zmm1[0x4] = zmm14
float result_19[0x4] = _mm_shuffle_ps(result_43, result_43, 0x55)
zmm1[0] = zmm1[0] f* zmm14.d
void* var_260 = arg1
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
double temp0_1[0x2] = _mm_cvtps_pd(zmm1[0].q)
float result_44[0x4] = _mm_shuffle_ps(result_43, result_43, 0xaa)
uint128_t result_9 = zx.o(0)
temp0_1[0] = temp0_1[0] + 9.9999999999999995e-07
float result_22 = _mm_cvtpd_ps(temp0_1)[0]
temp0[0] = (result_19 ^ 0x80000000)[0].d
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_3[0] = (result_44 ^ 0x80000000)[0]
float result_45[0x4] = _mm_shuffle_ps(result_43, result_43, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
temp0_4[0] = result_45[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float var_248[0x4] = temp0_5
float var_1c8[0x4] = temp0_5
int64_t result_46
uint128_t result_16
uint128_t result_17
result_16, result_17 = sub_141758e70(arg1, &result_46, arg10, zx.o(0))
int64_t result_41 = result_46
uint128_t result_31 = zx.o(*(arg2 + 0x10))
uint128_t result_32 = result_45[0]
uint64_t result_20 = result_31.q
uint128_t result_33 = result_20.d
uint128_t result_34 = _mm_shuffle_ps(result_31, result_31, 0x55)
uint128_t result_14
result_14.d = result_33.d f* result_44[0]
int32_t result_39
int32_t result_28 = result_39
result_31.d = result_34.d f* result_44[0]
uint128_t result_13
result_13.d = result_34.d f* result_16.d
float result_6 = *(arg2 + 0x18)
uint128_t result_5 = result_6
uint128_t result_8
result_8.d = result_5.d f* result_19[0]
result_8.d = result_8.d f- result_31.d
result_31.d = result_5.d f* result_16.d
result_14.d = result_14.d f- result_31.d
result_31.d = result_33.d f* result_19[0]
result_8.d = result_8.d f+ result_8.d
result_13.d = result_13.d f- result_31.d
result_32.d = result_32.d f* result_8.d
result_14.d = result_14.d f+ result_14.d
result_44[0] = result_44[0] f* result_8.d
result_32.d = result_32.d f+ result_33.d
result_31.d = result_44.d f* result_14.d
result_13.d = result_13.d f+ result_13.d
result_33.d = result_16.d f* result_14.d
result_19[0] = result_19[0] f* result_13.d
result_19[0] = result_19[0] f- result_31.d
result_31.d = result_16.d f* result_13.d
result_19[0] = result_19[0] f+ result_32.d
result_44[0] = result_44[0] f- result_31.d
result_32.d = result_45.d f* result_14.d
result_14 = var_338[1].d
result_31.d = result_19.d f* result_8.d
float zmm13[0x4] = zx.o(0)
result_32.d = result_32.d f+ result_34.d
int32_t result_10 = result_14.d
uint32_t result_2 = result_14.d
result_8 = result_14
result_33.d = result_33.d f- result_31.d
result_44[0] = result_44[0] f+ result_32.d
result_32.d = result_45.d f* result_13.d
result_13 = var_338[0]:4.d
int32_t result_37 = result_13.d
result_34 = result_13
result_32.d = result_32.d f+ result_5.d
int64_t result_29 = (_mm_unpacklo_ps(result_19, result_44[0].q)).q
result_31.d = result_46.d.d f- result_19[0]
int32_t var_2bc = result_13.d
float result_35[0x4] = result_13
result_33.d = result_33.d f+ result_32.d
result_32 = var_338[0].d
float var_2c0 = result_32.d
float result_18[0x4] = result_32
result_16.d = result_32.d f- result_31.d
result_31.d = result_46:4.d.d f- result_44[0]
uint32_t result_1 = result_33.d
uint32_t result_3 = result_1
result_35[0] = result_35[0] f- result_31.d
uint32_t result = zx.d(arg9)
result_31.d = result_39.d f- result_33.d
int64_t var_308 = 0
int32_t var_300 = 0x3f800000
result_33.d = result_35.d f* result_35[0]
result_5.d = result_14.d f- result_31.d
result_31.d = result_16.d f* result_16.d
result_33.d = result_33.d f+ result_31.d
result_32.d = result_5.d f* result_5.d
result_33.d = result_33.d f+ result_32.d
uint32_t rdi

if (result_33.d f>= result_17.d || (result.b != 0 && result_33.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

result_32 = 0x7f7fffff
int32_t rcx_1 = 0
int32_t result_21 = 0x7f7fffff
result_17 = 0x7f7fffff
int32_t var_328 = 0
uint64_t r14_1 = zx.q(rdi.b)
char var_357 = 0
char var_358 = rdi.b
int64_t result_38
float result_15[0x4]

if (rdi.b == 0)
    while (true)
        int32_t rax_6 = rcx_1
        rcx_1 += 1
        var_328 = rcx_1
        
        if (rax_6 s>= 0x20)
            result_8 = result_10
            result = zx.d(arg9)
        else
            result_15 = 0x3f000000
            void* rcx_2 = var_260
            result_33.d = result_35.d f* result_35[0]
            result_32.d = result_5.d f* result_5.d
            result_31.d = result_16.d f* result_16.d
            result_33.d = result_33.d f+ result_31.d
            result_33.d = result_33.d f+ result_32.d
            result_13.d = result_33.d
            result_14 = _mm_rsqrt_ss(result_13.d, result_13.d)
            result_13.d = result_13.d f* 0.5f
            result_31.d = result_14.d f* result_14.d
            result_32.d = result_13.d f* result_31.d
            result_33.d = 0.5f f- result_32.d
            result_31.d = result_14.d f* result_33.d
            result_14.d = result_14.d f+ result_31.d
            result_32.d = result_14.d f* result_14.d
            result_13.d = result_13.d f* result_32.d
            result_15[0] = 0.5f f- result_13.d
            result_31.d = result_14.d f* result_15[0]
            result_14.d = result_14.d f+ result_31.d
            result_35[0] = result_35[0] f* result_14.d
            result_31.d = result_14.d f* result_16.d
            result_5.d = result_5.d f* result_14.d
            int32_t result_24 = result_31.d
            int32_t result_23 = result_31.d
            float result_40 = result_35[0]
            int32_t result_25 = result_5.d
            float var_2dc_1 = result_35[0]
            int32_t var_2d8_1 = result_5.d
            int32_t var_2f4_1 = result_14.d
            float result_26
            sub_141758e70(rcx_2, &result_26, &result_23, result_9)
            result_8 = result_19
            result_32 = result_44
            result_5 = result_8
            result_17 = result_26
            int32_t result_27
            result_16 = result_27
            result_31 = zx.o(*(arg2 + 0x10))
            result_15 = result_31
            result_33 = result_31.d
            int32_t var_270
            int32_t var_2a8 = var_270.d
            result_14.d = result_33.d f* result_32.d
            result_34 = *(arg2 + 0x18)
            float temp0_9[0x4] = _mm_shuffle_ps(result_15, result_15, 0x55)
            result_35 = result_34
            result_35[0] = result_35[0] f* result_8.d
            result_31.d = temp0_9.d f* result_32.d
            result_32 = result_43
            result_13.d = temp0_9.d f* result_32.d
            result_35[0] = result_35[0] f- result_31.d
            result_31.d = result_34.d f* result_32.d
            result_14.d = result_14.d f- result_31.d
            result_31.d = result_33.d f* result_8.d
            result_35[0] = result_35[0] + result_35[0]
            result_13.d = result_13.d f- result_31.d
            result_14.d = result_14.d f+ result_14.d
            result_13.d = result_13.d f+ result_13.d
            result_8.d = result_35.d f* result_44[0]
            result_31.d = result_44[0].d f* result_14.d
            result_5.d = result_5.d f* result_13.d
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            result_5.d = result_5.d f- result_31.d
            result_31.d = result_13.d f* result_32.d
            result_32.d = result_14.d f* result_43[0]
            uint64_t rcx_4 = r13 * 3
            result_8.d = result_8.d f- result_31.d
            result_31.d = result_35.d f* result_19[0]
            result_32.d = result_32.d f- result_31.d
            result_31 = result_45
            result_13.d = result_13.d f* result_31.d
            result_14.d = result_14.d f* result_31.d
            result_35[0] = result_35[0] f* result_31.d
            result_13.d = result_13.d f+ result_34.d
            result_14.d = result_14.d f+ temp0_9[0]
            result_34 = result_37
            result_35[0] = result_35[0] f+ result_33.d
            result_32.d = result_32.d f+ result_13.d
            result_8.d = result_8.d f+ result_14.d
            result_5.d = result_5.d f+ result_35[0]
            result_35 = result_40
            result_31.d = var_270.d f- result_32.d
            uint32_t var_1e0_1 = result_32.d
            result_13.d = result_16.d f- result_8.d
            result_33.d = result_17.d f- result_5.d
            int32_t var_2f4_2 = result_31.d
            int32_t var_290_1 = result_13.d
            result_14.d = result_18.d f- result_33.d
            int32_t var_294_1 = result_33.d
            result_33.d = result_34.d f- result_13.d
            result_13.d = result_10.d f- result_31.d
            result_31 = _mm_unpacklo_ps(result_17, result_16.q)
            result_16 = result_24
            *(&result_41 + (rcx_4 << 2)) = result_31.q
            *(&result_29 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_5, result_8.q)).q
            result_31.d = result_16.d f* result_14.d
            (&result_28)[rcx_4] = var_2a8
            result_35[0] = result_35[0] f* result_33.d
            (&result_3)[rcx_4] = var_1e0_1
            result_20.d = result_14.d
            result_14 = result_25
            result_20:4.d = result_33.d
            result_35[0] = result_35[0] f+ result_31.d
            result_32.d = result_14.d f* result_13.d
            result_6 = result_13.d
            result_35[0] = result_35[0] f+ result_32.d
            int128_t var_158_1
            int32_t var_148_1
            
            if (result_35[0] f<= zmm14.d)
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_4 << 2)) = result_20
                *(&var_168:8 + (rcx_4 << 2)) = result_6
                var_190 = r13.d
            label_14167e64f:
                result_17 = result_21
                result_8 = result_10
                
                if (r14_1.b != 0 && not(result_35[0] f< result_9.d))
                    result_35[0] = result_35[0] * result_35[0]
                    result_35[0] = result_35[0] + 9.99999997e-07f
                    rdi.b = result_35[0] f>= result_17.d
            else
                result_13 = *(rsi + 4)
                result_8 = *rsi
                result_5 = *(rsi + 8)
                result_33.d = result_16.d f* result_8.d
                result_31.d = result_35.d f* result_13.d
                result_32.d = result_14.d f* result_5.d
                result_33.d = result_33.d f+ result_31.d
                result_33.d = result_33.d f+ result_32.d
                
                if (result_33.d f>= result_9.d)
                    result.b = 0
                    goto label_14167f0e2
                
                result_31.d = result_35.d f- zmm14.d
                result_31.d = result_31.d f/ result_33.d
                zmm13[0] = zmm13[0] f- result_31.d
                
                if (zmm13[0] f<= zmm13.d)
                    goto label_14167e64f
                
                if (zmm13[0] f> arg5)
                    result.b = 0
                    goto label_14167f0e2
                
                result_32 = zx.o(var_2c0.q)
                result_18 = result_8
                result_17 = 0x7f7fffff
                result_31 = _mm_shuffle_ps(result_32, result_32, 0x55)
                result_38 = result_32.q
                r13 = zx.q(r13.d + 1)
                result_18[0] = result_18[0] * zmm13[0]
                result_1 = result_2
                result_34.d = result_13.d f* zmm13[0]
                var_190 = r13.d
                result_18[0] = result_18[0] f+ var_338[0].d
                result_8.d = result_5.d f* zmm13[0]
                var_358 = 0
                result_34.d = result_34.d f+ var_338[0]:4.d
                var_300 = result_14.d
                result_8.d = result_8.d f+ var_338[1].d
                var_2c0 = result_18[0]
                result_13.d = result_18.d f- result_32.d
                var_308.d = result_16.d
                result_14.d = result_34.d f- result_31.d
                result_37 = result_34.d
                result_33.d = result_8.d f- result_1
                result_31.d = var_168.d.d f+ result_13.d
                result_10 = result_8.d
                int32_t var_2bc_1 = result_34.d
                result_32.d = var_168:4.d.d f+ result_14.d
                result_2 = result_8.d
                var_308:4.d = result_35[0]
                result_21 = 0x7f7fffff
                var_168.d = result_31.d
                result_31.d = var_168:8.d.d f+ result_33.d
                var_168:4.d = result_32.d
                result_32.d = var_168:0xc.d.d f+ result_13.d
                var_168:8.d = result_31.d
                var_168:0xc.d = result_32.d
                result_31.d = var_158_1.d.d f+ result_14.d
                result_32.d = var_158_1:4.d.d f+ result_33.d
                var_158_1.d = result_31.d
                result_31 = var_158_1:8.d
                var_158_1:4.d = result_32.d
                result_31.d = result_31.d f+ result_13.d
                result_32.d = var_158_1:0xc.d.d f+ result_14.d
                var_158_1:8.d = result_31.d
                result_31.d = var_148_1.d f+ result_33.d
                var_158_1:0xc.d = result_32.d
                result_32.d = result_18.d f- var_294_1
                result_33.d = result_34.d f- var_290_1
                var_148_1 = result_31.d
                result_31.d = result_8.d f- var_2f4_2
                *(&var_168 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_32, result_33.q)).q
                *(&var_168:8 + (rcx_4 << 2)) = result_31.d
            
            uint32_t rdx_7
            
            if (rdi.b != 0)
                int64_t* rax_21
                rax_21, result_34, result_8, result_17, result_9, zmm13, zmm14, result_18 =
                    sub_1416f4530(&var_248, &var_168, &var_190, &var_178, &result_41, &result_29)
                r13 = zx.q(var_190)
                rdx_7 = zx.d(var_357)
                result_32 = zx.o(*rax_21)
                result_5 = rax_21[1].d
                result = zx.d(arg9)
                result_31 = _mm_shuffle_ps(result_32, result_32, 0x55)
                result_23.q = result_32.q
                result_35 = result_31
                result_16 = result_23
            else
                int32_t rcx_5 = r13.d
                int32_t result_7
                
                if (rcx_5 == 1)
                    int64_t rax_17 = sx.q(var_18c)
                    int64_t rcx_12 = rax_17 * 3
                    *(&var_178 + (rax_17 << 2)) = 0x3f800000
                    result_31 = zx.o(*(&var_168 + (rcx_12 << 2)))
                    result_7 = *(&var_168:8 + (rcx_12 << 2))
                else if (rcx_5 == 2)
                    void var_1a0
                    uint64_t* rax_16
                    rax_16, result_34, result_8 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_31 = zx.o(*rax_16)
                    result_7 = rax_16[1].d
                else if (rcx_5 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_15
                    rax_15, result_34, result_8, result_17, result_9, zmm13, zmm14, result_18 =
                        sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_31 = zx.o(*rax_15)
                    result_7 = rax_15[1].d
                else if (rcx_5 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_14
                    rax_14, result_34, result_8, result_17, result_9, zmm13, zmm14, result_18 =
                        sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_31 = zx.o(*rax_14)
                    result_7 = rax_14[1].d
                else
                    int32_t var_318_1 = 0
                    result_31 = _mm_unpacklo_ps(result_9, result_9.q)
                    result_7 = 0
                
                int32_t var_180
                int64_t rdi_1 = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_4 = sx.q(var_188:4.d)
                uint64_t result_36 = result_31.q
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t r8_5 = *(&var_168:8 + (r15_1 << 2))
                result_16 = result_36.d
                result_35 = result_36:4.d
                result_5 = result_7
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx_1 << 2))
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                int32_t result_42 = (&result_28)[r15_1]
                var_178[1].d = (*(&var_178 + (r9_4 << 2))).d
                var_178[0].d = (*(&var_178 + (r11_1 << 2))).d
                var_178[0]:4.d = (*(&var_178 + (r10_1 << 2))).d
                var_178[1]:4.d = (*(&var_178 + (rdi_1 << 2))).d
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_6 = (&result_28)[r14_1]
                var_148_1 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rcx_14 = (&result_28)[rsi_1]
                var_148_1 = *(&var_168:8 + (rbx_1 << 2))
                int32_t rax_19 = (&result_28)[rbx_1]
                var_12c_1.q = *(&result_41 + (r14_1 << 2))
                result_33 = zx.o(*(&result_29 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_41 + (rbx_1 << 2))
                result_31 = zx.o(*(&result_29 + (rbx_1 << 2)))
                var_12c_1:0xc.q = *(&result_41 + (rsi_1 << 2))
                result_32 = zx.o(*(&result_29 + (rsi_1 << 2)))
                result_41 = *(&result_41 + (r15_1 << 2))
                result_13 = zx.o(*(&result_29 + (r15_1 << 2)))
                result_28 = result_42
                var_12c_1:8.d = rdx_6
                rdx_7 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_14
                int32_t rcx_15 = (&result_3)[rsi_1]
                int32_t var_10c_1 = rax_19
                int32_t rax_20 = (&result_3)[rbx_1]
                var_fc_1.q = result_33.q
                int128_t var_ec_1
                var_ec_1:8.q = result_31.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_5
                result_33.d = result_35.d f* result_35[0]
                result_3 = (&result_3)[r15_1]
                var_fc_1:0xc.q = result_32.q
                result_31.d = result_16.d f* result_16.d
                var_fc_1:8.d = rdx_7
                result_32.d = result_5.d f* result_5.d
                var_ec_1:4.d = rcx_15
                result_33.d = result_33.d f+ result_31.d
                result_29 = result_13.q
                result_13 = result_22
                int32_t var_dc_1 = rax_20
                result_33.d = result_33.d f+ result_32.d
                result = zx.d(arg9)
                rdi.b = result_13.d f> result_33.d
                bool cond:3_1 = result_33.d f>= result_17.d
                result_21 = result_33.d
                result_17 = result_33
                rdx_7.b = cond:3_1
                var_357 = rdx_7.b
                
                if (result.b == 0)
                    goto label_14167ea99
                
                if (rdi.b == 0)
                    goto label_14167ea9e
                
                if (not(zmm13[0] f!= result_9.d))
                    result_32 = 0x3eb0c6f7a0b5ed8d
                    result_31 = _mm_cvtps_pd(result_33.q)
                    
                    if (not(result_31.q f<= result_32.q))
                        result_31 = _mm_cvtps_pd(result_13.q)
                        
                        if (not(result_31.q f<= result_32.q) && r13.d s< 4)
                            r14_1.b = 1
                            rdi.b = 0
                            var_358 = 1
                            goto label_14167eaa4
            
        label_14167ea99:
            
            if (rdi.b != 0)
                rcx_1 = var_328
            else
            label_14167ea9e:
                r14_1 = zx.q(var_358)
            label_14167eaa4:
                rcx_1 = var_328
                
                if (rdx_7.b == 0)
                    rsi = arg4
                    continue
        
        result_32 = 0x7f7fffff
        break

bool cond:0_1 = zmm13[0] f<= result_9.d
int32_t* rdi_2 = arg6
*rdi_2 = zmm13[0]

if (not(cond:0_1))
    result_14 = result_9
    result_13 = result_9
    *arg8 = var_308
    arg8[1].d = var_300
    
    if (r13.d s> 0)
        int128_t* rcx_17 = &var_178
        uint64_t i_4 = zx.q(r13.d)
        uint32_t* rax_24 = &result_3
        uint64_t i
        
        do
            result_33 = *rcx_17
            rcx_17 += 4
            result_31.d = result_33.d f* rax_24[-2]
            result_32.d = result_33.d f* rax_24[-1]
            result_33.d = result_33.d f* *rax_24
            rax_24 = &rax_24[3]
            result_9.d = result_9.d f+ result_31.d
            result_14.d = result_14.d f+ result_32.d
            result_13.d = result_13.d f+ result_33.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_31.d = zmm14.d f* *arg8
    result_32.d = zmm13.d f* *arg4
    result_9.d = result_9.d f- result_31.d
    result_31.d = zmm14.d f* *(arg8 + 4)
    result_32.d = result_32.d f+ var_338[0].d
    zmm14.d = zmm14.d f* arg8[1].d
    result_14.d = result_14.d f- result_31.d
    result_9.d = result_9.d f+ result_32.d
    result_32.d = zmm13.d f* *(arg4 + 4)
    result_13.d = result_13.d f- zmm14.d
    zmm13[0] = zmm13[0] f* *(arg4 + 8)
    result_32.d = result_32.d f+ var_338[0]:4.d
    zmm13[0] = zmm13[0] f+ var_338[1].d
    result_14.d = result_14.d f+ result_32.d
    result_13.d = result_13.d f+ zmm13[0]
    *arg7 = (_mm_unpacklo_ps(result_9, result_14.q)).q
    arg7[1].d = result_13.d
else if (result.b != 0)
    if (not(zmm14.d f<= result_9.d))
        result_31 = _mm_cvtps_pd(result_17.q)
    
    if (zmm14.d f<= result_9.d || result_31.q f<= 9.9999999999999995e-07
            || result_17.d f>= result_32.d)
        var_178[0] = 0
        var_178[1] = 0
        var_338[0] = 0
        var_338[1] = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_338[1]:4.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        float result_11
        float result_12[0x4]
        
        if (var_328 == 0)
            int32_t var_318_5 = 0x3f800000
            result_11 = 1f
            result_12 = _mm_unpacklo_ps(result_9, result_9.q)
        label_14167f07e:
            result_33 = result_41:4.d
            result_32 = result_41.d
            *rdi_2 = (zmm14 ^ data_142d3f780).d
            *arg8 = result_12.q
            result_12 = result_28
            arg8[1].d = result_11
            result_32 = _mm_unpacklo_ps(result_32, result_33.q)
            result = result_12[0]
            *arg7 = result_32.q
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_3 = sx.q(var_178[1].d)
                    int32_t rax_29 = (rdi_3 + 1).d
                    var_178[1].d = rax_29
                    
                    if (rax_29 s> var_178[1]:4.d)
                        sub_14083a7e0(&var_178)
                    
                    double rcx_21 = var_178[0]
                    int64_t rdx_10 = rdi_3 * 3
                    int32_t rax_30 = *(&result_28 + r12)
                    result_32.d = result_34.d f+ *(&result_29:4 + r12)
                    *(rcx_21 i+ (rdx_10 << 2)) = *(&result_41 + r12)
                    result_18[0] = result_18[0] f+ *(&result_29 + r12)
                    *(rcx_21 i+ (rdx_10 << 2) + 8) = rax_30
                    int64_t rdi_4 = sx.q(var_338[1].d)
                    result_20:4.d = result_32.d
                    result_20.d = result_18[0]
                    result_12 = result_8
                    result_12[0] = result_12[0] f+ *(&result_3 + r12)
                    int32_t rax_31 = (rdi_4 + 1).d
                    var_338[1].d = rax_31
                    result_6 = result_12[0]
                    
                    if (rax_31 s> var_338[1]:4.d)
                        sub_14083a7e0(&var_338)
                    
                    double rcx_23 = var_338[0]
                    int64_t rdx_12 = rdi_4 * 3
                    r12 += 0xc
                    *(rcx_23 i+ (rdx_12 << 2)) = result_20
                    *(rcx_23 i+ (rdx_12 << 2) + 8) = result_6
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_2 = arg6
            
            var_190.q = &var_1c8
            void* var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_35
            rax_35, zmm14 = sub_141561dc0(&var_178, &var_338, &var_260, &var_190, &result_22, 
                &result_20, &result_38, &var_248)
            result_12 = zx.o(result_20)
            result_11 = result_6
            
            if (rax_35 == 2)
                goto label_14167f07e
            
            *arg8 = result_12.q
            result_12 = result_22 ^ data_142d3f780
            arg8[1].d = result_11
            result_12[0] = result_12[0] f- zmm14.d
            result = result_1
            *rdi_2 = result_12[0]
            *arg7 = result_38
        double rcx_25 = var_338[0]
        arg7[1].d = result
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        double rcx_26 = var_178[0]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        result_13 = result_9
        result_14 = result_9
        *arg8 = var_308
        result_15 = result_9
        arg8[1].d = var_300
        result_16 = result_9
        result_17 = result_9
        result_5 = result_9
        
        if (rcx_1 == 0)
            result_32 = zx.o(result_41)
            result_33 = zx.o(result_29)
            int32_t result_30 = result_28
            result_14 = _mm_shuffle_ps(result_32, result_32, 0x55)
            uint32_t result_4 = result_3
            result_15 = result_30
            result_17 = _mm_shuffle_ps(result_33, result_33, 0x55)
            result_5 = result_4
            result_13 = result_32.d
            result_20 = result_33.q
            result_16 = result_20.d
        else if (r13.d s> 0)
            int128_t* rax_27 = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_33 = *rax_27
                rax_27 += 4
                result_31.d = result_33.d f* *(&result_41 + r12)
                result_32.d = result_33.d f* *(&result_41:4 + r12)
                result_13.d = result_13.d f+ result_31.d
                result_31.d = result_33.d f* *(&result_28 + r12)
                result_14.d = result_14.d f+ result_32.d
                result_32.d = result_33.d f* *(&result_29 + r12)
                result_15[0] = result_15[0] f+ result_31.d
                result_31.d = result_33.d f* *(&result_29:4 + r12)
                result_33.d = result_33.d f* *(&result_3 + r12)
                result_16.d = result_16.d f+ result_32.d
                r12 += 0xc
                result_17.d = result_17.d f+ result_31.d
                result_5.d = result_5.d f+ result_33.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm13 = var_338[0].d
        result_34.d = var_338[1].d.d f+ result_5.d
        result_18 = var_338[0]:4.d
        result_8.d = zmm13.d f+ result_16.d
        result_18[0] = result_18[0] f+ result_17.d
        result_34.d = result_34.d f- result_15[0]
        result_15 = 0x3f000000
        result_8.d = result_8.d f- result_13.d
        result_18[0] = result_18[0] f- result_14.d
        result_32.d = result_34.d f* result_34.d
        result_31.d = result_8.d f* result_8.d
        result_33.d = result_18.d f* result_18[0]
        result_33.d = result_33.d f+ result_31.d
        result_33.d = result_33.d f+ result_32.d
        result_14 = _mm_rsqrt_ss(result_33.d, result_33.d)
        result_13.d = result_33.d f* 0.5f
        result_31.d = result_14.d f* result_14.d
        result_32.d = result_13.d f* result_31.d
        result_33.d = 0.5f f- result_32.d
        result_31.d = result_14.d f* result_33.d
        result_14.d = result_14.d f+ result_31.d
        result_32.d = result_14.d f* result_14.d
        result_13.d = result_13.d f* result_32.d
        result_15[0] = 0.5f f- result_13.d
        result_31.d = result_14.d f* result_15[0]
        result_14.d = result_14.d f+ result_31.d
        result_8.d = result_8.d f* result_14.d
        result_18[0] = result_18[0] f* result_14.d
        result_34.d = result_34.d f* result_14.d
        result_31 = _mm_unpacklo_ps(result_8, result_18[0].q)
        *arg8 = result_31.q
        int32_t var_318_3 = result_34.d
        result_32.d = zmm14.d f- __sqrtss_xmmss_memss(result_31.d, result_21).d
        arg8[1].d = var_318_3
        
        if (not(result_32.d f< result_9.d))
            result_9 = __minss_xmmss_memss(result_32.d, 0x7f7fffff)
        
        result_32 = *arg8
        result_33 = *(arg8 + 4)
        result_13 = arg8[1].d
        result_31.d = result_32.d f* zmm14.d
        result_32.d = result_32.d f* result_9.d
        result_16.d = result_16.d f- result_31.d
        result_31.d = result_33.d f* zmm14.d
        result_33.d = result_33.d f* result_9.d
        result_17.d = result_17.d f- result_31.d
        result_31.d = result_13.d f* zmm14.d
        result_16.d = result_16.d f+ zmm13[0]
        result_13.d = result_13.d f* result_9.d
        result_9 ^= data_142d3f780
        result_5.d = result_5.d f- result_31.d
        result_17.d = result_17.d f+ result_18[0]
        result_16.d = result_16.d f+ result_32.d
        result_5.d = result_5.d f+ var_338[1].d
        result_17.d = result_17.d f+ result_33.d
        result_5.d = result_5.d f+ result_13.d
        *arg7 = (_mm_unpacklo_ps(result_16, result_17.q)).q
        arg7[1].d = result_5.d
        *rdi_2 = result_9.d

result.b = 1
label_14167f0e2:
__security_check_cookie(rax_1 ^ &var_398)
return result

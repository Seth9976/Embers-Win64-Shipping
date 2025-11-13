// 函数: sub_141650790
// 地址: 0x141650790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void* r11 = *(arg1 + 0x10)
uint32_t result_10[0x4] = zx.o(0)
int128_t* r15 = arg3
uint32_t result_16[0x4] = *(r11 + 0x1c)
void* r8 = arg2
float (* var_288)[0x4] = arg4
uint32_t result_25[0x4]

if (result_16[0] f== 0f)
    result_25 = zx.o(0)
else
    result_25 = _mm_and_ps(*(arg1 + 0x28), 0x7fffffff)
    result_25[0] = result_25[0] f* result_16[0]

void* rdx = *(arg2 + 0x10)
result_16 = *(rdx + 0x1c)
uint32_t result_18[0x4]

if (result_16[0] f== 0f)
    result_18 = zx.o(0)
else
    result_18 = _mm_and_ps(*(r8 + 0x28), 0x7fffffff)
    result_18[0] = result_18[0] f* result_16[0]

uint32_t result_41[0x4] = *r15
int64_t r12 = 0
uint32_t result_29 = result_18[0]
uint32_t var_348[0x4] = r15[1]
void* var_268 = arg1
int32_t var_190 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
uint32_t var_178[0x4] = data_142d3f7e0
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
uint32_t result_17[0x4] = result_18
float result_47[0x4] = _mm_shuffle_ps(result_41, result_41, 0x55)
result_17[0] = result_17[0] f+ result_25[0]
uint32_t result_40[0x4] = _mm_shuffle_ps(result_41, result_41, 0xaa)
uint32_t result_43[0x4] = result_41
result_18 = result_41 ^ 0x80000000
result_18 = _mm_shuffle_ps(result_18, result_18, 0xe1)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
result_17[0] = result_17[0] f* result_17[0]
uint32_t var_2e8 = result_17[0]
uint32_t result_34[0x4] = result_40
result_17 = _mm_cvtps_pd(result_17[0].q)
result_17[0].q = result_17[0].q f+ 9.9999999999999995e-07
uint32_t result_12 = _mm_cvtpd_ps(result_17)[0]
result_18[0] = (result_47 ^ 0x80000000)[0]
uint32_t result_9[0x4] = _mm_shuffle_ps(result_41, result_41, 0xff)
result_18 = _mm_shuffle_ps(result_18, result_18, 0xc6)
result_18[0] = (result_40 ^ 0x80000000)[0]
uint32_t result_14[0x4] = result_9
result_18 = _mm_shuffle_ps(result_18, result_18, 0x27)
result_18[0] = result_9[0]
result_18 = _mm_shuffle_ps(result_18, result_18, 0x39)
uint32_t result_35[0x4] = result_18
uint32_t result_23[0x4] = *(r11 + 0x10)
uint32_t result_6[0x4] = *(rdx + 0x18)
result_23[0] = result_23[0] f* *(arg1 + 0x28)
uint32_t result_24[0x4] = *(r11 + 0x14)
uint32_t zmm12[0x4] = *(r11 + 0x18)
result_24[0] = result_24[0] f* *(arg1 + 0x2c)
zmm12[0] = zmm12[0] f* *(arg1 + 0x30)
result_6[0] = result_6[0] f* *(r8 + 0x30)
float result_21[0x4] = *(rdx + 0x14)
result_21[0] = result_21[0] f* *(r8 + 0x2c)
uint32_t result_33[0x4] = result_18
result_18 = *(rdx + 0x10)
result_18[0] = result_18[0] f* *(r8 + 0x28)
result_16 = _mm_unpacklo_ps(result_23, result_24[0].q)
uint32_t result_48 = zmm12[0]
int64_t result_37 = result_16.q
uint32_t result_44 = result_48
result_17 = result_14[0]
uint32_t result_19[0x4] = result_18
result_19[0] = result_19[0] f* result_40[0]
result_16 = result_21
int64_t var_300 = 0
result_16[0] = result_16[0] f* result_40[0]
result_9 = result_21
uint32_t var_2f8 = 0x3f800000
result_6[0] = result_6[0] f* result_47[0]
result_40 = result_47
result_9[0] = result_9[0] f* result_41[0]
result_6[0] = result_6[0] f- result_16[0]
result_6[0] = result_6[0] f* result_41[0]
result_19[0] = result_19[0] f- result_6[0]
result_18[0] = result_18[0] f* result_47[0]
result_6[0] = result_6[0] f+ result_6[0]
float result_20[0x4] = result_34
result_9[0] = result_9[0] f- result_18[0]
result_16 = result_20
result_17[0] = result_17[0] f* result_6[0]
result_19[0] = result_19[0] f+ result_19[0]
result_20[0] = result_20[0] f* result_6[0]
result_17[0] = result_17[0] f+ result_18[0]
result_18 = result_41
result_16[0] = result_16[0] f* result_19[0]
result_9[0] = result_9[0] f+ result_9[0]
result_18[0] = result_18[0] f* result_19[0]
result_40[0] = result_40[0] f* result_9[0]
result_40[0] = result_40[0] f- result_16[0]
result_16 = result_41
result_16[0] = result_16[0] f* result_9[0]
result_41 = zx.o(0)
result_40[0] = result_40[0] f+ result_17[0]
result_17 = result_14[0]
result_20[0] = result_20[0] f- result_16[0]
result_17[0] = result_17[0] f* result_19[0]
result_16 = result_47[0]
result_16[0] = result_16[0] f* result_6[0]
result_17[0] = result_17[0] f+ result_21[0]
result_23[0] = result_23[0] f- result_40[0]
result_18[0] = result_18[0] f- result_16[0]
result_20[0] = result_20[0] f+ result_17[0]
result_17 = result_14[0]
result_17[0] = result_17[0] f* result_9[0]
result_9 = var_348[2]
uint32_t result_7 = result_9[0]
result_17[0] = result_17[0] f+ result_6[0]
int64_t result_15 = (_mm_unpacklo_ps(result_40, result_20[0].q)).q
result_24[0] = result_24[0] f- result_20[0]
result_16 = var_348[0]
result_6 = result_9
result_40 = result_16
uint32_t result_11 = result_16[0]
result_40[0] = result_40[0] f- result_23[0]
uint32_t var_2e0 = result_16[0]
result_18[0] = result_18[0] f+ result_17[0]
uint32_t result_2 = result_9[0]
result_17 = var_348[1]
result_21 = result_16
result_23 = result_17
uint32_t result_30 = result_17[0]
result_23[0] = result_23[0] f- result_24[0]
uint32_t var_2dc = result_17[0]
result_24 = result_9
uint32_t result_22[0x4] = result_17
zmm12[0] = zmm12[0] f- result_18[0]
uint32_t result_1 = result_18[0]
result_40[0] = result_40[0] f* result_40[0]
uint32_t result_3 = result_1
result_24[0] = result_24[0] f- zmm12[0]
result_23[0] = result_23[0] f* result_23[0]
result_23[0] = result_23[0] f+ result_40[0]
result_24[0] = result_24[0] f* result_24[0]
uint32_t result = zx.d(arg9)
result_23[0] = result_23[0] f+ result_24[0]
uint32_t result_5

if (result_23[0] f>= result_12 || (result.b != 0 && result_23[0] f>= 9.99999997e-07f))
    result_5.b = 0
else
    result_5.b = 1

result_18 = 0x7f7fffff
int64_t rsi
rsi.b = 0
float result_26 = 3.40282347e+38f
uint32_t rdx_1 = zx.d(result_5.b)
char var_358 = rdx_1.b
int32_t rcx = 0
int32_t var_338 = 0
result_17 = 0x7f7fffff
float var_334
uint32_t var_330
uint32_t var_328
int64_t result_13

if (result_5.b == 0)
    zmm12 = var_2e8
    
    while (true)
        int32_t rax_5 = rcx
        rcx += 1
        var_338 = rcx
        
        if (rax_5 s>= 0x20)
            result_21 = result_11
            result_6 = result_7
            result_17 = result_26
            result = zx.d(arg9)
        else
            result_19 = 0x3f000000
            void* rax_6 = var_268
            result_23[0] = result_23[0] f* result_23[0]
            void* rcx_1 = *(rax_6 + 0x10)
            result_40[0] = result_40[0] f* result_40[0]
            result_24[0] = result_24[0] f* result_24[0]
            result_40[0] = result_40[0] f+ result_23[0]
            result_40[0] = result_40[0] f+ result_24[0]
            float result_42[0x4] = _mm_rsqrt_ss(result_40[0], result_40[0])
            result_18 = 0x3f000000
            result_40[0] = result_40[0] f* 0.5f
            result_16 = result_42
            result_16[0] = result_16[0] f* result_42[0]
            result_40[0] = result_40[0] f* result_16[0]
            result_16 = result_42
            result_18[0] = 0.5f f- result_40[0]
            result_16[0] = result_16[0] f* result_18[0]
            result_42[0] = result_42[0] f+ result_16[0]
            result_17 = result_42
            result_16 = result_42
            result_17[0] = result_17[0] f* result_42[0]
            result_40[0] = result_40[0] f* result_17[0]
            result_19[0] = 0.5f f- result_40[0]
            result_16[0] = result_16[0] f* result_19[0]
            result_42[0] = result_42[0] f+ result_16[0]
            result_40[0] = result_40[0] f* result_42[0]
            result_16 = result_42
            result_16[0] = result_16[0] f* result_23[0]
            result_23 = *(rax_6 + 0x2c)
            result_23[0] = result_23[0] f* *(rcx_1 + 0x14)
            uint32_t result_31 = result_16[0]
            result_16 = *(rax_6 + 0x30)
            result_16[0] = result_16[0] f* *(rcx_1 + 0x18)
            var_334 = result_42[0]
            result_42[0] = result_42[0] f* result_24[0]
            result_24 = *(rax_6 + 0x28)
            void* rax_7 = *(r8 + 0x10)
            result_24[0] = result_24[0] f* *(rcx_1 + 0x10)
            uint32_t result_28 = result_16[0]
            result_19 = *(rax_7 + 0x14)
            result_18 = *(rax_7 + 0x10)
            result_19[0] = result_19[0] f* *(r8 + 0x2c)
            result_18[0] = result_18[0] f* *(r8 + 0x28)
            uint32_t var_2c8 = result_16[0]
            result_19[0] = result_19[0] f* result_34[0]
            result_18[0] = result_18[0] f* result_34[0]
            result_19[0] = result_19[0] f* result_43[0]
            uint32_t result_32 = result_40[0]
            result_40 = *(rax_7 + 0x18)
            result_40[0] = result_40[0] f* *(r8 + 0x30)
            result_20 = result_40
            result_20[0] = result_20[0] * result_47[0]
            result_20[0] = result_20[0] f- result_19[0]
            result_40[0] = result_40[0] f* result_43[0]
            result_18[0] = result_18[0] f- result_40[0]
            result_18[0] = result_18[0] f* result_47[0]
            result_20[0] = result_20[0] + result_20[0]
            result_19[0] = result_19[0] f- result_18[0]
            result_18[0] = result_18[0] f+ result_18[0]
            result_17 = result_20
            result_19[0] = result_19[0] f+ result_19[0]
            result_18[0] = result_18[0] f* result_34[0]
            result_19[0] = result_19[0] f* result_47[0]
            result_19[0] = result_19[0] f- result_18[0]
            result_17[0] = result_17[0] f* result_14[0]
            result_21 = result_20
            result_20[0] = result_20[0] * result_47[0]
            result_21[0] = result_21[0] f* result_34[0]
            result_17[0] = result_17[0] f+ result_18[0]
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            result_19[0] = result_19[0] f* result_43[0]
            result_19[0] = result_19[0] f+ result_17[0]
            result_18[0] = result_18[0] f* result_43[0]
            result_21[0] = result_21[0] f- result_19[0]
            uint64_t rcx_3 = r13 * 3
            result_19[0] = result_19[0] f* result_14[0]
            result_18[0] = result_18[0] f- result_20[0]
            result_20 = result_32
            result_18[0] = result_18[0] f* result_14[0]
            result_16 = result_28
            result_19[0] = result_19[0] f+ result_40[0]
            result_40 = result_42
            result_18[0] = result_18[0] f+ result_19[0]
            result_18[0] = result_18[0] f+ result_19[0]
            result_9 = result_11
            result_21[0] = result_21[0] f+ result_18[0]
            result_24[0] = result_24[0] f- result_19[0]
            result_16[0] = result_16[0] f- result_18[0]
            uint32_t var_1e4_1 = result_18[0]
            result_22 = result_30
            result_23[0] = result_23[0] f- result_21[0]
            result_9[0] = result_9[0] f- result_24[0]
            uint32_t var_298_1 = result_24[0]
            uint32_t var_308_1 = result_16[0]
            result_22[0] = result_22[0] f- result_23[0]
            var_334 = result_23[0]
            result_18 = result_7
            result_18[0] = result_18[0] f- result_16[0]
            var_330 = result_9[0]
            result_9[0] = result_9[0] f* result_20[0]
            result_16 = _mm_unpacklo_ps(result_24, result_23[0].q)
            result_23 = result_31
            uint32_t var_32c_1 = result_22[0]
            *(&result_37 + (rcx_3 << 2)) = result_16.q
            result_22[0] = result_22[0] f* result_23[0]
            (&result_44)[rcx_3] = var_2c8
            var_328 = result_18[0]
            result_22[0] = result_22[0] f+ result_9[0]
            result_18[0] = result_18[0] f* result_40[0]
            *(&result_15 + (rcx_3 << 2)) = (_mm_unpacklo_ps(result_19, result_21[0].q)).q
            (&result_3)[rcx_3] = var_1e4_1
            result_22[0] = result_22[0] f+ result_18[0]
            int128_t var_158_1
            uint32_t result_36
            
            if (result_22[0] f<= zmm12[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_3 << 2)) = var_330.q
                *(&var_168:8 + (rcx_3 << 2)) = var_328
                var_190 = r13.d
            label_1416510d3:
                result_21 = result_11
                result_6 = result_7
                
                if (rdx_1.b != 0 && not(result_22[0] f< result_10[0]))
                    result_22[0] = result_22[0] f* result_22[0]
                    result_22[0] = result_22[0] f+ 9.99999997e-07f
                    result_5.b = result_22[0] f>= result_26
            else
                result_9 = (*arg4)[1]
                result_21 = *arg4
                result_6 = (*arg4)[2]
                result_18 = result_21
                result_18[0] = result_18[0] f* result_20[0]
                result_9[0] = result_9[0] f* result_23[0]
                result_6[0] = result_6[0] f* result_40[0]
                result_18[0] = result_18[0] f+ result_9[0]
                result_18[0] = result_18[0] f+ result_6[0]
                
                if (result_18[0] f>= result_10[0])
                    result.b = 0
                    goto label_141651bb2
                
                result_22[0] = result_22[0] f- zmm12[0]
                result_22[0] = result_22[0] f/ result_18[0]
                result_41[0] = result_41[0] f- result_22[0]
                
                if (result_41[0] f<= result_41[0])
                    goto label_1416510d3
                
                if (result_41[0] f> arg5)
                    result.b = 0
                    goto label_141651bb2
                
                result_17 = zx.o(var_2e0.q)
                result_22 = result_9
                result_16 = _mm_shuffle_ps(result_17, result_17, 0x55)
                r13 = zx.q(r13.d + 1)
                result_13 = result_17.q
                result_21[0] = result_21[0] f* result_41[0]
                result_1 = result_2
                result_22[0] = result_22[0] f* result_41[0]
                var_190 = r13.d
                result_21[0] = result_21[0] f+ var_348[0]
                result_6[0] = result_6[0] f* result_41[0]
                var_358 = 0
                result_22[0] = result_22[0] f+ var_348[1]
                var_300.d = result_20[0]
                result_6[0] = result_6[0] f+ var_348[2]
                result_9 = result_21
                result_11 = result_21[0]
                result_9[0] = result_9[0] f- result_17[0]
                var_2e0 = result_21[0]
                result_17 = var_168:4.d
                result_22[0] = result_22[0] f- result_16[0]
                result_30 = result_22[0]
                result_16 = var_168.d
                result_6[0] = result_6[0] f- result_1
                result_16[0] = result_16[0] f+ result_9[0]
                result_7 = result_6[0]
                uint32_t var_2dc_1 = result_22[0]
                result_17[0] = result_17[0] f+ result_22[0]
                result_2 = result_6[0]
                var_300:4.d = result_23[0]
                var_2f8 = result_40[0]
                var_168.d = result_16[0]
                result_16 = var_168:8.d
                result_16[0] = result_16[0] f+ result_6[0]
                var_168:4.d = result_17[0]
                result_17 = var_168:0xc.d
                result_17[0] = result_17[0] f+ result_9[0]
                var_168:8.d = result_16[0]
                result_16 = var_158_1.d
                var_168:0xc.d = result_17[0]
                result_16[0] = result_16[0] f+ result_22[0]
                result_17 = var_158_1:4.d
                result_17[0] = result_17[0] f+ result_6[0]
                var_158_1.d = result_16[0]
                result_16 = var_158_1:8.d
                var_158_1:4.d = result_17[0]
                result_16[0] = result_16[0] f+ result_9[0]
                result_17 = var_158_1:0xc.d
                result_17[0] = result_17[0] f+ result_22[0]
                var_158_1:8.d = result_16[0]
                result_16 = result_36
                result_16[0] = result_16[0] f+ result_6[0]
                var_158_1:0xc.d = result_17[0]
                result_17 = result_21
                result_17[0] = result_17[0] f- var_298_1
                result_22[0] = result_22[0] f- var_334
                result_36 = result_16[0]
                result_6[0] = result_6[0] f- var_308_1
                *(&var_168 + (rcx_3 << 2)) = (_mm_unpacklo_ps(result_17, result_22[0].q)).q
                result_26 = 3.40282347e+38f
                *(&var_168:8 + (rcx_3 << 2)) = result_6[0]
            
            if (result_5.b != 0)
                int64_t* rax_19
                rax_19, result_21, result_22, result_6, zmm12, result_10, result_41, result_25 =
                    sub_1416f4530(&result_33, &var_168, &var_190, &var_178, &result_37, &result_15)
                r13 = zx.q(var_190)
                result_17 = zx.o(*rax_19)
                result_16 = result_17
                result_24 = rax_19[1].d
                result = zx.d(arg9)
                result_40 = result_17.d
                result_17 = result_26
                result_23 = _mm_shuffle_ps(result_16, result_16, 0x55)
            label_141651526:
                
                if (result_5.b == 0)
                    goto label_141651643
                
                rcx = var_338
                arg4 = var_288
            else
                int32_t rcx_4 = r13.d
                int32_t result_38
                
                if (rcx_4 == 1)
                    int64_t rax_16 = sx.q(var_18c)
                    int64_t rcx_11 = rax_16 * 3
                    var_178[rax_16] = 0x3f800000
                    result_16 = zx.o(*(&var_168 + (rcx_11 << 2)))
                    result_38 = *(&var_168:8 + (rcx_11 << 2))
                else if (rcx_4 == 2)
                    uint64_t var_1ac
                    uint64_t* rax_15
                    rax_15, result_21, result_22, result_6 =
                        sub_1416e69d0(&var_1ac, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_16 = zx.o(*rax_15)
                    result_38 = rax_15[1].d
                else if (rcx_4 == 3)
                    uint64_t var_1b8
                    uint64_t* rax_14
                    rax_14, result_21, result_22, result_6, zmm12, result_10, result_41, 
                        result_25 = sub_1416fa750(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_16 = zx.o(*rax_14)
                    result_38 = rax_14[1].d
                else if (rcx_4 == 4)
                    void var_1a0
                    uint64_t* rax_13
                    rax_13, result_21, result_22, result_6, zmm12, result_10, result_41, 
                        result_25 = sub_1416f9c90(&var_1a0, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_16 = zx.o(*rax_13)
                    result_38 = rax_13[1].d
                else
                    int32_t var_318_1 = 0
                    result_16 = _mm_unpacklo_ps(result_10, result_10[0].q)
                    result_38 = 0
                
                int32_t var_180
                int64_t rdi = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                int64_t result_27 = result_16.q
                int64_t rbx_1 = rdi * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_3 * 3
                int32_t rdx_5 = *(&var_168:8 + (r14_1 << 2))
                uint32_t result_46 = *(&var_168:8 + (rsi << 2))
                int32_t r8_4 = *(&var_168:8 + (r15_1 << 2))
                result_40 = result_27.d
                result_23 = result_27:4.d
                int32_t result_45 = *(&var_168:8 + (rbx_1 << 2))
                result_24 = result_38
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_36:4.q = *(&var_168 + (rbx_1 << 2))
                result_16 = var_178[r11_1]
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                result_17 = var_178[r10_1]
                var_168.q = *(&var_168 + (r15_1 << 2))
                result_9 = var_178[rdi]
                uint32_t result_49 = (&result_44)[r15_1]
                var_178[2] = var_178[r9_3][0]
                result_18 = zx.o(*(&result_37 + (r14_1 << 2)))
                var_178[0] = result_16[0]
                result_16 = zx.o(*(&result_37 + (rbx_1 << 2)))
                var_178[1] = result_17[0]
                result_17 = zx.o(*(&result_37 + (rsi << 2)))
                var_178[3] = result_9[0]
                var_158_1:4.d = rdx_5
                int32_t rdx_6 = (&result_44)[r14_1]
                result_36 = result_46
                int32_t rcx_12 = (&result_44)[rsi]
                result_36 = result_45
                int32_t rax_17 = (&result_44)[rbx_1]
                var_12c_1.q = result_18.q
                result_18 = zx.o(*(&result_15 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = result_16.q
                result_16 = zx.o(*(&result_15 + (rbx_1 << 2)))
                var_12c_1:0xc.q = result_17.q
                result_17 = zx.o(*(&result_15 + (rsi << 2)))
                result_37 = *(&result_37 + (r15_1 << 2))
                result_9 = zx.o(*(&result_15 + (r15_1 << 2)))
                result_44 = result_49
                result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_6
                rdx_1 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_12
                int32_t rcx_13 = (&result_3)[rsi]
                int32_t var_10c_1 = rax_17
                int32_t rax_18 = (&result_3)[rbx_1]
                var_fc_1.q = result_18.q
                int128_t var_ec_1
                var_ec_1:8.q = result_16.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_4
                result_23[0] = result_23[0] f* result_23[0]
                result_3 = result_5
                var_fc_1:0xc.q = result_17.q
                result_40[0] = result_40[0] f* result_40[0]
                var_fc_1:8.d = rdx_1
                result_24[0] = result_24[0] f* result_24[0]
                var_ec_1:4.d = rcx_13
                result_23[0] = result_23[0] f+ result_40[0]
                result_15 = result_9.q
                result_9 = result_12
                int32_t var_dc_1 = rax_18
                result_23[0] = result_23[0] f+ result_24[0]
                result = zx.d(arg9)
                result_5.b = result_9[0] f> result_23[0]
                bool cond:4_1 = result_23[0] f>= result_26
                result_26 = result_23[0]
                result_17 = result_23
                rsi.b = cond:4_1
                
                if (result.b == 0)
                    goto label_141651526
                
                if (result_5.b != 0)
                    if (result_41[0] f!= result_10[0])
                    label_141651523:
                        result_17 = result_23
                        goto label_141651526
                    
                    result_17 = 0x3eb0c6f7a0b5ed8d
                    result_16 = _mm_cvtps_pd(result_23[0].q)
                    
                    if (result_16[0].q f<= result_17[0].q)
                        goto label_141651523
                    
                    result_16 = _mm_cvtps_pd(result_9[0].q)
                    
                    if (result_16[0].q f<= result_17[0].q)
                        goto label_141651523
                    
                    result_17 = result_23
                    
                    if (r13.d s>= 4)
                        goto label_141651526
                    
                    rdx_1.b = 1
                    result_5.b = 0
                    var_358 = 1
                    goto label_141651648
                
                result_17 = result_23
            label_141651643:
                rdx_1 = zx.d(var_358)
            label_141651648:
                rcx = var_338
                arg4 = var_288
                
                if (rsi.b == 0)
                    r8 = arg2
                    continue
        
        result_18 = 0x7f7fffff
        r15 = arg3
        break

bool cond:1_1 = result_41[0] f<= result_10[0]
uint32_t* rdi_1 = arg6
*rdi_1 = result_41[0]

if (not(cond:1_1))
    *arg8 = var_300
    arg8[1].d = var_2f8
    
    if (r13.d s> 0)
        int128_t* rcx_15 = &var_178
        uint64_t i_4 = zx.q(r13.d)
        uint32_t* rax_22 = &result_3
        uint64_t i
        
        do
            result_18 = *rcx_15
            rcx_15 += 4
            result_18[0] = result_18[0] f* rax_22[-2]
            result_18[0] = result_18[0] f* rax_22[-1]
            result_18[0] = result_18[0] f* *rax_22
            rax_22 = &rax_22[3]
            result_10[0] = result_10[0] f+ result_18[0]
            result_10[0] = result_10[0] f+ result_18[0]
            result_10[0] = result_10[0] f+ result_18[0]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    result_20 = result_29
    result_41[0] = result_41[0] f* *arg4
    result_16 = result_20
    result_16[0] = result_16[0] f* *arg8
    result_41[0] = result_41[0] f+ var_348[0]
    result_10[0] = result_10[0] f- result_16[0]
    result_16 = result_20
    result_16[0] = result_16[0] f* *(arg8 + 4)
    result_20[0] = result_20[0] f* arg8[1].d
    result_10[0] = result_10[0] f+ result_41[0]
    result_41[0] = result_41[0] f* (*arg4)[1]
    result_10[0] = result_10[0] f- result_16[0]
    result_41[0] = result_41[0] f* (*arg4)[2]
    result_10[0] = result_10[0] f- result_20[0]
    result_41[0] = result_41[0] f+ var_348[1]
    result_41[0] = result_41[0] f+ var_348[2]
    result_10[0] = result_10[0] f+ result_41[0]
    result_10[0] = result_10[0] f+ result_41[0]
    *arg7 = (_mm_unpacklo_ps(result_10, result_10[0].q)).q
    arg7[1].d = result_10[0]
else if (result.b != 0)
    zmm12 = var_2e8
    
    if (not(zmm12[0] f<= result_10[0]))
        result_16 = _mm_cvtps_pd(result_17[0].q)
    
    if (zmm12[0] f<= result_10[0] || result_16[0].q f<= 9.9999999999999995e-07
            || result_17[0] f>= result_18[0])
        var_178[0].q = 0
        var_178[2].q = 0
        var_348[0].q = 0
        var_348[2].q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_348[3] s< 8)
            sub_14083ad30(&var_348, 8)
        
        float result_8[0x4]
        uint32_t rax_32
        
        if (var_338 == 0)
            int32_t var_318_5 = 0x3f800000
            rax_32 = 0x3f800000
            result_8 = _mm_unpacklo_ps(result_10, result_10[0].q)
        label_141651b39:
            *rdi_1 = (zmm12 ^ data_142d3f780)[0]
            *arg8 = result_8.q
            result_8 = result_25
            arg8[1].d = rax_32
            result_8[0] = result_8[0] f* *arg8
            result_25[0] = result_25[0] f* arg8[1].d
            result_25[0] = result_25[0] f* *(arg8 + 4)
            result_25[0] = result_25[0] f+ result_44
            result_8[0] = result_8[0] f+ result_37.d
            result_25[0] = result_25[0] f+ result_37:4.d
            result = result_25[0]
            result_8 = _mm_unpacklo_ps(result_8, result_25[0].q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_2 = sx.q(var_178[2])
                    int32_t rax_26 = (rdi_2 + 1).d
                    var_178[2] = rax_26
                    
                    if (rax_26 s> var_178[3])
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_19 = var_178[0].q
                    int64_t rdx_9 = rdi_2 * 3
                    result_8 = zx.o(*(&result_37 + r12))
                    int32_t rax_27 = *(&result_44 + r12)
                    result_22[0] = result_22[0] f+ *(&result_15:4 + r12)
                    *(rcx_19 + (rdx_9 << 2)) = result_8.q
                    result_21[0] = result_21[0] f+ *(&result_15 + r12)
                    *(rcx_19 + (rdx_9 << 2) + 8) = rax_27
                    int64_t rdi_3 = sx.q(var_348[2])
                    uint32_t var_32c_2 = result_22[0]
                    var_330 = result_21[0]
                    result_8 = result_6
                    result_8[0] = result_8[0] f+ *(&result_3 + r12)
                    int32_t rax_28 = (rdi_3 + 1).d
                    var_348[2] = rax_28
                    var_328 = result_8[0]
                    
                    if (rax_28 s> var_348[3])
                        sub_14083a7e0(&var_348)
                    
                    int64_t rcx_21 = var_348[0].q
                    int64_t rdx_11 = rdi_3 * 3
                    r12 += 0xc
                    *(rcx_21 + (rdx_11 << 2)) = var_330.q
                    *(rcx_21 + (rdx_11 << 2) + 8) = var_328
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_1 = arg6
            
            int128_t* var_180_1 = r15
            var_190.q = &result_35
            void* var_188_1 = arg2
            int32_t rax_31
            rax_31, zmm12, result_25 = sub_141595860(&var_178, &var_348, &var_268, &var_190, 
                &var_334, &var_330, &result_13, &result_33)
            result_8 = zx.o(var_330.q)
            rax_32 = var_328
            
            if (rax_31 == 2)
                goto label_141651b39
            
            *arg8 = result_8.q
            result_8 = var_334 ^ data_142d3f780
            result_8[0] = result_8[0] f- zmm12[0]
            arg8[1].d = rax_32
            result = result_1
            *rdi_1 = result_8[0]
            result_8 = zx.o(result_13)
        int64_t rcx_23 = var_348[0].q
        *arg7 = result_8.q
        arg7[1].d = result
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = var_178[0].q
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
    else
        result_9 = result_10
        result_19 = result_10
        *arg8 = var_300
        result_20 = result_10
        arg8[1].d = var_2f8
        result_23 = result_10
        result_24 = result_10
        result_6 = result_10
        
        if (rcx == 0)
            result_17 = zx.o(result_37)
            result_18 = zx.o(result_15)
            uint32_t result_39 = result_44
            result_19 = _mm_shuffle_ps(result_17, result_17, 0x55)
            uint32_t result_4 = result_3
            result_20 = result_39
            result_24 = _mm_shuffle_ps(result_18, result_18, 0x55)
            result_6 = result_4
            result_9 = result_17.d
            result_23 = result_18.d
        else if (r13.d s> 0)
            int128_t* rax_24 = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                result_18 = *rax_24
                rax_24 += 4
                result_18[0] = result_18[0] f* *(&result_37 + r12)
                result_18[0] = result_18[0] f* *(&result_37:4 + r12)
                result_9[0] = result_9[0] f+ result_18[0]
                result_18[0] = result_18[0] f* *(&result_44 + r12)
                result_19[0] = result_19[0] f+ result_18[0]
                result_18[0] = result_18[0] f* *(&result_15 + r12)
                result_20[0] = result_20[0] f+ result_18[0]
                result_18[0] = result_18[0] f* *(&result_15:4 + r12)
                result_18[0] = result_18[0] f* *(&result_3 + r12)
                result_23[0] = result_23[0] f+ result_18[0]
                r12 += 0xc
                result_24[0] = result_24[0] f+ result_18[0]
                result_6[0] = result_6[0] f+ result_18[0]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        result_21 = var_348[2]
        result_25 = var_348[1]
        result_21[0] = result_21[0] f+ result_6[0]
        result_41 = var_348[0]
        result_25[0] = result_25[0] f+ result_24[0]
        result_23[0] = result_23[0] f+ result_41[0]
        result_21[0] = result_21[0] - result_20[0]
        result_20 = 0x3f000000
        result_25[0] = result_25[0] f- result_19[0]
        result_23[0] = result_23[0] f- result_9[0]
        result_17 = result_21
        result_17[0] = result_17[0] f* result_21[0]
        result_23[0] = result_23[0] f* result_23[0]
        result_25[0] = result_25[0] f* result_25[0]
        result_25[0] = result_25[0] f+ result_23[0]
        result_25[0] = result_25[0] f+ result_17[0]
        result_19 = _mm_rsqrt_ss(result_25[0], result_25[0])
        result_18 = 0x3f000000
        result_25[0] = result_25[0] f* 0.5f
        result_19[0] = result_19[0] f* result_19[0]
        result_25[0] = result_25[0] f* result_19[0]
        result_18[0] = 0.5f f- result_25[0]
        result_19[0] = result_19[0] f* result_18[0]
        result_19[0] = result_19[0] f+ result_19[0]
        result_19[0] = result_19[0] f* result_19[0]
        result_25[0] = result_25[0] f* result_19[0]
        result_20[0] = 0.5f f- result_25[0]
        result_19[0] = result_19[0] f* result_20[0]
        result_19[0] = result_19[0] f+ result_19[0]
        result_19[0] = result_19[0] f* result_23[0]
        result_19[0] = result_19[0] f* result_25[0]
        result_19[0] = result_19[0] f* result_21[0]
        result_16 = _mm_unpacklo_ps(result_19, result_19[0].q)
        *arg8 = result_16.q
        result_16 = __sqrtss_xmmss_memss(result_16[0], result_26)
        uint32_t var_318_3 = result_19[0]
        zmm12[0] = zmm12[0] f- result_16[0]
        arg8[1].d = var_318_3
        
        if (not(zmm12[0] f< result_10[0]))
            result_10 = __minss_xmmss_memss(zmm12[0], 0x7f7fffff)
        
        result_17 = *arg8
        result_18 = *(arg8 + 4)
        result_9 = arg8[1].d
        result_20 = result_29
        result_17[0] = result_17[0] f* result_20[0]
        result_23[0] = result_23[0] f- result_17[0]
        result_10[0] = result_10[0] f* result_17[0]
        result_18[0] = result_18[0] f* result_20[0]
        result_23[0] = result_23[0] f+ result_41[0]
        result_24[0] = result_24[0] f- result_18[0]
        result_9[0] = result_9[0] f* result_20[0]
        result_23[0] = result_23[0] f+ result_10[0]
        result_10[0] = result_10[0] f* result_18[0]
        result_6[0] = result_6[0] f- result_9[0]
        result_24[0] = result_24[0] f+ result_25[0]
        result_6[0] = result_6[0] f+ var_348[2]
        result_24[0] = result_24[0] f+ result_10[0]
        result_16 = result_10
        result_10 ^= data_142d3f780
        result_16[0] = result_16[0] f* result_9[0]
        result_6[0] = result_6[0] f+ result_16[0]
        *arg7 = (_mm_unpacklo_ps(result_23, result_24[0].q)).q
        arg7[1].d = result_6[0]
        *rdi_1 = result_10[0]

result.b = 1
label_141651bb2:
__security_check_cookie(rax_1 ^ &var_398)
return result

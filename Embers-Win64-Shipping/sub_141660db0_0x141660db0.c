// 函数: sub_141660db0
// 地址: 0x141660db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
float result_42[0x4] = *arg3
uint128_t zmm14 = *(arg2 + 0x1c)
int64_t r12 = 0
float zmm2[0x4] = result_42 ^ 0x80000000
double var_358[0x2] = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int64_t var_288 = arg1
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
double var_178[0x2] = data_142d3f7e0
int32_t var_190 = 0
float (* r14)[0x4] = arg4
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float zmm1[0x4] = zmm14
float temp0_1[0x4] = _mm_shuffle_ps(result_42, result_42, 0x55)
zmm1[0] = zmm1[0] f* zmm14.d
uint128_t result_6 = zx.o(0)
float result_35[0x4] = _mm_shuffle_ps(result_42, result_42, 0xaa)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
double temp0_2[0x2] = _mm_cvtps_pd(zmm1[0].q)
float result_29[0x4] = result_42
temp0_2[0] = temp0_2[0] + 9.9999999999999995e-07
int32_t result_13 = _mm_cvtpd_ps(temp0_2)[0].d
temp0[0] = (temp0_1 ^ 0x80000000)[0].d
float result_36[0x4] = _mm_shuffle_ps(result_42, result_42, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_4[0] = (result_35 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = result_36[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_1c8[0x4] = temp0_6
double zmm0[0x2] = *(arg1 + 0x28)
zmm0[0].d = zmm0[0].d f* *arg10
zmm1 = *(arg1 + 0x30)
zmm1[0] = zmm1[0] f* arg10[2]
int32_t result_24 = zmm0[0].d
zmm0 = *(arg1 + 0x2c)
zmm0[0].d = zmm0[0].d f* arg10[1]
float var_278[0x4] = temp0_6
int32_t var_36c = zmm0[0].d
float var_368 = zmm1[0]
float var_320
float result_23[0x4] = sub_141758e70(*(arg1 + 0x10), &var_320, &result_24, zx.o(0))
uint128_t result_20 = result_35
uint128_t result_5
result_5.d = var_320.d f* *(arg1 + 0x28)
int32_t var_31c
uint128_t result_10
result_10.d = var_31c.d f* *(arg1 + 0x2c)
int32_t var_318
uint128_t result_11
result_11.d = var_318.d f* *(arg1 + 0x30)
int64_t result_30 = (_mm_unpacklo_ps(result_5, result_10.q)).q
uint128_t result_19 = zx.o(*(arg2 + 0x10))
result_24.q = result_19.q
uint128_t result_21 = result_24
uint128_t result_8 = _mm_shuffle_ps(result_19, result_19, 0x55)
result_19.d = result_8.d f* result_23[0]
result_23 = result_21
int32_t result_31 = result_11.d
int32_t result_39 = *(arg2 + 0x18)
result_23[0] = result_23[0] f* result_20.d
int32_t result_25 = result_39
uint128_t result_22 = result_25
uint128_t result_7
result_7.d = result_8.d f* result_42[0]
uint128_t result_33
result_33.d = result_22.d f* temp0_1[0]
result_33.d = result_33.d f- result_19.d
result_19.d = result_22.d f* result_42[0]
result_23[0] = result_23[0] f- result_19.d
result_19.d = result_21.d f* temp0_1[0]
result_33.d = result_33.d f+ result_33.d
result_7.d = result_7.d f- result_19.d
result_23[0] = result_23[0] + result_23[0]
result_7.d = result_7.d f+ result_7.d
result_19.d = result_23.d f* result_20.d
result_20.d = result_33.d f* result_36[0]
uint128_t result_9
result_9.d = result_7.d f* temp0_1[0]
result_20.d = result_20.d f+ result_21.d
result_21.d = result_33.d f* result_35[0]
result_9.d = result_9.d f- result_19.d
result_33.d = result_33.d f* temp0_1[0]
result_19.d = result_7.d f* result_42[0]
result_9.d = result_9.d f+ result_20.d
result_23[0] = result_23[0] * result_42[0]
result_42 = zx.o(0)
result_21.d = result_21.d f- result_19.d
result_19 = result_36
result_20.d = result_23.d f* result_19.d
result_7.d = result_7.d f* result_19.d
result_23[0] = result_23[0] f- result_33.d
result_20.d = result_20.d f+ result_8.d
result_7.d = result_7.d f+ result_22.d
result_21.d = result_21.d f+ result_20.d
result_20 = var_358[0]:4.d
result_23[0] = result_23[0] f+ result_7.d
int64_t result_17 = (_mm_unpacklo_ps(result_9, result_21.q)).q
result_19 = var_358[0].d
float result_1 = result_23[0]
float result_34[0x4] = result_19
var_320 = result_19.d
float result_3 = result_1
result_7 = var_358[1].d
result_10.d = result_10.d f- result_21.d
float result = zx.d(arg9)
result_5.d = result_5.d f- result_9.d
int32_t result_37 = result_20.d
result_11.d = result_11.d f- result_23[0]
int32_t var_31c_1 = result_20.d
result_23 = result_7
int32_t result_27 = result_7.d
result_33 = result_20
float result_2 = result_7.d
result_9.d = result_19.d f- result_5.d
int64_t var_310 = 0
int32_t var_308 = 0x3f800000
result_5.d = result_20.d f- result_10.d
result_22 = result_7
result_23[0] = result_23[0] f- result_11.d
result_19.d = result_9.d f* result_9.d
result_21.d = result_5.d f* result_5.d
result_20.d = result_23.d f* result_23[0]
result_21.d = result_21.d f+ result_19.d
result_21.d = result_21.d f+ result_20.d
int64_t rbx

if (result_21.d f>= result_13 || (result.b != 0 && result_21.d f>= 9.99999997e-07f))
    rbx.b = 0
else
    rbx.b = 1

result_20 = 0x7f7fffff
uint64_t r15_1 = zx.q(rbx.b)
int32_t result_12 = 0x7f7fffff
result_10 = 0x7f7fffff
char var_377 = 0
int32_t rdi = 0
char var_378 = rbx.b
int32_t var_348
int64_t result_28

if (rbx.b != 0)
label_141661b92:
    bool cond:0_1 = result_42[0] f<= result_6.d
    int32_t* rbx_1 = arg6
    *rbx_1 = result_42[0]
    
    if (not(cond:0_1))
        result_8 = result_6
        result_7 = result_6
        *arg8 = var_310
        arg8[1].d = var_308
        
        if (r13.d s> 0)
            int128_t* rcx_16 = &var_178
            uint64_t i_4 = zx.q(r13.d)
            float* rax_25 = &result_3
            uint64_t i
            
            do
                result_21 = *rcx_16
                rcx_16 += 4
                result_19.d = result_21.d f* rax_25[-2]
                result_20.d = result_21.d f* rax_25[-1]
                result_21.d = result_21.d f* *rax_25
                rax_25 = &rax_25[3]
                result_6.d = result_6.d f+ result_19.d
                result_8.d = result_8.d f+ result_20.d
                result_7.d = result_7.d f+ result_21.d
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        result_19.d = zmm14.d f* *arg8
        result_20.d = result_42.d f* *arg4
        result_6.d = result_6.d f- result_19.d
        result_19.d = zmm14.d f* *(arg8 + 4)
        result_20.d = result_20.d f+ var_358[0].d
        zmm14.d = zmm14.d f* arg8[1].d
        result_8.d = result_8.d f- result_19.d
        result_6.d = result_6.d f+ result_20.d
        result_20.d = result_42.d f* (*arg4)[1]
        result_7.d = result_7.d f- zmm14.d
        result_42[0] = result_42[0] * (*arg4)[2]
        result_20.d = result_20.d f+ var_358[0]:4.d
        result_42[0] = result_42[0] f+ var_358[1].d
        result_8.d = result_8.d f+ result_20.d
        result_7.d = result_7.d f+ result_42[0]
        *arg7 = (_mm_unpacklo_ps(result_6, result_8.q)).q
        arg7[1].d = result_7.d
    else if (result.b != 0)
        if (not(zmm14.d f<= result_6.d))
            result_19 = _mm_cvtps_pd(result_10.q)
        
        if (zmm14.d f<= result_6.d || result_19.q f<= 9.9999999999999995e-07
                || result_10.d f>= result_20.d)
            var_178[0] = 0
            var_178[1] = 0
            var_358[0] = 0
            var_358[1] = 0
            sub_14083ad30(&var_178, 8)
            
            if (var_358[1]:4.d s< 8)
                sub_14083ad30(&var_358, 8)
            
            uint64_t* rcx_26
            int32_t result_40
            uint128_t zmm0_1
            
            if (rdi == 0)
                rcx_26 = arg7
                int32_t var_33c_5 = 0x3f800000
                result_40 = 0x3f800000
                zmm0_1 = _mm_unpacklo_ps(result_6, result_6.q)
            label_141662149:
                result_21 = result_30:4.d
                result_20 = result_30.d
                *rbx_1 = (zmm14 ^ data_142d3f780).d
                *arg8 = zmm0_1.q
                arg8[1].d = result_40
                result = result_31.d
                *rcx_26 = (_mm_unpacklo_ps(result_20, result_21.q)).q
            else
                if (r13.d s> 0)
                    uint64_t i_5 = zx.q(r13.d)
                    uint64_t i_1
                    
                    do
                        int64_t rdi_4 = sx.q(var_178[1].d)
                        int32_t rax_30 = (rdi_4 + 1).d
                        var_178[1].d = rax_30
                        
                        if (rax_30 s> var_178[1]:4.d)
                            sub_14083a7e0(&var_178)
                        
                        double rcx_22 = var_178[0]
                        int64_t rdx_10 = rdi_4 * 3
                        int32_t rax_31 = *(&result_31 + r12)
                        result_20.d = result_33.d f+ *(&result_17:4 + r12)
                        *(rcx_22 i+ (rdx_10 << 2)) = *(&result_30 + r12)
                        zmm0_1.d = result_34.d f+ *(&result_17 + r12)
                        *(rcx_22 i+ (rdx_10 << 2) + 8) = rax_31
                        int64_t rdi_5 = sx.q(var_358[1].d)
                        int32_t var_36c_2 = result_20.d
                        result_24 = zmm0_1.d
                        zmm0_1.d = result_22.d f+ *(&result_3 + r12)
                        int32_t rax_32 = (rdi_5 + 1).d
                        var_358[1].d = rax_32
                        result_25 = zmm0_1.d
                        
                        if (rax_32 s> var_358[1]:4.d)
                            sub_14083a7e0(&var_358)
                        
                        double rcx_24 = var_358[0]
                        int64_t rdx_12 = rdi_5 * 3
                        r12 += 0xc
                        *(rcx_24 i+ (rdx_12 << 2)) = result_24.q
                        *(rcx_24 i+ (rdx_12 << 2) + 8) = result_25
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    rbx_1 = arg6
                
                var_190.q = &var_1c8
                void* var_188_1 = arg2
                int128_t* var_180_1 = arg3
                int32_t rax_36
                rax_36, zmm14 = sub_1415963f0(&var_178, &var_358, &var_288, &var_190, &var_348, 
                    &result_24, &result_28, &var_278)
                zmm0_1 = zx.o(result_24.q)
                result_40 = result_25
                rcx_26 = arg7
                
                if (rax_36 == 2)
                    goto label_141662149
                
                *arg8 = zmm0_1.q
                arg8[1].d = result_40
                zmm0_1.d = (var_348 ^ data_142d3f780).d f- zmm14.d
                result = result_1
                *rbx_1 = zmm0_1.d
                *rcx_26 = result_28
            rcx_26[1].d = result
            double rcx_27 = var_358[0]
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            double rcx_28 = var_178[0]
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
        else
            result_7 = result_6
            result_8 = result_6
            *arg8 = var_310
            result_9 = result_6
            arg8[1].d = var_308
            result_10 = result_6
            result_11 = result_6
            result_5 = result_6
            
            if (rdi == 0)
                result_20 = zx.o(result_30)
                result_21 = zx.o(result_17)
                int32_t result_18 = result_31
                result_8 = _mm_shuffle_ps(result_20, result_20, 0x55)
                float result_4 = result_3
                result_9 = result_18
                result_11 = _mm_shuffle_ps(result_21, result_21, 0x55)
                result_5 = result_4
                result_7 = result_20.d
                result_10 = result_21.d
            else if (r13.d s> 0)
                int128_t* rax_28 = &var_178
                uint64_t i_3 = zx.q(r13.d)
                uint64_t i_2
                
                do
                    result_21 = *rax_28
                    rax_28 += 4
                    result_19.d = result_21.d f* *(&result_30 + r12)
                    result_20.d = result_21.d f* *(&result_30:4 + r12)
                    result_7.d = result_7.d f+ result_19.d
                    result_19.d = result_21.d f* *(&result_31 + r12)
                    result_8.d = result_8.d f+ result_20.d
                    result_20.d = result_21.d f* *(&result_17 + r12)
                    result_9.d = result_9.d f+ result_19.d
                    result_19.d = result_21.d f* *(&result_17:4 + r12)
                    result_21.d = result_21.d f* *(&result_3 + r12)
                    result_10.d = result_10.d f+ result_20.d
                    r12 += 0xc
                    result_11.d = result_11.d f+ result_19.d
                    result_5.d = result_5.d f+ result_21.d
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
            
            result_23 = result_10
            result_34 = var_358[0]:4.d
            result_33.d = var_358[1].d.d f+ result_5.d
            result_42 = var_358[0].d
            result_22.d = result_34.d f+ result_11.d
            result_23[0] = result_23[0] + result_42[0]
            result_33.d = result_33.d f- result_9.d
            result_22.d = result_22.d f- result_8.d
            result_23[0] = result_23[0] f- result_7.d
            result_20.d = result_33.d f* result_33.d
            result_19.d = result_23.d f* result_23[0]
            result_21.d = result_22.d f* result_22.d
            result_21.d = result_21.d f+ result_19.d
            result_21.d = result_21.d f+ result_20.d
            result_8 = _mm_rsqrt_ss(result_21.d, result_21.d)
            result_7.d = result_21.d f* 0.5f
            result_19.d = result_8.d f* result_8.d
            result_20.d = result_7.d f* result_19.d
            result_21.d = 0.5f f- result_20.d
            result_19.d = result_8.d f* result_21.d
            result_8.d = result_8.d f+ result_19.d
            result_20.d = result_8.d f* result_8.d
            result_7.d = result_7.d f* result_20.d
            result_9.d = 0.5f f- result_7.d
            result_19.d = result_8.d f* result_9.d
            result_8.d = result_8.d f+ result_19.d
            result_20.d = result_8.d f* result_22.d
            result_19.d = result_8.d f* result_23[0]
            result_8.d = result_8.d f* result_33.d
            result_19 = _mm_unpacklo_ps(result_19, result_20.q)
            *arg8 = result_19.q
            int32_t var_33c_3 = result_8.d
            result_20.d = zmm14.d f- __sqrtss_xmmss_memss(result_19.d, result_12).d
            arg8[1].d = var_33c_3
            
            if (not(result_20.d f< result_6.d))
                result_6 = __minss_xmmss_memss(result_20.d, 0x7f7fffff)
            
            result_20 = *arg8
            result_21 = *(arg8 + 4)
            result_7 = arg8[1].d
            result_19.d = result_20.d f* zmm14.d
            result_20.d = result_20.d f* result_6.d
            result_10.d = result_10.d f- result_19.d
            result_19.d = result_21.d f* zmm14.d
            result_21.d = result_21.d f* result_6.d
            result_11.d = result_11.d f- result_19.d
            result_19.d = result_7.d f* zmm14.d
            result_10.d = result_10.d f+ result_42[0]
            result_7.d = result_7.d f* result_6.d
            result_6 ^= data_142d3f780
            result_5.d = result_5.d f- result_19.d
            result_11.d = result_11.d f+ result_34[0]
            result_10.d = result_10.d f+ result_20.d
            result_5.d = result_5.d f+ var_358[1].d
            result_11.d = result_11.d f+ result_21.d
            result_5.d = result_5.d f+ result_7.d
            *arg7 = (_mm_unpacklo_ps(result_10, result_11.q)).q
            arg7[1].d = result_5.d
            *rbx_1 = result_6.d
    
    result.b = 1
else
    while (true)
        int32_t rax_7 = rdi
        rdi += 1
        
        if (rax_7 s>= 0x20)
            result = zx.d(arg9)
        else
            int64_t rdi_1 = var_288
            result_19.d = result_5.d f* result_5.d
            void* rcx_1 = *(rdi_1 + 0x10)
            result_20.d = result_23.d f* result_23[0]
            result_21.d = result_9.d f* result_9.d
            result_21.d = result_21.d f+ result_19.d
            result_21.d = result_21.d f+ result_20.d
            result_33 = _mm_rsqrt_ss(result_21.d, result_21.d)
            result_7.d = result_21.d f* 0.5f
            result_19.d = result_33.d f* result_33.d
            result_20.d = result_7.d f* result_19.d
            result_21.d = 0.5f f- result_20.d
            result_19.d = result_33.d f* result_21.d
            result_33.d = result_33.d f+ result_19.d
            result_20.d = result_33.d f* result_33.d
            result_7.d = result_7.d f* result_20.d
            result_8.d = 0.5f f- result_7.d
            result_19.d = result_33.d f* result_8.d
            result_33.d = result_33.d f+ result_19.d
            result_9.d = result_9.d f* result_33.d
            result_20.d = result_33.d f* result_5.d
            var_348 = result_33.d
            result_19.d = result_9.d f* *(rdi_1 + 0x28)
            result_33.d = result_33.d f* result_23[0]
            int32_t var_24c = result_19.d
            int32_t result_16 = result_20.d
            result_20.d = result_20.d f* *(rdi_1 + 0x2c)
            result_19.d = result_33.d f* *(rdi_1 + 0x30)
            int32_t result_15 = result_9.d
            int32_t var_248_1 = result_20.d
            int32_t var_244_1 = result_19.d
            uint128_t result_38 = result_33
            float var_258
            sub_141758e70(rcx_1, &var_258, &var_24c, result_6)
            result_20 = result_35
            int32_t var_250
            result_19.d = var_250.d f* *(rdi_1 + 0x30)
            result_11.d = var_258.d f* *(rdi_1 + 0x28)
            int32_t var_254
            result_10.d = var_254.d f* *(rdi_1 + 0x2c)
            int32_t var_32c_1 = result_19.d
            int32_t var_2e0_1 = result_19.d
            result_19 = zx.o(*(arg2 + 0x10))
            result_21 = result_19.d
            result_33 = *(arg2 + 0x18)
            result_8.d = result_21.d f* result_20.d
            result_9 = _mm_shuffle_ps(result_19, result_19, 0x55)
            result_22.d = result_33.d f* temp0_1[0]
            result_19.d = result_9.d f* result_20.d
            result_20 = result_29
            result_22.d = result_22.d f- result_19.d
            result_19.d = result_33.d f* result_20.d
            result_8.d = result_8.d f- result_19.d
            result_8.d = result_8.d f+ result_8.d
            result_22.d = result_22.d f+ result_22.d
            result_19.d = result_21.d f* temp0_1[0]
            result_7.d = result_9.d f* result_20.d
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            result_7.d = result_7.d f- result_19.d
            result_19.d = result_8.d f* result_35[0]
            uint64_t rcx_3 = r13 * 3
            result_7.d = result_7.d f+ result_7.d
            result_5.d = result_7.d f* temp0_1[0]
            result_23 = result_22
            result_23[0] = result_23[0] * result_35[0]
            result_5.d = result_5.d f- result_19.d
            result_19.d = result_7.d f* result_20.d
            result_20.d = result_8.d f* result_29[0]
            result_23[0] = result_23[0] f- result_19.d
            result_19.d = result_22.d f* temp0_1[0]
            result_20.d = result_20.d f- result_19.d
            result_19 = result_36
            result_8.d = result_8.d f* result_19.d
            result_7.d = result_7.d f* result_19.d
            result_22.d = result_22.d f* result_19.d
            result_8.d = result_8.d f+ result_9.d
            result_7.d = result_7.d f+ result_33.d
            result_33 = result_37
            result_9 = result_15
            result_22.d = result_22.d f+ result_21.d
            result_23[0] = result_23[0] f+ result_8.d
            result_20.d = result_20.d f+ result_7.d
            result_5.d = result_5.d f+ result_22.d
            result_22 = result_27
            result_7.d = result_10.d f- result_23[0]
            result_19.d = var_32c_1.d f- result_20.d
            float var_1e4_1 = result_20.d
            result_21.d = result_11.d f- result_5.d
            var_348 = result_7.d
            int32_t var_32c_2 = result_19.d
            result_8.d = result_34.d f- result_21.d
            int32_t var_2b0_1 = result_21.d
            result_21.d = result_33.d f- result_7.d
            result_7.d = result_22.d f- result_19.d
            result_19 = result_11
            result_11 = result_16
            result_19 = _mm_unpacklo_ps(result_19, result_10.q)
            result_24 = result_8.d
            *(&result_30 + (rcx_3 << 2)) = result_19.q
            result_8.d = result_8.d f* result_9.d
            (&result_31)[rcx_3] = var_2e0_1
            int32_t var_36c_1 = result_21.d
            result_21.d = result_21.d f* result_11.d
            result_25 = result_7.d
            result_7.d = result_7.d f* result_38.d
            result_8.d = result_8.d f+ result_21.d
            *(&result_17 + (rcx_3 << 2)) = (_mm_unpacklo_ps(result_5, result_23[0].q)).q
            (&result_3)[rcx_3] = var_1e4_1
            result_8.d = result_8.d f+ result_7.d
            int128_t var_158_1
            int32_t var_148_1
            
            if (result_8.d f<= zmm14.d)
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_3 << 2)) = result_24.q
                *(&var_168:8 + (rcx_3 << 2)) = result_25
                var_190 = r13.d
            label_14166171b:
                result_10 = result_12
                
                if (r15_1.b != 0 && not(result_8.d f< result_6.d))
                    result_8.d = result_8.d f* result_8.d
                    result_8.d = result_8.d f+ 9.99999997e-07f
                    rbx.b = result_8.d f>= result_10.d
            else
                result_7 = (*r14)[1]
                result_23 = *r14
                result_5 = (*r14)[2]
                result_21.d = result_23.d f* result_9.d
                result_19.d = result_7.d f* result_11.d
                result_20.d = result_5.d f* result_38.d
                result_21.d = result_21.d f+ result_19.d
                result_21.d = result_21.d f+ result_20.d
                
                if (result_21.d f>= result_6.d)
                    result.b = 0
                    break
                
                result_19.d = result_8.d f- zmm14.d
                result_19.d = result_19.d f/ result_21.d
                result_42[0] = result_42[0] f- result_19.d
                
                if (result_42[0] f<= result_42.d)
                    goto label_14166171b
                
                if (result_42[0] f> arg5)
                    result.b = 0
                    break
                
                result_20 = zx.o(var_320.q)
                result_19 = _mm_shuffle_ps(result_20, result_20, 0x55)
                result_34 = result_23
                result_28 = result_20.q
                result_34[0] = result_34[0] * result_42[0]
                r13 = zx.q(r13.d + 1)
                result_1 = result_2
                result_33.d = result_7.d f* result_42[0]
                var_190 = r13.d
                result_34[0] = result_34[0] f+ var_358[0].d
                result_22.d = result_5.d f* result_42[0]
                var_378 = 0
                result_33.d = result_33.d f+ var_358[0]:4.d
                var_308 = result_38.d
                result_22.d = result_22.d f+ var_358[1].d
                result_10 = 0x7f7fffff
                result_7.d = result_34.d f- result_20.d
                var_320 = result_34[0]
                result_8.d = result_33.d f- result_19.d
                result_37 = result_33.d
                result_21.d = result_22.d f- result_1
                result_19.d = var_168.d.d f+ result_7.d
                result_27 = result_22.d
                int32_t var_31c_2 = result_33.d
                result_20.d = var_168:4.d.d f+ result_8.d
                result_2 = result_22.d
                var_310.d = result_9.d
                var_310:4.d = result_11.d
                var_168.d = result_19.d
                result_19.d = var_168:8.d.d f+ result_21.d
                var_168:4.d = result_20.d
                result_20.d = var_168:0xc.d.d f+ result_7.d
                result_12 = 0x7f7fffff
                var_168:8.d = result_19.d
                var_168:0xc.d = result_20.d
                result_19.d = var_158_1.d.d f+ result_8.d
                result_20.d = var_158_1:4.d.d f+ result_21.d
                var_158_1.d = result_19.d
                result_19 = var_158_1:8.d
                var_158_1:4.d = result_20.d
                result_19.d = result_19.d f+ result_7.d
                result_20.d = var_158_1:0xc.d.d f+ result_8.d
                var_158_1:8.d = result_19.d
                result_19.d = var_148_1.d f+ result_21.d
                var_158_1:0xc.d = result_20.d
                result_20.d = result_34.d f- var_2b0_1
                result_21.d = result_33.d f- var_348
                var_148_1 = result_19.d
                result_19.d = result_22.d f- var_32c_2
                *(&var_168 + (rcx_3 << 2)) = (_mm_unpacklo_ps(result_20, result_21.q)).q
                *(&var_168:8 + (rcx_3 << 2)) = result_19.d
            
            uint32_t rcx_14
            
            if (rbx.b != 0)
                int64_t* rax_22
                rax_22, result_33, result_22, result_10, result_6, result_42, zmm14, result_34 =
                    sub_1416f4530(&var_278, &var_168, &var_190, &var_178, &result_30, &result_17)
                r13 = zx.q(var_190)
                rcx_14 = zx.d(var_377)
                result_20 = zx.o(*rax_22)
                result_23 = rax_22[1].d
                result = zx.d(arg9)
                uint32_t result_14 = result_20.d
                result_5 = _mm_shuffle_ps(result_20, result_20, 0x55)
                result_9 = result_14
            else
                int32_t rcx_4 = r13.d
                int32_t result_32
                
                if (rcx_4 == 1)
                    int64_t rax_18 = sx.q(var_18c)
                    int64_t rcx_11 = rax_18 * 3
                    *(&var_178 + (rax_18 << 2)) = 0x3f800000
                    result_19 = zx.o(*(&var_168 + (rcx_11 << 2)))
                    result_32 = *(&var_168:8 + (rcx_11 << 2))
                else if (rcx_4 == 2)
                    uint64_t var_1b8
                    uint64_t* rax_17
                    rax_17, result_33, result_22 =
                        sub_1416e69d0(&var_1b8, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_19 = zx.o(*rax_17)
                    result_32 = rax_17[1].d
                else if (rcx_4 == 3)
                    void var_1a0
                    uint64_t* rax_16
                    rax_16, result_33, result_22, result_10, result_6, result_42, zmm14, 
                        result_34 = sub_1416fa750(&var_1a0, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_19 = zx.o(*rax_16)
                    result_32 = rax_16[1].d
                else if (rcx_4 == 4)
                    uint64_t var_1ac
                    uint64_t* rax_15
                    rax_15, result_33, result_22, result_10, result_6, result_42, zmm14, 
                        result_34 = sub_1416f9c90(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_19 = zx.o(*rax_15)
                    result_32 = rax_15[1].d
                else
                    int32_t var_33c_1 = 0
                    result_19 = _mm_unpacklo_ps(result_6, result_6.q)
                    result_32 = 0
                
                int32_t var_180
                int64_t rdi_2 = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                uint64_t result_26 = result_19.q
                rbx = rdi_2 * 3
                r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_5 = *(&var_168:8 + (r15_1 << 2))
                result_9 = result_26.d
                result_5 = result_26:4.d
                result_23 = result_32
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx << 2))
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                int32_t result_41 = (&result_31)[r15_1]
                var_178[1].d = (*(&var_178 + (r9_3 << 2))).d
                var_178[0].d = (*(&var_178 + (r11_1 << 2))).d
                var_178[0]:4.d = (*(&var_178 + (r10_1 << 2))).d
                var_178[1]:4.d = (*(&var_178 + (rdi_2 << 2))).d
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_6 = (&result_31)[r14_1]
                var_148_1 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rcx_13 = (&result_31)[rsi_1]
                var_148_1 = *(&var_168:8 + (rbx << 2))
                int32_t rax_20 = (&result_31)[rbx]
                var_12c_1.q = *(&result_30 + (r14_1 << 2))
                result_21 = zx.o(*(&result_17 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_30 + (rbx << 2))
                result_19 = zx.o(*(&result_17 + (rbx << 2)))
                var_12c_1:0xc.q = *(&result_30 + (rsi_1 << 2))
                result_20 = zx.o(*(&result_17 + (rsi_1 << 2)))
                result_30 = *(&result_30 + (r15_1 << 2))
                result_7 = zx.o(*(&result_17 + (r15_1 << 2)))
                result_31 = result_41
                var_12c_1:8.d = rdx_6
                int32_t rdx_7 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_13
                rcx_14 = (&result_3)[rsi_1]
                int32_t var_10c_1 = rax_20
                int32_t rax_21 = (&result_3)[rbx]
                var_fc_1.q = result_21.q
                int128_t var_ec_1
                var_ec_1:8.q = result_19.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_5
                result_21.d = result_5.d f* result_5.d
                result_3 = (&result_3)[r15_1]
                var_fc_1:0xc.q = result_20.q
                result_19.d = result_9.d f* result_9.d
                var_fc_1:8.d = rdx_7
                result_20.d = result_23.d f* result_23[0]
                var_ec_1:4.d = rcx_14
                result_21.d = result_21.d f+ result_19.d
                result_17 = result_7.q
                result_7 = result_13
                int32_t var_dc_1 = rax_21
                result_21.d = result_21.d f+ result_20.d
                result = zx.d(arg9)
                rbx.b = result_7.d f> result_21.d
                bool cond:3_1 = result_21.d f>= result_10.d
                result_12 = result_21.d
                result_10 = result_21
                rcx_14.b = cond:3_1
                var_377 = rcx_14.b
                
                if (result.b == 0)
                    goto label_141661b59
                
                if (rbx.b == 0)
                    goto label_141661b5d
                
                if (not(result_42[0] f!= result_6.d))
                    result_20 = 0x3eb0c6f7a0b5ed8d
                    result_19 = _mm_cvtps_pd(result_21.q)
                    
                    if (not(result_19.q f<= result_20.q))
                        result_19 = _mm_cvtps_pd(result_7.q)
                        
                        if (not(result_19.q f<= result_20.q) && r13.d s< 4)
                            r15_1.b = 1
                            rbx.b = 0
                            var_378 = 1
                            goto label_141661b66
            
        label_141661b59:
            
            if (rbx.b == 0)
            label_141661b5d:
                r15_1 = zx.q(var_378)
            label_141661b66:
                
                if (rcx_14.b == 0)
                    r14 = arg4
                    continue
        
        result_20 = 0x7f7fffff
        goto label_141661b92
__security_check_cookie(rax_1 ^ &var_3b8)
return result

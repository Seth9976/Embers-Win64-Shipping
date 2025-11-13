// 函数: sub_14165f920
// 地址: 0x14165f920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
float result_9[0x4] = zx.o(0)
float (* r14)[0x4] = arg4
double zmm0[0x2] = *(*(arg2 + 0x10) + 0x1c)
uint32_t result_43[0x4]

if (zmm0[0].d f== 0f)
    result_43 = zx.o(0)
else
    result_43 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    result_43[0] = result_43[0] f* zmm0[0].d

float result_10[0x4] = *arg3
double var_358[0x2] = arg3[1]
int64_t var_288 = arg1
int64_t r12 = 0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int32_t var_190 = 0
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
float zmm2[0x4] = result_10 ^ 0x80000000
double var_178[0x2] = data_142d3f7e0
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
result_43[0] = result_43[0] f* result_43[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
double temp0_3[0x2] = _mm_cvtps_pd(result_43[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(result_10, result_10, 0x55)
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
uint32_t result_48[0x4] = _mm_shuffle_ps(result_10, result_10, 0xaa)
uint32_t result_34[0x4] = result_48
float result_13[0x4] = result_10
int32_t result_12 = _mm_cvtpd_ps(temp0_3)[0].d
temp0_2[0] = (temp0_4 ^ 0x80000000)[0].d
float temp0_7[0x4] = _mm_shuffle_ps(result_10, result_10, 0xff)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_8[0] = (result_48 ^ 0x80000000)[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_9[0] = temp0_7[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
float var_1c8[0x4] = temp0_10
zmm0 = *(arg1 + 0x28)
zmm0[0].d = zmm0[0].d f* *arg10
void* rcx = *(arg1 + 0x10)
result_48 = *(arg1 + 0x30)
result_48[0] = result_48[0] f* arg10[2]
float var_348 = zmm0[0].d
zmm0 = *(arg1 + 0x2c)
zmm0[0].d = zmm0[0].d f* arg10[1]
uint32_t var_340 = result_48[0]
float var_278[0x4] = temp0_10
int32_t var_344 = zmm0[0].d
float result_25
float result_41[0x4] = sub_141758e70(rcx, &result_25, &var_348, zx.o(0))
float result_21[0x4] = result_25
result_21[0] = result_21[0] f* *(arg1 + 0x28)
int32_t result_26
float result_22[0x4] = result_26
int32_t result_46
float result_42[0x4] = result_46
result_22[0] = result_22[0] f* *(arg1 + 0x2c)
result_42[0] = result_42[0] f* *(arg1 + 0x30)
float result_49[0x4] = _mm_unpacklo_ps(result_21, result_22[0].q)
float result_50 = result_42[0]
float result_16[0x4] = temp0_7[0]
int64_t result_37 = result_49.q
float result_47 = result_50
void* rax_7 = *(arg2 + 0x10)
float result_40[0x4] = *(rax_7 + 0x14)
float result_6[0x4] = *(rax_7 + 0x18)
float result_17[0x4] = *(rax_7 + 0x10)
result_17[0] = result_17[0] f* *(arg2 + 0x28)
result_40[0] = result_40[0] f* *(arg2 + 0x2c)
result_6[0] = result_6[0] f* *(arg2 + 0x30)
float result_18[0x4] = result_17
result_18[0] = result_18[0] f* result_34[0]
result_40[0] = result_40[0] f* result_34[0]
result_40[0] = result_40[0] * result_10[0]
result_6[0] = result_6[0] * result_41[0]
result_6[0] = result_6[0] - result_40[0]
result_6[0] = result_6[0] * result_10[0]
result_18[0] = result_18[0] - result_6[0]
result_17[0] = result_17[0] * result_41[0]
result_6[0] = result_6[0] + result_6[0]
result_40[0] = result_40[0] - result_17[0]
float result_15[0x4] = result_34
result_16[0] = result_16[0] * result_6[0]
result_18[0] = result_18[0] + result_18[0]
result_34[0] = result_34[0] f* result_6[0]
result_16[0] = result_16[0] + result_17[0]
result_17 = result_10
result_15[0] = result_15[0] * result_18[0]
result_40[0] = result_40[0] + result_40[0]
result_17[0] = result_17[0] * result_18[0]
result_41[0] = result_41[0] * result_40[0]
result_41[0] = result_41[0] - result_15[0]
result_15 = result_10
result_15[0] = result_15[0] * result_40[0]
result_10 = zx.o(0)
result_41[0] = result_41[0] + result_16[0]
result_16 = temp0_7[0]
result_34[0] = result_34[0] f- result_15[0]
result_16[0] = result_16[0] * result_18[0]
result_15 = temp0_4[0]
result_15[0] = result_15[0] * result_6[0]
result_16[0] = result_16[0] + result_40[0]
result_21[0] = result_21[0] - result_41[0]
result_17[0] = result_17[0] - result_15[0]
result_34[0] = result_34[0] f+ result_16[0]
result_16 = temp0_7[0]
result_16[0] = result_16[0] * result_40[0]
float result_8[0x4] = var_358[1].d
float result_7 = result_8[0]
result_16[0] = result_16[0] + result_6[0]
float result_44[0x4] = _mm_unpacklo_ps(result_41, result_34[0].q)
result_22[0] = result_22[0] f- result_34[0]
int64_t result_14 = result_44.q
result_15 = var_358[0].d
result_6 = result_8
float result_11 = result_15[0]
result_40 = result_15
result_25 = result_15[0]
result_15[0] = result_15[0] - result_21[0]
result_17[0] = result_17[0] + result_16[0]
float result_2 = result_8[0]
result_16 = var_358[0]:4.d
result_21 = result_16
float result_27 = result_16[0]
result_21[0] = result_21[0] - result_22[0]
float var_30c = result_16[0]
result_22 = result_8
float result_20[0x4] = result_16
result_42[0] = result_42[0] - result_17[0]
float result_1 = result_17[0]
float result_3 = result_1
result_22[0] = result_22[0] - result_42[0]
float result = zx.d(arg9)
result_42 = result_15
int64_t var_300 = 0
result_15[0] = result_15[0] * result_42[0]
float var_2f8 = 1f
result_21[0] = result_21[0] * result_21[0]
result_22[0] = result_22[0] * result_22[0]
result_21[0] = result_21[0] + result_15[0]
result_21[0] = result_21[0] + result_22[0]
int64_t rbx

if (result_21[0] f>= result_12 || (result.b != 0 && result_21[0] >= 9.99999997e-07f))
    rbx.b = 0
else
    rbx.b = 1

result_16 = 0x7f7fffff
uint64_t r15_1 = zx.q(rbx.b)
float result_45 = 3.40282347e+38f
result_41 = 0x7f7fffff
char var_367 = 0
int32_t rdi = 0
char var_368 = rbx.b
uint32_t var_334
int64_t result_29
uint32_t result_19[0x4]

if (rbx.b != 0)
label_14166073d:
    bool cond:1_1 = result_10[0] <= result_9[0]
    float* rbx_1 = arg6
    *rbx_1 = result_10[0]
    
    if (not(cond:1_1))
        *arg8 = var_300
        (*arg8)[2] = var_2f8
        
        if (r13.d s> 0)
            int128_t* rcx_17 = &var_178
            uint64_t i_4 = zx.q(r13.d)
            float* rax_26 = &result_3
            uint64_t i
            
            do
                result_17 = *rcx_17
                rcx_17 += 4
                result_17[0] = result_17[0] * rax_26[-2]
                result_17[0] = result_17[0] * rax_26[-1]
                result_17[0] = result_17[0] * *rax_26
                rax_26 = &rax_26[3]
                result_9[0] = result_9[0] + result_17[0]
                result_9[0] = result_9[0] + result_17[0]
                result_9[0] = result_9[0] + result_17[0]
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        result_15 = result_43
        result_15[0] = result_15[0] * *arg8
        result_10[0] = result_10[0] * *arg4
        result_9[0] = result_9[0] - result_15[0]
        result_15 = result_43
        result_15[0] = result_15[0] * (*arg8)[1]
        result_10[0] = result_10[0] f+ var_358[0].d
        result_43[0] = result_43[0] f* (*arg8)[2]
        result_9[0] = result_9[0] - result_15[0]
        result_9[0] = result_9[0] + result_10[0]
        result_10[0] = result_10[0] * (*arg4)[1]
        result_9[0] = result_9[0] f- result_43[0]
        result_10[0] = result_10[0] * (*arg4)[2]
        result_10[0] = result_10[0] f+ var_358[0]:4.d
        result_10[0] = result_10[0] f+ var_358[1].d
        result_9[0] = result_9[0] + result_10[0]
        result_9[0] = result_9[0] + result_10[0]
        *arg7 = (_mm_unpacklo_ps(result_9, result_9[0].q)).q
        arg7[1].d = result_9[0]
    else if (result.b != 0)
        if (not(result_43[0] f<= result_9[0]))
            result_15 = _mm_cvtps_pd(result_41[0].q)
        
        if (result_43[0] f<= result_9[0] || result_15[0].q f<= 9.9999999999999995e-07
                || result_41[0] >= result_16[0])
            var_178[0] = 0
            var_178[1] = 0
            var_358[0] = 0
            var_358[1] = 0
            sub_14083ad30(&var_178, 8)
            
            if (var_358[1]:4.d s< 8)
                sub_14083ad30(&var_358, 8)
            
            int64_t* rcx_27
            float rax_38
            float result_52[0x4]
            
            if (rdi == 0)
                rcx_27 = arg7
                int32_t var_328_5 = 0x3f800000
                rax_38 = 1f
                result_52 = _mm_unpacklo_ps(result_9, result_9[0].q)
            label_141660ce8:
                result_17 = result_37:4.d
                result_16 = result_37.d
                *rbx_1 = (result_43 ^ data_142d3f780)[0]
                *arg8 = result_52.q
                result_52 = result_47
                (*arg8)[2] = rax_38
                float temp0_30[0x4] = _mm_unpacklo_ps(result_16, result_17[0].q)
                result = result_52[0]
                *rcx_27 = temp0_30.q
            else
                if (r13.d s> 0)
                    uint64_t i_5 = zx.q(r13.d)
                    uint64_t i_1
                    
                    do
                        int64_t rdi_3 = sx.q(var_178[1].d)
                        int32_t rax_31 = (rdi_3 + 1).d
                        var_178[1].d = rax_31
                        
                        if (rax_31 s> var_178[1]:4.d)
                            sub_14083a7e0(&var_178)
                        
                        double rcx_23 = var_178[0]
                        int64_t rdx_10 = rdi_3 * 3
                        result_52 = zx.o(*(&result_37 + r12))
                        int32_t rax_32 = *(&result_47 + r12)
                        result_20[0] = result_20[0] f+ *(&result_14:4 + r12)
                        *(rcx_23 i+ (rdx_10 << 2)) = result_52.q
                        result_40[0] = result_40[0] f+ *(&result_14 + r12)
                        *(rcx_23 i+ (rdx_10 << 2) + 8) = rax_32
                        int64_t rdi_4 = sx.q(var_358[1].d)
                        float var_344_2 = result_20[0]
                        var_348 = result_40[0]
                        result_6[0] = result_6[0] f+ *(&result_3 + r12)
                        int32_t rax_33 = (rdi_4 + 1).d
                        var_358[1].d = rax_33
                        var_340 = result_6[0]
                        
                        if (rax_33 s> var_358[1]:4.d)
                            sub_14083a7e0(&var_358)
                        
                        double rcx_25 = var_358[0]
                        int64_t rdx_12 = rdi_4 * 3
                        r12 += 0xc
                        *(rcx_25 i+ (rdx_12 << 2)) = var_348.q
                        *(rcx_25 i+ (rdx_12 << 2) + 8) = var_340
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    rbx_1 = arg6
                
                var_190.q = &var_1c8
                void* var_188_1 = arg2
                int128_t* var_180_1 = arg3
                int32_t rax_37
                rax_37, result_43 = sub_1415791f0(&var_178, &var_358, &var_288, &var_190, &var_334, 
                    &var_348, &result_29, &var_278)
                result_52 = zx.o(var_348.q)
                rax_38 = var_340
                rcx_27 = arg7
                
                if (rax_37 == 2)
                    goto label_141660ce8
                
                *arg8 = result_52.q
                result_52 = var_334 ^ data_142d3f780
                (*arg8)[2] = rax_38
                result_52[0] = result_52[0] f- result_43[0]
                result = result_1
                *rbx_1 = result_52[0]
                *rcx_27 = result_29
            rcx_27[1].d = result
            double rcx_28 = var_358[0]
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            double rcx_29 = var_178[0]
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
        else
            result_8 = result_9
            result_18 = result_9
            *arg8 = var_300
            result_19 = result_9
            (*arg8)[2] = var_2f8
            result_21 = result_9
            result_22 = result_9
            result_6 = result_9
            
            if (rdi == 0)
                result_16 = zx.o(result_37)
                result_17 = zx.o(result_14)
                float result_39 = result_47
                result_18 = _mm_shuffle_ps(result_16, result_16, 0x55)
                float result_4 = result_3
                result_19 = result_39
                result_22 = _mm_shuffle_ps(result_17, result_17, 0x55)
                result_6 = result_4
                result_8 = result_16.d
                result_21 = result_17.d
            else if (r13.d s> 0)
                int128_t* rax_29 = &var_178
                uint64_t i_3 = zx.q(r13.d)
                uint64_t i_2
                
                do
                    result_17 = *rax_29
                    rax_29 += 4
                    result_17[0] = result_17[0] f* *(&result_37 + r12)
                    result_17[0] = result_17[0] f* *(&result_37:4 + r12)
                    result_8[0] = result_8[0] + result_17[0]
                    result_17[0] = result_17[0] f* *(&result_47 + r12)
                    result_18[0] = result_18[0] + result_17[0]
                    result_17[0] = result_17[0] f* *(&result_14 + r12)
                    result_19[0] = result_19[0] f+ result_17[0]
                    result_17[0] = result_17[0] f* *(&result_14:4 + r12)
                    result_17[0] = result_17[0] f* *(&result_3 + r12)
                    result_21[0] = result_21[0] + result_17[0]
                    r12 += 0xc
                    result_22[0] = result_22[0] + result_17[0]
                    result_6[0] = result_6[0] + result_17[0]
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
            
            result_40 = var_358[1].d
            result_10 = var_358[0]:4.d
            result_40[0] = result_40[0] + result_6[0]
            result_42 = var_358[0].d
            result_10[0] = result_10[0] + result_22[0]
            result_21[0] = result_21[0] + result_42[0]
            result_40[0] = result_40[0] f- result_19[0]
            result_19 = 0x3f000000
            result_10[0] = result_10[0] - result_18[0]
            result_21[0] = result_21[0] - result_8[0]
            result_40[0] = result_40[0] * result_40[0]
            result_21[0] = result_21[0] * result_21[0]
            result_10[0] = result_10[0] * result_10[0]
            result_10[0] = result_10[0] + result_21[0]
            result_10[0] = result_10[0] + result_40[0]
            float temp0_24[0x4] = _mm_rsqrt_ss(result_10[0], result_10[0])
            result_17 = 0x3f000000
            result_10[0] = result_10[0] * 0.5f
            temp0_24[0] = temp0_24[0] * temp0_24[0]
            result_10[0] = result_10[0] * temp0_24[0]
            result_17[0] = 0.5f - result_10[0]
            temp0_24[0] = temp0_24[0] * result_17[0]
            temp0_24[0] = temp0_24[0] + temp0_24[0]
            temp0_24[0] = temp0_24[0] * temp0_24[0]
            result_10[0] = result_10[0] * temp0_24[0]
            result_19[0] = 0.5f - result_10[0]
            temp0_24[0] = temp0_24[0] f* result_19[0]
            temp0_24[0] = temp0_24[0] + temp0_24[0]
            temp0_24[0] = temp0_24[0] * result_10[0]
            temp0_24[0] = temp0_24[0] * result_21[0]
            temp0_24[0] = temp0_24[0] * result_40[0]
            float temp0_25[0x4] = _mm_unpacklo_ps(temp0_24, temp0_24[0].q)
            result_16 = result_43
            *arg8 = temp0_25.q
            float temp0_26[0x4] = __sqrtss_xmmss_memss(temp0_25[0], result_45)
            float var_328_3 = temp0_24[0]
            result_16[0] = result_16[0] - temp0_26[0]
            (*arg8)[2] = var_328_3
            
            if (not(result_16[0] < result_9[0]))
                result_9 = __minss_xmmss_memss(result_16[0], 0x7f7fffff)
            
            result_16 = *arg8
            result_17 = (*arg8)[1]
            result_8 = (*arg8)[2]
            result_16[0] = result_16[0] f* result_43[0]
            result_21[0] = result_21[0] - result_16[0]
            result_9[0] = result_9[0] * result_16[0]
            result_17[0] = result_17[0] f* result_43[0]
            result_21[0] = result_21[0] + result_42[0]
            result_22[0] = result_22[0] - result_17[0]
            result_8[0] = result_8[0] f* result_43[0]
            result_21[0] = result_21[0] + result_9[0]
            result_9[0] = result_9[0] * result_17[0]
            result_6[0] = result_6[0] - result_8[0]
            result_22[0] = result_22[0] + result_10[0]
            result_6[0] = result_6[0] f+ var_358[1].d
            result_22[0] = result_22[0] + result_9[0]
            result_15 = result_9
            result_9 ^= data_142d3f780
            result_15[0] = result_15[0] * result_8[0]
            result_6[0] = result_6[0] + result_15[0]
            *arg7 = (_mm_unpacklo_ps(result_21, result_22[0].q)).q
            arg7[1].d = result_6[0]
            *rbx_1 = result_9[0]
    
    result.b = 1
else
    while (true)
        int32_t rax_9 = rdi
        rdi += 1
        
        if (rax_9 s>= 0x20)
            result_40 = result_11
            result_6 = result_7
            result = zx.d(arg9)
        else
            result_18 = 0x3f000000
            int64_t rdi_1 = var_288
            result_21[0] = result_21[0] * result_21[0]
            void* rcx_1 = *(rdi_1 + 0x10)
            result_22[0] = result_22[0] * result_22[0]
            result_42[0] = result_42[0] * result_42[0]
            result_42[0] = result_42[0] + result_21[0]
            result_42[0] = result_42[0] + result_22[0]
            result_19 = _mm_rsqrt_ss(result_42[0], result_42[0])
            result_17 = 0x3f000000
            result_42[0] = result_42[0] * 0.5f
            result_15 = result_19
            result_15[0] = result_15[0] f* result_19[0]
            result_42[0] = result_42[0] * result_15[0]
            result_15 = result_19
            result_17[0] = 0.5f - result_42[0]
            result_15[0] = result_15[0] * result_17[0]
            result_19[0] = result_19[0] f+ result_15[0]
            result_16 = result_19
            result_15 = result_19
            result_16[0] = result_16[0] f* result_19[0]
            result_42[0] = result_42[0] * result_16[0]
            result_18[0] = 0.5f - result_42[0]
            result_15[0] = result_15[0] * result_18[0]
            result_19[0] = result_19[0] f+ result_15[0]
            result_42[0] = result_42[0] f* result_19[0]
            result_16 = result_19
            result_16[0] = result_16[0] * result_21[0]
            var_334 = result_19[0]
            result_42[0] = result_42[0] f* *(rdi_1 + 0x28)
            result_19[0] = result_19[0] f* result_22[0]
            float var_258 = result_42[0]
            float result_30 = result_16[0]
            result_16[0] = result_16[0] f* *(rdi_1 + 0x2c)
            result_15 = result_19
            result_15[0] = result_15[0] f* *(rdi_1 + 0x30)
            float var_254_1 = result_16[0]
            uint32_t result_35[0x4] = result_19
            float var_250_1 = result_15[0]
            float result_31
            sub_141758e70(rcx_1, &result_31, &var_258, result_9)
            result_16 = result_34
            int32_t result_33
            result_15 = result_33
            result_15[0] = result_15[0] f* *(rdi_1 + 0x30)
            void* rax_10 = *(arg2 + 0x10)
            result_18 = *(arg2 + 0x2c)
            result_41 = *(arg2 + 0x30)
            result_17 = *(arg2 + 0x28)
            result_18[0] = result_18[0] f* *(rax_10 + 0x14)
            result_41[0] = result_41[0] f* *(rax_10 + 0x18)
            result_17[0] = result_17[0] f* *(rax_10 + 0x10)
            result_19 = result_41
            result_22 = result_31
            int32_t result_32
            result_21 = result_32
            result_22[0] = result_22[0] f* *(rdi_1 + 0x28)
            result_21[0] = result_21[0] f* *(rdi_1 + 0x2c)
            float result_24 = result_15[0]
            float var_2d8 = result_15[0]
            result_18[0] = result_18[0] * result_16[0]
            result_17[0] = result_17[0] * result_16[0]
            result_19[0] = result_19[0] f* temp0_4[0]
            result_18[0] = result_18[0] * result_13[0]
            result_19[0] = result_19[0] f- result_18[0]
            result_41[0] = result_41[0] * result_13[0]
            result_17[0] = result_17[0] - result_41[0]
            result_17[0] = result_17[0] * temp0_4[0]
            result_17[0] = result_17[0] + result_17[0]
            result_19[0] = result_19[0] f+ result_19[0]
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            result_18[0] = result_18[0] - result_17[0]
            result_17[0] = result_17[0] f* result_34[0]
            result_16 = result_19
            result_16[0] = result_16[0] * temp0_7[0]
            result_18[0] = result_18[0] + result_18[0]
            uint64_t rcx_4 = r13 * 3
            result_16[0] = result_16[0] + result_17[0]
            result_18[0] = result_18[0] * temp0_4[0]
            result_40 = result_19
            result_40[0] = result_40[0] f* result_34[0]
            result_19[0] = result_19[0] f* temp0_4[0]
            result_18[0] = result_18[0] - result_17[0]
            result_18[0] = result_18[0] * result_13[0]
            result_18[0] = result_18[0] + result_16[0]
            result_17[0] = result_17[0] * result_13[0]
            result_40[0] = result_40[0] - result_18[0]
            result_18[0] = result_18[0] * temp0_7[0]
            result_17[0] = result_17[0] * temp0_7[0]
            result_17[0] = result_17[0] f- result_19[0]
            result_15 = result_24
            result_18[0] = result_18[0] + result_41[0]
            result_41 = result_35
            result_17[0] = result_17[0] + result_18[0]
            result_17[0] = result_17[0] + result_18[0]
            result_8 = result_11
            result_40[0] = result_40[0] + result_17[0]
            result_22[0] = result_22[0] - result_18[0]
            result_15[0] = result_15[0] - result_17[0]
            float var_1e4_1 = result_17[0]
            result_20 = result_27
            result_21[0] = result_21[0] - result_40[0]
            result_8[0] = result_8[0] - result_22[0]
            float var_2ac_1 = result_22[0]
            float var_318_1 = result_15[0]
            result_20[0] = result_20[0] - result_21[0]
            var_334 = result_21[0]
            result_17 = result_7
            result_17[0] = result_17[0] - result_15[0]
            var_348 = result_8[0]
            result_8[0] = result_8[0] * result_42[0]
            float temp0_12[0x4] = _mm_unpacklo_ps(result_22, result_21[0].q)
            result_21 = result_30
            float var_344_1 = result_20[0]
            *(&result_37 + (rcx_4 << 2)) = temp0_12.q
            result_20[0] = result_20[0] * result_21[0]
            (&result_47)[rcx_4] = var_2d8
            var_340 = result_17[0]
            result_20[0] = result_20[0] + result_8[0]
            result_17[0] = result_17[0] * result_41[0]
            *(&result_14 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_18, result_40[0].q)).q
            (&result_3)[rcx_4] = var_1e4_1
            result_20[0] = result_20[0] + result_17[0]
            int128_t var_158_1
            float result_36
            
            if (result_20[0] f<= result_43[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_4 << 2)) = var_348.q
                *(&var_168:8 + (rcx_4 << 2)) = var_340
                var_190 = r13.d
            label_1416602ab:
                result_41 = result_45
                result_40 = result_11
                result_6 = result_7
                
                if (r15_1.b != 0 && not(result_20[0] < result_9[0]))
                    result_20[0] = result_20[0] * result_20[0]
                    result_20[0] = result_20[0] + 9.99999997e-07f
                    rbx.b = result_20[0] >= result_41[0]
            else
                result_8 = (*r14)[1]
                result_40 = *r14
                result_19 = (*r14)[2]
                result_40[0] = result_40[0] * result_42[0]
                result_8[0] = result_8[0] * result_21[0]
                result_41[0] = result_41[0] f* result_19[0]
                result_40[0] = result_40[0] + result_8[0]
                result_40[0] = result_40[0] + result_41[0]
                
                if (result_40[0] >= result_9[0])
                    result.b = 0
                    break
                
                result_20[0] = result_20[0] f- result_43[0]
                result_20[0] = result_20[0] / result_40[0]
                result_10[0] = result_10[0] - result_20[0]
                
                if (result_10[0] <= result_10[0])
                    goto label_1416602ab
                
                if (result_10[0] f> arg5)
                    result.b = 0
                    break
                
                result_16 = zx.o(result_25.q)
                result_20 = result_8
                float temp0_14[0x4] = _mm_shuffle_ps(result_16, result_16, 0x55)
                result_6 = result_10
                result_29 = result_16.q
                r13 = zx.q(r13.d + 1)
                result_40[0] = result_40[0] * result_10[0]
                result_1 = result_2
                result_20[0] = result_20[0] * result_10[0]
                var_190 = r13.d
                result_40[0] = result_40[0] f+ var_358[0].d
                result_6[0] = result_6[0] f* result_19[0]
                var_368 = 0
                result_20[0] = result_20[0] f+ var_358[0]:4.d
                var_2f8 = result_41[0]
                result_6[0] = result_6[0] f+ var_358[1].d
                result_41 = 0x7f7fffff
                result_40[0] = result_40[0] - result_16[0]
                result_11 = result_40[0]
                result_16 = var_168:4.d
                result_20[0] = result_20[0] - temp0_14[0]
                result_27 = result_20[0]
                result_15 = var_168.d
                result_6[0] = result_6[0] - result_1
                result_15[0] = result_15[0] + result_40[0]
                result_7 = result_6[0]
                result_25 = result_40[0]
                result_16[0] = result_16[0] + result_20[0]
                float var_30c_1 = result_20[0]
                result_2 = result_6[0]
                var_300.d = result_42[0]
                var_168.d = result_15[0]
                result_15 = var_168:8.d
                result_15[0] = result_15[0] + result_6[0]
                var_168:4.d = result_16[0]
                result_16 = var_168:0xc.d
                result_16[0] = result_16[0] + result_40[0]
                var_300:4.d = result_21[0]
                result_45 = 3.40282347e+38f
                var_168:8.d = result_15[0]
                result_15 = var_158_1.d
                var_168:0xc.d = result_16[0]
                result_15[0] = result_15[0] + result_20[0]
                result_16 = var_158_1:4.d
                result_16[0] = result_16[0] + result_6[0]
                var_158_1.d = result_15[0]
                result_15 = var_158_1:8.d
                var_158_1:4.d = result_16[0]
                result_15[0] = result_15[0] + result_40[0]
                result_16 = var_158_1:0xc.d
                result_16[0] = result_16[0] + result_20[0]
                var_158_1:8.d = result_15[0]
                result_15 = result_36
                result_15[0] = result_15[0] + result_6[0]
                var_158_1:0xc.d = result_16[0]
                result_40[0] = result_40[0] - var_2ac_1
                result_20[0] = result_20[0] f- var_334
                result_36 = result_15[0]
                result_6[0] = result_6[0] - var_318_1
                *(&var_168 + (rcx_4 << 2)) = (_mm_unpacklo_ps(result_40, result_20[0].q)).q
                *(&var_168:8 + (rcx_4 << 2)) = result_6[0]
            
            uint32_t rcx_15
            
            if (rbx.b != 0)
                int64_t* rax_23
                rax_23, result_40, result_41, result_20, result_6, result_9, result_10, result_43 =
                    sub_1416f4530(&var_278, &var_168, &var_190, &var_178, &result_37, &result_14)
                r13 = zx.q(var_190)
                rcx_15 = zx.d(var_367)
                result_16 = zx.o(*rax_23)
                result_22 = rax_23[1].d
                result = zx.d(arg9)
                int32_t result_28 = result_16.d
                result_21 = _mm_shuffle_ps(result_16, result_16, 0x55)
                result_42 = result_28
            else
                int32_t rcx_5 = r13.d
                int32_t result_38
                
                if (rcx_5 == 1)
                    int64_t rax_19 = sx.q(var_18c)
                    int64_t rcx_12 = rax_19 * 3
                    *(&var_178 + (rax_19 << 2)) = 0x3f800000
                    result_15 = zx.o(*(&var_168 + (rcx_12 << 2)))
                    result_38 = *(&var_168:8 + (rcx_12 << 2))
                else if (rcx_5 == 2)
                    void var_1a0
                    uint64_t* rax_18
                    rax_18, result_40, result_41, result_20, result_6 =
                        sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_15 = zx.o(*rax_18)
                    result_38 = rax_18[1].d
                else if (rcx_5 == 3)
                    uint64_t var_1ac
                    uint64_t* rax_17
                    rax_17, result_40, result_41, result_20, result_6, result_9, result_10, 
                        result_43 = sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_15 = zx.o(*rax_17)
                    result_38 = rax_17[1].d
                else if (rcx_5 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_16
                    rax_16, result_40, result_41, result_20, result_6, result_9, result_10, 
                        result_43 = sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r13 = zx.q(var_190)
                    result_15 = zx.o(*rax_16)
                    result_38 = rax_16[1].d
                else
                    int32_t var_328_1 = 0
                    result_15 = _mm_unpacklo_ps(result_9, result_9[0].q)
                    result_38 = 0
                
                int32_t var_180
                int64_t rdi_2 = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                int64_t result_23 = result_15.q
                rbx = rdi_2 * 3
                r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_5 = *(&var_168:8 + (r15_1 << 2))
                result_42 = result_23.d
                result_21 = result_23:4.d
                result_22 = result_38
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                result_36:4.q = *(&var_168 + (rbx << 2))
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                float result_51 = (&result_47)[r15_1]
                var_178[1].d = (*(&var_178 + (r9_3 << 2)))[0]
                var_178[0].d = (*(&var_178 + (r11_1 << 2)))[0]
                var_178[0]:4.d = (*(&var_178 + (r10_1 << 2)))[0]
                var_178[1]:4.d = (*(&var_178 + (rdi_2 << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_6 = (&result_47)[r14_1]
                result_36 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rcx_14 = (&result_47)[rsi_1]
                result_36 = *(&var_168:8 + (rbx << 2))
                int32_t rax_21 = (&result_47)[rbx]
                var_12c_1.q = *(&result_37 + (r14_1 << 2))
                result_17 = zx.o(*(&result_14 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_37 + (rbx << 2))
                result_15 = zx.o(*(&result_14 + (rbx << 2)))
                var_12c_1:0xc.q = *(&result_37 + (rsi_1 << 2))
                result_16 = zx.o(*(&result_14 + (rsi_1 << 2)))
                result_37 = *(&result_37 + (r15_1 << 2))
                result_8 = zx.o(*(&result_14 + (r15_1 << 2)))
                result_47 = result_51
                float result_5 = (&result_3)[r15_1]
                var_12c_1:8.d = rdx_6
                int32_t rdx_7 = (&result_3)[r14_1]
                var_11c_1:4.d = rcx_14
                rcx_15 = (&result_3)[rsi_1]
                int32_t var_10c_1 = rax_21
                int32_t rax_22 = (&result_3)[rbx]
                var_fc_1.q = result_17.q
                int128_t var_ec_1
                var_ec_1:8.q = result_15.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_5
                result_21[0] = result_21[0] * result_21[0]
                result_3 = result_5
                var_fc_1:0xc.q = result_16.q
                result_42[0] = result_42[0] * result_42[0]
                var_fc_1:8.d = rdx_7
                result_22[0] = result_22[0] * result_22[0]
                var_ec_1:4.d = rcx_15
                result_21[0] = result_21[0] + result_42[0]
                result_14 = result_8.q
                result_8 = result_12
                int32_t var_dc_1 = rax_22
                result_21[0] = result_21[0] + result_22[0]
                result = zx.d(arg9)
                rbx.b = result_8[0] > result_21[0]
                bool cond:4_1 = result_21[0] >= result_41[0]
                result_45 = result_21[0]
                result_41 = result_21
                rcx_15.b = cond:4_1
                var_367 = rcx_15.b
                
                if (result.b == 0)
                    goto label_1416606f5
                
                if (rbx.b == 0)
                    goto label_1416606f9
                
                if (not(result_10[0] != result_9[0]))
                    result_16 = 0x3eb0c6f7a0b5ed8d
                    result_15 = _mm_cvtps_pd(result_21[0].q)
                    
                    if (not(result_15[0].q f<= result_16[0].q))
                        result_15 = _mm_cvtps_pd(result_8[0].q)
                        
                        if (not(result_15[0].q f<= result_16[0].q) && r13.d s< 4)
                            r15_1.b = 1
                            rbx.b = 0
                            var_368 = 1
                            goto label_141660703
            
        label_1416606f5:
            
            if (rbx.b == 0)
            label_1416606f9:
                r15_1 = zx.q(var_368)
            label_141660703:
                
                if (rcx_15.b == 0)
                    r14 = arg4
                    continue
        
        result_16 = 0x7f7fffff
        goto label_14166073d
__security_check_cookie(rax_1 ^ &var_3a8)
return result

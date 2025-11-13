// 函数: sub_142846f50
// 地址: 0x142846f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_f8[0x4]
float zmm2[0x4]

if (arg9 == 0)
    zmm2 = *((((zx.q(arg8) & 3) + ((zx.q(arg7) & 3) << 3)) << 2) + 0x1434d5ef0)
    var_f8 = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float var_c8_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float var_e8_1[0x4] = temp0_4
    float var_d8_1[0x4] = temp0_3
else
    int128_t* rax = arg4
    
    if (arg5 != 0)
        int64_t i_1 = arg5
        int64_t i
        
        do
            *rax = __addps_xmmps_memps(*rax, *(arg9 - arg4 + rax + 0x10))
            rax = &rax[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    memset(arg9, 0, (arg5 + 2) << 4)

float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
float zmm10[0x4]
float var_98[0x4] = zmm10
uint64_t result

if (arg4 == 0)
    result.b = 0
    return result

zmm7 = zx.o(0)
void* r12_1 = &arg1[arg2]
zmm6 = zx.o(0)

if (arg3 - 0xb u> 0xb3)
    return sub_1428440c0(arg1, arg2, arg3, arg4, arg5, arg6[0])

int32_t var_110
int64_t var_b8
float var_b0
int32_t var_ac
float var_a0
int32_t var_9c
float zmm0[0x4]
float zmm1[0x4]

switch (arg3)
    case 0xb
        if (arg2 u< 8)
            result.b = 0
            return result
        
        uint64_t result_44 = 0
        
        if (arg5 != 0)
            uint64_t r14_1 = zx.q(arg7) & 1
            result = arg5 - 1
            uint64_t result_1 = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_1 == 0)
                    result = result_44
                
                var_110.q = result
                float (* rcx_7)[0x4] = result << 4
                float temp0_9[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(*(rcx_7 + arg4), zmm9), data_143702d70), 
                        zmm6), 
                    data_1434d5f70)
                int64_t rcx_8
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_9))
                    rcx_8 = var_110.q
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_9)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    rcx_8 = var_110.q
                    int64_t rax_9 = (rcx_8 - (((zx.q(r14_1.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_11[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_9 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_11), *(arg9 + (rax_9 << 3)))
                    *(arg9 + rcx_7 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_11, data_1434d6010), *(arg9 + rcx_7 + 0x10))
                    result = (((zx.q(r14_1.d) ^ 1) << 1) + rcx_8) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_11, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_11, data_1434d6030)
                    zmm8 = data_1434d5f70
                    zmm9 = data_143702d90
                
                int16_t* rcx_9 = &arg1[rcx_8 << 3]
                var_b8.o = _mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))
                
                if (rcx_9 u>= r12_1)
                    goto label_14284a5ec
                
                result_44 += 1
                *rcx_9 = (int.d(fconvert.t(var_b8.d))).w
                rcx_9[1] = (int.d(fconvert.t(var_b8:4.d))).w
                rcx_9[2] = (int.d(fconvert.t(var_b0))).w
                rcx_9[3] = (int.d(fconvert.t(var_ac))).w
                result = result_1 - 1
                result_1 = result
            while (result_44 u< arg5)
            
            result.b = 1
            return result
    case 0xc
        if (arg2 u< 8)
            result.b = 0
            return result
        
        uint64_t result_45 = 0
        
        if (arg5 != 0)
            uint64_t r14_2 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5f70
                
                if (r14_2 == 0)
                    result = result_45
                
                uint64_t result_2 = result
                float (* rcx_11)[0x4] = result << 4
                float temp0_24[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm9, __maxps_xmmps_memps(data_143702d90, *(rcx_11 + arg4))), zmm6)
                uint64_t result_79
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_24))
                    result_79 = result_2
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_24)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_79 = result_2
                    float temp0_25[0x4] = _mm_sub_ps(zmm7, zmm0)
                    int64_t rax_25 =
                        (result_79 - (((zx.q(r14_2.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_25 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_25), *(arg9 + (rax_25 << 3)))
                    *(arg9 + rcx_11 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_25, data_1434d6010), *(arg9 + rcx_11 + 0x10))
                    result = (((zx.q(r14_2.d) ^ 1) << 1) + result_79) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_25, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_25, data_1434d6030)
                    zmm9 = data_1434d5f70
                    zmm8 = data_143702d90
                
                int16_t* rcx_12 = &arg1[result_79 << 3]
                var_b8.o = _mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))
                
                if (rcx_12 u>= r12_1)
                    goto label_14284a5ec
                
                result_45 += 1
                *rcx_12 = (int.d(fconvert.t(var_b8.d))).w
                rcx_12[1] = (int.d(fconvert.t(var_b8:4.d))).w
                rcx_12[2] = (int.d(fconvert.t(var_b0))).w
                rcx_12[3] = (int.d(fconvert.t(var_ac))).w
                result = var_110.q - 1
                var_110.q = result
            while (result_45 u< arg5)
            
            result.b = 1
            return result
    case 0xd
        if (arg2 u< 8)
            result.b = 0
            return result
        
        uint64_t result_46 = 0
        
        if (arg5 != 0)
            uint64_t r14_3 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm10 = data_143702d70
                zmm9 = data_1434d5f80
                
                if (r14_3 == 0)
                    result = result_46
                
                uint64_t result_3 = result
                float (* rcx_14)[0x4] = result << 4
                float temp0_39[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(zmm10, __maxps_xmmps_memps(data_143702cd0, *(rcx_14 + arg4))), 
                        zmm6), 
                    zmm9)
                uint64_t result_80
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_39))
                    result_80 = result_3
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_39)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_80 = result_3
                    int64_t rax_41 =
                        (result_80 - (((zx.q(r14_3.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_41[0x4] = _mm_div_ps(_mm_sub_ps(zmm8, zmm0), zmm9)
                    *(arg9 + (rax_41 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_41), *(arg9 + (rax_41 << 3)))
                    *(arg9 + rcx_14 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_41, data_1434d6010), *(arg9 + rcx_14 + 0x10))
                    result = (result_80 + 2 + ((zx.q(r14_3.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_41, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_41, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm9 = data_1434d5f80
                
                int16_t* rcx_15 = &arg1[result_80 << 3]
                float temp0_50[0x4] = _mm_sub_ps(zmm7, zmm9)
                float temp0_51[0x4] = _mm_min_ps(zmm9, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_50, zmm10), temp0_51)
                
                if (rcx_15 u>= r12_1)
                    goto label_14284a5ec
                
                result_46 += 1
                *rcx_15 = (int.d(fconvert.t(var_b8.d))).w
                rcx_15[1] = (int.d(fconvert.t(var_b8:4.d))).w
                rcx_15[2] = (int.d(fconvert.t(var_b0))).w
                rcx_15[3] = (int.d(fconvert.t(var_ac))).w
                result = var_110.q - 1
                var_110.q = result
            while (result_46 u< arg5)
            
            result.b = 1
            return result
    case 0xe
        if (arg2 u< 8)
            result.b = 0
            return result
        
        uint64_t result_47 = 0
        
        if (arg5 != 0)
            uint64_t r14_4 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm8 = data_1434d5f80
                zmm10 = data_143702d70
                
                if (r14_4 == 0)
                    result = result_47
                
                uint64_t result_4 = result
                float (* rcx_17)[0x4] = result << 4
                float temp0_58[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm8, 
                        __maxps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm7, zmm8), zmm10), 
                            *(rcx_17 + arg4))), 
                    zmm6)
                uint64_t result_81
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_58))
                    result_81 = result_4
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_58)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_81 = result_4
                    float temp0_59[0x4] = _mm_sub_ps(temp0_58, zmm0)
                    int64_t rax_57 =
                        (result_81 - (((zx.q(r14_4.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_57 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_59), *(arg9 + (rax_57 << 3)))
                    *(arg9 + rcx_17 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_59, data_1434d6010), *(arg9 + rcx_17 + 0x10))
                    result = (((zx.q(r14_4.d) ^ 1) << 1) + result_81) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_59, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_59, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm8 = data_1434d5f80
                
                int16_t* rcx_18 = &arg1[result_81 << 3]
                float temp0_68[0x4] = _mm_sub_ps(zmm7, zmm8)
                float temp0_69[0x4] = _mm_min_ps(zmm8, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_68, zmm10), temp0_69)
                
                if (rcx_18 u>= r12_1)
                    goto label_14284a5ec
                
                result_47 += 1
                *rcx_18 = (int.d(fconvert.t(var_b8.d))).w
                rcx_18[1] = (int.d(fconvert.t(var_b8:4.d))).w
                rcx_18[2] = (int.d(fconvert.t(var_b0))).w
                rcx_18[3] = (int.d(fconvert.t(var_ac))).w
                result = var_110.q - 1
                var_110.q = result
            while (result_47 u< arg5)
            
            result.b = 1
            return result
    case 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x1a, 0x1b, 0x21, 0x22, 0x27, 0x28, 
            0x29, 0x2a, 0x2b, 0x2c, 0x2e, 0x2f, 0x30, 0x35, 0x36, 0x3c, 0x42, 0x43, 0x44, 0x45, 
            0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 
            0x54, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
            0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x74, 0x75, 0x76, 0x77, 
            0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 
            0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 
            0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 
            0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 
            0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc
        return sub_1428440c0(arg1, arg2, arg3, arg4, arg5, arg6[0])
    case 0x18
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_48 = 0
        
        if (arg5 != 0)
            uint64_t r14_5 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5f90
                
                if (r14_5 == 0)
                    result = result_48
                
                uint64_t result_5 = result
                float (* rcx_20)[0x4] = result << 4
                float temp0_75[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(*(rcx_20 + arg4), data_143702d90), 
                            data_143702d70), 
                        zmm6), 
                    zmm9)
                uint64_t result_82
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_75))
                    result_82 = result_5
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_75)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_82 = result_5
                    int64_t rax_73 =
                        (result_82 - (((zx.q(r14_5.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_77[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm9)
                    *(arg9 + (rax_73 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_77), *(arg9 + (rax_73 << 3)))
                    *(arg9 + rcx_20 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_77, data_1434d6010), *(arg9 + rcx_20 + 0x10))
                    result = (result_82 + 2 + ((zx.q(r14_5.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_77, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_77, data_1434d6030)
                    zmm8 = data_143702d90
                    zmm9 = data_1434d5f90
                
                void* r9 = &arg1[result_82 << 2]
                var_b8.o = _mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))
                
                if (r9 u>= r12_1)
                    goto label_14284a5ec
                
                result_48 += 1
                result = var_110.q - 1
                var_110.q = result
                int32_t r8_6 = ((int.d(fconvert.t(var_b8:4.d)) & 0x3ff)
                    | zx.d((int.d(fconvert.t(var_ac))).w) << 0x14) << 0xa | ((
                    (int.d(fconvert.t(var_b0)) & 0x3ff) << 0x14
                    | zx.d((int.d(fconvert.t(var_b8.d))).w)) & 0xfff003ff)
                *r9 = r8_6
            while (result_48 u< arg5)
            
            result.b = 1
            return result
    case 0x19
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_49 = 0
        
        if (arg5 != 0)
            uint64_t r14_6 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5f90
                
                if (r14_6 == 0)
                    result = result_49
                
                uint64_t result_6 = result
                float (* rcx_25)[0x4] = result << 4
                float temp0_90[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm9, __maxps_xmmps_memps(data_143702d90, *(rcx_25 + arg4))), zmm6)
                uint64_t result_83
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_90))
                    result_83 = result_6
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_90)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_83 = result_6
                    float temp0_91[0x4] = _mm_sub_ps(zmm7, zmm0)
                    int64_t rax_87 =
                        (result_83 - (((zx.q(r14_6.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_87 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_91), *(arg9 + (rax_87 << 3)))
                    *(arg9 + rcx_25 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_91, data_1434d6010), *(arg9 + rcx_25 + 0x10))
                    result = (result_83 + 2 + ((zx.q(r14_6.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_91, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_91, data_1434d6030)
                    zmm8 = data_143702d90
                    zmm9 = data_1434d5f90
                
                void* r9_1 = &arg1[result_83 << 2]
                var_b8.o = _mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))
                
                if (r9_1 u>= r12_1)
                    goto label_14284a5ec
                
                result_49 += 1
                result = var_110.q - 1
                var_110.q = result
                int32_t r8_11 = ((int.d(fconvert.t(var_b8:4.d)) & 0x3ff)
                    | zx.d((int.d(fconvert.t(var_ac))).w) << 0x14) << 0xa | ((
                    (int.d(fconvert.t(var_b0)) & 0x3ff) << 0x14
                    | zx.d((int.d(fconvert.t(var_b8.d))).w)) & 0xfff003ff)
                *r9_1 = r8_11
            while (result_49 u< arg5)
            
            result.b = 1
            return result
    case 0x1c, 0x1d
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_51 = 0
        
        if (arg5 != 0)
            uint64_t r14_8 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_8 == 0)
                    result = result_51
                
                uint64_t result_8 = result
                float (* rcx_35)[0x4] = result << 4
                float temp0_122[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(*(rcx_35 + arg4), zmm9), data_143702d70), 
                        zmm6), 
                    data_1434d5fb0)
                uint64_t result_85
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_122))
                    result_85 = result_8
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_122)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_85 = result_8
                    int64_t rax_115 =
                        (result_85 - (((zx.q(r14_8.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_124[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_115 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_124), *(arg9 + (rax_115 << 3)))
                    *(arg9 + rcx_35 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_124, data_1434d6010), *(arg9 + rcx_35 + 0x10))
                    result = (result_85 + 2 + ((zx.q(r14_8.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_124, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_124, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5fb0
                
                void* rcx_36 = &arg1[result_85 << 2]
                var_b8.o = _mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))
                
                if (rcx_36 u>= r12_1)
                    goto label_14284a5ec
                
                result_51 += 1
                *rcx_36 = (int.d(fconvert.t(var_b8.d))).b
                *(rcx_36 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                *(rcx_36 + 2) = (int.d(fconvert.t(var_b0))).b
                *(rcx_36 + 3) = (int.d(fconvert.t(var_ac))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_51 u< arg5)
            
            result.b = 1
            return result
    case 0x1e
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_52 = 0
        
        if (arg5 != 0)
            uint64_t r14_9 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5fb0
                
                if (r14_9 == 0)
                    result = result_52
                
                uint64_t result_9 = result
                float (* rcx_38)[0x4] = result << 4
                float temp0_137[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm9, __maxps_xmmps_memps(data_143702d90, *(rcx_38 + arg4))), zmm6)
                uint64_t result_86
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_137))
                    result_86 = result_9
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_137)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_86 = result_9
                    float temp0_138[0x4] = _mm_sub_ps(zmm7, zmm0)
                    int64_t rax_131 =
                        (result_86 - (((zx.q(r14_9.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_131 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_138), *(arg9 + (rax_131 << 3)))
                    *(arg9 + rcx_38 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_138, data_1434d6010), *(arg9 + rcx_38 + 0x10))
                    result = (((zx.q(r14_9.d) ^ 1) << 1) + result_86) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_138, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_138, data_1434d6030)
                    zmm8 = data_143702d90
                    zmm9 = data_1434d5fb0
                
                void* rcx_39 = &arg1[result_86 << 2]
                var_b8.o = _mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))
                
                if (rcx_39 u>= r12_1)
                    goto label_14284a5ec
                
                result_52 += 1
                *rcx_39 = (int.d(fconvert.t(var_b8.d))).b
                *(rcx_39 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                *(rcx_39 + 2) = (int.d(fconvert.t(var_b0))).b
                *(rcx_39 + 3) = (int.d(fconvert.t(var_ac))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_52 u< arg5)
            
            result.b = 1
            return result
    case 0x1f
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_53 = 0
        
        if (arg5 != 0)
            uint64_t r14_10 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm10 = data_143702d70
                zmm9 = data_1434d5fc0
                
                if (r14_10 == 0)
                    result = result_53
                
                uint64_t result_10 = result
                float (* rcx_41)[0x4] = result << 4
                float temp0_152[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(zmm10, __maxps_xmmps_memps(data_143702cd0, *(rcx_41 + arg4))), 
                        zmm6), 
                    zmm9)
                uint64_t result_87
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_152))
                    result_87 = result_10
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_152)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_87 = result_10
                    int64_t rax_147 =
                        (result_87 - (((zx.q(r14_10.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_154[0x4] = _mm_div_ps(_mm_sub_ps(zmm8, zmm0), zmm9)
                    *(arg9 + (rax_147 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_154), *(arg9 + (rax_147 << 3)))
                    *(arg9 + rcx_41 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_154, data_1434d6010), *(arg9 + rcx_41 + 0x10))
                    result = (result_87 + 2 + ((zx.q(r14_10.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_154, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_154, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm9 = data_1434d5fc0
                
                void* rcx_42 = &arg1[result_87 << 2]
                float temp0_163[0x4] = _mm_sub_ps(zmm7, zmm9)
                float temp0_164[0x4] = _mm_min_ps(zmm9, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_163, zmm10), temp0_164)
                
                if (rcx_42 u>= r12_1)
                    goto label_14284a5ec
                
                result_53 += 1
                *rcx_42 = (int.d(fconvert.t(var_b8.d))).b
                *(rcx_42 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                *(rcx_42 + 2) = (int.d(fconvert.t(var_b0))).b
                *(rcx_42 + 3) = (int.d(fconvert.t(var_ac))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_53 u< arg5)
            
            result.b = 1
            return result
    case 0x20
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_54 = 0
        
        if (arg5 != 0)
            uint64_t r14_11 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm8 = data_1434d5fc0
                zmm10 = data_143702d70
                
                if (r14_11 == 0)
                    result = result_54
                
                uint64_t result_11 = result
                float (* rcx_44)[0x4] = result << 4
                float temp0_171[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm8, 
                        __maxps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm7, zmm8), zmm10), 
                            *(rcx_44 + arg4))), 
                    zmm6)
                uint64_t result_88
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_171))
                    result_88 = result_11
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_171)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_88 = result_11
                    float temp0_172[0x4] = _mm_sub_ps(temp0_171, zmm0)
                    int64_t rax_163 =
                        (result_88 - (((zx.q(r14_11.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_163 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_172), *(arg9 + (rax_163 << 3)))
                    *(arg9 + rcx_44 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_172, data_1434d6010), *(arg9 + rcx_44 + 0x10))
                    result = (result_88 + 2 + ((zx.q(r14_11.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_172, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_172, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm8 = data_1434d5fc0
                
                void* rcx_45 = &arg1[result_88 << 2]
                float temp0_181[0x4] = _mm_sub_ps(zmm7, zmm8)
                float temp0_182[0x4] = _mm_min_ps(zmm8, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_181, zmm10), temp0_182)
                
                if (rcx_45 u>= r12_1)
                    goto label_14284a5ec
                
                result_54 += 1
                *rcx_45 = (int.d(fconvert.t(var_b8.d))).b
                *(rcx_45 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                *(rcx_45 + 2) = (int.d(fconvert.t(var_b0))).b
                *(rcx_45 + 3) = (int.d(fconvert.t(var_ac))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_54 u< arg5)
            
            result.b = 1
            return result
    case 0x23
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_55 = 0
        
        if (arg5 != 0)
            uint64_t r14_12 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_12 == 0)
                    result = result_55
                
                uint64_t result_12 = result
                float (* rcx_47)[0x4] = result << 4
                float temp0_188[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(*(rcx_47 + arg4), zmm9), data_143702d70), 
                        zmm6), 
                    data_1434d5f70)
                uint64_t result_89
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_188))
                    result_89 = result_12
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_188)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_89 = result_12
                    int64_t rax_179 =
                        (result_89 - (((zx.q(r14_12.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_190[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_179 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_190), *(arg9 + (rax_179 << 3)))
                    *(arg9 + rcx_47 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_190, data_1434d6010), *(arg9 + rcx_47 + 0x10))
                    result = (result_89 + 2 + ((zx.q(r14_12.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_190, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_190, data_1434d6030)
                    zmm8 = data_1434d5f70
                    zmm9 = data_143702d90
                
                void* rdx_21 = &arg1[result_89 << 2]
                var_b8.o = _mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))
                
                if (rdx_21 u>= r12_1)
                    goto label_14284a5ec
                
                result_55 += 1
                *rdx_21 = (int.d(fconvert.t(var_b8.d))).w
                *(rdx_21 + 2) = (int.d(fconvert.t(var_b8:4.d))).w
                result = var_110.q - 1
                var_110.q = result
            while (result_55 u< arg5)
            
            result.b = 1
            return result
    case 0x24
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_56 = 0
        
        if (arg5 != 0)
            uint64_t r14_13 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5f70
                
                if (r14_13 == 0)
                    result = result_56
                
                uint64_t result_13 = result
                float (* rcx_49)[0x4] = result << 4
                float temp0_203[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm9, __maxps_xmmps_memps(data_143702d90, *(rcx_49 + arg4))), zmm6)
                uint64_t result_90
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_203))
                    result_90 = result_13
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_203)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_90 = result_13
                    float temp0_204[0x4] = _mm_sub_ps(zmm7, zmm0)
                    int64_t rax_193 =
                        (result_90 - (((zx.q(r14_13.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_193 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_204), *(arg9 + (rax_193 << 3)))
                    *(arg9 + rcx_49 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_204, data_1434d6010), *(arg9 + rcx_49 + 0x10))
                    result = (result_90 + 2 + ((zx.q(r14_13.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_204, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_204, data_1434d6030)
                    zmm9 = data_1434d5f70
                    zmm8 = data_143702d90
                
                void* rdx_22 = &arg1[result_90 << 2]
                var_b8.o = _mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))
                
                if (rdx_22 u>= r12_1)
                    goto label_14284a5ec
                
                result_56 += 1
                *rdx_22 = (int.d(fconvert.t(var_b8.d))).w
                *(rdx_22 + 2) = (int.d(fconvert.t(var_b8:4.d))).w
                result = var_110.q - 1
                var_110.q = result
            while (result_56 u< arg5)
            
            result.b = 1
            return result
    case 0x25
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_57 = 0
        
        if (arg5 != 0)
            uint64_t r14_14 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm10 = data_143702d70
                zmm9 = data_1434d5f80
                
                if (r14_14 == 0)
                    result = result_57
                
                uint64_t result_14 = result
                float (* rcx_51)[0x4] = result << 4
                float temp0_218[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(zmm10, __maxps_xmmps_memps(data_143702cd0, *(rcx_51 + arg4))), 
                        zmm6), 
                    zmm9)
                uint64_t result_91
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_218))
                    result_91 = result_14
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_218)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_91 = result_14
                    int64_t rax_207 =
                        (result_91 - (((zx.q(r14_14.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_220[0x4] = _mm_div_ps(_mm_sub_ps(zmm8, zmm0), zmm9)
                    *(arg9 + (rax_207 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_220), *(arg9 + (rax_207 << 3)))
                    *(arg9 + rcx_51 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_220, data_1434d6010), *(arg9 + rcx_51 + 0x10))
                    result = (result_91 + 2 + ((zx.q(r14_14.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_220, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_220, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm9 = data_1434d5f80
                
                void* rdx_23 = &arg1[result_91 << 2]
                float temp0_229[0x4] = _mm_sub_ps(zmm7, zmm9)
                float temp0_230[0x4] = _mm_min_ps(zmm9, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_229, zmm10), temp0_230)
                
                if (rdx_23 u>= r12_1)
                    goto label_14284a5ec
                
                result_57 += 1
                *rdx_23 = (int.d(fconvert.t(var_b8.d))).w
                *(rdx_23 + 2) = (int.d(fconvert.t(var_b8:4.d))).w
                result = var_110.q - 1
                var_110.q = result
            while (result_57 u< arg5)
            
            result.b = 1
            return result
    case 0x26
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_58 = 0
        
        if (arg5 != 0)
            uint64_t r14_15 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm8 = data_1434d5f80
                zmm10 = data_143702d70
                
                if (r14_15 == 0)
                    result = result_58
                
                uint64_t result_15 = result
                uint64_t rcx_53 = result << 4
                float temp0_237[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm8, 
                        __maxps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm7, zmm8), zmm10), 
                            arg4[result])), 
                    zmm6)
                uint64_t result_92
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_237))
                    result_92 = result_15
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_237)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_92 = result_15
                    float temp0_238[0x4] = _mm_sub_ps(temp0_237, zmm0)
                    int64_t rax_221 =
                        (result_92 - (((zx.q(r14_15.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_221 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_238), *(arg9 + (rax_221 << 3)))
                    *(arg9 + rcx_53 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_238, data_1434d6010), *(arg9 + rcx_53 + 0x10))
                    result = (result_92 + 2 + ((zx.q(r14_15.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_238, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_238, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm8 = data_1434d5f80
                
                void* rdx_24 = &arg1[result_92 << 2]
                float temp0_247[0x4] = _mm_sub_ps(zmm7, zmm8)
                float temp0_248[0x4] = _mm_min_ps(zmm8, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_247, zmm10), temp0_248)
                
                if (rdx_24 u>= r12_1)
                    goto label_14284a5ec
                
                result_58 += 1
                *rdx_24 = (int.d(fconvert.t(var_b8.d))).w
                *(rdx_24 + 2) = (int.d(fconvert.t(var_b8:4.d))).w
                result = var_110.q - 1
                var_110.q = result
            while (result_58 u< arg5)
            
            result.b = 1
            return result
    case 0x2d
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_59 = 0
        
        if (arg5 != 0)
            uint64_t r14_16 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d65a0
                
                if (r14_16 == 0)
                    result = result_59
                
                uint64_t result_16 = result
                uint64_t rcx_55 = result << 4
                float temp0_254[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(data_1434d6590, 
                            __maxps_xmmps_memps(data_143702d90, arg4[result])), 
                        zmm6), 
                    zmm9)
                uint64_t result_93
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_254))
                    result_93 = result_16
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_254)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_93 = result_16
                    int64_t rax_235 =
                        (result_93 - (((zx.q(r14_16.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_256[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm9)
                    *(arg9 + (rax_235 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_256), *(arg9 + (rax_235 << 3)))
                    *(arg9 + rcx_55 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_256, data_1434d6010), *(arg9 + rcx_55 + 0x10))
                    result = (result_93 + 2 + ((zx.q(r14_16.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_256, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_256, data_1434d6030)
                    zmm8 = data_143702d90
                
                void* rdx_25 = &arg1[result_93 << 2]
                var_b8.o = _mm_min_ps(data_1434d65b0, _mm_max_ps(zmm8, zmm2))
                
                if (rdx_25 u>= r12_1)
                    goto label_14284a5ec
                
                result_59 += 1
                result = var_110.q - 1
                *rdx_25 = (int.q(fconvert.t(var_b8:4.d))).d << 0x18
                    | ((int.q(fconvert.t(var_b8.d))).d & 0xffffff)
                var_110.q = result
            while (result_59 u< arg5)
            
            result.b = 1
            return result
    case 0x31
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_60 = 0
        
        if (arg5 != 0)
            uint64_t r14_17 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_17 == 0)
                    result = result_60
                
                uint64_t result_17 = result
                uint64_t rcx_60 = result << 4
                float temp0_270[0x4] = _mm_mul_ps(
                    _mm_add_ps(__minps_xmmps_memps(_mm_max_ps(arg4[result], zmm9), data_143702d70), 
                        zmm6), 
                    data_1434d5fb0)
                uint64_t result_94
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_270))
                    result_94 = result_17
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_270)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_94 = result_17
                    int64_t rax_249 =
                        (result_94 - (((zx.q(r14_17.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_272[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_249 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_272), *(arg9 + (rax_249 << 3)))
                    *(arg9 + rcx_60 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_272, data_1434d6010), *(arg9 + rcx_60 + 0x10))
                    result = (result_94 + 2 + ((zx.q(r14_17.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_272, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_272, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5fb0
                
                void* rdx_26 = &arg1[result_94 << 1]
                var_b8.o = _mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))
                
                if (rdx_26 u>= r12_1)
                    goto label_14284a5ec
                
                result_60 += 1
                *rdx_26 = (int.d(fconvert.t(var_b8.d))).b
                *(rdx_26 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_60 u< arg5)
            
            result.b = 1
            return result
    case 0x32
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_61 = 0
        
        if (arg5 != 0)
            uint64_t r14_18 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5fb0
                
                if (r14_18 == 0)
                    result = result_61
                
                uint64_t result_18 = result
                uint64_t rcx_62 = result << 4
                float temp0_285[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm9, __maxps_xmmps_memps(data_143702d90, arg4[result])), zmm6)
                uint64_t result_95
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_285))
                    result_95 = result_18
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_285)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_95 = result_18
                    float temp0_286[0x4] = _mm_sub_ps(zmm7, zmm0)
                    int64_t rax_263 =
                        (result_95 - (((zx.q(r14_18.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_263 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_286), *(arg9 + (rax_263 << 3)))
                    *(arg9 + rcx_62 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_286, data_1434d6010), *(arg9 + rcx_62 + 0x10))
                    result = (((zx.q(r14_18.d) ^ 1) << 1) + result_95) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_286, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_286, data_1434d6030)
                    zmm8 = data_143702d90
                    zmm9 = data_1434d5fb0
                
                void* rdx_27 = &arg1[result_95 << 1]
                var_b8.o = _mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))
                
                if (rdx_27 u>= r12_1)
                    goto label_14284a5ec
                
                result_61 += 1
                *rdx_27 = (int.d(fconvert.t(var_b8.d))).b
                *(rdx_27 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_61 u< arg5)
            
            result.b = 1
            return result
    case 0x33
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_62 = 0
        
        if (arg5 != 0)
            uint64_t r14_19 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm10 = data_143702d70
                zmm9 = data_1434d5fc0
                
                if (r14_19 == 0)
                    result = result_62
                
                uint64_t result_19 = result
                uint64_t rcx_64 = result << 4
                float temp0_300[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(zmm10, __maxps_xmmps_memps(data_143702cd0, arg4[result])), 
                        zmm6), 
                    zmm9)
                uint64_t result_96
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_300))
                    result_96 = result_19
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_300)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_96 = result_19
                    int64_t rax_277 =
                        (result_96 - (((zx.q(r14_19.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_302[0x4] = _mm_div_ps(_mm_sub_ps(zmm8, zmm0), zmm9)
                    *(arg9 + (rax_277 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_302), *(arg9 + (rax_277 << 3)))
                    *(arg9 + rcx_64 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_302, data_1434d6010), *(arg9 + rcx_64 + 0x10))
                    result = (result_96 + 2 + ((zx.q(r14_19.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_302, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_302, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm9 = data_1434d5fc0
                
                void* rdx_28 = &arg1[result_96 << 1]
                float temp0_311[0x4] = _mm_sub_ps(zmm7, zmm9)
                float temp0_312[0x4] = _mm_min_ps(zmm9, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_311, zmm10), temp0_312)
                
                if (rdx_28 u>= r12_1)
                    goto label_14284a5ec
                
                result_62 += 1
                *rdx_28 = (int.d(fconvert.t(var_b8.d))).b
                *(rdx_28 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_62 u< arg5)
            
            result.b = 1
            return result
    case 0x34
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_63 = 0
        
        if (arg5 != 0)
            uint64_t r14_20 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm8 = data_1434d5fc0
                zmm10 = data_143702d70
                
                if (r14_20 == 0)
                    result = result_63
                
                uint64_t result_20 = result
                uint64_t rcx_66 = result << 4
                float temp0_319[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm8, 
                        __maxps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm7, zmm8), zmm10), 
                            arg4[result])), 
                    zmm6)
                uint64_t result_97
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_319))
                    result_97 = result_20
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_319)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_97 = result_20
                    float temp0_320[0x4] = _mm_sub_ps(temp0_319, zmm0)
                    int64_t rax_291 =
                        (result_97 - (((zx.q(r14_20.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_291 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_320), *(arg9 + (rax_291 << 3)))
                    *(arg9 + rcx_66 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_320, data_1434d6010), *(arg9 + rcx_66 + 0x10))
                    result = (result_97 + 2 + ((zx.q(r14_20.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_320, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_320, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm8 = data_1434d5fc0
                
                void* rdx_29 = &arg1[result_97 << 1]
                float temp0_329[0x4] = _mm_sub_ps(zmm7, zmm8)
                float temp0_330[0x4] = _mm_min_ps(zmm8, zmm2)
                var_b8.o = _mm_max_ps(_mm_add_ps(temp0_329, zmm10), temp0_330)
                
                if (rdx_29 u>= r12_1)
                    goto label_14284a5ec
                
                result_63 += 1
                *rdx_29 = (int.d(fconvert.t(var_b8.d))).b
                *(rdx_29 + 1) = (int.d(fconvert.t(var_b8:4.d))).b
                result = var_110.q - 1
                var_110.q = result
            while (result_63 u< arg5)
            
            result.b = 1
            return result
    case 0x37, 0x38
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_64 = 0
        
        if (arg5 != 0)
            uint64_t r14_21 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_21 == 0)
                    result = result_64
                
                uint64_t result_21 = result
                uint64_t rcx_68 = result << 4
                float temp0_336[0x4] = _mm_mul_ps(
                    _mm_add_ps(__minps_xmmps_memps(_mm_max_ps(arg4[result], zmm9), data_143702d70), 
                        zmm6), 
                    data_1434d5f70)
                uint64_t result_98
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_336))
                    result_98 = result_21
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_336)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_98 = result_21
                    int64_t rax_305 =
                        (result_98 - (((zx.q(r14_21.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_338[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_305 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_338), *(arg9 + (rax_305 << 3)))
                    *(arg9 + rcx_68 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_338, data_1434d6010), *(arg9 + rcx_68 + 0x10))
                    result = (result_98 + 2 + ((zx.q(r14_21.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_338, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_338, data_1434d6030)
                    zmm8 = data_1434d5f70
                    zmm9 = data_143702d90
                
                void* rdx_30 = &arg1[result_98 << 1]
                
                if (rdx_30 u>= r12_1)
                    goto label_14284a5ec
                
                result_64 += 1
                *rdx_30 = (int.d(_mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))[0])).w
                result = var_110.q - 1
                var_110.q = result
            while (result_64 u< arg5)
            
            result.b = 1
            return result
    case 0x39
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_65 = 0
        
        if (arg5 != 0)
            uint64_t r14_22 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5f70
                
                if (r14_22 == 0)
                    result = result_65
                
                uint64_t result_22 = result
                uint64_t rcx_70 = result << 4
                float temp0_351[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm9, __maxps_xmmps_memps(data_143702d90, arg4[result])), zmm6)
                uint64_t result_99
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_351))
                    result_99 = result_22
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_351)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_99 = result_22
                    float temp0_352[0x4] = _mm_sub_ps(zmm7, zmm0)
                    int64_t rax_318 =
                        (result_99 - (((zx.q(r14_22.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_318 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_352), *(arg9 + (rax_318 << 3)))
                    *(arg9 + rcx_70 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_352, data_1434d6010), *(arg9 + rcx_70 + 0x10))
                    result = (result_99 + 2 + ((zx.q(r14_22.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_352, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_352, data_1434d6030)
                    zmm9 = data_1434d5f70
                    zmm8 = data_143702d90
                
                void* rdx_31 = &arg1[result_99 << 1]
                
                if (rdx_31 u>= r12_1)
                    goto label_14284a5ec
                
                result_65 += 1
                *rdx_31 = (int.d(_mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))[0])).w
                result = var_110.q - 1
                var_110.q = result
            while (result_65 u< arg5)
            
            result.b = 1
            return result
    case 0x3a
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_66 = 0
        
        if (arg5 != 0)
            uint64_t r14_23 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm10 = data_143702d70
                zmm9 = data_1434d5f80
                
                if (r14_23 == 0)
                    result = result_66
                
                uint64_t result_23 = result
                uint64_t rcx_72 = result << 4
                float temp0_366[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(zmm10, __maxps_xmmps_memps(data_143702cd0, arg4[result])), 
                        zmm6), 
                    zmm9)
                uint64_t result_100
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_366))
                    result_100 = result_23
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_366)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_100 = result_23
                    int64_t rax_331 =
                        (result_100 - (((zx.q(r14_23.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_368[0x4] = _mm_div_ps(_mm_sub_ps(zmm8, zmm0), zmm9)
                    *(arg9 + (rax_331 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_368), *(arg9 + (rax_331 << 3)))
                    *(arg9 + rcx_72 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_368, data_1434d6010), *(arg9 + rcx_72 + 0x10))
                    result = (result_100 + 2 + ((zx.q(r14_23.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_368, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_368, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm9 = data_1434d5f80
                
                void* rdx_32 = &arg1[result_100 << 1]
                
                if (rdx_32 u>= r12_1)
                    goto label_14284a5ec
                
                result_66 += 1
                float temp0_377[0x4] = _mm_sub_ps(zmm7, zmm9)
                float temp0_378[0x4] = _mm_min_ps(zmm9, zmm2)
                *rdx_32 = (int.d(_mm_max_ps(_mm_add_ps(temp0_377, zmm10), temp0_378)[0])).w
                result = var_110.q - 1
                var_110.q = result
            while (result_66 u< arg5)
            
            result.b = 1
            return result
    case 0x3b
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_67 = 0
        
        if (arg5 != 0)
            uint64_t r14_24 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm8 = data_1434d5f80
                zmm10 = data_143702d70
                
                if (r14_24 == 0)
                    result = result_67
                
                uint64_t result_24 = result
                uint64_t rcx_74 = result << 4
                float temp0_385[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm8, 
                        __maxps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm7, zmm8), zmm10), 
                            arg4[result])), 
                    zmm6)
                uint64_t result_101
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_385))
                    result_101 = result_24
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_385)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_101 = result_24
                    float temp0_386[0x4] = _mm_sub_ps(temp0_385, zmm0)
                    int64_t rax_344 =
                        (result_101 - (((zx.q(r14_24.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_344 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_386), *(arg9 + (rax_344 << 3)))
                    *(arg9 + rcx_74 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_386, data_1434d6010), *(arg9 + rcx_74 + 0x10))
                    result = (result_101 + 2 + ((zx.q(r14_24.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_386, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_386, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm8 = data_1434d5f80
                
                void* rdx_33 = &arg1[result_101 << 1]
                
                if (rdx_33 u>= r12_1)
                    goto label_14284a5ec
                
                result_67 += 1
                float temp0_395[0x4] = _mm_sub_ps(zmm7, zmm8)
                float temp0_396[0x4] = _mm_min_ps(zmm8, zmm2)
                *rdx_33 = (int.d(_mm_max_ps(_mm_add_ps(temp0_395, zmm10), temp0_396)[0])).w
                result = var_110.q - 1
                var_110.q = result
            while (result_67 u< arg5)
            
            result.b = 1
            return result
    case 0x3d
        if (arg2 u< 1)
            result.b = 0
            return result
        
        uint64_t result_68 = 0
        
        if (arg5 != 0)
            uint64_t r14_25 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_25 == 0)
                    result = result_68
                
                uint64_t result_25 = result
                uint64_t rcx_76 = result << 4
                float temp0_402[0x4] = _mm_mul_ps(
                    _mm_add_ps(__minps_xmmps_memps(_mm_max_ps(arg4[result], zmm9), data_143702d70), 
                        zmm6), 
                    data_1434d5fb0)
                uint64_t result_102
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_402))
                    result_102 = result_25
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_402)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_102 = result_25
                    int64_t rax_357 =
                        (result_102 - (((zx.q(r14_25.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_404[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_357 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_404), *(arg9 + (rax_357 << 3)))
                    *(arg9 + rcx_76 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_404, data_1434d6010), *(arg9 + rcx_76 + 0x10))
                    result = (result_102 + 2 + ((zx.q(r14_25.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_404, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_404, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5fb0
                
                char* rdx_34 = &arg1[result_102]
                
                if (rdx_34 u>= r12_1)
                    goto label_14284a5ec
                
                result_68 += 1
                *rdx_34 = (int.d(_mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))[0])).b
                result = var_110.q - 1
                var_110.q = result
            while (result_68 u< arg5)
            
            result.b = 1
            return result
    case 0x3e
        if (arg2 u< 1)
            result.b = 0
            return result
        
        uint64_t result_69 = 0
        
        if (arg5 != 0)
            uint64_t r14_26 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5fb0
                
                if (r14_26 == 0)
                    result = result_69
                
                uint64_t result_26 = result
                uint64_t rcx_78 = result << 4
                float temp0_417[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm9, __maxps_xmmps_memps(data_143702d90, arg4[result])), zmm6)
                uint64_t result_103
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_417))
                    result_103 = result_26
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_417)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_103 = result_26
                    float temp0_418[0x4] = _mm_sub_ps(zmm7, zmm0)
                    int64_t rax_370 =
                        (result_103 - (((zx.q(r14_26.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_370 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_418), *(arg9 + (rax_370 << 3)))
                    *(arg9 + rcx_78 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_418, data_1434d6010), *(arg9 + rcx_78 + 0x10))
                    result = (result_103 + 2 + ((zx.q(r14_26.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_418, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_418, data_1434d6030)
                    zmm8 = data_143702d90
                    zmm9 = data_1434d5fb0
                
                char* rdx_35 = &arg1[result_103]
                
                if (rdx_35 u>= r12_1)
                    goto label_14284a5ec
                
                result_69 += 1
                *rdx_35 = (int.d(_mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))[0])).b
                result = var_110.q - 1
                var_110.q = result
            while (result_69 u< arg5)
            
            result.b = 1
            return result
    case 0x3f
        if (arg2 u< 1)
            result.b = 0
            return result
        
        uint64_t result_70 = 0
        
        if (arg5 != 0)
            uint64_t r14_27 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm10 = data_143702d70
                zmm9 = data_1434d5fc0
                
                if (r14_27 == 0)
                    result = result_70
                
                uint64_t result_27 = result
                uint64_t rcx_80 = result << 4
                float temp0_432[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(zmm10, __maxps_xmmps_memps(data_143702cd0, arg4[result])), 
                        zmm6), 
                    zmm9)
                uint64_t result_104
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_432))
                    result_104 = result_27
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_432)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_104 = result_27
                    int64_t rax_383 =
                        (result_104 - (((zx.q(r14_27.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_434[0x4] = _mm_div_ps(_mm_sub_ps(zmm8, zmm0), zmm9)
                    *(arg9 + (rax_383 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_434), *(arg9 + (rax_383 << 3)))
                    *(arg9 + rcx_80 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_434, data_1434d6010), *(arg9 + rcx_80 + 0x10))
                    result = (((zx.q(r14_27.d) ^ 1) << 1) + result_104) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_434, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_434, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm9 = data_1434d5fc0
                
                void* rdx_36 = &arg1[result_104]
                
                if (rdx_36 u>= r12_1)
                    goto label_14284a5ec
                
                result_70 += 1
                float temp0_443[0x4] = _mm_sub_ps(zmm7, zmm9)
                float temp0_444[0x4] = _mm_min_ps(zmm9, zmm2)
                *rdx_36 = (int.d(_mm_max_ps(_mm_add_ps(temp0_443, zmm10), temp0_444)[0])).b
                result = var_110.q - 1
                var_110.q = result
            while (result_70 u< arg5)
            
            result.b = 1
            return result
    case 0x40
        if (arg2 u< 1)
            result.b = 0
            return result
        
        uint64_t result_71 = 0
        
        if (arg5 != 0)
            uint64_t r14_28 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm8 = data_1434d5fc0
                zmm10 = data_143702d70
                
                if (r14_28 == 0)
                    result = result_71
                
                uint64_t result_28 = result
                uint64_t rcx_82 = result << 4
                float temp0_451[0x4] = _mm_add_ps(
                    _mm_min_ps(zmm8, 
                        __maxps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm7, zmm8), zmm10), 
                            arg4[result])), 
                    zmm6)
                uint64_t result_105
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_451))
                    result_105 = result_28
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_451)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_105 = result_28
                    float temp0_452[0x4] = _mm_sub_ps(temp0_451, zmm0)
                    int64_t rax_396 =
                        (result_105 - (((zx.q(r14_28.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    *(arg9 + (rax_396 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_452), *(arg9 + (rax_396 << 3)))
                    *(arg9 + rcx_82 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_452, data_1434d6010), *(arg9 + rcx_82 + 0x10))
                    result = (result_105 + 2 + ((zx.q(r14_28.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_452, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_452, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm8 = data_1434d5fc0
                
                char* rdx_37 = &arg1[result_105]
                
                if (rdx_37 u>= r12_1)
                    goto label_14284a5ec
                
                result_71 += 1
                float temp0_461[0x4] = _mm_sub_ps(zmm7, zmm8)
                float temp0_462[0x4] = _mm_min_ps(zmm8, zmm2)
                *rdx_37 = (int.d(_mm_max_ps(_mm_add_ps(temp0_461, zmm10), temp0_462)[0])).b
                result = var_110.q - 1
                var_110.q = result
            while (result_71 u< arg5)
            
            result.b = 1
            return result
    case 0x41
        if (arg2 u< 1)
            result.b = 0
            return result
        
        uint64_t result_72 = 0
        
        if (arg5 != 0)
            uint64_t r14_29 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_1434d5fb0
                
                if (r14_29 == 0)
                    result = result_72
                
                uint64_t result_29 = result
                uint64_t rcx_84 = result << 4
                float temp0_468[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(arg4[result], data_143702d90), 
                            data_143702d70), 
                        zmm6), 
                    zmm9)
                uint64_t result_106
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_468))
                    result_106 = result_29
                    zmm2 = zmm0
                else
                    zmm0, zmm7 = sub_14283ff40(temp0_468)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_106 = result_29
                    int64_t rax_409 =
                        (result_106 - (((zx.q(r14_29.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_470[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm9)
                    *(arg9 + (rax_409 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_470), *(arg9 + (rax_409 << 3)))
                    *(arg9 + rcx_84 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_470, data_1434d6010), *(arg9 + rcx_84 + 0x10))
                    result = (result_106 + 2 + ((zx.q(r14_29.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_470, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_470, data_1434d6030)
                    zmm8 = data_143702d90
                    zmm9 = data_1434d5fb0
                
                char* rdx_38 = &arg1[result_106]
                float temp0_480[0x4] = _mm_max_ps(zmm8, _mm_min_ps(zmm9, zmm2))
                
                if (rdx_38 u>= r12_1)
                    goto label_14284a5ec
                
                result_72 += 1
                *rdx_38 = (int.d(_mm_shuffle_ps(temp0_480, temp0_480, 0xff)[0])).b
                result = var_110.q - 1
                var_110.q = result
            while (result_72 u< arg5)
            
            result.b = 1
            return result
    case 0x55
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_73 = 0
        
        if (arg5 != 0)
            uint64_t r14_30 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_30 == 0)
                    result = result_73
                
                uint64_t result_30 = result
                uint64_t rcx_86 = result << 4
                zmm7 = arg4[result]
                float temp0_486[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc6), zmm9), 
                            data_143702d70), 
                        zmm6), 
                    data_1434d5fd0)
                uint64_t result_107
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_486))
                    result_107 = result_30
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_486)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_107 = result_30
                    int64_t rax_422 =
                        (result_107 - (((zx.q(r14_30.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_488[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_422 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_488), *(arg9 + (rax_422 << 3)))
                    *(arg9 + rcx_86 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_488, data_1434d6010), *(arg9 + rcx_86 + 0x10))
                    result = (result_107 + 2 + ((zx.q(r14_30.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_488, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_488, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5fd0
                
                void* rdx_39 = &arg1[result_107 << 1]
                var_b8.o = _mm_min_ps(zmm8, _mm_max_ps(zmm9, zmm2))
                
                if (rdx_39 u>= r12_1)
                    goto label_14284a5ec
                
                result_73 += 1
                result = var_110.q - 1
                *rdx_39 = (((int.d(fconvert.t(var_b8:4.d))).w & 0x3f)
                    | (int.d(fconvert.t(var_b0))).w << 6) << 5
                    | ((int.d(fconvert.t(var_b8.d))).w & 0x1f)
                var_110.q = result
            while (result_73 u< arg5)
            
            result.b = 1
            return result
    case 0x56
        if (arg2 u< 2)
            result.b = 0
            return result
        
        var_110.q = 0
        uint64_t result_43 = 0
        
        if (arg5 != 0)
            uint64_t r14_31 = zx.q(arg7) & 1
            result = arg5 - 1
            uint64_t result_37 = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_31 == 0)
                    result = result_43
                
                uint64_t result_31 = result
                uint64_t rcx_89 = result << 4
                zmm7 = arg4[result]
                float temp0_503[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc6), zmm9), 
                            data_143702d70), 
                        zmm6), 
                    data_1434d5fe0)
                uint64_t result_108
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_503))
                    result_108 = result_31
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_503)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_108 = result_31
                    int64_t rax_436 =
                        (result_108 - (((zx.q(r14_31.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_505[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_436 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_505), *(arg9 + (rax_436 << 3)))
                    *(arg9 + rcx_89 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_505, data_1434d6010), *(arg9 + rcx_89 + 0x10))
                    result = (((zx.q(r14_31.d) ^ 1) << 1) + result_108) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_505, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_505, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5fe0
                
                void* r8_19 = &arg1[result_108 << 1]
                float temp0_515[0x4] = _mm_min_ps(zmm8, _mm_max_ps(zmm9, zmm2))
                uint64_t var_b8_1
                var_b8_1.o = temp0_515
                
                if (r8_19 u>= r12_1)
                    goto label_14284a5ec
                
                int16_t rdx_40 = 0
                
                if (_mm_shuffle_ps(temp0_515, temp0_515, 0xff)[0] > arg6[0])
                    rdx_40 = 0x8000
                
                result_43 = var_110.q + 1
                var_110.q = result_43
                result = result_37 - 1
                *r8_19 = rdx_40 | (((int.d(fconvert.t(var_b0))).w & 0x1f) << 5
                    | ((int.d(fconvert.t(var_b8_1:4.d))).w & 0x1f)) << 5
                    | ((int.d(fconvert.t(var_b8_1.d))).w & 0x1f)
                result_37 = result
            while (result_43 u< arg5)
            
            result.b = 1
            return result
    case 0x57, 0x5b
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_74 = 0
        
        if (arg5 != 0)
            uint64_t r14_32 = zx.q(arg7) & 1
            result = arg5 - 1
            uint64_t result_32 = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_32 == 0)
                    result = result_74
                
                uint64_t result_38 = result
                uint64_t rcx_93 = result << 4
                zmm7 = arg4[result]
                float temp0_521[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc6), zmm9), 
                            data_143702d70), 
                        zmm6), 
                    data_1434d5fb0)
                uint64_t result_109
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_521))
                    result_109 = result_38
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_521)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_109 = result_38
                    int64_t rax_450 =
                        (result_109 - (((zx.q(r14_32.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_523[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_450 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_523), *(arg9 + (rax_450 << 3)))
                    *(arg9 + rcx_93 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_523, data_1434d6010), *(arg9 + rcx_93 + 0x10))
                    result = (result_109 + 2 + ((zx.q(r14_32.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_523, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_523, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5fb0
                
                char* rcx_94 = &arg1[result_109 << 2]
                uint64_t var_a8_32
                var_a8_32.o = _mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))
                
                if (rcx_94 u>= r12_1)
                    goto label_14284a5ec
                
                result_74 += 1
                *rcx_94 = (int.d(fconvert.t(var_a8_32.d))).b
                rcx_94[1] = (int.d(fconvert.t(var_a8_32:4.d))).b
                rcx_94[2] = (int.d(fconvert.t(var_a0))).b
                rcx_94[3] = (int.d(fconvert.t(var_9c))).b
                result = result_32 - 1
                result_32 = result
            while (result_74 u< arg5)
            
            result.b = 1
            return result
    case 0x58, 0x5d
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_75 = 0
        
        if (arg5 != 0)
            uint64_t r14_33 = zx.q(arg7) & 1
            result = arg5 - 1
            uint64_t result_33 = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_33 == 0)
                    result = result_75
                
                uint64_t result_39 = result
                uint64_t rcx_96 = result << 4
                zmm7 = arg4[result]
                float temp0_538[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc6), zmm9), 
                            data_143702d70), 
                        zmm6), 
                    data_1434d5fb0)
                uint64_t result_110
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_538))
                    result_110 = result_39
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_538)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_110 = result_39
                    int64_t rax_466 =
                        (result_110 - (((zx.q(r14_33.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_540[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_466 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_540), *(arg9 + (rax_466 << 3)))
                    *(arg9 + rcx_96 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_540, data_1434d6010), *(arg9 + rcx_96 + 0x10))
                    result = (((zx.q(r14_33.d) ^ 1) << 1) + result_110) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_540, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_540, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5fb0
                
                void* rcx_97 = &arg1[result_110 << 2]
                uint64_t var_a8_33
                var_a8_33.o = _mm_min_ps(zmm8, _mm_max_ps(zmm9, zmm2))
                
                if (rcx_97 u>= r12_1)
                    goto label_14284a5ec
                
                result_75 += 1
                *rcx_97 = (int.d(fconvert.t(var_a8_33.d))).b
                *(rcx_97 + 1) = (int.d(fconvert.t(var_a8_33:4.d))).b
                *(rcx_97 + 2) = (int.d(fconvert.t(var_a0))).b
                result = result_33 - 1
                *(rcx_97 + 3) = 0
                result_33 = result
            while (result_75 u< arg5)
            
            result.b = 1
            return result
    case 0x59
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_50 = 0
        
        if (arg5 != 0)
            uint64_t r14_7 = zx.q(arg7) & 1
            result = arg5 - 1
            var_110.q = result
            
            do
                if (r14_7 == 0)
                    result = result_50
                
                uint64_t result_7 = result
                float (* rcx_30)[0x4] = result << 4
                float temp0_105[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_min_ps(data_1434d6580, 
                            __maxps_xmmps_memps(data_1434d6570, *(rcx_30 + arg4))), 
                        data_1434d6550), 
                    zmm6)
                uint64_t result_84
                
                if (arg9 == 0)
                    zmm0, result, zmm6 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_105))
                    result_84 = result_7
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_105)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_84 = result_7
                    int64_t rax_101 =
                        (result_84 - (((zx.q(r14_7.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_107[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_101 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_107), *(arg9 + (rax_101 << 3)))
                    *(arg9 + rcx_30 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_107, data_1434d6010), *(arg9 + rcx_30 + 0x10))
                    result = (result_84 + 2 + ((zx.q(r14_7.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_107, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_107, data_1434d6030)
                
                float temp0_116[0x4] = __addps_xmmps_memps(zmm2, data_1434d6560)
                void* r9_2 = &arg1[result_84 << 2]
                var_b8.o = _mm_min_ps(data_1434d5f90, _mm_max_ps(data_143702d90, temp0_116))
                
                if (r9_2 u>= r12_1)
                    goto label_14284a5ec
                
                result_50 += 1
                result = var_110.q - 1
                var_110.q = result
                int32_t r8_16 = ((int.d(fconvert.t(var_b8:4.d)) & 0x3ff)
                    | zx.d((int.d(fconvert.t(var_ac))).w) << 0x14) << 0xa | ((
                    (int.d(fconvert.t(var_b0)) & 0x3ff) << 0x14
                    | zx.d((int.d(fconvert.t(var_b8.d))).w)) & 0xfff003ff)
                *r9_2 = r8_16
            while (result_50 u< arg5)
            
            result.b = 1
            return result
    case 0x73
        if (arg2 u< 2)
            result.b = 0
            return result
        
        uint64_t result_76 = 0
        
        if (arg5 != 0)
            uint64_t r14_34 = zx.q(arg7) & 1
            result = arg5 - 1
            uint64_t result_34 = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_34 == 0)
                    result = result_76
                
                uint64_t result_40 = result
                uint64_t rcx_99 = result << 4
                zmm7 = arg4[result]
                float temp0_555[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        __minps_xmmps_memps(_mm_max_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc6), zmm9), 
                            data_143702d70), 
                        zmm6), 
                    data_1434d5ff0)
                uint64_t result_111
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_555))
                    result_111 = result_40
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_555)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_111 = result_40
                    int64_t rax_481 =
                        (result_111 - (((zx.q(r14_34.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_557[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_481 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_557), *(arg9 + (rax_481 << 3)))
                    *(arg9 + rcx_99 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_557, data_1434d6010), *(arg9 + rcx_99 + 0x10))
                    result = (result_111 + 2 + ((zx.q(r14_34.d) ^ 1) << 1) + -fffffffffffffffe) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_557, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_557, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5ff0
                
                void* r8_20 = &arg1[result_111 << 1]
                uint64_t var_a8_34
                var_a8_34.o = _mm_max_ps(zmm9, _mm_min_ps(zmm8, zmm2))
                
                if (r8_20 u>= r12_1)
                    goto label_14284a5ec
                
                result_76 += 1
                result = result_34 - 1
                uint16_t rdx_42 = ((zx.w((int.d(fconvert.t(var_9c))).b) << 4
                    | (zx.w((int.d(fconvert.t(var_a0))).b) & 0xf)) << 4
                    | (zx.w((int.d(fconvert.t(var_a8_34:4.d))).b) & 0xf)) << 4
                    | (zx.w((int.d(fconvert.t(var_a8_34.d))).b) & 0xff0f)
                *r8_20 = rdx_42
                result_34 = result
            while (result_76 u< arg5)
            
            result.b = 1
            return result
    case 0xbd
        if (arg2 u< 4)
            result.b = 0
            return result
        
        uint64_t result_77 = 0
        
        if (arg5 != 0)
            uint64_t r14_35 = zx.q(arg7) & 1
            result = arg5 - 1
            uint64_t result_35 = result
            
            do
                zmm10 = data_143702d70
                zmm9 = data_1434d5fa0
                
                if (r14_35 == 0)
                    result = result_77
                
                uint64_t result_41 = result
                uint64_t rcx_104 = result << 4
                float temp0_571[0x4] = _mm_mul_ps(
                    _mm_add_ps(
                        _mm_min_ps(zmm10, __maxps_xmmps_memps(data_143702cd0, arg4[result])), 
                        zmm6), 
                    zmm9)
                uint64_t result_112
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm7 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_571))
                    result_112 = result_41
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_571)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_112 = result_41
                    int64_t rax_497 =
                        (result_112 - (((zx.q(r14_35.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_573[0x4] = _mm_div_ps(_mm_sub_ps(zmm8, zmm0), zmm9)
                    *(arg9 + (rax_497 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_573), *(arg9 + (rax_497 << 3)))
                    *(arg9 + rcx_104 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_573, data_1434d6010), *(arg9 + rcx_104 + 0x10))
                    result = (((zx.q(r14_35.d) ^ 1) << 1) + result_112) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_573, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_573, data_1434d6030)
                    zmm10 = data_143702d70
                    zmm9 = data_1434d5fa0
                
                void* r8_21 = &arg1[result_112 << 2]
                float temp0_582[0x4] = _mm_sub_ps(zmm7, zmm9)
                float temp0_583[0x4] = _mm_min_ps(zmm9, zmm2)
                uint64_t var_a8_35
                var_a8_35.o = _mm_max_ps(_mm_add_ps(temp0_582, zmm10), temp0_583)
                
                if (r8_21 u>= r12_1)
                    goto label_14284a5ec
                
                result_77 += 1
                result = result_35 - 1
                int32_t rdx_49 = (((int.d(fconvert.t(var_a0)) & 0x3ff) << 0x14
                    | zx.d((int.d(fconvert.t(var_a8_35.d))).w)) & 0xfff003ff)
                    | (int.d(fconvert.t(var_a8_35:4.d)) & 0x3ff) << 0xa
                    | zx.d((int.d(fconvert.t(var_9c))).w) << 0x1e
                result_35 = result
                *r8_21 = rdx_49
            while (result_77 u< arg5)
            
            result.b = 1
            return result
    case 0xbe
        if (arg2 u< 1)
            result.b = 0
            return result
        
        uint64_t result_78 = 0
        
        if (arg5 != 0)
            uint64_t r14_36 = zx.q(arg7) & 1
            result = arg5 - 1
            uint64_t result_36 = result
            
            do
                zmm9 = data_143702d90
                
                if (r14_36 == 0)
                    result = result_78
                
                uint64_t result_42 = result
                uint64_t rcx_109 = result << 4
                float temp0_589[0x4] = _mm_mul_ps(
                    _mm_add_ps(__minps_xmmps_memps(_mm_max_ps(arg4[result], zmm9), data_143702d70), 
                        zmm6), 
                    data_1434d5ff0)
                uint64_t result_113
                
                if (arg9 == 0)
                    zmm0, result, zmm6, zmm8 =
                        sub_14283ff40(_mm_add_ps((&var_f8)[zx.q(result.d) & 3], temp0_589))
                    result_113 = result_42
                    zmm2 = zmm0
                else
                    zmm0, zmm7, zmm8 = sub_14283ff40(temp0_589)
                    zmm1 = data_1434d6000
                    zmm2 = zmm0
                    result_113 = result_42
                    int64_t rax_514 =
                        (result_113 - (((zx.q(r14_36.d) ^ 1) << 1) + -fffffffffffffffe)) * 2
                    float temp0_591[0x4] = _mm_div_ps(_mm_sub_ps(zmm7, zmm0), zmm8)
                    *(arg9 + (rax_514 << 3)) =
                        __addps_xmmps_memps(_mm_mul_ps(zmm1, temp0_591), *(arg9 + (rax_514 << 3)))
                    *(arg9 + rcx_109 + 0x10) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_591, data_1434d6010), *(arg9 + rcx_109 + 0x10))
                    result = (((zx.q(r14_36.d) ^ 1) << 1) + result_113) * 2
                    *(arg9 + (result << 3)) = __addps_xmmps_memps(
                        __mulps_xmmps_memps(temp0_591, data_1434d6020), *(arg9 + (result << 3)))
                    zmm6 = __mulps_xmmps_memps(temp0_591, data_1434d6030)
                    zmm9 = data_143702d90
                    zmm8 = data_1434d5ff0
                
                void* rdx_50 = &arg1[result_113]
                uint64_t var_a8_36
                var_a8_36.o = _mm_min_ps(zmm8, _mm_max_ps(zmm9, zmm2))
                
                if (rdx_50 u>= r12_1)
                    break
                
                result_78 += 1
                result = result_36 - 1
                *rdx_50 = (int.q(fconvert.t(var_a8_36:4.d))).b << 4
                    | ((int.q(fconvert.t(var_a8_36.d))).b & 0xf)
                result_36 = result
            while (result_78 u< arg5)

label_14284a5ec:
result.b = 1
return result

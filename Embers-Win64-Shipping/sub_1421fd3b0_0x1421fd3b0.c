// 函数: sub_1421fd3b0
// 地址: 0x1421fd3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi
float var_58[0x4]
float var_48[0x4]
float zmm1[0x4]
float zmm2[0x4]

if (arg2 != 1)
    if (arg2 != 2)
        if (arg2 == 3)
            int32_t r10_2 = 0
            
            if (arg4 s> 0)
                int16_t* r9_4 = arg8
                int32_t* r8_6 = arg11
                
                do
                    uint32_t rax_25 = zx.d(*r9_4)
                    r9_4 = &r9_4[1]
                    *r8_6 = r10_2
                    r8_6 = &r8_6[2]
                    r10_2 += 1
                    r8_6[-1] = *(sx.q(rax_25 * arg7) + arg6 + 0x5c) & 0x1ffffff
                while (r10_2 s< arg4)
            
            sub_1421d5ac0(arg11, arg4, arg5)
        else if (arg2 == 4)
            int32_t r10_3 = 0
            
            if (arg4 s> 0)
                int16_t* r8_7 = arg8
                int32_t* rdx_7 = arg11
                
                do
                    uint32_t rax_29 = zx.d(*r8_7)
                    r8_7 = &r8_7[1]
                    *rdx_7 = r10_3
                    rdx_7 = &rdx_7[2]
                    r10_3 += 1
                    rdx_7[-1] = not.d(*(sx.q(rax_29 * arg7) + arg6 + 0x5c)) & 0x1ffffff
                while (r10_3 s< arg4)
            
            sub_1421d5ac0(arg11, arg4, arg5)
        
        return 
    
    rsi = arg11
    int32_t i = 0
    
    if (arg4 s> 0)
        float zmm3[0x4]
        
        if (arg3 == 0)
            float zmm0[0x4]
            
            if (arg4 s>= 4)
                void* r14_3 = &arg8[2]
                int32_t r15_1 = 2
                void* rdx_3 = &rsi[2]
                
                do
                    zmm2 = *(arg9 + 0x60c)
                    zmm3 = *(arg9 + 0x610)
                    int64_t rcx_3 = sx.q(zx.d(*(r14_3 - 4)) * arg7)
                    zmm1 = zx.o(*(rcx_3 + arg6 + 0x10))
                    int32_t rax_9 = *(rcx_3 + arg6 + 0x18)
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0 = zmm1
                    var_58[2] = rax_9
                    zmm1 = *(arg9 + 0x614)
                    zmm1[0] = zmm1[0] - var_58[2]
                    *(rdx_3 - 8) = i
                    zmm2[0] = zmm2[0] * zmm2[0]
                    float temp0_63[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3[0] = zmm3[0] - temp0_63[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm3[0] = zmm3[0] + zmm2[0]
                    zmm3[0] = zmm3[0] + zmm1[0]
                    *(rdx_3 - 4) = zmm3[0]
                    zmm2 = *(arg9 + 0x60c)
                    zmm3 = *(arg9 + 0x610)
                    int64_t rcx_4 = sx.q(zx.d(*(r14_3 - 2)) * arg7)
                    zmm1 = zx.o(*(rcx_4 + arg6 + 0x10))
                    int32_t rax_12 = *(rcx_4 + arg6 + 0x18)
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0 = zmm1
                    var_58[2] = rax_12
                    zmm1 = *(arg9 + 0x614)
                    zmm1[0] = zmm1[0] - var_58[2]
                    *rdx_3 = r15_1 - 1
                    zmm2[0] = zmm2[0] * zmm2[0]
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3[0] = zmm3[0] - temp0_64[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm3[0] = zmm3[0] + zmm2[0]
                    zmm3[0] = zmm3[0] + zmm1[0]
                    *(rdx_3 + 4) = zmm3[0]
                    zmm2 = *(arg9 + 0x60c)
                    zmm3 = *(arg9 + 0x610)
                    int64_t rcx_5 = sx.q(zx.d(*r14_3) * arg7)
                    zmm1 = zx.o(*(rcx_5 + arg6 + 0x10))
                    int32_t rax_16 = *(rcx_5 + arg6 + 0x18)
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0 = zmm1
                    var_58[2] = rax_16
                    zmm1 = *(arg9 + 0x614)
                    zmm1[0] = zmm1[0] - var_58[2]
                    *(rdx_3 + 8) = r15_1
                    float temp0_65[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3[0] = zmm3[0] - temp0_65[0]
                    zmm2[0] = zmm2[0] * zmm2[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm3[0] = zmm3[0] + zmm2[0]
                    zmm3[0] = zmm3[0] + zmm1[0]
                    *(rdx_3 + 0xc) = zmm3[0]
                    zmm3 = *(arg9 + 0x610)
                    zmm2 = *(arg9 + 0x60c)
                    int64_t rcx_6 = sx.q(zx.d(*(r14_3 + 2)) * arg7)
                    zmm1 = zx.o(*(rcx_6 + arg6 + 0x10))
                    int32_t rax_19 = *(rcx_6 + arg6 + 0x18)
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0 = zmm1
                    var_58[2] = rax_19
                    zmm1 = *(arg9 + 0x614)
                    zmm1[0] = zmm1[0] - var_58[2]
                    float temp0_66[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3[0] = zmm3[0] - temp0_66[0]
                    *(rdx_3 + 0x10) = r15_1 + 1
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm2[0] = zmm2[0] * zmm2[0]
                    r14_3 += 8
                    i += 4
                    r15_1 += 4
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm3[0] = zmm3[0] + zmm2[0]
                    zmm3[0] = zmm3[0] + zmm1[0]
                    *(rdx_3 + 0x14) = zmm3[0]
                    rdx_3 += 0x20
                while (i s< arg4 - 3)
            
            if (i s< arg4)
                int64_t i_1 = sx.q(i)
                void* rdx_4 = &rsi[i_1 * 2]
                void* r8_4 = &arg8[i_1]
                
                do
                    uint32_t rax_21 = zx.d(*r8_4)
                    r8_4 += 2
                    zmm2 = *(arg9 + 0x60c)
                    zmm3 = *(arg9 + 0x610)
                    int64_t rcx_7 = sx.q(rax_21 * arg7)
                    zmm1 = zx.o(*(rcx_7 + arg6 + 0x10))
                    int32_t rax_23 = *(rcx_7 + arg6 + 0x18)
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm0 = zmm1
                    var_58[2] = rax_23
                    zmm1 = *(arg9 + 0x614)
                    zmm1[0] = zmm1[0] - var_58[2]
                    *rdx_4 = i
                    i += 1
                    float temp0_67[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3[0] = zmm3[0] - temp0_67[0]
                    zmm2[0] = zmm2[0] * zmm2[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm3[0] = zmm3[0] + zmm2[0]
                    zmm3[0] = zmm3[0] + zmm1[0]
                    *(rdx_4 + 4) = zmm3[0]
                    rdx_4 += 8
                while (i s< arg4)
        else
            int32_t* r8_2 = rsi
            int16_t* r9_2 = arg8
            int32_t var_3c_2 = 0x3f800000
            
            do
                uint32_t rax_5 = zx.d(*r9_2)
                r9_2 = &r9_2[1]
                int64_t var_38_2 = 0
                int32_t var_30_2 = 0
                int64_t rcx_2 = sx.q(rax_5 * arg7)
                zmm1 = *(rcx_2 + arg6 + 0x14)
                var_48[0] = (*(rcx_2 + arg6 + 0x10))[0]
                zmm2 = *(rcx_2 + arg6 + 0x18)
                float temp0_47[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
                temp0_47[0] = zmm1[0]
                float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc6)
                temp0_48[0] = zmm2[0]
                zmm2 = *(arg9 + 0x60c)
                float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xc9)
                var_48 = temp0_49
                float temp0_51[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_49, temp0_49, 0xaa), arg10[2])
                float temp0_53[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_49, temp0_49, 0), *arg10)
                float temp0_55[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_49, temp0_49, 0xff), arg10[3])
                float temp0_57[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_49, temp0_49, 0x55), arg10[1])
                float temp0_58[0x4] = _mm_add_ps(temp0_51, temp0_55)
                float temp0_59[0x4] = _mm_add_ps(temp0_53, temp0_57)
                zmm3 = *(arg9 + 0x610)
                float temp0_60[0x4] = _mm_add_ps(temp0_58, temp0_59)
                zmm1 = *(arg9 + 0x614)
                *r8_2 = i
                i += 1
                zmm2[0] = zmm2[0] - temp0_60[0]
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
                zmm3[0] = zmm3[0] - temp0_61[0]
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
                zmm1[0] = zmm1[0] - temp0_62[0]
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm3[0] = zmm3[0] * zmm3[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm3[0] = zmm3[0] + zmm2[0]
                zmm3[0] = zmm3[0] + zmm1[0]
                r8_2[1] = zmm3[0]
                r8_2 = &r8_2[2]
            while (i s< arg4)
else
    rsi = arg11
    int32_t r10_1 = 0
    
    if (arg4 s> 0)
        int32_t var_3c_1 = 0x3f800000
        
        if (arg3 == 0)
            int16_t* r8_1 = arg8
            int32_t* rdx_1 = rsi
            
            do
                uint32_t rax_3 = zx.d(*r8_1)
                r8_1 = &r8_1[1]
                int32_t var_2c_2 = 0x3f800000
                int64_t rcx_1 = sx.q(rax_3 * arg7)
                zmm1 = *(rcx_1 + arg6 + 0x14)
                var_48[0] = (*(rcx_1 + arg6 + 0x10))[0]
                zmm2 = *(rcx_1 + arg6 + 0x18)
                float temp0_32[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
                temp0_32[0] = zmm1[0]
                float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
                temp0_33[0] = zmm2[0]
                float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
                var_48 = temp0_34
                float temp0_36[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0xaa), *(arg9 + 0x3e0))
                float temp0_38[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0x55), *(arg9 + 0x3d0))
                float temp0_40[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0xff), *(arg9 + 0x3f0))
                float temp0_42[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0), *(arg9 + 0x3c0))
                *rdx_1 = r10_1
                r10_1 += 1
                float temp0_45[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_36, temp0_40), _mm_add_ps(temp0_38, temp0_42))
                rdx_1[1] = _mm_shuffle_ps(temp0_45, temp0_45, 0xff)[0]
                rdx_1 = &rdx_1[2]
            while (r10_1 s< arg4)
        else
            int32_t* r8 = rsi
            int16_t* r9 = arg8
            int32_t var_4c_1 = 0x3f800000
            
            do
                uint32_t rax_1 = zx.d(*r9)
                r9 = &r9[1]
                int64_t var_38_1 = 0
                int32_t var_30_1 = 0
                int32_t var_2c_1 = 0x3f800000
                int64_t rcx = sx.q(rax_1 * arg7)
                zmm1 = *(rcx + arg6 + 0x14)
                var_58[0] = (*(rcx + arg6 + 0x10))[0]
                zmm2 = *(rcx + arg6 + 0x18)
                float temp0_1[0x4] = _mm_shuffle_ps(var_58, var_58, 0xe1)
                temp0_1[0] = zmm1[0]
                float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                temp0_2[0] = zmm2[0]
                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
                var_58 = temp0_3
                float temp0_5[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), arg10[3])
                float temp0_7[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), arg10[1])
                float temp0_9[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), arg10[2])
                float temp0_11[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *arg10)
                float temp0_14[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
                var_48[0] = temp0_14[0]
                float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
                float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
                float temp0_17[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
                temp0_17[0] = temp0_15[0]
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
                temp0_18[0] = temp0_16[0]
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
                var_48 = temp0_19
                float temp0_21[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), *(arg9 + 0x3f0))
                float temp0_23[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *(arg9 + 0x3c0))
                float temp0_25[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), *(arg9 + 0x3e0))
                float temp0_27[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), *(arg9 + 0x3d0))
                *r8 = r10_1
                r10_1 += 1
                float temp0_30[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_21, temp0_25), _mm_add_ps(temp0_23, temp0_27))
                r8[1] = _mm_shuffle_ps(temp0_30, temp0_30, 0xff)[0]
                r8 = &r8[2]
            while (r10_1 s< arg4)
sub_1421d5d40(rsi, arg4, arg5)

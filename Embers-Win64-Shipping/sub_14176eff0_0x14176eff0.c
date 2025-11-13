// 函数: sub_14176eff0
// 地址: 0x14176eff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3[0x8]
zmm3[0].o = arg1[0xa]
float temp0[0x4] = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0)
float zmm4[0x4] = *(arg5 + 0x80)
int32_t zmm1[0x8]
zmm1[0].o = zmm4
zmm1[0].o = _mm_shuffle_ps(zmm1[0].o, zmm4, 0x4e)
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0xff), zmm4)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_3, data_143ef7c70)
float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xb1)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_5)
int128_t zmm11 = arg3[0].o
arg3[0].o = (*arg1)[0x2f]
float temp0_9[0x4] = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0x55)
zmm1[0].o = _mm_mul_ps(zmm1[0].o, temp0_9)
float zmm0[0x4] = (*arg1)[0x2d]
zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0xaa)
float temp0_12[0x4] = _mm_mul_ps(temp0_7, zmm3[0].o)
zmm1[0].o = __mulps_xmmps_memps(zmm1[0].o, data_143ef7c60)
zmm3[0].o = arg1[0xb][0]
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_12, data_143ef7c50)
zmm3[0].o ^= 0x80000000
zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0xe1)
float temp0_16[0x4] = _mm_add_ps(temp0_8, zmm1[0].o)
zmm1[0].o = (*arg1)[0x2e]
zmm3[0] = (zmm0 ^ 0x80000000)[0]
zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0xc6)
zmm1[0].o ^= 0x80000000
zmm3[0] = zmm1[0]
zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0x27)
zmm3[0] = arg3[0]
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_14)
zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0x39)
arg3[0].o = zmm3[0].o
int128_t var_78 = zmm3[0].o
arg3[0].o = _mm_shuffle_ps(arg3[0].o, zmm3[0].o, 0x1b)
zmm1[0].o = zmm3[0].o
zmm1[0].o = _mm_shuffle_ps(zmm1[0].o, zmm3[0].o, 0x4e)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0)
arg3[0].o = _mm_mul_ps(arg3[0].o, temp0_23)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), zmm3[0].o)
arg3[0].o = __mulps_xmmps_memps(arg3[0].o, data_143ef7c70)
zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0xb1)
arg3[0].o = _mm_add_ps(arg3[0].o, temp0_26)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
zmm1[0].o = _mm_mul_ps(zmm1[0].o, temp0_30)
zmm0 = 0xbf800000
float temp0_32[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
zmm3[0].o = _mm_mul_ps(zmm3[0].o, temp0_32)
zmm1[0].o = __mulps_xmmps_memps(zmm1[0].o, data_143ef7c60)
zmm3[0].o = __mulps_xmmps_memps(zmm3[0].o, data_143ef7c50)
arg3[0].o = _mm_add_ps(arg3[0].o, zmm1[0].o)
arg3[0].o = _mm_add_ps(arg3[0].o, zmm3[0].o)
int96_t var_78_1 = arg3[0].12
arg3[0].o = _mm_shuffle_ps(arg3[0].o, arg3[0].o, 0xff)

if (not(arg3[0] f< -1f))
    arg3[0].o = __minss_xmmss_memss(arg3[0], 0x3f800000)
    zmm0 = arg3[0].o

int128_t zmm9 = var_78_1:4.d
float zmm6[0x4] = acosf(zmm0[0])
float zmm8[0x4] = var_78_1.d
zmm6[0] = zmm6[0] + zmm6[0]
int128_t zmm7 = var_78_1:8.d
zmm3[0].o = zmm9
zmm3[0] = zmm3[0] f* zmm9.d
zmm1[0].o = zmm8
zmm1[0] = zmm1[0] f* zmm8[0]
arg3[0].o = zmm7
arg3[0] = arg3[0] f* zmm7.d
zmm3[0] = zmm3[0] f+ zmm1[0]
zmm3[0] = zmm3[0] f+ arg3[0]

if (not(zmm3[0] f<= 9.99999997e-07f))
    bool cond:0_1 = zmm6[0] <= 3.14159274f
    float zmm0_1[0x4] = zmm3[0].o
    zmm3[0].o = zmm0_1
    float temp0_40[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm3[0])
    arg3[0].o = 0x3f000000
    zmm3[0] = zmm3[0] f* 0.5f
    temp0_40[0] = temp0_40[0] * temp0_40[0]
    zmm1[0].o = zmm3[0].o
    zmm1[0] = zmm1[0] f* temp0_40[0]
    arg3[0] = 0.5f f- zmm1[0]
    temp0_40[0] = temp0_40[0] f* arg3[0]
    temp0_40[0] = temp0_40[0] + temp0_40[0]
    zmm1[0].o = temp0_40
    zmm1[0] = zmm1[0] f* temp0_40[0]
    zmm3[0] = zmm3[0] f* zmm1[0]
    temp0_40[0] = temp0_40[0] * (0.5f f- zmm3[0])
    temp0_40[0] = temp0_40[0] + temp0_40[0]
    zmm8[0] = zmm8[0] * temp0_40[0]
    zmm9.d = zmm9.d f* temp0_40[0]
    zmm7.d = zmm7.d f* temp0_40[0]
    int64_t var_88 = (_mm_unpacklo_ps(zmm8, zmm9.q)).q
    var_78_1:8.d = zmm7.d
    int32_t var_80_1 = var_78_1:8.d
    
    if (not(cond:0_1))
        zmm6[0] = zmm6[0] + -6.28318548f
    
    if (not(__andps_xmmxud_memxud(zmm6, data_142d3f770)[0] <= arg1[0x19][0]))
        if (*(arg5 + 0xa8) == 0)
            arg3[0].o = zx.o(0)
        else
            arg3[0].o = *(arg4 + 0x38)
            
            if (not(arg3[0] f> 0f))
                arg3[0].o = *(arg5 + 0xb4)
        
        if (*(arg5 + 0xa9) == 0)
            zmm3[0].o = zx.o(0)
        else
            zmm3[0].o = *(arg4 + 0x3c)
            
            if (not(zmm3[0] f> 0f))
                zmm3[0].o = *(arg5 + 0xb8)
        
        zmm1[0].o = zmm11
        sub_14176e1f0(arg1, zmm1, arg3, zmm3, *(arg5 + 0xb0) == 0, &var_88, (zmm6 ^ 0x80000000)[0], 
            &(*arg1)[0x53])

*arg2 = 0
arg2[1] = 1
return arg2

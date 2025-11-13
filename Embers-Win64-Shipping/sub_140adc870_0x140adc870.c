// 函数: sub_140adc870
// 地址: 0x140adc870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float var_68[0x4]
float zmm4[0x4]

if ((arg2[5].b & 2) != 0)
    zmm6 = *arg1
    var_68 = zmm6
    zmm6[0] = zmm6[0] * zmm6[0]
    float zmm3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    zmm3[0] = zmm3[0] * zmm3[0]
    arg5.o = zmm6
    arg5.o = _mm_shuffle_ps(arg5.o, zmm6, 0xff)
    var_68[1] = zmm3[0]
    zmm3[0] = zmm3[0] + zmm6[0]
    var_68[0] = zmm6[0]
    var_68[2] = zmm4[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    var_68[3] = arg5.d
    zmm3[0] = zmm3[0] + zmm4[0]
    float zmm0[0x4] = arg5.o
    zmm0[0] = zmm0[0] f* arg5.d
    zmm3[0] = zmm3[0] + zmm0[0]
    
    if (zmm3[0] > 9.99999994e-09f)
        zmm0 = 0x3f800000
        zmm0[0] = 1f - zmm3[0]
        
        if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] < 0.00999999978f))
            float zmm5[0x4] = data_143dbb130
            arg5.o = zmm6
            arg5.o = _mm_mul_ps(arg5.o, zmm6)
            arg5.o = _mm_add_ps(arg5.o, _mm_shuffle_ps(arg5.o, arg5.o, 0x4e))
            float temp0_9[0x4] = _mm_add_ps(_mm_shuffle_ps(arg5.o, arg5.o, 0x39), arg5.o)
            arg5.o = _mm_rsqrt_ps(temp0_9)
            float temp0_11[0x4] = _mm_mul_ps(zmm5, temp0_9)
            float temp0_16[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(arg5.o, arg5.o), temp0_11)), 
                    arg5.o), 
                arg5.o)
            arg5.o = data_143dbb120
            float temp0_19[0x4] =
                _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_16, temp0_16), temp0_11))
            float temp0_21[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_9, 2)
            zmm5 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_19, temp0_16), temp0_16), zmm6) ^ arg5.o, 
                temp0_21) ^ arg5.o
            var_68 = zmm5
            zmm4 = var_68[2]
            zmm3 = var_68[1]
            zmm6 = var_68[0]
            arg5.o = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        
        if (not(arg5.d f>= 0f))
            zmm6[0] = zmm6[0] * -1f
            zmm3[0] = zmm3[0] * -1f
            zmm4[0] = zmm4[0] * -1f
            arg5.d = arg5.d f* -1f
            var_68[0] = zmm6[0]
            var_68[1] = zmm3[0]
            var_68[2] = zmm4[0]
            var_68[3] = arg5.d
    else
        var_68 = data_14399f720

int64_t* rcx = arg2[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &var_68
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg5)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    var_68[0] = *rdx
    *rcx += 4

int64_t* rcx_2 = arg2[1]
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    int32_t* rdx_3 = &var_68[1]
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, arg5)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    var_68[1] = *rdx_2
    *rcx_2 += 4

int64_t* rcx_4 = arg2[1]
int32_t* rdx_4 = *rcx_4

if (&rdx_4[1] u> rcx_4[1])
    float* rdx_5 = &var_68[2]
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_5, arg5)
    else
        (*(*arg2 + 0x150))(arg2, rdx_5, 4)
else
    var_68[2] = *rdx_4
    *rcx_4 += 4

if ((arg2[5].b & 1) != 0)
    zmm6 = var_68[1]
    float zmm8[0x4] = var_68[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    int128_t zmm9 = var_68[2]
    arg5.o = zmm9
    zmm6[0] = zmm6[0] + zmm8[0]
    arg5.d = arg5.d f* zmm9.d
    zmm6[0] = zmm6[0] f+ arg5.d
    int128_t zmm7
    zmm7.d = 1f - zmm6[0]
    
    if (zmm7.d f< 0f)
        zmm4 = 0x3f000000
        var_68[3] = 0
        float zmm2[0x4] = 0x3f000000
        float temp0_28[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
        zmm6[0] = zmm6[0] * 0.5f
        temp0_28[0] = temp0_28[0] * temp0_28[0]
        arg5.o = zmm6
        arg5.d = arg5.d f* temp0_28[0]
        zmm2[0] = 0.5f f- arg5.d
        temp0_28[0] = temp0_28[0] * zmm2[0]
        temp0_28[0] = temp0_28[0] + temp0_28[0]
        arg5.o = temp0_28
        arg5.d = arg5.d f* temp0_28[0]
        zmm6[0] = zmm6[0] f* arg5.d
        zmm4[0] = 0.5f - zmm6[0]
        temp0_28[0] = temp0_28[0] * zmm4[0]
        temp0_28[0] = temp0_28[0] + temp0_28[0]
        zmm8[0] = zmm8[0] * temp0_28[0]
        zmm6[0] = zmm6[0] * temp0_28[0]
        zmm9.d = zmm9.d f* temp0_28[0]
        var_68[0] = zmm8[0]
        var_68[1] = zmm6[0]
        var_68[2] = zmm9.d
    else
        var_68[3] = _mm_sqrt_ss(0, zmm7.d)[0]
    
    *arg1 = var_68

int32_t result
result.b = 1
*arg4 = 1
return result

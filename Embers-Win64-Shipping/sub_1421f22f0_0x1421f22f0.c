// 函数: sub_1421f22f0
// 地址: 0x1421f22f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = 0x3f800000
void* rax = *(arg1 + 0x178)
int32_t var_ac = 0x3f800000
int64_t var_a8 = 0
float zmm1[0x4] = *(rax + 0x7c)
float var_b8[0x4]
var_b8[0] = (*(rax + 0x78))[0]
float zmm2[0x4] = *(rax + 0x80)
float temp0[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
temp0[0] = zmm1[0]
int32_t var_9c = 0x3f800000
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2[0]
zmm2 = 0x3f800000
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float var_b8_1[0x4] = temp0_2
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), *(arg2 + 0x3f0))
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), *(arg2 + 0x3e0))
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), *(arg2 + 0x3d0))
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_6), 
    _mm_add_ps(temp0_8, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *(arg2 + 0x3c0))))
zmm2[0] = 1f / __maxss_xmmss_memss(_mm_shuffle_ps(temp0_13, temp0_13, 0xff)[0], 0x3727c5ac)[0]
zmm2[0] = zmm2[0] * temp0_13[0]
float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
zmm2[0] = zmm2[0] * temp0_16[0]
*arg3 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
int32_t* rdx = *(arg1 + 0x178)
void* rcx = &rdx[2]
float zmm0[0x4] = zx.o(*(rdx + 0x78))
float zmm14[0x4] = rdx[0x21]
var_b8_1[2] = rdx[0x20]
void* rax_2 = *(rcx + 0x60)
var_b8_1[0].q = zmm0.q

if (rax_2 != 0)
    rcx = rax_2

int64_t* rcx_1 = *(rcx + (sx.q(*rdx) << 3))
char* result = (*(*rcx_1 + 0x40))(rcx_1)
float zmm8[0x4]
float zmm11[0x4]
float zmm12[0x4]

if (*result == 0)
    zmm12 = var_b8_1[2]
    zmm11 = var_b8_1[1]
    zmm8 = var_b8_1[0]
else
    zmm1 = *(result + 0xc)
    zmm2 = *(result + 0x10)
    zmm14 = *(result + 4)
    int32_t var_ac_1 = 0
    var_b8_1[0] = (*(result + 8))[0]
    var_a8 = 0
    float temp0_18[0x4] = _mm_shuffle_ps(var_b8_1, var_b8_1, 0xe1)
    temp0_18[0] = zmm1[0]
    int32_t var_a0_1 = 0
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
    temp0_19[0] = zmm2[0]
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
    var_b8_1 = temp0_20
    float temp0_22[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), *(arg1 + 0xb0))
    float temp0_24[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0x55), *(arg1 + 0x90))
    float temp0_26[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xaa), *(arg1 + 0xa0))
    float temp0_28[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0), *(arg1 + 0x80))
    zmm8 = _mm_add_ps(_mm_add_ps(temp0_22, temp0_26), _mm_add_ps(temp0_24, temp0_28))
    zmm11 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
    zmm12 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)

bool cond:2 = zmm14[0] <= 0f
*arg4 = (_mm_unpacklo_ps(zx.o(0), 0)).q

if (not(cond:2))
    float zmm5_1[0x4] = *(arg2 + 0x3d0)
    zmm14[0] = zmm14[0] f* *(arg2 + 0x480)
    int32_t var_ac_2 = 0x3f800000
    zmm14[0] = zmm14[0] f* *(arg2 + 0x490)
    int32_t var_9c_1 = 0x3f800000
    zmm14[0] = zmm14[0] f* *(arg2 + 0x4a0)
    zmm14[0] = zmm14[0] + zmm8[0]
    var_a8.d = 0
    zmm14[0] = zmm14[0] + zmm11[0]
    float zmm4_1[0x4] = *(arg2 + 0x3c0)
    zmm14[0] = zmm14[0] + zmm12[0]
    float zmm6[0x4] = *(arg2 + 0x3e0)
    var_b8_1[0] = zmm14[0]
    float temp0_35[0x4] = _mm_shuffle_ps(var_b8_1, var_b8_1, 0xe1)
    temp0_35[0] = zmm14[0]
    float zmm7[0x4] = *(arg2 + 0x3f0)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
    temp0_36[0] = zmm14[0]
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc9)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x55)
    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0xaa), zmm6)
    int32_t var_ac_3 = 0x3f800000
    float temp0_42[0x4] = _mm_mul_ps(temp0_39, zmm5_1)
    var_a8:4.d = 0
    float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0xff), zmm7)
    int32_t var_9c_2 = 0x3f800000
    float temp0_45[0x4] = _mm_mul_ps(temp0_38, zmm4_1)
    float temp0_46[0x4] = _mm_add_ps(temp0_41, temp0_44)
    float temp0_47[0x4] = _mm_add_ps(temp0_45, temp0_42)
    zmm14[0] = zmm14[0] f* *(arg2 + 0x484)
    float temp0_48[0x4] = _mm_add_ps(temp0_47, temp0_46)
    zmm14[0] = zmm14[0] f* *(arg2 + 0x494)
    zmm14[0] = zmm14[0] + zmm8[0]
    zmm14[0] = zmm14[0] f* *(arg2 + 0x4a4)
    zmm14[0] = zmm14[0] + zmm11[0]
    temp0_37[0] = zmm14[0]
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xe1)
    zmm14[0] = zmm14[0] + zmm12[0]
    temp0_49[0] = zmm14[0]
    float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc6)
    temp0_50[0] = zmm14[0]
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc9)
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)
    float temp0_55[0x4] = _mm_mul_ps(temp0_52, zmm4_1)
    float temp0_56[0x4] = _mm_mul_ps(temp0_53, zmm5_1)
    float temp0_57[0x4] = _mm_mul_ps(temp0_54, zmm6)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xff)
    float temp0_59[0x4] = _mm_add_ps(temp0_55, temp0_56)
    float temp0_60[0x4] = _mm_mul_ps(temp0_58, zmm7)
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xff)
    temp0_48[0] = temp0_48[0] / temp0_61[0]
    float temp0_62[0x4] = _mm_add_ps(temp0_57, temp0_60)
    temp0_48[0] = temp0_48[0] f- *arg3
    float temp0_63[0x4] = _mm_add_ps(temp0_59, temp0_62)
    float temp0_64[0x4] = __minss_xmmss_memss(temp0_48[0], 0x4a000000)
    float temp0_65[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
    bool cond:1_1 = temp0_64[0] == 0f
    temp0_65[0] = temp0_65[0] / temp0_66[0]
    temp0_65[0] = temp0_65[0] f- *(arg3 + 4)
    float temp0_67[0x4] = __minss_xmmss_memss(temp0_65[0], 0x4a000000)
    
    if (not(cond:1_1) && not(temp0_67[0] == 0f))
        zmm7 = zx.o(0)
        zmm7[0].q = fconvert.d(temp0_64[0])
        result = _isnan(zmm7[0].q)
        
        if (result.d == 0)
            result = _finite(zmm7[0].q)
            
            if (result.d != 0)
                zmm7 = zx.o(0)
                zmm7[0].q = fconvert.d(temp0_67[0])
                result = _isnan(zmm7[0].q)
                
                if (result.d == 0)
                    result = _finite(zmm7[0].q)
                    
                    if (result.d != 0)
                        zmm1 = 0xbf800000
                        zmm10[0] = 1f / temp0_64[0]
                        zmm1[0] = -1f / temp0_67[0]
                        *arg4 = (_mm_unpacklo_ps(zmm10, zmm1[0].q)).q

return result

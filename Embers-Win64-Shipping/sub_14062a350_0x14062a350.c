// 函数: sub_14062a350
// 地址: 0x14062a350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg3
uint128_t zmm7 = *(arg5 + 4)
float zmm6[0x4] = *arg5
float zmm8[0x4] = *(arg5 + 8)
zmm6[0] = zmm6[0] * zmm6[0]
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] f+ zmm0.d
zmm6[0] = zmm6[0] + zmm8[0]
int64_t var_78
float rcx

if (zmm6[0] != 1f)
    float var_70_1
    
    if (zmm6[0] >= 9.99999994e-09f)
        float temp0_3[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
        arg3 = 0x3f000000
        zmm6[0] = zmm6[0] * 0.5f
        zmm0.d = temp0_3.d f* temp0_3[0]
        zmm6[0] = zmm6[0] f* zmm0.d
        arg3[0] = 0.5f - zmm6[0]
        zmm0.d = temp0_3.d f* arg3[0]
        temp0_3[0] = temp0_3[0] f+ zmm0.d
        temp0_3[0] = temp0_3[0] * temp0_3[0]
        zmm6[0] = zmm6[0] * temp0_3[0]
        float zmm1[0x4] = zx.o(var_78)
        zmm0.d = temp0_3.d f* (0.5f - zmm6[0])
        temp0_3[0] = temp0_3[0] f+ zmm0.d
        zmm6[0] = zmm6[0] * temp0_3[0]
        zmm7.d = zmm7.d f* temp0_3[0]
        zmm1[0] = zmm6[0]
        zmm8[0] = zmm8[0] * temp0_3[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        temp0_4[0] = zmm7.d
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
        var_78 = temp0_5.q
        zmm0 = temp0_5
        var_70_1 = zmm8[0]
    else
        float zmm3[0x4] = data_143dbb1fc
        var_70_1 = data_143dbb200.d
        zmm0.d = data_143dbb1f8[0]
        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        zmm0.d = zmm3[0]
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        var_78 = zmm0.q
    
    rcx = var_70_1
else
    zmm0 = zx.o(*arg5)
    rcx = *(arg5 + 8)

int32_t rax_1 = arg4[1].d
var_78 = zmm0.q
int32_t var_60 = rax_1
int32_t rax_2 = arg2[1].d
uint64_t var_68 = *arg4
int32_t var_50 = rax_2
float var_70_2 = rcx
uint64_t var_58 = *arg2
sub_140ae12b0(&var_58, zmm9, &var_68, &var_78, &data_143cdbe78)
int32_t rax_3 = data_143cdbe80
*arg1 = data_143cdbe78
arg1[1].d = rax_3
return arg1

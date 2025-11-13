// 函数: sub_141db6e80
// 地址: 0x141db6e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 &= 0xfffffffe
arg1[4] = 0
arg1[3] = 0xffffffff
arg1[6] = 0
arg1[5] = 0xffffffff
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x4a) &= 0xfe
*(arg1 + 0x49) = 0
*(arg1 + 4) = 0
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int32_t rax = data_143dbb200
uint64_t var_44 = zmm0.q
int32_t var_48 = rax
int32_t var_3c = rax
float zmm7[0x4] = arg3
zmm0.q = zmm0.q
*(arg1 + 0x1c) = zmm0
uint128_t var_50_1 = zmm0
*(arg1 + 0x2c) = var_44
arg1[0xd] = 0.d
sub_141dd7400(arg1, arg5)
uint128_t zmm3 = *(arg4 + 0x20)
int32_t rax_2 = arg1[0x10]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
uint128_t zmm0_1 = _mm_and_ps(zmm3, 0x7fffffff)
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_4[0x4] = _mm_max_ss(_mm_and_ps(temp0, 0x7fffffff)[0], zmm0_1.d)
zmm3 = _mm_and_ps(zmm3, 0x7fffffff)
zmm7[0] = zmm7[0] f* zmm3.d
uint128_t zmm6
zmm6.d = arg2.d f* temp0_4[0]

if (rax_2 s< 2)
    bool cond:1_1 = arg1[0x11] s>= 2
    arg1[0x10] = 2
    
    if (not(cond:1_1))
        sub_140638a00(&arg1[0xe])
else if (rax_2 s> 2 && rax_2 != 2)
    arg1[0x10] = 0 + 2
    sub_140775970(&arg1[0xe])

arg3 = *(arg4 + 0x10)
uint64_t* rcx_3 = *(arg1 + 0x38)
int32_t var_60 = _mm_shuffle_ps(arg3, arg3, 0xaa).d
*rcx_3 = (_mm_unpacklo_ps(arg3, _mm_shuffle_ps(arg3, arg3, 0x55)[0].q)).q
rcx_3[1].d = var_60
*(*(arg1 + 0x38) + 0xc) = zmm6.d
*(*(arg1 + 0x38) + 0x14) = zmm7[0]
arg1[0x12].b = 1
float zmm4[0x4] = *(arg4 + 0x10)
zmm4[0] = zmm4[0] f+ zmm6.d
float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
float temp0_10[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm0_1.d = temp0_9.d f+ zmm7[0]
temp0_9[0] = temp0_9[0] - zmm7[0]
zmm3.d = temp0_10.d f+ zmm6.d
zmm4[0] = zmm4[0] f- zmm6.d
temp0_10[0] = temp0_10[0] f- zmm6.d
float var_48_1 = temp0_9[0]
uint64_t var_44_1 = (_mm_unpacklo_ps(zmm4, zmm3.q)).q
int32_t var_3c_1 = zmm0_1.d
zmm0_1.q = (_mm_unpacklo_ps(zmm4, temp0_10[0].q)).q
*(arg1 + 0x1c) = zmm0_1
*(arg1 + 0x2c) = var_44_1
arg1[0xd] = 1.d
return arg1

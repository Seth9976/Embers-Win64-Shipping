// 函数: sub_140634110
// 地址: 0x140634110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    int64_t rax
    rax.b = 0
    return rax

void* rax_1 = *(arg2 + 0x130)
float var_58
int64_t var_48
float var_40
int32_t* rax_2
float zmm0[0x4]
float zmm1[0x4]

if (rax_1 == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    var_40 = data_143dbb200
    rax_2 = &var_48
    var_48 = zmm0.q
else
    zmm1 = *(rax_1 + 0x1d0)
    rax_2 = &var_58
    var_58 = zmm1[0]
    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_50_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    float var_54_1 = zmm0[0]

uint128_t zmm6 = zx.o(*rax_2)
int32_t rax_4 = rax_2[2]
void var_2c
int32_t* rax_6 = (*(*arg1 + 0xd38))(zmm0, &var_2c)
zmm1 = rax_4
zmm0 = zmm6
float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm1[0] = zmm1[0] f- rax_6[2]
temp0_3[0] = temp0_3[0] f- rax_6[1]
zmm6.d = zmm6.d f- *rax_6
float var_50_2 = zmm1[0]
float var_54_2 = temp0_3[0]
var_58 = zmm6.d
sub_140adf3c0(&var_58, &var_48)
float* rax_8 = (*(*arg1 + 0x660))(arg1, &var_2c)
float zmm1_1 = var_48:4.d - rax_8[1]
float zmm0_1 = var_40 - rax_8[2]
*arg3 = var_48.d - *rax_8
*arg4 = zmm1_1
*arg5 = zmm0_1
float* rax_9
rax_9.b = 1
return rax_9

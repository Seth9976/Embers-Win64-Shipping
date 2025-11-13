// 函数: sub_141faf0c0
// 地址: 0x141faf0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = data_143f10dc8
void var_168
int128_t* rax_1 = (*(*arg1 + 0x268))(arg1, &var_168, arg5, arg2)
void var_160
int128_t* rax_2 = (*(*arg1 + 0x268))(arg1, &var_160, arg4, arg2)
void var_158
int128_t* rax_3 = (*(*arg1 + 0x268))(arg1, &var_158, arg3, arg2)
void** const var_1c8 = &data_143283728
float var_1c0 = (*rax_3)[0]
float zmm0[0x4] = data_14399f5c0
float var_1bc = (*(rax_3 + 4))[0]
float zmm1[0x4] = data_143dbb1f0.d
float var_1a0[0x4] = zmm0
int64_t var_1b8 = 0
char var_1b0 = 0
int64_t var_1a8 = 0
var_1c8 = &data_14328aaf8
int64_t var_190 = r14
float var_150[0x4] = zmm0
int128_t var_188
__builtin_memset(&var_188, 0, 0x20)
float zmm9[0x4] = *rax_3
int128_t zmm7 = *(rax_3 + 4)
float zmm13[0x4] = *rax_2
int128_t zmm11 = *(rax_2 + 4)
int128_t zmm15 = *(rax_1 + 4)
float var_138[0x4] = *rax_1
zmm0 = data_143dbb1f0:4.d
float arg_8 = zmm0[0]
int64_t var_170
var_170.d = 1
float (* var_178)[0x4]
sub_14090a6a0(&var_178)
float (* rax_4)[0x4] = var_178
float temp0[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
temp0[0] = zmm7.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm0[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float temp0_4[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
float temp0_5[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe1)
temp0_4[0] = zmm15.d
*rax_4 = temp0_3
temp0_5[0] = zmm11.d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
rax_4[1] = var_150
float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = zmm1[0]
temp0_7[0] = zmm1[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
temp0_8[0] = arg_8
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
temp0_9[0] = zmm0[0]
rax_4[2] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
rax_4[3] = var_150
rax_4[4] = temp0_10
rax_4[5] = var_150
sub_14241f6b0(&var_1c8, arg6)
int64_t result = sub_142409850(arg2, &var_1c8)
float (* rcx_5)[0x4] = var_178
var_1c8 = &data_14328aaf8

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)

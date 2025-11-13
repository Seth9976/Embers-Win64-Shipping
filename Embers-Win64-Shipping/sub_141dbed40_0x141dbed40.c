// 函数: sub_141dbed40
// 地址: 0x141dbed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx == 0)
    return 

int64_t r8
r8.b = 1
(*(*rcx + 0x3f8))(rcx, arg2, r8)
int64_t var_48
__builtin_memset(&var_48, 0, 0x28)
int64_t var_10_1 = 0
*(arg1 + 0xa0) = var_48.o
int128_t var_30
float zmm0[0x4] = var_30
int128_t var_40
*(arg1 + 0xb0) = var_40
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
temp0_1[0] = 0
*(arg1 + 0xc0) = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
*(arg1 + 0xd0) = 0:4.o

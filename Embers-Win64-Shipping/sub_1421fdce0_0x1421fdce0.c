// 函数: sub_1421fdce0
// 地址: 0x1421fdce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1421b85d0(arg1, arg2)
void* var_20 = rax
int32_t var_18
sub_141fe56b0(arg1 + 0x30, &var_18, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
int32_t zmm0 = sub_141fe5610(arg1 + 0x78, zmm1, *(arg2 + 0x18), rax)
float zmm3[0x4] = var_18
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_14
temp0[0] = var_14
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
int32_t var_10
temp0_1[0] = var_10
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*(arg4 + 0x60) = temp0_3
*(arg4 + 0x70) = temp0_3
return arg4

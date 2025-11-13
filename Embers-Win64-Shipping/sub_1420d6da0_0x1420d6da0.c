// 函数: sub_1420d6da0
// 地址: 0x1420d6da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float rax = arg3[1].d
float rax_1 = arg2[1].d
*arg2
*arg3
float zmm0_1
int64_t zmm6_1
float zmm7_1[0x4]
zmm0_1, zmm6_1, zmm7_1 = sub_1420bbf60(arg4, arg5, arg6, arg7)
float zmm1 = zmm7_1[0] f- zmm6_1.d
float temp0[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
temp0[0] = temp0[0] f- zmm6_1:4.d
temp0[0] = temp0[0] * zmm0_1
temp0[0] = temp0[0] f+ zmm6_1:4.d
*arg1 = zmm1 * zmm0_1 f+ zmm6_1.d
arg1[1] = temp0[0]
arg1[2] = (rax - rax_1) * zmm0_1 + rax_1
return arg1

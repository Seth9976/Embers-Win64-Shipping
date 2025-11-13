// 函数: sub_1427e9ab0
// 地址: 0x1427e9ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg2
float zmm4 = arg2[2]
float zmm5 = arg2[3]
int64_t* rcx = *(arg1 + 0x60)
float* rax_1 = *(arg1 + 0x68) + 0x118
int128_t zmm6 = arg2[1]
float temp0 = _mm_sqrt_ss(0, zmm3 * zmm3 + zmm6.d f* zmm6.d + zmm4 * zmm4 + zmm5 * zmm5)
float zmm2 = arg2[6]
float zmm1 = 1f / temp0
float zmm0 = arg2[4]
zmm3 = zmm3 * zmm1
zmm6.d = zmm6.d f* zmm1
zmm4 = zmm4 * zmm1
zmm5 = zmm5 * zmm1
zmm1 = arg2[5]
*rax_1 = zmm3
rax_1[1] = zmm6.d
rax_1[2] = zmm4
rax_1[3] = zmm5
rax_1[4] = zmm0
rax_1[5] = zmm1
rax_1[6] = zmm2
jump(*(*rcx + 0x40))

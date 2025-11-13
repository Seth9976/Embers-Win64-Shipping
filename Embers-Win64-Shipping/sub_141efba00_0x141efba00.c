// 函数: sub_141efba00
// 地址: 0x141efba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg3
float zmm0 = arg5[1]
float zmm1[0x4] = arg5[2]
float zmm4 = *arg5
void* rax_1 = arg1[0x16]
zmm1[0] = zmm1[0] * zmm1[0]
zmm4 = zmm4 * zmm4 + zmm0 * zmm0 + zmm1[0]
zmm1 = *(rax_1 + 0x1d0)
zmm0 = zmm1[0]
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm0 = zmm0 - *arg6
zmm1[0] = zmm1[0] - arg6[1]
int32_t temp0_1 = _mm_sqrt_ss(0, zmm4)

if (temp0_1 f>= 9.99999975e-05f)
    arg3 = 0x3f800000
    zmm1[0] = zmm1[0] * zmm1[0]
    float temp0_2[0x4] = _mm_sqrt_ss(0, zmm0 * zmm0 + zmm1[0])
    zmm0 = 1f f/ temp0_1
    temp0_2[0] = temp0_2[0] * zmm0
    zmm1 = _mm_min_ss(temp0_2[0], 0x3f800000)
    arg3[0] = 1f - zmm1[0]
    arg3[0] = arg3[0] f* arg4
    zmm6[0] = zmm6[0] + arg3[0]

if ((*(*arg1 + 0x550))(zmm0, zmm1, arg3) != 0)
    (*(*arg1 + 0x590))(arg1, 3, 0)

jump(*(*arg1 + 0x620))

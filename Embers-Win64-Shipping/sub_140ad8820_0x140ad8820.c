// 函数: sub_140ad8820
// 地址: 0x140ad8820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm1[0x4] = *arg2
zmm1[0] = zmm1[0] f* *arg1
uint32_t zmm0[0x4] = *(arg2 + 4)
zmm0[0] = zmm0[0] f* arg1[1]
float zmm2 = *(arg2 + 8) f* arg1[2]
zmm0[0] = zmm0[0] f+ zmm1[0]
zmm1 = arg1[3]
zmm0[0] = zmm0[0] f+ zmm2
int64_t result
float i
i, result = sub_140a3f4a0(zmm0, zmm1)
i = i * 2f

if (not(i <= 3.14159274f))
    do
        i = i + -6.28318548f
    while (i > 3.14159274f)

if (not(i >= -3.14159274f))
    do
        i = i + 6.28318548f
    while (i < -3.14159274f)

return result

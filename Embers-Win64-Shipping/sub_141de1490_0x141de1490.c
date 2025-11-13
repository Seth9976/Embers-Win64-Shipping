// 函数: sub_141de1490
// 地址: 0x141de1490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg2
zmm2[0] = zmm2[0] f+ *arg3
float zmm6[0x4] = zx.o(0)
bool cond:0 = zmm2[0] < 0f
*arg3 = zmm2[0]

if (not(cond:0) && not(zmm2[0] > *arg4))
    return 0

float zmm0[0x4] = *arg4

if (*arg1 == 0)
    if (not(zmm2[0] < 0f))
        zmm6 = _mm_min_ss(zmm0[0], zmm2[0])
    
    *arg3 = zmm6[0]
    return 1

if (zmm0[0] == 0f)
    *arg3 = 0
else
    float zmm0_1
    float zmm6_1
    zmm0_1, zmm6_1 = sub_140a454f0(zmm2, zmm0)
    *arg3 = zmm0_1
    
    if (not(zmm0_1 >= zmm6_1))
        *arg3 = zmm0_1 + *arg4

return 2

// 函数: sub_141f2a1e0
// 地址: 0x141f2a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x124) & 1) == 0)
    return 

*(arg1 + 0x100) = *(sub_141deba70() + 0x10)
float zmm0_1[0x4] = *(arg2 + 0x1e0)
float temp0_2[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0], zmm0_1[0])
temp0_2[0] = temp0_2[0] f* *(arg2 + 0x424)
*(arg1 + 0xf4) = temp0_2[0]
zmm0_1 = *(arg2 + 0x1e8)
zmm0_1[0] = zmm0_1[0] f* *(arg2 + 0x420)
zmm0_1[0] = zmm0_1[0] + zmm0_1[0]
*(arg1 + 0xf8) = zmm0_1[0]

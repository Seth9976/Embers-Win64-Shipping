// 函数: sub_141e76a10
// 地址: 0x141e76a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x10)
float result = 20f

if (zmm1 >= 20f)
    zmm1 = _mm_min_ss(zmm1, 0x469c4000)
else
    zmm1 = 20f

float zmm2 = *(arg1 + 0x1c)
*(arg1 + 0x10) = zmm1

if (zmm2 >= 20f)
    zmm2 = _mm_min_ss(zmm2, 0x469c4000)
else
    zmm2 = 20f

zmm1 = *(arg1 + 0x28)
*(arg1 + 0x1c) = zmm2

if (zmm1 >= 20f)
    zmm1 = _mm_min_ss(zmm1, 0x469c4000)
else
    zmm1 = 20f

zmm2 = *(arg1 + 0x34)
*(arg1 + 0x28) = zmm1

if (not(zmm2 < 20f))
    result = _mm_min_ss(zmm2, 0x469c4000)

zmm1 = *(arg1 + 0x14)
*(arg1 + 0x34) = result
result = (zx.o(0)).d

if (zmm1 >= 0f)
    zmm1 = _mm_min_ss(zmm1, 0x40fe147b)
else
    zmm1 = (zx.o(0)).d

zmm2 = *(arg1 + 0x20)
*(arg1 + 0x14) = zmm1

if (zmm2 >= 0f)
    zmm2 = _mm_min_ss(zmm2, 0x40fe147b)
else
    zmm2 = (zx.o(0)).d

zmm1 = *(arg1 + 0x2c)
*(arg1 + 0x20) = zmm2

if (zmm1 >= 0f)
    zmm1 = _mm_min_ss(zmm1, 0x40fe147b)
else
    zmm1 = (zx.o(0)).d

zmm2 = *(arg1 + 0x38)
*(arg1 + 0x2c) = zmm1

if (not(zmm2 < 0f))
    result = _mm_min_ss(zmm2, 0x40fe147b)

zmm1 = *(arg1 + 0x18)
*(arg1 + 0x38) = result
result = 0.100000001f

if (zmm1 >= 0.100000001f)
    zmm1 = _mm_min_ss(zmm1, 0x40000000)
else
    zmm1 = 0.100000001f

zmm2 = *(arg1 + 0x24)
*(arg1 + 0x18) = zmm1

if (zmm2 >= 0.100000001f)
    zmm2 = _mm_min_ss(zmm2, 0x40000000)
else
    zmm2 = 0.100000001f

zmm1 = *(arg1 + 0x30)
*(arg1 + 0x24) = zmm2

if (zmm1 >= 0.100000001f)
    zmm1 = _mm_min_ss(zmm1, 0x40000000)
else
    zmm1 = 0.100000001f

zmm2 = *(arg1 + 0x3c)
*(arg1 + 0x30) = zmm1

if (zmm2 >= 0.100000001f)
    *(arg1 + 0x3c) = _mm_min_ss(zmm2, 0x40000000)
    return result

*(arg1 + 0x3c) = 0x3dcccccd
return result

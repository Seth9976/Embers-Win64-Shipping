// 函数: sub_14080f7a0
// 地址: 0x14080f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xd0))

if (result.d s<= 0 && *(arg1 + 0x150) s<= 0)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0x3f800000
    *(arg1 + 0x48) = 0x3f800000
    return result

*(arg1 + 0x40) = 0x7f7fffff
void var_28
float zmm0
float zmm1

if (result.d s<= 0)
    zmm1 = 3.40282347e+38f
    zmm0 = 3.40282347e+38f
else
    result = sub_141f89220(arg1 + 0x58, &var_28)
    zmm0 = *(arg1 + 0x40)
    zmm1 = *(result + 4)

bool cond:0 = *(arg1 + 0x150) s<= 0
zmm0 = _mm_min_ss(zmm0, zmm1)
*(arg1 + 0x40) = zmm0

if (cond:0)
    zmm1 = zmm0
else
    result = sub_141f89220(arg1 + 0xd8, &var_28)
    zmm1 = *(arg1 + 0x40)
    zmm0 = *(result + 4)

bool cond:1 = *(arg1 + 0xd0) s<= 0
float temp0_1 = _mm_min_ss(zmm1, zmm0)
*(arg1 + 0x44) = 0x800000
*(arg1 + 0x40) = temp0_1
float zmm2

if (cond:1)
    zmm2 = 1.17549435e-38f
    zmm0 = 1.17549435e-38f
else
    result = sub_141f89d50(arg1 + 0x58, &var_28)
    zmm0 = *(arg1 + 0x44)
    zmm2 = *(result + 4)

bool cond:2 = *(arg1 + 0x150) s<= 0
zmm2 = _mm_max_ss(zmm2, zmm0)
*(arg1 + 0x44) = zmm2

if (cond:2)
    zmm0 = zmm2
else
    result = sub_141f89d50(arg1 + 0xd8, &var_28)
    zmm0 = *(arg1 + 0x44)
    zmm2 = *(result + 4)

float temp0_3 = _mm_max_ss(zmm2, zmm0)
zmm0 = temp0_3 f- *(arg1 + 0x40)
*(arg1 + 0x44) = temp0_3
*(arg1 + 0x48) = 1f / zmm0
return result

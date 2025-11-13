// 函数: sub_14080faf0
// 地址: 0x14080faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xd0))

if (result.d s<= 0 && *(arg1 + 0x150) s<= 0 && *(arg1 + 0x1d0) s<= 0)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0x3f800000
    *(arg1 + 0x48) = 0x3f800000
    return result

*(arg1 + 0x40) = 0x7f7fffff
void var_28
float zmm0[0x4]
float zmm1[0x4]

if (result.d s<= 0)
    zmm1 = 0x7f7fffff
    zmm0 = 0x7f7fffff
else
    result = sub_141f89220(arg1 + 0x58, &var_28)
    zmm0 = *(arg1 + 0x40)
    zmm1 = *(result + 4)

bool cond:0 = *(arg1 + 0x150) s<= 0
zmm0 = _mm_min_ss(zmm0[0], zmm1[0])
*(arg1 + 0x40) = zmm0[0]

if (cond:0)
    zmm1 = zmm0
else
    result = sub_141f89220(arg1 + 0xd8, &var_28)
    zmm1 = *(arg1 + 0x40)
    zmm0 = *(result + 4)

bool cond:1 = *(arg1 + 0x1d0) s<= 0
zmm1 = _mm_min_ss(zmm1[0], zmm0[0])
*(arg1 + 0x40) = zmm1[0]

if (cond:1)
    zmm0 = zmm1
else
    result = sub_141f89220(arg1 + 0x158, &var_28)
    zmm0 = *(arg1 + 0x40)
    zmm1 = *(result + 4)

bool cond:2 = *(arg1 + 0xd0) s<= 0
float temp0_2[0x4] = _mm_min_ss(zmm0[0], zmm1[0])
*(arg1 + 0x44) = 0x800000
*(arg1 + 0x40) = temp0_2[0]
float zmm2[0x4]

if (cond:2)
    zmm2 = 0x800000
    zmm0 = 0x800000
else
    result = sub_141f89d50(arg1 + 0x58, &var_28)
    zmm0 = *(arg1 + 0x44)
    zmm2 = *(result + 4)

bool cond:3 = *(arg1 + 0x150) s<= 0
zmm2 = _mm_max_ss(zmm2[0], zmm0[0])
*(arg1 + 0x44) = zmm2[0]

if (cond:3)
    zmm0 = zmm2
else
    result = sub_141f89d50(arg1 + 0xd8, &var_28)
    zmm0 = *(arg1 + 0x44)
    zmm2 = *(result + 4)

bool cond:4 = *(arg1 + 0x1d0) s<= 0
zmm2 = _mm_max_ss(zmm2[0], zmm0[0])
*(arg1 + 0x44) = zmm2[0]

if (cond:4)
    zmm0 = zmm2
else
    result = sub_141f89d50(arg1 + 0x158, &var_28)
    zmm0 = *(arg1 + 0x44)
    zmm2 = *(result + 4)

zmm1 = 0x3f800000
float temp0_5[0x4] = _mm_max_ss(zmm2[0], zmm0[0])
temp0_5[0] = temp0_5[0] f- *(arg1 + 0x40)
*(arg1 + 0x44) = temp0_5[0]
zmm1[0] = 1f / temp0_5[0]
*(arg1 + 0x48) = zmm1[0]
return result

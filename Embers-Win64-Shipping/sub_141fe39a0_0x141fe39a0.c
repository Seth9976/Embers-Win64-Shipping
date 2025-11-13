// 函数: sub_141fe39a0
// 地址: 0x141fe39a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = zx.o(*(arg1 + 0x10))
char rax_2 = *(arg1 + 0x2d)
uint64_t var_28 = *(arg1 + 0x1c)
uint128_t zmm4

if (rax_2 == 0)
    zmm4 = zmm5
else if (rax_2 != 2)
    zmm4 = var_28.d
else
    zmm4 = zmm5 ^ data_142d3f780

char rax_3 = *(arg1 + 0x2e)
uint128_t zmm1 = zmm5.q:4.d
uint128_t zmm0

if (rax_3 == 0)
    zmm0 = zmm1
else if (rax_3 != 2)
    zmm0 = var_28:4.d
else
    zmm0 = zmm1 ^ data_142d3f780

char result = *(arg1 + 0x2f)
uint128_t zmm3 = *(arg1 + 0x18)
uint128_t zmm2

if (result == 0)
    zmm2 = zmm3
else if (result != 2)
    zmm2 = *(arg1 + 0x24)
else
    zmm2 = zmm3 ^ data_142d3f780

uint32_t rcx = zx.d(*(arg1 + 0x2c))

if (rcx == 1)
    zmm1 = zmm5
    zmm0 = zmm4
else if (rcx == 2)
    zmm2 = zmm4
    zmm3 = zmm5
else if (rcx == 3)
    zmm2 = zmm0
    zmm3 = zmm1
else if (rcx == 4)
    zmm2 = zmm4
    zmm3 = zmm5
    zmm1 = zmm5
    zmm0 = zmm4

zmm0 = _mm_min_ss(zmm0.d, zmm4.d)
zmm1 = _mm_max_ss(zmm1.d, zmm5.d)
zmm0 = _mm_min_ss(zmm0.d, zmm2.d)
zmm1 = _mm_max_ss(zmm1.d, zmm3.d)
*arg2 = zmm0.d
*arg3 = zmm1.d
return result

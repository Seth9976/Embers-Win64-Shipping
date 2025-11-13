// 函数: sub_141fe24a0
// 地址: 0x141fe24a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = zx.o(*(arg1 + 0x10))
char rax_2 = *(arg1 + 0x2d)
uint64_t var_28 = *(arg1 + 0x1c)
uint128_t zmm0

if (rax_2 == 0)
    zmm0 = zmm5
else if (rax_2 != 2)
    zmm0 = var_28.d
else
    zmm0 = zmm5 ^ data_142d3f780

char rax_3 = *(arg1 + 0x2e)
uint128_t zmm4 = zmm5.q:4.d
uint128_t zmm2

if (rax_3 == 0)
    zmm2 = zmm4
else if (rax_3 != 2)
    zmm2 = var_28:4.d
else
    zmm2 = zmm4 ^ data_142d3f780

char rax_4 = *(arg1 + 0x2f)
uint128_t zmm3 = *(arg1 + 0x18)
uint128_t zmm1

if (rax_4 == 0)
    zmm1 = zmm3
else if (rax_4 != 2)
    zmm1 = *(arg1 + 0x24)
else
    zmm1 = zmm3 ^ data_142d3f780

uint32_t rcx = zx.d(*(arg1 + 0x2c))

if (rcx == 1)
    zmm2 = zmm0
else if (rcx == 2)
    zmm1 = zmm0
else if (rcx == 3)
    zmm1 = zmm2
else if (rcx == 4)
    zmm1 = zmm0
    zmm2 = zmm0

if (arg2 == 0)
    return zmm0

if (arg2 == 1)
    return zmm5

if (arg2 == 2)
    return zmm2

if (arg2 == 3)
    return zmm4

if (arg2 == 4)
    return zmm1

return zmm3

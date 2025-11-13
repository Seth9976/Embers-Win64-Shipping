// 函数: sub_141fe3320
// 地址: 0x141fe3320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x40)
char rax_2 = *(arg1 + 0x55)
uint64_t var_28 = *(arg1 + 0x38)
uint64_t var_18 = *(arg1 + 0x44)
uint128_t zmm2

if (rax_2 == 0)
    zmm2 = var_28.d
else if (rax_2 != 2)
    zmm2 = var_18.d
else
    zmm2 = var_28.d ^ 0x80000000

char rax_3 = *(arg1 + 0x56)
uint128_t zmm0

if (rax_3 == 0)
    zmm0 = var_28:4.d
else if (rax_3 != 2)
    zmm0 = var_18:4.d
else
    zmm0 = var_28:4.d ^ 0x80000000

char rax_4 = *(arg1 + 0x57)
uint128_t zmm1

if (rax_4 == 0)
    zmm1 = rax
else if (rax_4 != 2)
    zmm1 = *(arg1 + 0x4c)
else
    zmm1 = rax ^ 0x80000000

uint32_t rcx = zx.d(*(arg1 + 0x54))

if (rcx == 1)
    zmm0 = zmm2
else if (rcx == 2)
    zmm1 = zmm2
else if (rcx == 3)
    zmm1 = zmm0
else if (rcx == 4)
    zmm1 = zmm2
    zmm0 = zmm2

*arg2 = zmm2.d
arg2[1] = zmm0.d
arg2[2] = zmm1.d
return arg2

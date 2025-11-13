// 函数: sub_141053440
// 地址: 0x141053440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x48)
void*** r9 = rax

if (rax == 0)
    r9 = nullptr
else
    *r9 = &data_142d3ff08
    r9[1].d = 0
    *r9 = &data_142f00938
    *(r9 + 0xc) = 0
    r9[2].w = 0x100

__builtin_memset(&r9[3], 0, 0x2c)
int32_t rdx = 3
uint32_t rcx = zx.d(arg3[1])
int32_t rax_1

if (rcx == 1)
    rax_1 = 3
else if (rcx == 2)
    rax_1 = 2
else
    rax_1 = 1

*(r9 + 0x1c) = rax_1

if (*arg3 == 1)
    rdx = 2

r9[3].d = rdx
*(r9 + 0x2c) = *(arg3 + 8)
r9[4].d = 1
float zmm1 = *(arg3 + 4) * 16777216f
r9[6].d = 1
*arg2 = r9
*(r9 + 0x24) = int.d(zmm1 + zmm1 - 0.5f) s>> 1
*(r9 + 0x34) = zx.d(arg3[0xc])

if (r9 != 0)
    r9[1].d += 1

return arg2

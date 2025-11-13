// 函数: sub_141e23b40
// 地址: 0x141e23b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x14)
float zmm0

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x180))
    zmm0 = (zx.o(0)).d
else
    int64_t rcx = sx.q(arg3) * 3
    int64_t rax_2 = *(arg1 + 0x178)
    zmm0 = *(rax_2 + (rcx << 2) + 8)
    *arg2 = *(rax_2 + (rcx << 2))

float zmm1

if (arg4 s< 0 || arg4 s>= *(arg1 + 0x180))
    zmm1 = *(arg1 + 0x90)
else
    int64_t rcx_1 = sx.q(arg4) * 3
    int64_t rax_5 = *(arg1 + 0x178)
    zmm1 = *(rax_5 + (rcx_1 << 2) + 8)
    arg2[1] = *(rax_5 + (rcx_1 << 2))

if (not(zmm0 <= arg5))
    zmm0 = zmm0 f- *(arg1 + 0x90)

if (not(zmm1 >= arg5))
    zmm1 = zmm1 f+ *(arg1 + 0x90)

if (not(zmm0 != zmm1))
    zmm0 = zmm0 f- *(arg1 + 0x90)

arg2[2].d = (arg5 - zmm0) / (zmm1 - zmm0)
return arg2

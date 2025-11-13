// 函数: sub_141e41bf0
// 地址: 0x141e41bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x14)
float zmm0

if (arg3 == 0xffffffff)
    zmm0 = (zx.o(0)).d
else
    int64_t rcx = sx.q(arg3) * 3
    int64_t rax_2 = *arg1
    zmm0 = *(rax_2 + (rcx << 2) + 8)
    *arg2 = *(rax_2 + (rcx << 2))

float zmm1

if (arg4 == 0xffffffff)
    zmm1 = arg6
else
    int64_t rcx_1 = sx.q(arg4) * 3
    int64_t rax_5 = *arg1
    zmm1 = *(rax_5 + (rcx_1 << 2) + 8)
    arg2[1] = *(rax_5 + (rcx_1 << 2))

if (not(zmm0 <= arg5))
    zmm0 = zmm0 - arg6

if (not(zmm1 >= arg5))
    zmm1 = zmm1 + arg6

if (not(zmm0 != zmm1))
    zmm0 = zmm0 - arg6

arg2[2].d = (arg5 - zmm0) / (zmm1 - zmm0)
return arg2

// 函数: sub_140d986d0
// 地址: 0x140d986d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0
zmm0.d = arg3.d f+ arg4
int32_t var_14 = arg3.d
double temp0 = __maxss_xmmss_memss(zmm0.d, *(arg1 + 0x58))
*(arg1 + 0x58) = temp0.d
*(arg1 + 0x48) = fconvert.d(temp0.d)
int64_t rbp = sx.q(*(arg1 + 0x40))
int32_t rax_1 = (rbp + 1).d
*(arg1 + 0x40) = rax_1

if (rax_1 s> *(arg1 + 0x44))
    sub_14083a7e0(arg1 + 0x38)

int64_t rcx_1 = *(arg1 + 0x38)
int64_t rdx_2 = rbp * 3
*(rcx_1 + (rdx_2 << 2)) = arg4.q
*(rcx_1 + (rdx_2 << 2) + 8) = arg5.d
int32_t rax_4 = *(arg1 + 0x40) - 1
*arg2 = arg1
arg2[1].d = rax_4
return arg2

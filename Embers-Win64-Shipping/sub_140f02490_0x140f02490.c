// 函数: sub_140f02490
// 地址: 0x140f02490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1 + 0x3f0
void* rax = *(rcx + 0x30)

if (rax != 0)
    rcx = rax

float zmm0_1 = sinf(sub_140da8440(rcx + (sx.q(arg3) << 4), arg4) * 6.28318548f)
int32_t rax_3 = *(arg1 + 0x44c)
float zmm1

if ((rax_3.b & 1) == 0)
    zmm1 = 1f
else
    zmm1 = zmm0_1

if (((rax_3 u>> 1).b & 1) == 0)
    zmm0_1 = 1f

*arg2 = zmm0_1
arg2[1] = zmm1
return arg2

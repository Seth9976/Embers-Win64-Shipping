// 函数: sub_142ad4870
// 地址: 0x142ad4870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t rbx = arg2

if (arg3 u> 0xb)
    int32_t rax_1 = sub_142acca60(_mm_cvtepi32_pd(zx.q(arg3)), 0xc, &arg_18)
    arg3 = arg_18
    rbx += rax_1

int32_t rdx = 1

if (arg3 != 0xc)
    rdx = arg3 + 1

return zx.q(int.d(sub_142ad42e0(rbx, rdx, 1)))

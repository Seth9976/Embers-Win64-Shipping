// 函数: sub_142ad4010
// 地址: 0x142ad4010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t rbx = arg2

if (arg3 u> 0xb)
    rbx += sub_142acca60(_mm_cvtepi32_pd(zx.q(arg3)), 0xc, &arg_18)

int32_t arg_10
sub_142acca60(_mm_cvtepi32_pd(zx.q(rbx * 0x19 + 0xb)), 0x21, &arg_10)
int64_t rax_4 = sx.q(arg_18)

if (arg_10 s>= 8)
    return zx.q(sx.d(*(rax_4 + 0x143658258)))

return zx.q(sx.d(*(rax_4 + 0x143658268)))

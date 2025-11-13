// 函数: sub_142ad3f80
// 地址: 0x142ad3f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
uint64_t rbx = zx.q(arg2)

if (arg3 u> 0xb)
    rbx = zx.q(rbx.d + sub_142acca60(_mm_cvtepi32_pd(zx.q(arg3)), 0xc, &arg_18))

int32_t result = sub_142acca40(((rbx << 3) + 0x15).d, 0x21) + rbx.d * 0x16d + 0x1db932
int64_t rcx_3 = sx.q(arg_18)

if (rcx_3.d == 0)
    return result

return result + sx.d(*(&data_143658240 + (rcx_3 << 1)))

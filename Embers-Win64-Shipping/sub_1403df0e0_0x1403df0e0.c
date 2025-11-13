// 函数: sub_1403df0e0
// 地址: 0x1403df0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s< 0)
    return 0

if (arg1 s>= 0xf7f)
    return 0x7fffffff

int32_t r9_1 = arg1 & 0x7f
int32_t r8 = 1 << (arg1 s>> 7).b
int32_t rcx_2 = sx.d(0x80 - r9_1.w) * sx.d(r9_1.w)

if (arg1 s>= 0x800)
    return zx.q(r8
        + (((zx.d(rcx_2.w) * 0xffffff52) s>> 0x10) - (rcx_2 s>> 0x10) * 0xae + r9_1) * (r8 s>> 7))

return zx.q(r8
    + (((((zx.d(rcx_2.w) * 0xffffff52) s>> 0x10) - (rcx_2 s>> 0x10) * 0xae + r9_1) * r8) s>> 7))

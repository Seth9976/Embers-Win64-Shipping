// 函数: sub_142c330c0
// 地址: 0x142c330c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (zx.w(arg1[2]) * 0x100 == neg.w(zx.w(arg1[3])))
    uint16_t rax
    rax.b = 0
    return rax

int32_t i = 0
void* rax_6 =
    zx.q((zx.d(arg1[1]) + (zx.d(*arg1) << 8)) * (zx.d(arg1[3]) + (zx.d(arg1[2]) << 8) - 1)) + 0xa
    + arg1

do
    if (zx.w(*(rax_6 + 1)) + zx.w(*rax_6) * 0x100 != 0xffff)
        rax_6.b = 0
        return rax_6
    
    i += 1
    rax_6 += 2
while (i u< 1)

rax_6.b = 1
return rax_6

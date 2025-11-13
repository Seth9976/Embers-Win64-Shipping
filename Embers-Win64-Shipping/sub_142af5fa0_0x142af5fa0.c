// 函数: sub_142af5fa0
// 地址: 0x142af5fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_3 = sx.q(arg1)

if (r8_3.d u< 0xd800)
    return zx.q(zx.d(*(&data_14365d690
        + (zx.q((r8_3.d & 0x1f) + (zx.d(*(&data_14365d690 + (r8_3 s>> 5 << 1))) << 2)) << 1))) u>> 8)
        & 3

if (r8_3.d u<= 0xffff)
    int32_t rcx = 0
    
    if (r8_3.d s<= 0xdbff)
        rcx = 0x140
    
    return zx.q(zx.d(*(&data_14365d690 + (
        zx.q((r8_3.d & 0x1f) + (zx.d(*(&data_14365d690 + (sx.q((r8_3.d s>> 5) + rcx) << 1))) << 2))
        << 1))) u>> 8) & 3

if (r8_3.d u> 0x10ffff)
    return 0

if (r8_3.d s>= 0x110000)
    return 0

uint64_t rax_23 = zx.q((r8_3.d & 0x1f) + (zx.d(*(&data_14365d690 + (
    zx.q(zx.d(*(&data_14365d690 + (sx.q((r8_3.d s>> 0xb) + 0x820) << 1))) + (r8_3.d s>> 5 & 0x3f))
    << 1))) << 2))
return zx.q(zx.d(*(&data_14365d690 + (rax_23 << 1))) u>> 8) & 3

// 函数: sub_142a53dd0
// 地址: 0x142a53dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_3 = sx.q(arg1)

if (r8_3.d u< 0xd800)
    return *(&data_14361b8e0
        + (zx.q((r8_3.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (r8_3 s>> 5 << 1))) << 2)) << 1)) & 0x1f

if (r8_3.d u<= 0xffff)
    int32_t rcx = 0
    
    if (r8_3.d s<= 0xdbff)
        rcx = 0x140
    
    return *(&data_14361b8e0 + (
        zx.q((r8_3.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (sx.q((r8_3.d s>> 5) + rcx) << 1))) << 2))
        << 1)) & 0x1f

if (r8_3.d u> 0x10ffff)
    int64_t rax_10
    rax_10.b = 0
    return 0

if (r8_3.d s< 0x110000)
    uint64_t rax_19 = zx.q((r8_3.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (zx.q(
        zx.d(*(&data_14361b8e0 + (sx.q((r8_3.d s>> 0xb) + 0x820) << 1))) + (r8_3.d s>> 5 & 0x3f))
        << 1))) << 2))
    return *(&data_14361b8e0 + (rax_19 << 1)) & 0x1f

int64_t rax_11
rax_11.b = 0
return 0

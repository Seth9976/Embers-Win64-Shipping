// 函数: sub_142a54720
// 地址: 0x142a54720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(arg1)

if (r8_2.d u< 0xd800)
    uint64_t rax_2
    rax_2.b = (*(&data_14361b8e0
        + (zx.q((r8_2.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (r8_2 s>> 5 << 1))) << 2)) << 1)) & 0x1f)
        == 2
    return rax_2

uint64_t rcx_2

if (r8_2.d u> 0xffff)
    if (r8_2.d u> 0x10ffff)
        int64_t rax_7
        rax_7.b = false
        return 0x1100
    
    if (r8_2.d s>= 0x110000)
        int64_t rax_8
        rax_8.b = false
        return 0x5500
    
    rcx_2 = zx.q(*(&data_14361b8e0 + (zx.q(
        zx.d(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 0xb) + 0x820) << 1))) + (r8_2.d s>> 5 & 0x3f))
        << 1)))
else
    int32_t rcx_1 = 0
    
    if (r8_2.d s<= 0xdbff)
        rcx_1 = 0x140
    
    rcx_2 = zx.q(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 5) + rcx_1) << 1)))

uint64_t rax_16
rax_16.b = (*(&data_14361b8e0 + (zx.q((r8_2.d & 0x1f) + (rcx_2 << 2).d) << 1)) & 0x1f) == 2
return rax_16

// 函数: sub_142a54480
// 地址: 0x142a54480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_3 = sx.q(arg1)

if (rdx_3.d u<= 0x9f)
    if (rdx_3.d != 9 && rdx_3.d != 0x20)
        return 0
    
    int64_t rax
    rax.b = 1
    return rax

if (rdx_3.d u< 0xd800)
    uint64_t rax_4
    rax_4.b = (*(&data_14361b8e0
        + (zx.q((rdx_3.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (rdx_3 s>> 5 << 1))) << 2)) << 1)) & 0x1f)
        == 0xc
    return rax_4

if (rdx_3.d u<= 0xffff)
    int32_t rcx_2 = 0
    
    if (rdx_3.d s<= 0xdbff)
        rcx_2 = 0x140
    
    uint64_t rax_9
    rax_9.b = (*(&data_14361b8e0 + (zx.q((rdx_3.d & 0x1f)
        + (zx.d(*(&data_14361b8e0 + (sx.q((rdx_3.d s>> 5) + rcx_2) << 1))) << 2)) << 1)) & 0x1f) == 0xc
    return rax_9

if (rdx_3.d u> 0x10ffff)
    int64_t rax_10
    rax_10.b = false
    return 0x1100

if (rdx_3.d s>= 0x110000)
    int64_t rax_11
    rax_11.b = false
    return 0x5500

uint64_t rax_19 = zx.q((rdx_3.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (
    zx.q(zx.d(*(&data_14361b8e0 + (sx.q((rdx_3.d s>> 0xb) + 0x820) << 1))) + (rdx_3.d s>> 5 & 0x3f))
    << 1))) << 2))
rax_19.b = (*(&data_14361b8e0 + (rax_19 << 1)) & 0x1f) == 0xc
return rax_19

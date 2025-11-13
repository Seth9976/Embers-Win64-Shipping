// 函数: sub_142a54660
// 地址: 0x142a54660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(arg1)
uint64_t rax_2

if (r8_2.d u< 0xd800)
    rax_2 = zx.q((r8_2.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (r8_2 s>> 5 << 1))) << 2))
else if (r8_2.d u<= 0xffff)
    int32_t rcx = 0
    
    if (r8_2.d s<= 0xdbff)
        rcx = 0x140
    
    rax_2 = zx.q((r8_2.d & 0x1f)
        + (zx.q(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 5) + rcx) << 1))) << 2).d)
else if (r8_2.d u> 0x10ffff)
    rax_2 = 0x11f4
else if (r8_2.d s< 0x110000)
    rax_2 = zx.q((r8_2.d & 0x1f) + (zx.q(*(&data_14361b8e0 + (zx.q(
        zx.d(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 0xb) + 0x820) << 1))) + (r8_2.d s>> 5 & 0x3f))
        << 1))) << 2).d)
else
    rax_2 = 0x55cc

int32_t result
result.b = (1 << ((*(&data_14361b8e0 + (rax_2 << 1))).b & 0x1f) & 0x4f001) == 0
return result

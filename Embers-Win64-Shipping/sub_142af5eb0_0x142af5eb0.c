// 函数: sub_142af5eb0
// 地址: 0x142af5eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1)
int32_t r8

if (rdx.d u< 0xd800)
    r8 = (rdx.d & 0x1f) + (zx.q(*(&data_14365d690 + (rdx s>> 5 << 1))) << 2).d
else if (rdx.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (rdx.d s<= 0xdbff)
        rcx_1 = 0x140
    
    r8 = (rdx.d & 0x1f) + (zx.q(*(&data_14365d690 + (sx.q((rdx.d s>> 5) + rcx_1) << 1))) << 2).d
else if (rdx.d u> 0x10ffff)
    r8 = 0xe70
else if (rdx.d s< 0x110000)
    r8 = (rdx.d & 0x1f) + (zx.q(*(&data_14365d690 + (
        zx.q(zx.d(*(&data_14365d690 + (sx.q((rdx.d s>> 0xb) + 0x820) << 1))) + (rdx.d s>> 5 & 0x3f))
        << 1))) << 2).d
else
    r8 = 0x3020

int32_t rcx_5 = sx.d(*(&data_14365d690 + (zx.q(r8) << 1))) s>> 0xd

if (rcx_5 != 0xfffffffc)
    return zx.q(rcx_5 + rdx.d)

for (void* const i = &data_1436636e0; i s< &data_143663780; i += 4)
    uint64_t r8_1 = zx.q(*i)
    int32_t rax_19 = r8_1.d & 0x1fffff
    
    if (rdx.d == rax_19)
        return zx.q(*(&data_1436636e0 + (r8_1 u>> 0x15 << 2))) & 0x1fffff
    
    if (rdx.d s< rax_19)
        break

return zx.q(rdx.d)

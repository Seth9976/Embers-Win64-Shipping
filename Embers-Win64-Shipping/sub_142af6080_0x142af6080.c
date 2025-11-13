// 函数: sub_142af6080
// 地址: 0x142af6080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8

if (arg1 u< 0xd800)
    r8 = (arg1 & 0x1f) + (zx.q(*(&data_14365d690 + (sx.q(arg1) s>> 5 << 1))) << 2).d
else if (arg1 u<= 0xffff)
    int32_t rdx_2 = 0
    
    if (arg1 s<= 0xdbff)
        rdx_2 = 0x140
    
    r8 = (arg1 & 0x1f) + (zx.q(*(&data_14365d690 + (sx.q((arg1 s>> 5) + rdx_2) << 1))) << 2).d
else if (arg1 u> 0x10ffff)
    r8 = 0xe70
else if (arg1 s< 0x110000)
    r8 = (arg1 & 0x1f) + (zx.q(*(&data_14365d690 + (
        zx.q(zx.d(*(&data_14365d690 + (sx.q((arg1 s>> 0xb) + 0x820) << 1))) + (arg1 s>> 5 & 0x3f))
        << 1))) << 2).d
else
    r8 = 0x3020

int16_t rdx_5 = *(&data_14365d690 + (zx.q(r8) << 1))

if ((0x300 & rdx_5) != 0)
    int32_t rax_18 = sx.d(rdx_5) s>> 0xd
    
    if (rax_18 != 0xfffffffc)
        return zx.q(arg1 + rax_18)
    
    void* const rdx_6 = &data_1436636e0
    
    while (true)
        uint64_t r8_1 = zx.q(*rdx_6)
        int32_t rax_21 = r8_1.d & 0x1fffff
        
        if (arg1 == rax_21)
            arg1 = *(&data_1436636e0 + (r8_1 u>> 0x15 << 2)) & 0x1fffff
            break
        
        if (arg1 s< rax_21)
            break
        
        rdx_6 += 4
        
        if (rdx_6 s>= &data_143663780)
            return zx.q(arg1)

return zx.q(arg1)

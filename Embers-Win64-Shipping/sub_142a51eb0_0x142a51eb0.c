// 函数: sub_142a51eb0
// 地址: 0x142a51eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

uint64_t rax_1 = arg1(arg2, zx.q(arg3))

if (rax_1.d s< 0)
label_142a51f94:
    rax_1.b = 0
else
    while (true)
        int32_t rcx_6
        
        if (rax_1.d u< 0xd800)
            rcx_6 =
                (rax_1.d & 0x1f) + (zx.q(*(&data_143614790 + (sx.q(rax_1.d) s>> 5 << 1))) << 2).d
        else if (rax_1.d u<= 0xffff)
            int32_t rdx_2 = 0
            
            if (rax_1.d s<= 0xdbff)
                rdx_2 = 0x140
            
            rcx_6 = (rax_1.d & 0x1f)
                + (zx.q(*(&data_143614790 + (sx.q(rdx_2 + (rax_1.d s>> 5)) << 1))) << 2).d
        else if (rax_1.d u> 0x10ffff)
            rcx_6 = 0xd58
        else if (rax_1.d s< 0xe0800)
            rcx_6 = (rax_1.d & 0x1f) + (zx.q(*(&data_143614790 + (zx.q(
                zx.d(*(&data_143614790 + (sx.q((rax_1.d s>> 0xb) + 0x820) << 1)))
                + (rax_1.d s>> 5 & 0x3f)) << 1))) << 2).d
        else
            rcx_6 = 0x2fd0
        
        int32_t rcx_15 = zx.d(*(&data_143614790 + (zx.q(rcx_6) << 1))) & 7
        
        if ((rcx_15.b & 4) == 0)
            rax_1.b = rcx_15 != 0
            break
        
        rax_1 = arg1(arg2, 0)
        
        if (rax_1.d s< 0)
            goto label_142a51f94

return rax_1

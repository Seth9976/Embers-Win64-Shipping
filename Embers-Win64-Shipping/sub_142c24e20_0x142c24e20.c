// 函数: sub_142c24e20
// 地址: 0x142c24e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 8).b != 0)
    uint32_t r8_5 =
        (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
    
    if (r8_5 u>= 8 && sub_142bf7510(arg2, arg1, r8_5).b != 0)
        uint32_t rax_5 = zx.d(arg1[5])
        
        if (rax_5 == 0)
            return sub_142c14a60(arg2, arg1) __tailcall
        
        if (rax_5 == 1)
            return sub_142c14b20(arg2, arg1) __tailcall
        
        if (rax_5 == 2)
            return sub_142c25050(arg1, arg2) __tailcall
        
        if (rax_5 == 3)
            return sub_142c24fd0(arg1, arg2) __tailcall
        
        uint64_t rax_8
        rax_8.b = 1
        return rax_8

uint32_t rax
rax.b = 0
return rax

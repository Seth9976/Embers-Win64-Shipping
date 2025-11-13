// 函数: sub_142b719c0
// 地址: 0x142b719c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

if (arg2 != 0 && arg3 s> 0)
    uint32_t r8 = zx.d(*arg2)
    
    if (test_bit(r8, 0xf))
        int32_t r8_1 = r8 & 0x7fff
        
        if (arg3 s>= r8_1 + 2)
            arg1[1].d = zx.d(arg2[1])
            uint32_t rax_2
            rax_2.b = 1
            *arg1 = &arg2[2]
            *(arg1 + 0xc) = r8_1
            return rax_2
    else if (arg3 s>= r8 + 1)
        arg1[1].d = r8
        int32_t rax_3
        rax_3.b = 1
        *arg1 = &arg2[1]
        *(arg1 + 0xc) = r8
        return rax_3

arg1[1] = 0
return 0

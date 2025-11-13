// 函数: sub_1419a1d90
// 地址: 0x1419a1d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    uint32_t r11_1 = zx.d(*(arg3 + 0xd))
    void* r10_1 = &arg1[7]
    uint64_t rbx_1 = zx.q(*(arg3 + 0xc))
    int64_t rdi_1 = sx.q(*(arg3 + 8))
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i =
        *(r10_1 + (((((zx.q(r11_1) * 2) | rbx_1) << 8 | rdi_1) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_6 = *arg1
        
        do
            int64_t rcx_1 = sx.q(i) << 5
            
            if (*(rcx_1 + r8_6 + 8) == rdi_1.d && *(rcx_1 + r8_6 + 0xc) == rbx_1.b
                    && *(rcx_1 + r8_6 + 0xd) == r11_1.b)
                *arg2 = i
                return arg2
            
            i = *(rcx_1 + r8_6 + 0x18)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

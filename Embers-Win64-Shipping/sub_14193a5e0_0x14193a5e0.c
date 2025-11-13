// 函数: sub_14193a5e0
// 地址: 0x14193a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140b21160(arg3, 0x78, 0)
    void* r8 = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (r8 != 0)
        r9_1 = r8
    
    void* r9_3
    
    for (int32_t i = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2)); i != 0xffffffff; 
            i = *(r9_3 + 0x80))
        int64_t rcx_1
        rcx_1.b = 1
        r9_3 = sx.q(i) * 0x88 + *arg1
        uint64_t r8_1 = 0
        
        while (rcx_1.b != 0)
            uint64_t rdx_3 = r8_1 * 5
            int64_t rcx_2 = *(r9_3 + (rdx_3 << 2))
            rcx_1 = rcx_2 - *(arg3 + (rdx_3 << 2))
            
            if (rcx_2 == *(arg3 + (rdx_3 << 2)))
                int64_t rcx_3 = *(r9_3 + (rdx_3 << 2) + 8)
                rcx_1 = rcx_3 - *(arg3 + (rdx_3 << 2) + 8)
                
                if (rcx_3 == *(arg3 + (rdx_3 << 2) + 8))
                    rcx_1 =
                        zx.q(*(r9_3 + (rdx_3 << 2) + 0x10)) - zx.q(*(arg3 + (rdx_3 << 2) + 0x10))
            
            rcx_1.b = rcx_1 == 0
            r8_1 = zx.q(r8_1.d + 1)
            
            if (r8_1.d u>= 6)
                if (rcx_1.b == 0)
                    break
                
                *arg2 = i
                return arg2

*arg2 = 0xffffffff
return arg2

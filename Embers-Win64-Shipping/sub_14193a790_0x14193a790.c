// 函数: sub_14193a790
// 地址: 0x14193a790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r10_1 = &arg1[7]
    uint32_t rdi_2 = (arg3 u>> 0x20).d
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i = *(r10_1 + (((sx.q(rdi_2 << 0x12) ^ sx.q(arg3.d)) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t rdx_3 = sx.q(i) * 3
            int64_t rax_7 = *(r9_2 + (rdx_3 << 3))
            
            if (rax_7.d == arg3.d && (rax_7 u>> 0x20).d == rdi_2)
                *arg2 = i
                return arg2
            
            i = *(r9_2 + (rdx_3 << 3) + 0x10)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

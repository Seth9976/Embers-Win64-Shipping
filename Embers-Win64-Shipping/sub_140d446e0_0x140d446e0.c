// 函数: sub_140d446e0
// 地址: 0x140d446e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rax_1 = *arg3
    int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_4 = sx.q(i) * 6
            
            if (*(r8_1 + (rdx_4 << 3)) == *arg3)
                *arg2 = i
                return arg2
            
            i = *(r8_1 + (rdx_4 << 3) + 0x28)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

// 函数: sub_14240da20
// 地址: 0x14240da20
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
            int64_t* rdx_3 = sx.q(i) * 0xf0
            
            if (*(rdx_3 + r8_1) == *arg3)
                *arg2 = i
                return arg2
            
            i = *(rdx_3 + r8_1 + 0xe8)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

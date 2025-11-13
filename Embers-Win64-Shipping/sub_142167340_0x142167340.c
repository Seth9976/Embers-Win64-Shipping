// 函数: sub_142167340
// 地址: 0x142167340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rbx_1 = sx.q(*arg3)
    void* r10_1 = &arg1[7]
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i = *(r10_1 + (((sx.q(arg1[9].d) - 1) & rbx_1) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_3 = *arg1
        
        do
            int64_t rdx_1 = sx.q(i) * 0x60
            
            if (*(rdx_1 + r8_3) == rbx_1.d)
                *arg2 = i
                return arg2
            
            i = *(rdx_1 + r8_3 + 0x58)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

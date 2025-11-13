// 函数: sub_141fb2ed0
// 地址: 0x141fb2ed0
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
            int64_t rdx = sx.q(i) * 3
            
            if (*(r8_3 + (rdx << 3)) == rbx_1.d)
                *arg2 = i
                return arg2
            
            i = *(r8_3 + (rdx << 3) + 0x10)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

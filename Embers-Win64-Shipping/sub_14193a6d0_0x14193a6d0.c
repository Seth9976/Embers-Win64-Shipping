// 函数: sub_14193a6d0
// 地址: 0x14193a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140b21160(arg3, 0xa, 0)
    void* r8 = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t i = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_4 = sx.q(i) << 5
            
            if (*(rdx_4 + r8_1) == *arg3 && *(rdx_4 + r8_1 + 8) == *(arg3 + 8))
                *arg2 = i
                return arg2
            
            i = *(rdx_4 + r8_1 + 0x18)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

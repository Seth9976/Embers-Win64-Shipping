// 函数: sub_140a73990
// 地址: 0x140a73990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r9_1 = &arg1[7]
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t i = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_4 = sx.q(i) * 0x60
            
            if (*(rdx_4 + r8_1) == arg3)
                *arg2 = i
                return arg2
            
            i = *(rdx_4 + r8_1 + 0x58)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

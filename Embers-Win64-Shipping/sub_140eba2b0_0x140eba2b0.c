// 函数: sub_140eba2b0
// 地址: 0x140eba2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rax_1 = *arg3
    int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
    void* r8 = &arg1[7]
    void* rdx = *(r8 + 8)
    int64_t r9_1 = sx.q(arg3[1].d)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i = *(r8 + (((r9_1 ^ sx.q(rax_3)) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t* rdx_1 = sx.q(i) * 0x1c
            
            if (*(rdx_1 + r8_1) == *arg3)
                int32_t rcx_5 = *(rdx_1 + r8_1 + 8)
                
                if (rcx_5 == 0xffffffff || r9_1.d == 0xffffffff || rcx_5 == r9_1.d)
                    *arg2 = i
                    return arg2
            
            i = *(rdx_1 + r8_1 + 0x14)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

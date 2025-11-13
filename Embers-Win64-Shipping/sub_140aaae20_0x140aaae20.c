// 函数: sub_140aaae20
// 地址: 0x140aaae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = arg3[1].d
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int64_t var_18 = *arg3
    int32_t var_10_1 = rax_1
    int64_t rcx_1 = sx.q(sub_140ab2310(&var_18))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t i = *(rdi_1 + ((rcx_1 & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *arg1
        
        do
            int64_t rdx_1 = sx.q(i) << 5
            
            if (*(rdx_1 + r8) == *arg3 && *(rdx_1 + r8 + 8) == arg3[1].d)
                *arg2 = i
                return arg2
            
            i = *(rdx_1 + r8 + 0x18)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2

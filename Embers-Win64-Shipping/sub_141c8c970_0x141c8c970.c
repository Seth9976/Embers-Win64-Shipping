// 函数: sub_141c8c970
// 地址: 0x141c8c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x140))
        *(arg1 + 0x140) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(arg1 + 0x140)
        z_1 = false
    
    if (not(z_1))
        break
    
    void arg_10
    *(arg1 + 0x120) = *sub_140b29d90(&arg_10)
    sub_141c8ab10(arg1)
    int64_t rbx_1 = int.q(sub_141c8aca0(arg1))
    int64_t rcx_5
    
    if (*(arg1 + 0x130) s> 0)
        int64_t* rcx_3 = **(arg1 + 0x128)
        rcx_5 = *(*(*rcx_3 + 0x68))(rcx_3) - *(arg1 + 0x120)
    
    if (*(arg1 + 0x130) s<= 0 || rcx_5 s>= rbx_1)
        rcx_5 = rbx_1
    
    int64_t* r9_1 = *(arg1 + 0x158)
    int64_t rdx_3 = rcx_5 s/ 0x2710
    
    if (rcx_5 s/ 0x2710 s>= 0)
        int32_t rcx_7 = -1
        
        if (rdx_3 s< 0xffffffff)
            rcx_7 = rdx_3.d
        
        (*(*r9_1 + 0x20))(r9_1, zx.q(rcx_7), 0, r9_1, arg2)
    else
        (*(*r9_1 + 0x20))(r9_1, 0, 0)

return 0

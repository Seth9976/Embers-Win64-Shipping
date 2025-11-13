// 函数: sub_1418426d0
// 地址: 0x1418426d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (*arg1 != 0 && *arg3 != 0)
    sub_1418283e0(arg2, arg3, 0)
    
    for (int64_t* i = *arg1; i != 0; i = i[3])
        void* rax_1 = i[2]
        int64_t rdx_2
        
        if (rax_1 == 0)
            rdx_2 = 0
        else
            rdx_2 = *(rax_1 + 8) + *rax_1
        
        sub_141846670(arg2, rdx_2, *i - rdx_2, 0)
    
    void* rax_2 = arg1[1]
    int64_t rdx_4 = *(rax_2 + 8) + *rax_2
    void* rax_3 = arg3[1]
    int64_t r8_3 = *(rax_3 + 8) + *rax_3
    
    if (rdx_4 u< r8_3)
        sub_141846670(arg2, rdx_4, r8_3 - rdx_4, 0)

return arg2

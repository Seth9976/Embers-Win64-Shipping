// 函数: sub_141295500
// 地址: 0x141295500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= arg3)
    *(arg1 + 0xc) = arg3
    return 

if (arg2 != 0)
    char arg_10
    char* var_30_1 = &arg_10
    void*** (* var_38)() = j_sub_140597fc0
    arg_10 = 0
    int32_t rbp_1 = arg2 * 0x70
    void* rax_1 = sub_140a756e0(&var_38, &data_143958018)
    int64_t r12_1 = sx.q(rbp_1)
    int32_t rdx = 8
    int64_t r14_1 = 8
    
    if (rbp_1 s>= 0x10)
        r14_1 = 0x10
    
    int64_t r15_2 = not.q(r14_1 - 1)
    int64_t rcx_3 = (r14_1 - 1 + *(rax_1 + 0x10)) & r15_2
    int64_t rax = r12_1 + rcx_3
    
    if (rax u> *(rax_1 + 0x18))
        if (rbp_1 s>= 0x10)
            rdx = 0x10
        
        sub_140b0e3d0(rax_1 + 0x10, rdx + rbp_1)
        rcx_3 = (r14_1 - 1 + *(rax_1 + 0x10)) & r15_2
        rax = r12_1 + rcx_3
    
    *(rax_1 + 0x10) = rax
    *arg1 = rcx_3

*(arg1 + 0xc) = arg2

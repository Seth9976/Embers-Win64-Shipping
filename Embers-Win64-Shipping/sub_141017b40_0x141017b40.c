// 函数: sub_141017b40
// 地址: 0x141017b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = *(arg1 + 0x3b79)
void var_78
sub_14103f450(&var_78, *(arg1 + 0x260))
uint64_t rdx_1 = zx.q(*(arg1 + 0x9d00))

if (rdx_1.d != 0)
    if (rdi == 0)
        int32_t rax_1 = *(arg1 + 0x9d04)
        int32_t rcx_1 = rdx_1.d
        rdx_1 = zx.q(rax_1)
        
        if (rcx_1 u>= rax_1)
            rdx_1 = zx.q(rcx_1)
    
    int64_t* rcx_2 = *(arg1 + 0x9d10)
    *(arg1 + 0x9d04) = rdx_1.d
    arg2 = memcpy(sub_141013310(rcx_2, rdx_1.d, &var_78, arg2), arg1 + 0x8d00, *(arg1 + 0x9d04))
    *(arg1 + 0x9d08) = 0
    int64_t var_30
    *(arg1 + 0x2540) = var_30
    void* var_68
    rdx_1 = *(var_68 + 0x28)
    void* rcx_4 = rdx_1 + 0x28
    
    if (rdx_1 == 0)
        rcx_4 = var_68 + 0x30
    
    *(arg1 + 0x2840) = rcx_4
    *(arg1 + 0x22ba) |= 1

return j_sub_141059a80(&var_78, arg2, rdx_1)

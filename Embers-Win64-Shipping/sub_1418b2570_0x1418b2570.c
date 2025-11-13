// 函数: sub_1418b2570
// 地址: 0x1418b2570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x30))
int64_t rdx_3
int64_t rax

if (rcx.d s< 0)
label_1418b25b6:
    int64_t rdx_4 = sx.q(*(arg1 + 0x30))
    
    if (rdx_4.d s< 0)
        return 
    
    int32_t r8_2 = *(arg1 + 0x28)
    
    if (rdx_4.d s>= r8_2)
        return 
    
    int64_t* rcx_4 = *(*(arg1 + 0x20) + rdx_4 * 0x10)
    
    if (rcx_4 == 0)
        return 
    
    if (rdx_4.d s< 0 || rdx_4.d s>= r8_2)
        rcx_4 = nullptr
    
    rax, rdx_3 = (*(*rcx_4 + 0x50))(rcx_4)
    
    if (rax.b != 0)
        return 
else
    int32_t r9_1 = *(arg1 + 0x28)
    
    if (rcx.d s>= r9_1)
        goto label_1418b25b6
    
    int64_t* r8_1 = *(*(arg1 + 0x20) + rcx * 0x10)
    
    if (r8_1 == 0)
        goto label_1418b25b6
    
    if (rcx.d s< 0 || rcx.d s>= r9_1)
        r8_1 = nullptr
    
    rax, rdx_3 = (*(*r8_1 + 0x50))(r8_1)
    
    if (rax.b != 1)
        goto label_1418b25b6
sub_1418b37f0(arg1, rdx_3, arg2)
return sub_1418b2610(arg1) __tailcall

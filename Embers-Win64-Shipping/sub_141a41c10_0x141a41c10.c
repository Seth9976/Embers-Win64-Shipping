// 函数: sub_141a41c10
// 地址: 0x141a41c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0xa8) != 1 || *(arg1 + 0x20) != 1)
    void* rcx_5 = sx.q(*(*(arg1 + 0x18) + (sx.q(arg2) << 2))) * 0x58 + *(arg1 + 0x28)
    void* i_1 = *(rcx_5 + 0x48)
    void* i = rcx_5 + 0x18
    
    if (i_1 != 0)
        i = i_1
    
    result = sx.q(*(rcx_5 + 0x50))
    
    for (void* r14_1 = i + result * 0xc; i != r14_1; i += 0xc)
        int64_t rdx_1 = sx.q(*i)
        void** rcx_8 = rdx_1 * 0x88 + *(arg1 + 0xa0)
        
        if ((rcx_8[0x10].b & 2) == 0)
            rcx_8 = *rcx_8
        
        if ((rcx_8[1].b & 4) != 0)
            *(arg5 + 0x24) = *(arg5 + 0x18)
            *(arg5 + 0x2c) = rdx_1.d
            char rdx_2 = *(arg4 + 0x54)
            *(arg4 + 0x24) = *(i + 4)
            rdx_2 &= 0xfb
            char rax_5 = *(i + 8)
            uint8_t r8_1 = rax_5
            rax_5 &= 1
            r8_1 = r8_1 u>> 1 & 1
            
            if (*(arg4 + 0x20) != 0)
                rax_5 = ((r8_1 << 2 | rdx_2) & 0xf7) | rax_5 << 3
            else
                rax_5 = ((rax_5 << 2 | rdx_2) & 0xf7) | r8_1 << 3
            
            *(arg4 + 0x54) = rax_5
            result = (*(*rcx_8 + 0x28))(rcx_8, arg3, arg4, arg5, arg6)
else
    void* rcx = arg1 + 0xa0
    int32_t rax = *(arg5 + 0x20)
    *(arg5 + 0x24) = *(arg5 + 0x18)
    *(arg5 + 0x2c) = 0
    int32_t var_20_1 = rax
    void* rax_1 = *rcx
    
    if ((*(rax_1 + 0x80) & 2) == 0)
        rcx = rax_1
    
    int64_t var_38_1 = arg6
    int64_t* rcx_1 = *rcx
    result = (*(*rcx_1 + 0x28))(rcx_1, arg3, arg4)

int64_t rcx_9 = *(arg4 + 0x38)

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
